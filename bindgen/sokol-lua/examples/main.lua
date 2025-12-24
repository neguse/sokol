-- Sokol Lua example with shader compilation from Lua
local gfx = require("sokol.gfx")
local app = require("sokol.app")
local glue = require("sokol.glue")
local slog = require("sokol.log")

-- Log using sokol_log (OutputDebugString on Windows)
local function log(msg)
    slog.func("lua", 1, 0, msg, 0, "", nil)
end

local t = 0
local shader = nil
local pipeline = nil
local vbuf = nil

-- Shader source (inline GLSL)
local shader_source = [[
@vs vs
in vec2 pos;
in vec4 color0;
out vec4 color;

void main() {
    gl_Position = vec4(pos, 0.5, 1.0);
    color = color0;
}
@end

@fs fs
in vec4 color;
out vec4 frag_color;

void main() {
    frag_color = color;
}
@end

@program triangle vs fs
]]

-- Get shader language for current backend
local function get_shader_lang()
    local backend = gfx.query_backend()
    if backend == gfx.Backend.D3D11 then
        return "hlsl5"
    elseif backend == gfx.Backend.METAL_MACOS or backend == gfx.Backend.METAL_IOS or backend == gfx.Backend.METAL_SIMULATOR then
        return "metal_macos"
    elseif backend == gfx.Backend.WGPU then
        return "wgsl"
    elseif backend == gfx.Backend.GLCORE then
        return "glsl430"
    elseif backend == gfx.Backend.GLES3 then
        return "glsl300es"
    else
        return "glsl430"
    end
end

-- Find Windows SDK path for fxc.exe
local function find_fxc_path()
    local sdk_base = "C:\\Program Files (x86)\\Windows Kits\\10\\bin"
    local handle = io.popen('dir "' .. sdk_base .. '" /b /ad 2>nul')
    if not handle then return nil end

    local latest = nil
    for line in handle:lines() do
        if line:match("^10%.") then latest = line end
    end
    handle:close()

    if latest then
        local path = sdk_base .. "\\" .. latest .. "\\x64"
        local f = io.open(path .. "\\fxc.exe", "rb")
        if f then
            f:close()
            return path
        end
    end
    return nil
end

-- Compile shader using sokol-shdc
local function compile_shader(source, program_name)
    local tmp_dir = os.getenv("TEMP") or os.getenv("TMP") or "/tmp"
    local tmp_glsl = tmp_dir .. "/shader_" .. os.time() .. ".glsl"
    local tmp_out = tmp_dir .. "/shader_" .. os.time()

    -- Write shader source
    local f = io.open(tmp_glsl, "w")
    f:write(source)
    f:close()

    local lang = get_shader_lang()
    local fxc_path = (lang == "hlsl5" or lang == "hlsl4") and find_fxc_path() or nil

    -- Run sokol-shdc
    local ok
    if fxc_path then
        -- Windows with fxc: use batch file to set PATH
        local bat_file = tmp_dir .. "\\run_shdc.bat"
        local bat = io.open(bat_file, "w")
        bat:write('set PATH=%PATH%;' .. fxc_path .. '\r\n')
        bat:write('sokol-shdc -i "' .. tmp_glsl:gsub("/", "\\") .. '" -o "' .. tmp_out:gsub("/", "\\") .. '" -l ' .. lang .. ' -f bare -b\r\n')
        bat:close()
        ok = os.execute('cmd /c "' .. bat_file .. '"')
        os.remove(bat_file)
    else
        ok = os.execute(string.format('sokol-shdc -i "%s" -o "%s" -l %s -f bare -b', tmp_glsl, tmp_out, lang))
    end

    os.remove(tmp_glsl)

    if not ok then
        log("Failed to run sokol-shdc")
        return nil
    end

    -- Determine output file extensions
    local vs_file, fs_file
    if lang == "hlsl5" or lang == "hlsl4" then
        vs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_vertex.fxc"
        fs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_fragment.fxc"
    elseif lang:find("glsl") then
        vs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_vertex.glsl"
        fs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_fragment.glsl"
    elseif lang:find("metal") then
        vs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_vertex.metallib"
        fs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_fragment.metallib"
    elseif lang == "wgsl" then
        vs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_vertex.wgsl"
        fs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_fragment.wgsl"
    else
        vs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_vertex.bin"
        fs_file = tmp_out .. "_" .. program_name .. "_" .. lang .. "_fragment.bin"
    end

    -- Read shader files
    local vs_f = io.open(vs_file, "rb")
    if not vs_f then
        log("Failed to open VS file: " .. vs_file)
        return nil
    end
    local vs_data = vs_f:read("*a")
    vs_f:close()

    local fs_f = io.open(fs_file, "rb")
    if not fs_f then
        log("Failed to open FS file: " .. fs_file)
        return nil
    end
    local fs_data = fs_f:read("*a")
    fs_f:close()

    os.remove(vs_file)
    os.remove(fs_file)

    -- Create shader using generated bindings
    local backend = gfx.query_backend()
    local is_glsl = (backend == gfx.Backend.GLCORE or backend == gfx.Backend.GLES3)

    local desc_table = {
        vertex_func = is_glsl and { source = vs_data } or { bytecode = vs_data },
        fragment_func = is_glsl and { source = fs_data } or { bytecode = fs_data },
    }

    -- D3D11 needs attribute semantics
    if backend == gfx.Backend.D3D11 then
        desc_table.attrs = {
            { hlsl_sem_name = "TEXCOORD", hlsl_sem_index = 0 },
            { hlsl_sem_name = "TEXCOORD", hlsl_sem_index = 1 },
        }
    end

    local shd = gfx.make_shader(gfx.ShaderDesc(desc_table))
    if gfx.query_shader_state(shd) ~= gfx.ResourceState.VALID then
        log("Failed to create shader")
        return nil
    end

    return shd
end

function init()
    -- Compile shader
    shader = compile_shader(shader_source, "triangle")
    if not shader then
        log("Shader compilation failed!")
        return
    end

    -- Create pipeline
    pipeline = gfx.make_pipeline(gfx.PipelineDesc({
        shader = shader,
        layout = {
            attrs = {
                { format = gfx.VertexFormat.FLOAT2 },
                { format = gfx.VertexFormat.FLOAT4 },
            }
        },
        primitive_type = gfx.PrimitiveType.TRIANGLES,
    }))

    if gfx.query_pipeline_state(pipeline) ~= gfx.ResourceState.VALID then
        log("Pipeline creation failed!")
        return
    end

    -- Create vertex buffer using generated bindings directly
    -- For stream buffers: create empty, then update each frame
    -- 6 floats per vertex * 3 vertices * 4 bytes = 72 bytes
    vbuf = gfx.make_buffer(gfx.BufferDesc({
        size = 18 * 4,  -- 18 floats
        usage = { vertex_buffer = true, stream_update = true }
    }))
end

-- Helper to pack vertex data
local function pack_vertices(verts)
    return string.pack(string.rep("f", #verts), table.unpack(verts))
end

function frame()
    t = t + 1.0 / 60.0
    if not pipeline then return end

    -- Animate vertices - build table then pack
    local vertices = {}
    for i = 0, 2 do
        local angle = t + i * (math.pi * 2 / 3)
        local x = math.cos(angle) * 0.5
        local y = math.sin(angle) * 0.5
        table.insert(vertices, x)
        table.insert(vertices, y)
        local r = math.sin(t + i * 2.0) * 0.5 + 0.5
        local g = math.sin(t + i * 2.0 + 2.0) * 0.5 + 0.5
        local b = math.sin(t + i * 2.0 + 4.0) * 0.5 + 0.5
        table.insert(vertices, r)
        table.insert(vertices, g)
        table.insert(vertices, b)
        table.insert(vertices, 1.0)
    end
    -- Use generated binding: update_buffer accepts sg_range (packed string)
    gfx.update_buffer(vbuf, gfx.Range(pack_vertices(vertices)))

    -- Render
    gfx.begin_pass(gfx.Pass({
        action = gfx.PassAction({
            colors = {{
                load_action = gfx.LoadAction.CLEAR,
                clear_value = { r = 0.1, g = 0.1, b = 0.2, a = 1.0 }
            }}
        }),
        swapchain = glue.swapchain()
    }))
    gfx.apply_pipeline(pipeline)
    gfx.apply_bindings(gfx.Bindings({ vertex_buffers = { vbuf } }))
    gfx.draw(0, 3, 1)
    gfx.end_pass()
    gfx.commit()
end

function cleanup()
end

function event(ev)
    if ev.type == app.EventType.KEY_DOWN and ev.key_code == app.Keycode.Q then
        app.quit()
    end
end
