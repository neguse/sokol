#-------------------------------------------------------------------------------
#   gen_lua.py
#
#   Generate Lua 5.5 C API bindings.
#-------------------------------------------------------------------------------
import gen_ir
import gen_util as util
import os, shutil, sys

bindings_root = 'sokol-lua'
c_root = f'{bindings_root}/c'
module_root = f'{bindings_root}/src'

module_names = {
    'slog_':    'log',
    'sg_':      'gfx',
    'sapp_':    'app',
    'stm_':     'time',
    'saudio_':  'audio',
    'sgl_':     'gl',
    'sdtx_':    'debugtext',
    'sshape_':  'shape',
    'sglue_':   'glue',
}

c_source_names = {
    'slog_':    'sokol_log.c',
    'sg_':      'sokol_gfx.c',
    'sapp_':    'sokol_app.c',
    'stm_':     'sokol_time.c',
    'saudio_':  'sokol_audio.c',
    'sgl_':     'sokol_gl.c',
    'sdtx_':    'sokol_debugtext.c',
    'sshape_':  'sokol_shape.c',
    'sglue_':   'sokol_glue.c',
}

# Map prefix to header name for creating stub .c files
header_names = {
    'slog_':    'sokol_log.h',
    'sg_':      'sokol_gfx.h',
    'sapp_':    'sokol_app.h',
    'stm_':     'sokol_time.h',
    'saudio_':  'sokol_audio.h',
    'sgl_':     'sokol_gl.h',
    'sdtx_':    'sokol_debugtext.h',
    'sshape_':  'sokol_shape.h',
    'sglue_':   'sokol_glue.h',
}

ignores = [
    'sdtx_printf',
    'sdtx_vprintf',
    'sg_install_trace_hooks',
    'sg_trace_hooks',
]

# Functions that use callbacks - need special handling
callback_funcs = [
    'sapp_run',
    'saudio_setup',
]

struct_types = []
enum_types = []
out_lines = ''

def reset_globals():
    global struct_types
    global enum_types
    global out_lines
    struct_types = []
    enum_types = []
    out_lines = ''

def l(s):
    global out_lines
    out_lines += s + '\n'

def check_ignore(name):
    return name in ignores

def is_callback_func(name):
    return name in callback_funcs

# prefix_bla_blub to bla_blub
def as_snake_case(s, prefix):
    outp = s.lower()
    if outp.startswith(prefix):
        outp = outp[len(prefix):]
    return outp

# prefix_bla_blub to BlaBlub
def as_pascal_case(s, prefix):
    parts = s.lower().split('_')
    outp = ''
    start = 1 if parts[0] + '_' == prefix else 0
    for part in parts[start:]:
        if part != 't':
            outp += part.capitalize()
    return outp

def is_prim_type(s):
    return s in ['int', 'bool', 'char', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t',
                 'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 'float', 'double',
                 'uintptr_t', 'intptr_t', 'size_t']

def is_int_type(s):
    return s in ['int', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t',
                 'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 'size_t',
                 'uintptr_t', 'intptr_t']

def is_float_type(s):
    return s in ['float', 'double']

def is_struct_type(s):
    return s in struct_types

def is_enum_type(s):
    return s in enum_types

def is_const_struct_ptr(s):
    for struct_type in struct_types:
        if s == f"const {struct_type} *":
            return True
    return False

def is_struct_ptr(s):
    for struct_type in struct_types:
        if s == f"{struct_type} *":
            return True
    return False

def get_lua_push_code(type_str, var_name, prefix):
    """Generate code to push a C value onto the Lua stack"""
    if type_str == 'void':
        return None
    elif type_str == 'bool':
        return f'lua_pushboolean(L, {var_name});'
    elif is_int_type(type_str):
        return f'lua_pushinteger(L, (lua_Integer){var_name});'
    elif is_float_type(type_str):
        return f'lua_pushnumber(L, (lua_Number){var_name});'
    elif util.is_string_ptr(type_str):
        return f'lua_pushstring(L, {var_name});'
    elif is_struct_type(type_str):
        struct_name = as_pascal_case(type_str, prefix)
        return f'{type_str}* ud = ({type_str}*)lua_newuserdatauv(L, sizeof({type_str}), 0);\n    *ud = {var_name};\n    luaL_setmetatable(L, "sokol.{struct_name}");'
    elif is_enum_type(type_str):
        return f'lua_pushinteger(L, (lua_Integer){var_name});'
    elif util.is_void_ptr(type_str) or util.is_const_void_ptr(type_str):
        return f'lua_pushlightuserdata(L, (void*){var_name});'
    else:
        return f'/* TODO: push {type_str} */ lua_pushnil(L);'

def get_lua_to_code(type_str, arg_index, var_name, prefix):
    """Generate code to get a C value from the Lua stack"""
    if type_str == 'bool':
        return f'bool {var_name} = lua_toboolean(L, {arg_index});'
    elif is_int_type(type_str):
        return f'{type_str} {var_name} = ({type_str})luaL_checkinteger(L, {arg_index});'
    elif is_float_type(type_str):
        return f'{type_str} {var_name} = ({type_str})luaL_checknumber(L, {arg_index});'
    elif util.is_string_ptr(type_str):
        return f'const char* {var_name} = luaL_checkstring(L, {arg_index});'
    elif is_struct_type(type_str):
        struct_name = as_pascal_case(type_str, prefix)
        return f'{type_str}* {var_name}_ptr = ({type_str}*)luaL_checkudata(L, {arg_index}, "sokol.{struct_name}");\n    {type_str} {var_name} = *{var_name}_ptr;'
    elif is_const_struct_ptr(type_str):
        inner_type = util.extract_ptr_type(type_str)
        struct_name = as_pascal_case(inner_type, prefix)
        return f'const {inner_type}* {var_name} = (const {inner_type}*)luaL_checkudata(L, {arg_index}, "sokol.{struct_name}");'
    elif is_struct_ptr(type_str):
        inner_type = util.extract_ptr_type(type_str)
        struct_name = as_pascal_case(inner_type, prefix)
        return f'{inner_type}* {var_name} = ({inner_type}*)luaL_checkudata(L, {arg_index}, "sokol.{struct_name}");'
    elif is_enum_type(type_str):
        return f'{type_str} {var_name} = ({type_str})luaL_checkinteger(L, {arg_index});'
    elif util.is_void_ptr(type_str):
        return f'void* {var_name} = lua_touserdata(L, {arg_index});'
    elif util.is_const_void_ptr(type_str):
        return f'const void* {var_name} = lua_touserdata(L, {arg_index});'
    else:
        return f'/* TODO: get {type_str} */ void* {var_name} = NULL;'

def get_result_type(decl):
    """Extract result type from function declaration"""
    decl_type = decl['type']
    return decl_type[:decl_type.index('(')].strip()

def gen_func_wrapper(decl, prefix):
    """Generate a Lua C API wrapper function"""
    func_name = decl['name']
    lua_name = as_snake_case(func_name, prefix)
    result_type = get_result_type(decl)

    l(f'static int l_{func_name}(lua_State *L) {{')

    # Get parameters from Lua stack
    arg_names = []
    for i, param in enumerate(decl['params']):
        param_name = param['name']
        param_type = param['type']
        to_code = get_lua_to_code(param_type, i + 1, param_name, prefix)
        l(f'    {to_code}')
        arg_names.append(param_name)

    # Call the C function
    args_str = ', '.join(arg_names)
    if result_type == 'void':
        l(f'    {func_name}({args_str});')
        l('    return 0;')
    else:
        l(f'    {result_type} result = {func_name}({args_str});')
        push_code = get_lua_push_code(result_type, 'result', prefix)
        if push_code:
            l(f'    {push_code}')
            l('    return 1;')
        else:
            l('    return 0;')

    l('}')
    l('')

def gen_struct_new(struct_name, c_struct_name, prefix):
    """Generate a constructor function for a struct"""
    l(f'static int l_{c_struct_name}_new(lua_State *L) {{')
    l(f'    {c_struct_name}* ud = ({c_struct_name}*)lua_newuserdatauv(L, sizeof({c_struct_name}), 0);')
    l(f'    memset(ud, 0, sizeof({c_struct_name}));')
    l(f'    luaL_setmetatable(L, "sokol.{struct_name}");')
    l('    return 1;')
    l('}')
    l('')

def gen_struct_field_getter(struct_name, c_struct_name, field, prefix):
    """Generate a getter for a struct field"""
    field_name = field['name']
    field_type = field['type']

    l(f'static int l_{c_struct_name}_get_{field_name}(lua_State *L) {{')
    l(f'    {c_struct_name}* self = ({c_struct_name}*)luaL_checkudata(L, 1, "sokol.{struct_name}");')

    if util.is_array_type(field_type):
        # Arrays need special handling - return as table or userdata
        l(f'    /* TODO: array field {field_name} */')
        l('    lua_pushnil(L);')
    else:
        push_code = get_lua_push_code(field_type, f'self->{field_name}', prefix)
        if push_code:
            l(f'    {push_code}')
        else:
            l('    lua_pushnil(L);')

    l('    return 1;')
    l('}')
    l('')

def gen_struct_field_setter(struct_name, c_struct_name, field, prefix):
    """Generate a setter for a struct field"""
    field_name = field['name']
    field_type = field['type']

    l(f'static int l_{c_struct_name}_set_{field_name}(lua_State *L) {{')
    l(f'    {c_struct_name}* self = ({c_struct_name}*)luaL_checkudata(L, 1, "sokol.{struct_name}");')

    if util.is_array_type(field_type):
        l(f'    /* TODO: array field {field_name} */')
    elif util.is_func_ptr(field_type):
        l(f'    /* TODO: function pointer field {field_name} */')
    else:
        if field_type == 'bool':
            l(f'    self->{field_name} = lua_toboolean(L, 2);')
        elif is_int_type(field_type):
            l(f'    self->{field_name} = ({field_type})luaL_checkinteger(L, 2);')
        elif is_float_type(field_type):
            l(f'    self->{field_name} = ({field_type})luaL_checknumber(L, 2);')
        elif util.is_string_ptr(field_type):
            l(f'    self->{field_name} = luaL_checkstring(L, 2);')
        elif is_struct_type(field_type):
            inner_struct_name = as_pascal_case(field_type, prefix)
            l(f'    {field_type}* val = ({field_type}*)luaL_checkudata(L, 2, "sokol.{inner_struct_name}");')
            l(f'    self->{field_name} = *val;')
        elif is_enum_type(field_type):
            l(f'    self->{field_name} = ({field_type})luaL_checkinteger(L, 2);')
        elif util.is_void_ptr(field_type) or util.is_const_void_ptr(field_type):
            l(f'    self->{field_name} = lua_touserdata(L, 2);')
        else:
            l(f'    /* TODO: set {field_type} */')

    l('    return 0;')
    l('}')
    l('')

def gen_struct_index(struct_name, c_struct_name, fields, prefix):
    """Generate __index metamethod for struct"""
    l(f'static int l_{c_struct_name}__index(lua_State *L) {{')
    l(f'    const char* key = luaL_checkstring(L, 2);')

    for field in fields:
        field_name = field['name']
        if util.is_func_ptr(field['type']):
            continue
        l(f'    if (strcmp(key, "{field_name}") == 0) return l_{c_struct_name}_get_{field_name}(L);')

    l('    return 0;')
    l('}')
    l('')

def gen_struct_newindex(struct_name, c_struct_name, fields, prefix):
    """Generate __newindex metamethod for struct"""
    l(f'static int l_{c_struct_name}__newindex(lua_State *L) {{')
    l(f'    const char* key = luaL_checkstring(L, 2);')

    for field in fields:
        field_name = field['name']
        if util.is_func_ptr(field['type']):
            continue
        l(f'    if (strcmp(key, "{field_name}") == 0) return l_{c_struct_name}_set_{field_name}(L);')

    l(f'    return luaL_error(L, "unknown field: %s", key);')
    l('}')
    l('')

def gen_struct_bindings(decl, prefix):
    """Generate all bindings for a struct"""
    c_struct_name = decl['name']
    struct_name = as_pascal_case(c_struct_name, prefix)
    fields = [f for f in decl['fields'] if 'name' in f]

    # Generate constructor
    gen_struct_new(struct_name, c_struct_name, prefix)

    # Generate field accessors
    for field in fields:
        if not util.is_func_ptr(field['type']):
            gen_struct_field_getter(struct_name, c_struct_name, field, prefix)
            gen_struct_field_setter(struct_name, c_struct_name, field, prefix)

    # Generate metamethods
    gen_struct_index(struct_name, c_struct_name, fields, prefix)
    gen_struct_newindex(struct_name, c_struct_name, fields, prefix)

def gen_enum_constants(decl, prefix):
    """Generate enum constants registration"""
    enum_name = decl['name']
    lua_enum_name = as_pascal_case(enum_name, prefix)

    l(f'static void register_{enum_name}(lua_State *L) {{')
    l(f'    lua_newtable(L);')

    for item in decl['items']:
        item_name = item['name']
        lua_item_name = as_snake_case(item_name, prefix)
        # Remove enum prefix from item name
        parts = lua_item_name.split('_')
        if len(parts) > 1:
            short_name = '_'.join(parts[1:]) if parts[0] == as_snake_case(enum_name, prefix).split('_')[0] else lua_item_name
        else:
            short_name = lua_item_name
        if 'value' in item:
            l(f'    lua_pushinteger(L, {item["value"]});')
        else:
            l(f'    lua_pushinteger(L, {item_name});')
        l(f'    lua_setfield(L, -2, "{short_name.upper()}");')

    l(f'    lua_setfield(L, -2, "{lua_enum_name}");')
    l('}')
    l('')

def gen_consts(decl, prefix):
    """Generate anonymous enum constants"""
    l(f'static void register_consts(lua_State *L) {{')
    for item in decl['items']:
        item_name = item['name']
        lua_name = as_snake_case(item_name, prefix).upper()
        l(f'    lua_pushinteger(L, {item["value"]});')
        l(f'    lua_setfield(L, -2, "{lua_name}");')
    l('}')
    l('')

def gen_metatable_registration(structs, prefix):
    """Generate code to register all metatables"""
    l('static void register_metatables(lua_State *L) {')

    for struct_decl in structs:
        c_struct_name = struct_decl['name']
        struct_name = as_pascal_case(c_struct_name, prefix)

        l(f'    luaL_newmetatable(L, "sokol.{struct_name}");')
        l(f'    lua_pushcfunction(L, l_{c_struct_name}__index);')
        l(f'    lua_setfield(L, -2, "__index");')
        l(f'    lua_pushcfunction(L, l_{c_struct_name}__newindex);')
        l(f'    lua_setfield(L, -2, "__newindex");')
        l(f'    lua_pop(L, 1);')
        l('')

    l('}')
    l('')

def gen_luaopen(module_name, prefix, funcs, structs, enums, consts):
    """Generate the luaopen function"""
    l(f'static const luaL_Reg {module_name}_funcs[] = {{')

    # Add function wrappers
    for func_decl in funcs:
        func_name = func_decl['name']
        lua_name = as_snake_case(func_name, prefix)
        l(f'    {{"{lua_name}", l_{func_name}}},')

    # Add struct constructors
    for struct_decl in structs:
        c_struct_name = struct_decl['name']
        lua_name = as_pascal_case(c_struct_name, prefix)
        l(f'    {{"{lua_name}", l_{c_struct_name}_new}},')

    l('    {NULL, NULL}')
    l('};')
    l('')

    l(f'SOKOL_LUA_API int luaopen_sokol_{module_name}(lua_State *L) {{')
    l('    register_metatables(L);')
    l(f'    luaL_newlib(L, {module_name}_funcs);')

    # Register enums
    for enum_decl in enums:
        enum_name = enum_decl['name']
        l(f'    register_{enum_name}(L);')

    # Register anonymous consts
    for const_decl in consts:
        l('    register_consts(L);')

    l('    return 1;')
    l('}')

def pre_parse(inp):
    global struct_types
    global enum_types
    for decl in inp['decls']:
        kind = decl['kind']
        if kind == 'struct':
            struct_types.append(decl['name'])
        elif kind == 'enum':
            enum_types.append(decl['name'])

def gen_module(inp, c_prefix, dep_prefixes):
    pre_parse(inp)
    module_name = module_names[c_prefix]
    prefix = inp['prefix']

    # Header
    l('/* machine generated, do not edit */')
    l('#include <lua.h>')
    l('#include <lauxlib.h>')
    l('#include <lualib.h>')
    l('#include <string.h>')
    l('')

    # Include sokol headers
    for dep_prefix in dep_prefixes:
        dep_module = module_names.get(dep_prefix)
        if dep_module:
            l(f'#include "sokol_{dep_module}.h"')

    # Determine header name
    if c_prefix in ['sgl_', 'sdtx_', 'sshape_']:
        header_subdir = 'util/'
    else:
        header_subdir = ''
    header_name = {
        'slog_': 'sokol_log.h',
        'sg_': 'sokol_gfx.h',
        'sapp_': 'sokol_app.h',
        'stm_': 'sokol_time.h',
        'saudio_': 'sokol_audio.h',
        'sgl_': 'sokol_gl.h',
        'sdtx_': 'sokol_debugtext.h',
        'sshape_': 'sokol_shape.h',
        'sglue_': 'sokol_glue.h',
    }.get(c_prefix, f'sokol_{module_name}.h')

    l(f'#include "{header_name}"')
    l('')

    l('#ifndef SOKOL_LUA_API')
    l('  #ifdef _WIN32')
    l('    #ifdef SOKOL_LUA_EXPORTS')
    l('      #define SOKOL_LUA_API __declspec(dllexport)')
    l('    #else')
    l('      #define SOKOL_LUA_API __declspec(dllimport)')
    l('    #endif')
    l('  #else')
    l('    #define SOKOL_LUA_API')
    l('  #endif')
    l('#endif')
    l('')

    # Collect declarations by type
    funcs = []
    structs = []
    enums = []
    consts = []

    for decl in inp['decls']:
        if decl['is_dep']:
            continue
        kind = decl['kind']
        if kind == 'func' and not check_ignore(decl['name']) and not is_callback_func(decl['name']):
            funcs.append(decl)
        elif kind == 'struct':
            structs.append(decl)
        elif kind == 'enum':
            enums.append(decl)
        elif kind == 'consts':
            consts.append(decl)

    # Generate struct bindings
    for struct_decl in structs:
        gen_struct_bindings(struct_decl, prefix)

    # Generate function wrappers
    for func_decl in funcs:
        gen_func_wrapper(func_decl, prefix)

    # Generate enum registration functions
    for enum_decl in enums:
        gen_enum_constants(enum_decl, prefix)

    # Generate const registration
    for const_decl in consts:
        gen_consts(const_decl, prefix)

    # Generate metatable registration
    gen_metatable_registration(structs, prefix)

    # Generate luaopen function
    gen_luaopen(module_name, prefix, funcs, structs, enums, consts)

def get_csource_path(c_prefix):
    return f'{c_root}/{c_source_names[c_prefix]}'

def create_stub_c_file(c_prefix, dep_prefixes):
    """Create a stub .c file that includes the header for clang parsing"""
    if c_prefix not in header_names:
        return
    header = header_names[c_prefix]
    c_file = c_source_names[c_prefix]
    stub_content = ''
    # Include dependency headers first
    for dep_prefix in dep_prefixes:
        if dep_prefix in header_names:
            stub_content += f'#include "{header_names[dep_prefix]}"\n'
    stub_content += f'#include "{header}"\n'
    with open(f'{c_root}/{c_file}', 'w', newline='\n') as f:
        f.write(stub_content)

def prepare():
    print('=== Generating Lua bindings:')
    if not os.path.isdir(module_root):
        os.makedirs(module_root)
    if not os.path.isdir(c_root):
        os.makedirs(c_root)

def gen(c_header_path, c_prefix, dep_c_prefixes):
    if c_prefix not in module_names:
        print(f'  >> warning: skipping generation for {c_prefix} prefix...')
        return
    reset_globals()
    print(f'  {c_header_path} => {module_names[c_prefix]}')
    # Copy header file
    shutil.copyfile(c_header_path, f'{c_root}/{os.path.basename(c_header_path)}')
    # Copy dependency headers
    for dep_prefix in dep_c_prefixes:
        if dep_prefix in header_names:
            dep_header = header_names[dep_prefix]
            dep_header_path = c_header_path.replace(os.path.basename(c_header_path), dep_header)
            if os.path.exists(dep_header_path):
                shutil.copyfile(dep_header_path, f'{c_root}/{dep_header}')
    # Create stub .c file for clang parsing
    create_stub_c_file(c_prefix, dep_c_prefixes)
    csource_path = get_csource_path(c_prefix)
    module_name = module_names[c_prefix]
    ir = gen_ir.gen(c_header_path, csource_path, module_name, c_prefix, dep_c_prefixes)
    gen_module(ir, c_prefix, dep_c_prefixes)
    with open(f"{module_root}/sokol_{module_name}.c", 'w', newline='\n') as f_outp:
        f_outp.write(out_lines)
