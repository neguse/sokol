/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_gfx.h"

#ifndef SOKOL_LUA_API
  #ifdef _WIN32
    #ifdef SOKOL_LUA_EXPORTS
      #define SOKOL_LUA_API __declspec(dllexport)
    #else
      #define SOKOL_LUA_API __declspec(dllimport)
    #endif
  #else
    #define SOKOL_LUA_API
  #endif
#endif

static int l_sg_buffer_new(lua_State *L) {
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    memset(ud, 0, sizeof(sg_buffer));
    luaL_setmetatable(L, "sokol.Buffer");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_buffer_get_id(lua_State *L) {
    sg_buffer* self = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_buffer_set_id(lua_State *L) {
    sg_buffer* self = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_buffer_get_id(L);
    return 0;
}

static int l_sg_buffer__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_buffer_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_new(lua_State *L) {
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    memset(ud, 0, sizeof(sg_image));
    luaL_setmetatable(L, "sokol.Image");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_get_id(lua_State *L) {
    sg_image* self = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_image_set_id(lua_State *L) {
    sg_image* self = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_image_get_id(L);
    return 0;
}

static int l_sg_image__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_image_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_sampler_new(lua_State *L) {
    sg_sampler* ud = (sg_sampler*)lua_newuserdatauv(L, sizeof(sg_sampler), 0);
    memset(ud, 0, sizeof(sg_sampler));
    luaL_setmetatable(L, "sokol.Sampler");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_sampler_get_id(lua_State *L) {
    sg_sampler* self = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_sampler_set_id(lua_State *L) {
    sg_sampler* self = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_sampler_get_id(L);
    return 0;
}

static int l_sg_sampler__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_sampler_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_new(lua_State *L) {
    sg_shader* ud = (sg_shader*)lua_newuserdatauv(L, sizeof(sg_shader), 0);
    memset(ud, 0, sizeof(sg_shader));
    luaL_setmetatable(L, "sokol.Shader");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_get_id(lua_State *L) {
    sg_shader* self = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_shader_set_id(lua_State *L) {
    sg_shader* self = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_shader_get_id(L);
    return 0;
}

static int l_sg_shader__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_shader_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pipeline_new(lua_State *L) {
    sg_pipeline* ud = (sg_pipeline*)lua_newuserdatauv(L, sizeof(sg_pipeline), 0);
    memset(ud, 0, sizeof(sg_pipeline));
    luaL_setmetatable(L, "sokol.Pipeline");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pipeline_get_id(lua_State *L) {
    sg_pipeline* self = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_pipeline_set_id(lua_State *L) {
    sg_pipeline* self = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_pipeline_get_id(L);
    return 0;
}

static int l_sg_pipeline__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_pipeline_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_view_new(lua_State *L) {
    sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
    memset(ud, 0, sizeof(sg_view));
    luaL_setmetatable(L, "sokol.View");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "id");
        if (!lua_isnil(L, -1)) {
            ud->id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_view_get_id(lua_State *L) {
    sg_view* self = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sg_view_set_id(lua_State *L) {
    sg_view* self = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_view__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_view_get_id(L);
    return 0;
}

static int l_sg_view__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sg_view_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_range_new(lua_State *L) {
    /* sg_range can be created from a string (binary data) or table */
    sg_range* ud = (sg_range*)lua_newuserdatauv(L, sizeof(sg_range), 1);
    memset(ud, 0, sizeof(sg_range));
    luaL_setmetatable(L, "sokol.Range");

    if (lua_isstring(L, 1)) {
        /* Initialize from string (binary data) */
        size_t len;
        const char* data = lua_tolstring(L, 1, &len);
        ud->ptr = data;
        ud->size = len;
        /* Keep reference to string to prevent GC */
        lua_pushvalue(L, 1);
        lua_setiuservalue(L, -2, 1);
    } else if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "ptr");
        if (!lua_isnil(L, -1)) ud->ptr = lua_touserdata(L, -1);
        lua_pop(L, 1);
        lua_getfield(L, 1, "size");
        if (!lua_isnil(L, -1)) ud->size = (size_t)lua_tointeger(L, -1);
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_range_get_ptr(lua_State *L) {
    sg_range* self = (sg_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushlightuserdata(L, (void*)self->ptr);
    return 1;
}

static int l_sg_range_set_ptr(lua_State *L) {
    sg_range* self = (sg_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->ptr = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_range_get_size(lua_State *L) {
    sg_range* self = (sg_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sg_range_set_size(lua_State *L) {
    sg_range* self = (sg_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_range__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sg_range_get_ptr(L);
    if (strcmp(key, "size") == 0) return l_sg_range_get_size(L);
    return 0;
}

static int l_sg_range__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sg_range_set_ptr(L);
    if (strcmp(key, "size") == 0) return l_sg_range_set_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_color_new(lua_State *L) {
    sg_color* ud = (sg_color*)lua_newuserdatauv(L, sizeof(sg_color), 0);
    memset(ud, 0, sizeof(sg_color));
    luaL_setmetatable(L, "sokol.Color");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "r");
        if (!lua_isnil(L, -1)) {
            ud->r = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "g");
        if (!lua_isnil(L, -1)) {
            ud->g = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "b");
        if (!lua_isnil(L, -1)) {
            ud->b = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "a");
        if (!lua_isnil(L, -1)) {
            ud->a = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_color_get_r(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    lua_pushnumber(L, (lua_Number)self->r);
    return 1;
}

static int l_sg_color_set_r(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    self->r = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_color_get_g(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    lua_pushnumber(L, (lua_Number)self->g);
    return 1;
}

static int l_sg_color_set_g(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    self->g = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_color_get_b(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    lua_pushnumber(L, (lua_Number)self->b);
    return 1;
}

static int l_sg_color_set_b(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    self->b = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_color_get_a(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    lua_pushnumber(L, (lua_Number)self->a);
    return 1;
}

static int l_sg_color_set_a(lua_State *L) {
    sg_color* self = (sg_color*)luaL_checkudata(L, 1, "sokol.Color");
    self->a = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_color__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "r") == 0) return l_sg_color_get_r(L);
    if (strcmp(key, "g") == 0) return l_sg_color_get_g(L);
    if (strcmp(key, "b") == 0) return l_sg_color_get_b(L);
    if (strcmp(key, "a") == 0) return l_sg_color_get_a(L);
    return 0;
}

static int l_sg_color__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "r") == 0) return l_sg_color_set_r(L);
    if (strcmp(key, "g") == 0) return l_sg_color_set_g(L);
    if (strcmp(key, "b") == 0) return l_sg_color_set_b(L);
    if (strcmp(key, "a") == 0) return l_sg_color_set_a(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pixelformat_info_new(lua_State *L) {
    sg_pixelformat_info* ud = (sg_pixelformat_info*)lua_newuserdatauv(L, sizeof(sg_pixelformat_info), 0);
    memset(ud, 0, sizeof(sg_pixelformat_info));
    luaL_setmetatable(L, "sokol.PixelformatInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "sample");
        if (!lua_isnil(L, -1)) {
            ud->sample = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "filter");
        if (!lua_isnil(L, -1)) {
            ud->filter = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "render");
        if (!lua_isnil(L, -1)) {
            ud->render = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "blend");
        if (!lua_isnil(L, -1)) {
            ud->blend = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msaa");
        if (!lua_isnil(L, -1)) {
            ud->msaa = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth");
        if (!lua_isnil(L, -1)) {
            ud->depth = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compressed");
        if (!lua_isnil(L, -1)) {
            ud->compressed = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "read");
        if (!lua_isnil(L, -1)) {
            ud->read = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "write");
        if (!lua_isnil(L, -1)) {
            ud->write = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bytes_per_pixel");
        if (!lua_isnil(L, -1)) {
            ud->bytes_per_pixel = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pixelformat_info_get_sample(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->sample);
    return 1;
}

static int l_sg_pixelformat_info_set_sample(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->sample = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_filter(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->filter);
    return 1;
}

static int l_sg_pixelformat_info_set_filter(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->filter = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_render(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->render);
    return 1;
}

static int l_sg_pixelformat_info_set_render(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->render = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_blend(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->blend);
    return 1;
}

static int l_sg_pixelformat_info_set_blend(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->blend = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_msaa(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->msaa);
    return 1;
}

static int l_sg_pixelformat_info_set_msaa(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->msaa = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_depth(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->depth);
    return 1;
}

static int l_sg_pixelformat_info_set_depth(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->depth = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_compressed(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->compressed);
    return 1;
}

static int l_sg_pixelformat_info_set_compressed(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->compressed = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_read(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->read);
    return 1;
}

static int l_sg_pixelformat_info_set_read(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->read = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_write(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushboolean(L, self->write);
    return 1;
}

static int l_sg_pixelformat_info_set_write(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->write = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pixelformat_info_get_bytes_per_pixel(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    lua_pushinteger(L, (lua_Integer)self->bytes_per_pixel);
    return 1;
}

static int l_sg_pixelformat_info_set_bytes_per_pixel(lua_State *L) {
    sg_pixelformat_info* self = (sg_pixelformat_info*)luaL_checkudata(L, 1, "sokol.PixelformatInfo");
    self->bytes_per_pixel = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pixelformat_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sample") == 0) return l_sg_pixelformat_info_get_sample(L);
    if (strcmp(key, "filter") == 0) return l_sg_pixelformat_info_get_filter(L);
    if (strcmp(key, "render") == 0) return l_sg_pixelformat_info_get_render(L);
    if (strcmp(key, "blend") == 0) return l_sg_pixelformat_info_get_blend(L);
    if (strcmp(key, "msaa") == 0) return l_sg_pixelformat_info_get_msaa(L);
    if (strcmp(key, "depth") == 0) return l_sg_pixelformat_info_get_depth(L);
    if (strcmp(key, "compressed") == 0) return l_sg_pixelformat_info_get_compressed(L);
    if (strcmp(key, "read") == 0) return l_sg_pixelformat_info_get_read(L);
    if (strcmp(key, "write") == 0) return l_sg_pixelformat_info_get_write(L);
    if (strcmp(key, "bytes_per_pixel") == 0) return l_sg_pixelformat_info_get_bytes_per_pixel(L);
    return 0;
}

static int l_sg_pixelformat_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sample") == 0) return l_sg_pixelformat_info_set_sample(L);
    if (strcmp(key, "filter") == 0) return l_sg_pixelformat_info_set_filter(L);
    if (strcmp(key, "render") == 0) return l_sg_pixelformat_info_set_render(L);
    if (strcmp(key, "blend") == 0) return l_sg_pixelformat_info_set_blend(L);
    if (strcmp(key, "msaa") == 0) return l_sg_pixelformat_info_set_msaa(L);
    if (strcmp(key, "depth") == 0) return l_sg_pixelformat_info_set_depth(L);
    if (strcmp(key, "compressed") == 0) return l_sg_pixelformat_info_set_compressed(L);
    if (strcmp(key, "read") == 0) return l_sg_pixelformat_info_set_read(L);
    if (strcmp(key, "write") == 0) return l_sg_pixelformat_info_set_write(L);
    if (strcmp(key, "bytes_per_pixel") == 0) return l_sg_pixelformat_info_set_bytes_per_pixel(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_features_new(lua_State *L) {
    sg_features* ud = (sg_features*)lua_newuserdatauv(L, sizeof(sg_features), 0);
    memset(ud, 0, sizeof(sg_features));
    luaL_setmetatable(L, "sokol.Features");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "origin_top_left");
        if (!lua_isnil(L, -1)) {
            ud->origin_top_left = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "image_clamp_to_border");
        if (!lua_isnil(L, -1)) {
            ud->image_clamp_to_border = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mrt_independent_blend_state");
        if (!lua_isnil(L, -1)) {
            ud->mrt_independent_blend_state = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mrt_independent_write_mask");
        if (!lua_isnil(L, -1)) {
            ud->mrt_independent_write_mask = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compute");
        if (!lua_isnil(L, -1)) {
            ud->compute = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msaa_texture_bindings");
        if (!lua_isnil(L, -1)) {
            ud->msaa_texture_bindings = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "separate_buffer_types");
        if (!lua_isnil(L, -1)) {
            ud->separate_buffer_types = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "draw_base_vertex");
        if (!lua_isnil(L, -1)) {
            ud->draw_base_vertex = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "draw_base_instance");
        if (!lua_isnil(L, -1)) {
            ud->draw_base_instance = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_texture_views");
        if (!lua_isnil(L, -1)) {
            ud->gl_texture_views = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_features_get_origin_top_left(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->origin_top_left);
    return 1;
}

static int l_sg_features_set_origin_top_left(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->origin_top_left = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_image_clamp_to_border(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->image_clamp_to_border);
    return 1;
}

static int l_sg_features_set_image_clamp_to_border(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->image_clamp_to_border = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_mrt_independent_blend_state(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->mrt_independent_blend_state);
    return 1;
}

static int l_sg_features_set_mrt_independent_blend_state(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->mrt_independent_blend_state = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_mrt_independent_write_mask(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->mrt_independent_write_mask);
    return 1;
}

static int l_sg_features_set_mrt_independent_write_mask(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->mrt_independent_write_mask = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_compute(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->compute);
    return 1;
}

static int l_sg_features_set_compute(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->compute = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_msaa_texture_bindings(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->msaa_texture_bindings);
    return 1;
}

static int l_sg_features_set_msaa_texture_bindings(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->msaa_texture_bindings = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_separate_buffer_types(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->separate_buffer_types);
    return 1;
}

static int l_sg_features_set_separate_buffer_types(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->separate_buffer_types = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_draw_base_vertex(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->draw_base_vertex);
    return 1;
}

static int l_sg_features_set_draw_base_vertex(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->draw_base_vertex = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_draw_base_instance(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->draw_base_instance);
    return 1;
}

static int l_sg_features_set_draw_base_instance(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->draw_base_instance = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features_get_gl_texture_views(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    lua_pushboolean(L, self->gl_texture_views);
    return 1;
}

static int l_sg_features_set_gl_texture_views(lua_State *L) {
    sg_features* self = (sg_features*)luaL_checkudata(L, 1, "sokol.Features");
    self->gl_texture_views = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_features__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "origin_top_left") == 0) return l_sg_features_get_origin_top_left(L);
    if (strcmp(key, "image_clamp_to_border") == 0) return l_sg_features_get_image_clamp_to_border(L);
    if (strcmp(key, "mrt_independent_blend_state") == 0) return l_sg_features_get_mrt_independent_blend_state(L);
    if (strcmp(key, "mrt_independent_write_mask") == 0) return l_sg_features_get_mrt_independent_write_mask(L);
    if (strcmp(key, "compute") == 0) return l_sg_features_get_compute(L);
    if (strcmp(key, "msaa_texture_bindings") == 0) return l_sg_features_get_msaa_texture_bindings(L);
    if (strcmp(key, "separate_buffer_types") == 0) return l_sg_features_get_separate_buffer_types(L);
    if (strcmp(key, "draw_base_vertex") == 0) return l_sg_features_get_draw_base_vertex(L);
    if (strcmp(key, "draw_base_instance") == 0) return l_sg_features_get_draw_base_instance(L);
    if (strcmp(key, "gl_texture_views") == 0) return l_sg_features_get_gl_texture_views(L);
    return 0;
}

static int l_sg_features__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "origin_top_left") == 0) return l_sg_features_set_origin_top_left(L);
    if (strcmp(key, "image_clamp_to_border") == 0) return l_sg_features_set_image_clamp_to_border(L);
    if (strcmp(key, "mrt_independent_blend_state") == 0) return l_sg_features_set_mrt_independent_blend_state(L);
    if (strcmp(key, "mrt_independent_write_mask") == 0) return l_sg_features_set_mrt_independent_write_mask(L);
    if (strcmp(key, "compute") == 0) return l_sg_features_set_compute(L);
    if (strcmp(key, "msaa_texture_bindings") == 0) return l_sg_features_set_msaa_texture_bindings(L);
    if (strcmp(key, "separate_buffer_types") == 0) return l_sg_features_set_separate_buffer_types(L);
    if (strcmp(key, "draw_base_vertex") == 0) return l_sg_features_set_draw_base_vertex(L);
    if (strcmp(key, "draw_base_instance") == 0) return l_sg_features_set_draw_base_instance(L);
    if (strcmp(key, "gl_texture_views") == 0) return l_sg_features_set_gl_texture_views(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_limits_new(lua_State *L) {
    sg_limits* ud = (sg_limits*)lua_newuserdatauv(L, sizeof(sg_limits), 0);
    memset(ud, 0, sizeof(sg_limits));
    luaL_setmetatable(L, "sokol.Limits");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "max_image_size_2d");
        if (!lua_isnil(L, -1)) {
            ud->max_image_size_2d = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_image_size_cube");
        if (!lua_isnil(L, -1)) {
            ud->max_image_size_cube = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_image_size_3d");
        if (!lua_isnil(L, -1)) {
            ud->max_image_size_3d = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_image_size_array");
        if (!lua_isnil(L, -1)) {
            ud->max_image_size_array = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_image_array_layers");
        if (!lua_isnil(L, -1)) {
            ud->max_image_array_layers = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_vertex_attrs");
        if (!lua_isnil(L, -1)) {
            ud->max_vertex_attrs = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_color_attachments");
        if (!lua_isnil(L, -1)) {
            ud->max_color_attachments = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_texture_bindings_per_stage");
        if (!lua_isnil(L, -1)) {
            ud->max_texture_bindings_per_stage = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_storage_buffer_bindings_per_stage");
        if (!lua_isnil(L, -1)) {
            ud->max_storage_buffer_bindings_per_stage = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_storage_image_bindings_per_stage");
        if (!lua_isnil(L, -1)) {
            ud->max_storage_image_bindings_per_stage = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_max_vertex_uniform_components");
        if (!lua_isnil(L, -1)) {
            ud->gl_max_vertex_uniform_components = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_max_combined_texture_image_units");
        if (!lua_isnil(L, -1)) {
            ud->gl_max_combined_texture_image_units = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_max_unordered_access_views");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_max_unordered_access_views = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vk_min_uniform_buffer_offset_alignment");
        if (!lua_isnil(L, -1)) {
            ud->vk_min_uniform_buffer_offset_alignment = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_limits_get_max_image_size_2d(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_image_size_2d);
    return 1;
}

static int l_sg_limits_set_max_image_size_2d(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_image_size_2d = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_image_size_cube(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_image_size_cube);
    return 1;
}

static int l_sg_limits_set_max_image_size_cube(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_image_size_cube = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_image_size_3d(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_image_size_3d);
    return 1;
}

static int l_sg_limits_set_max_image_size_3d(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_image_size_3d = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_image_size_array(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_image_size_array);
    return 1;
}

static int l_sg_limits_set_max_image_size_array(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_image_size_array = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_image_array_layers(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_image_array_layers);
    return 1;
}

static int l_sg_limits_set_max_image_array_layers(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_image_array_layers = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_vertex_attrs(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_vertex_attrs);
    return 1;
}

static int l_sg_limits_set_max_vertex_attrs(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_vertex_attrs = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_color_attachments(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_color_attachments);
    return 1;
}

static int l_sg_limits_set_max_color_attachments(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_color_attachments = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_texture_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_texture_bindings_per_stage);
    return 1;
}

static int l_sg_limits_set_max_texture_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_texture_bindings_per_stage = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_storage_buffer_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_storage_buffer_bindings_per_stage);
    return 1;
}

static int l_sg_limits_set_max_storage_buffer_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_storage_buffer_bindings_per_stage = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_max_storage_image_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->max_storage_image_bindings_per_stage);
    return 1;
}

static int l_sg_limits_set_max_storage_image_bindings_per_stage(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->max_storage_image_bindings_per_stage = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_gl_max_vertex_uniform_components(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->gl_max_vertex_uniform_components);
    return 1;
}

static int l_sg_limits_set_gl_max_vertex_uniform_components(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->gl_max_vertex_uniform_components = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_gl_max_combined_texture_image_units(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->gl_max_combined_texture_image_units);
    return 1;
}

static int l_sg_limits_set_gl_max_combined_texture_image_units(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->gl_max_combined_texture_image_units = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_d3d11_max_unordered_access_views(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->d3d11_max_unordered_access_views);
    return 1;
}

static int l_sg_limits_set_d3d11_max_unordered_access_views(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->d3d11_max_unordered_access_views = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits_get_vk_min_uniform_buffer_offset_alignment(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    lua_pushinteger(L, (lua_Integer)self->vk_min_uniform_buffer_offset_alignment);
    return 1;
}

static int l_sg_limits_set_vk_min_uniform_buffer_offset_alignment(lua_State *L) {
    sg_limits* self = (sg_limits*)luaL_checkudata(L, 1, "sokol.Limits");
    self->vk_min_uniform_buffer_offset_alignment = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_limits__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_image_size_2d") == 0) return l_sg_limits_get_max_image_size_2d(L);
    if (strcmp(key, "max_image_size_cube") == 0) return l_sg_limits_get_max_image_size_cube(L);
    if (strcmp(key, "max_image_size_3d") == 0) return l_sg_limits_get_max_image_size_3d(L);
    if (strcmp(key, "max_image_size_array") == 0) return l_sg_limits_get_max_image_size_array(L);
    if (strcmp(key, "max_image_array_layers") == 0) return l_sg_limits_get_max_image_array_layers(L);
    if (strcmp(key, "max_vertex_attrs") == 0) return l_sg_limits_get_max_vertex_attrs(L);
    if (strcmp(key, "max_color_attachments") == 0) return l_sg_limits_get_max_color_attachments(L);
    if (strcmp(key, "max_texture_bindings_per_stage") == 0) return l_sg_limits_get_max_texture_bindings_per_stage(L);
    if (strcmp(key, "max_storage_buffer_bindings_per_stage") == 0) return l_sg_limits_get_max_storage_buffer_bindings_per_stage(L);
    if (strcmp(key, "max_storage_image_bindings_per_stage") == 0) return l_sg_limits_get_max_storage_image_bindings_per_stage(L);
    if (strcmp(key, "gl_max_vertex_uniform_components") == 0) return l_sg_limits_get_gl_max_vertex_uniform_components(L);
    if (strcmp(key, "gl_max_combined_texture_image_units") == 0) return l_sg_limits_get_gl_max_combined_texture_image_units(L);
    if (strcmp(key, "d3d11_max_unordered_access_views") == 0) return l_sg_limits_get_d3d11_max_unordered_access_views(L);
    if (strcmp(key, "vk_min_uniform_buffer_offset_alignment") == 0) return l_sg_limits_get_vk_min_uniform_buffer_offset_alignment(L);
    return 0;
}

static int l_sg_limits__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_image_size_2d") == 0) return l_sg_limits_set_max_image_size_2d(L);
    if (strcmp(key, "max_image_size_cube") == 0) return l_sg_limits_set_max_image_size_cube(L);
    if (strcmp(key, "max_image_size_3d") == 0) return l_sg_limits_set_max_image_size_3d(L);
    if (strcmp(key, "max_image_size_array") == 0) return l_sg_limits_set_max_image_size_array(L);
    if (strcmp(key, "max_image_array_layers") == 0) return l_sg_limits_set_max_image_array_layers(L);
    if (strcmp(key, "max_vertex_attrs") == 0) return l_sg_limits_set_max_vertex_attrs(L);
    if (strcmp(key, "max_color_attachments") == 0) return l_sg_limits_set_max_color_attachments(L);
    if (strcmp(key, "max_texture_bindings_per_stage") == 0) return l_sg_limits_set_max_texture_bindings_per_stage(L);
    if (strcmp(key, "max_storage_buffer_bindings_per_stage") == 0) return l_sg_limits_set_max_storage_buffer_bindings_per_stage(L);
    if (strcmp(key, "max_storage_image_bindings_per_stage") == 0) return l_sg_limits_set_max_storage_image_bindings_per_stage(L);
    if (strcmp(key, "gl_max_vertex_uniform_components") == 0) return l_sg_limits_set_gl_max_vertex_uniform_components(L);
    if (strcmp(key, "gl_max_combined_texture_image_units") == 0) return l_sg_limits_set_gl_max_combined_texture_image_units(L);
    if (strcmp(key, "d3d11_max_unordered_access_views") == 0) return l_sg_limits_set_d3d11_max_unordered_access_views(L);
    if (strcmp(key, "vk_min_uniform_buffer_offset_alignment") == 0) return l_sg_limits_set_vk_min_uniform_buffer_offset_alignment(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_color_attachment_action_new(lua_State *L) {
    sg_color_attachment_action* ud = (sg_color_attachment_action*)lua_newuserdatauv(L, sizeof(sg_color_attachment_action), 0);
    memset(ud, 0, sizeof(sg_color_attachment_action));
    luaL_setmetatable(L, "sokol.ColorAttachmentAction");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "load_action");
        if (!lua_isnil(L, -1)) {
            ud->load_action = (sg_load_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "store_action");
        if (!lua_isnil(L, -1)) {
            ud->store_action = (sg_store_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "clear_value");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_color_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_color* val = (sg_color*)luaL_testudata(L, -1, "sokol.Color");
                if (val) ud->clear_value = *val;
                lua_pop(L, 1);
            } else {
                sg_color* val = (sg_color*)luaL_testudata(L, -1, "sokol.Color");
                if (val) ud->clear_value = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_color_attachment_action_get_load_action(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->load_action);
    return 1;
}

static int l_sg_color_attachment_action_set_load_action(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    self->load_action = (sg_load_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_color_attachment_action_get_store_action(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->store_action);
    return 1;
}

static int l_sg_color_attachment_action_set_store_action(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    self->store_action = (sg_store_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_color_attachment_action_get_clear_value(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    sg_color* ud = (sg_color*)lua_newuserdatauv(L, sizeof(sg_color), 0);
    *ud = self->clear_value;
    luaL_setmetatable(L, "sokol.Color");
    return 1;
}

static int l_sg_color_attachment_action_set_clear_value(lua_State *L) {
    sg_color_attachment_action* self = (sg_color_attachment_action*)luaL_checkudata(L, 1, "sokol.ColorAttachmentAction");
    sg_color* val = (sg_color*)luaL_checkudata(L, 2, "sokol.Color");
    self->clear_value = *val;
    return 0;
}

static int l_sg_color_attachment_action__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_color_attachment_action_get_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_color_attachment_action_get_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_color_attachment_action_get_clear_value(L);
    return 0;
}

static int l_sg_color_attachment_action__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_color_attachment_action_set_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_color_attachment_action_set_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_color_attachment_action_set_clear_value(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_depth_attachment_action_new(lua_State *L) {
    sg_depth_attachment_action* ud = (sg_depth_attachment_action*)lua_newuserdatauv(L, sizeof(sg_depth_attachment_action), 0);
    memset(ud, 0, sizeof(sg_depth_attachment_action));
    luaL_setmetatable(L, "sokol.DepthAttachmentAction");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "load_action");
        if (!lua_isnil(L, -1)) {
            ud->load_action = (sg_load_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "store_action");
        if (!lua_isnil(L, -1)) {
            ud->store_action = (sg_store_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "clear_value");
        if (!lua_isnil(L, -1)) {
            ud->clear_value = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_depth_attachment_action_get_load_action(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->load_action);
    return 1;
}

static int l_sg_depth_attachment_action_set_load_action(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    self->load_action = (sg_load_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_depth_attachment_action_get_store_action(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->store_action);
    return 1;
}

static int l_sg_depth_attachment_action_set_store_action(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    self->store_action = (sg_store_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_depth_attachment_action_get_clear_value(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    lua_pushnumber(L, (lua_Number)self->clear_value);
    return 1;
}

static int l_sg_depth_attachment_action_set_clear_value(lua_State *L) {
    sg_depth_attachment_action* self = (sg_depth_attachment_action*)luaL_checkudata(L, 1, "sokol.DepthAttachmentAction");
    self->clear_value = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_depth_attachment_action__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_depth_attachment_action_get_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_depth_attachment_action_get_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_depth_attachment_action_get_clear_value(L);
    return 0;
}

static int l_sg_depth_attachment_action__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_depth_attachment_action_set_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_depth_attachment_action_set_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_depth_attachment_action_set_clear_value(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_stencil_attachment_action_new(lua_State *L) {
    sg_stencil_attachment_action* ud = (sg_stencil_attachment_action*)lua_newuserdatauv(L, sizeof(sg_stencil_attachment_action), 0);
    memset(ud, 0, sizeof(sg_stencil_attachment_action));
    luaL_setmetatable(L, "sokol.StencilAttachmentAction");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "load_action");
        if (!lua_isnil(L, -1)) {
            ud->load_action = (sg_load_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "store_action");
        if (!lua_isnil(L, -1)) {
            ud->store_action = (sg_store_action)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "clear_value");
        if (!lua_isnil(L, -1)) {
            ud->clear_value = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_stencil_attachment_action_get_load_action(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->load_action);
    return 1;
}

static int l_sg_stencil_attachment_action_set_load_action(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    self->load_action = (sg_load_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_attachment_action_get_store_action(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->store_action);
    return 1;
}

static int l_sg_stencil_attachment_action_set_store_action(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    self->store_action = (sg_store_action)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_attachment_action_get_clear_value(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    lua_pushinteger(L, (lua_Integer)self->clear_value);
    return 1;
}

static int l_sg_stencil_attachment_action_set_clear_value(lua_State *L) {
    sg_stencil_attachment_action* self = (sg_stencil_attachment_action*)luaL_checkudata(L, 1, "sokol.StencilAttachmentAction");
    self->clear_value = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_attachment_action__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_stencil_attachment_action_get_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_stencil_attachment_action_get_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_stencil_attachment_action_get_clear_value(L);
    return 0;
}

static int l_sg_stencil_attachment_action__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "load_action") == 0) return l_sg_stencil_attachment_action_set_load_action(L);
    if (strcmp(key, "store_action") == 0) return l_sg_stencil_attachment_action_set_store_action(L);
    if (strcmp(key, "clear_value") == 0) return l_sg_stencil_attachment_action_set_clear_value(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pass_action_new(lua_State *L) {
    sg_pass_action* ud = (sg_pass_action*)lua_newuserdatauv(L, sizeof(sg_pass_action), 0);
    memset(ud, 0, sizeof(sg_pass_action));
    luaL_setmetatable(L, "sokol.PassAction");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "colors");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_color_attachment_action_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_color_attachment_action* val = (sg_color_attachment_action*)luaL_testudata(L, -1, "sokol.ColorAttachmentAction");
                        if (val) ud->colors[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_color_attachment_action* val = (sg_color_attachment_action*)luaL_testudata(L, -1, "sokol.ColorAttachmentAction");
                        if (val) ud->colors[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_depth_attachment_action_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_depth_attachment_action* val = (sg_depth_attachment_action*)luaL_testudata(L, -1, "sokol.DepthAttachmentAction");
                if (val) ud->depth = *val;
                lua_pop(L, 1);
            } else {
                sg_depth_attachment_action* val = (sg_depth_attachment_action*)luaL_testudata(L, -1, "sokol.DepthAttachmentAction");
                if (val) ud->depth = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "stencil");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_stencil_attachment_action_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_stencil_attachment_action* val = (sg_stencil_attachment_action*)luaL_testudata(L, -1, "sokol.StencilAttachmentAction");
                if (val) ud->stencil = *val;
                lua_pop(L, 1);
            } else {
                sg_stencil_attachment_action* val = (sg_stencil_attachment_action*)luaL_testudata(L, -1, "sokol.StencilAttachmentAction");
                if (val) ud->stencil = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pass_action_get_colors(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_color_attachment_action* ud = (sg_color_attachment_action*)lua_newuserdatauv(L, sizeof(sg_color_attachment_action), 0);
        *ud = self->colors[i];
        luaL_setmetatable(L, "sokol.ColorAttachmentAction");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_pass_action_set_colors(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_color_attachment_action* val = (sg_color_attachment_action*)luaL_testudata(L, -1, "sokol.ColorAttachmentAction");
            if (val) self->colors[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_pass_action_get_depth(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    sg_depth_attachment_action* ud = (sg_depth_attachment_action*)lua_newuserdatauv(L, sizeof(sg_depth_attachment_action), 0);
    *ud = self->depth;
    luaL_setmetatable(L, "sokol.DepthAttachmentAction");
    return 1;
}

static int l_sg_pass_action_set_depth(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    sg_depth_attachment_action* val = (sg_depth_attachment_action*)luaL_checkudata(L, 2, "sokol.DepthAttachmentAction");
    self->depth = *val;
    return 0;
}

static int l_sg_pass_action_get_stencil(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    sg_stencil_attachment_action* ud = (sg_stencil_attachment_action*)lua_newuserdatauv(L, sizeof(sg_stencil_attachment_action), 0);
    *ud = self->stencil;
    luaL_setmetatable(L, "sokol.StencilAttachmentAction");
    return 1;
}

static int l_sg_pass_action_set_stencil(lua_State *L) {
    sg_pass_action* self = (sg_pass_action*)luaL_checkudata(L, 1, "sokol.PassAction");
    sg_stencil_attachment_action* val = (sg_stencil_attachment_action*)luaL_checkudata(L, 2, "sokol.StencilAttachmentAction");
    self->stencil = *val;
    return 0;
}

static int l_sg_pass_action__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "colors") == 0) return l_sg_pass_action_get_colors(L);
    if (strcmp(key, "depth") == 0) return l_sg_pass_action_get_depth(L);
    if (strcmp(key, "stencil") == 0) return l_sg_pass_action_get_stencil(L);
    return 0;
}

static int l_sg_pass_action__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "colors") == 0) return l_sg_pass_action_set_colors(L);
    if (strcmp(key, "depth") == 0) return l_sg_pass_action_set_depth(L);
    if (strcmp(key, "stencil") == 0) return l_sg_pass_action_set_stencil(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_metal_swapchain_new(lua_State *L) {
    sg_metal_swapchain* ud = (sg_metal_swapchain*)lua_newuserdatauv(L, sizeof(sg_metal_swapchain), 0);
    memset(ud, 0, sizeof(sg_metal_swapchain));
    luaL_setmetatable(L, "sokol.MetalSwapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "current_drawable");
        if (!lua_isnil(L, -1)) {
            ud->current_drawable = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_texture");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_texture = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msaa_color_texture");
        if (!lua_isnil(L, -1)) {
            ud->msaa_color_texture = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_metal_swapchain_get_current_drawable(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->current_drawable);
    return 1;
}

static int l_sg_metal_swapchain_set_current_drawable(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->current_drawable = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_metal_swapchain_get_depth_stencil_texture(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_texture);
    return 1;
}

static int l_sg_metal_swapchain_set_depth_stencil_texture(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->depth_stencil_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_metal_swapchain_get_msaa_color_texture(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->msaa_color_texture);
    return 1;
}

static int l_sg_metal_swapchain_set_msaa_color_texture(lua_State *L) {
    sg_metal_swapchain* self = (sg_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->msaa_color_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_metal_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "current_drawable") == 0) return l_sg_metal_swapchain_get_current_drawable(L);
    if (strcmp(key, "depth_stencil_texture") == 0) return l_sg_metal_swapchain_get_depth_stencil_texture(L);
    if (strcmp(key, "msaa_color_texture") == 0) return l_sg_metal_swapchain_get_msaa_color_texture(L);
    return 0;
}

static int l_sg_metal_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "current_drawable") == 0) return l_sg_metal_swapchain_set_current_drawable(L);
    if (strcmp(key, "depth_stencil_texture") == 0) return l_sg_metal_swapchain_set_depth_stencil_texture(L);
    if (strcmp(key, "msaa_color_texture") == 0) return l_sg_metal_swapchain_set_msaa_color_texture(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_swapchain_new(lua_State *L) {
    sg_d3d11_swapchain* ud = (sg_d3d11_swapchain*)lua_newuserdatauv(L, sizeof(sg_d3d11_swapchain), 0);
    memset(ud, 0, sizeof(sg_d3d11_swapchain));
    luaL_setmetatable(L, "sokol.D3d11Swapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "render_view");
        if (!lua_isnil(L, -1)) {
            ud->render_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_view");
        if (!lua_isnil(L, -1)) {
            ud->resolve_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_view");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_swapchain_get_render_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sg_d3d11_swapchain_set_render_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_swapchain_get_resolve_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sg_d3d11_swapchain_set_resolve_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_swapchain_get_depth_stencil_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sg_d3d11_swapchain_set_depth_stencil_view(lua_State *L) {
    sg_d3d11_swapchain* self = (sg_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sg_d3d11_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_d3d11_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_d3d11_swapchain_get_depth_stencil_view(L);
    return 0;
}

static int l_sg_d3d11_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sg_d3d11_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_d3d11_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_d3d11_swapchain_set_depth_stencil_view(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_swapchain_new(lua_State *L) {
    sg_wgpu_swapchain* ud = (sg_wgpu_swapchain*)lua_newuserdatauv(L, sizeof(sg_wgpu_swapchain), 0);
    memset(ud, 0, sizeof(sg_wgpu_swapchain));
    luaL_setmetatable(L, "sokol.WgpuSwapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "render_view");
        if (!lua_isnil(L, -1)) {
            ud->render_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_view");
        if (!lua_isnil(L, -1)) {
            ud->resolve_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_view");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_swapchain_get_render_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sg_wgpu_swapchain_set_render_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_swapchain_get_resolve_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sg_wgpu_swapchain_set_resolve_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_swapchain_get_depth_stencil_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sg_wgpu_swapchain_set_depth_stencil_view(lua_State *L) {
    sg_wgpu_swapchain* self = (sg_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sg_wgpu_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_wgpu_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_wgpu_swapchain_get_depth_stencil_view(L);
    return 0;
}

static int l_sg_wgpu_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sg_wgpu_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_wgpu_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_wgpu_swapchain_set_depth_stencil_view(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vulkan_swapchain_new(lua_State *L) {
    sg_vulkan_swapchain* ud = (sg_vulkan_swapchain*)lua_newuserdatauv(L, sizeof(sg_vulkan_swapchain), 0);
    memset(ud, 0, sizeof(sg_vulkan_swapchain));
    luaL_setmetatable(L, "sokol.VulkanSwapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "render_image");
        if (!lua_isnil(L, -1)) {
            ud->render_image = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "render_view");
        if (!lua_isnil(L, -1)) {
            ud->render_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_image");
        if (!lua_isnil(L, -1)) {
            ud->resolve_image = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_view");
        if (!lua_isnil(L, -1)) {
            ud->resolve_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_image");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_image = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_view");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "render_finished_semaphore");
        if (!lua_isnil(L, -1)) {
            ud->render_finished_semaphore = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "present_complete_semaphore");
        if (!lua_isnil(L, -1)) {
            ud->present_complete_semaphore = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vulkan_swapchain_get_render_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_image);
    return 1;
}

static int l_sg_vulkan_swapchain_set_render_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_render_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sg_vulkan_swapchain_set_render_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_resolve_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_image);
    return 1;
}

static int l_sg_vulkan_swapchain_set_resolve_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->resolve_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_resolve_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sg_vulkan_swapchain_set_resolve_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_depth_stencil_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_image);
    return 1;
}

static int l_sg_vulkan_swapchain_set_depth_stencil_image(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->depth_stencil_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_depth_stencil_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sg_vulkan_swapchain_set_depth_stencil_view(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_render_finished_semaphore(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_finished_semaphore);
    return 1;
}

static int l_sg_vulkan_swapchain_set_render_finished_semaphore(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_finished_semaphore = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain_get_present_complete_semaphore(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->present_complete_semaphore);
    return 1;
}

static int l_sg_vulkan_swapchain_set_present_complete_semaphore(lua_State *L) {
    sg_vulkan_swapchain* self = (sg_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->present_complete_semaphore = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_image") == 0) return l_sg_vulkan_swapchain_get_render_image(L);
    if (strcmp(key, "render_view") == 0) return l_sg_vulkan_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_image") == 0) return l_sg_vulkan_swapchain_get_resolve_image(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_vulkan_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_image") == 0) return l_sg_vulkan_swapchain_get_depth_stencil_image(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_vulkan_swapchain_get_depth_stencil_view(L);
    if (strcmp(key, "render_finished_semaphore") == 0) return l_sg_vulkan_swapchain_get_render_finished_semaphore(L);
    if (strcmp(key, "present_complete_semaphore") == 0) return l_sg_vulkan_swapchain_get_present_complete_semaphore(L);
    return 0;
}

static int l_sg_vulkan_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_image") == 0) return l_sg_vulkan_swapchain_set_render_image(L);
    if (strcmp(key, "render_view") == 0) return l_sg_vulkan_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_image") == 0) return l_sg_vulkan_swapchain_set_resolve_image(L);
    if (strcmp(key, "resolve_view") == 0) return l_sg_vulkan_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_image") == 0) return l_sg_vulkan_swapchain_set_depth_stencil_image(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sg_vulkan_swapchain_set_depth_stencil_view(L);
    if (strcmp(key, "render_finished_semaphore") == 0) return l_sg_vulkan_swapchain_set_render_finished_semaphore(L);
    if (strcmp(key, "present_complete_semaphore") == 0) return l_sg_vulkan_swapchain_set_present_complete_semaphore(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_swapchain_new(lua_State *L) {
    sg_gl_swapchain* ud = (sg_gl_swapchain*)lua_newuserdatauv(L, sizeof(sg_gl_swapchain), 0);
    memset(ud, 0, sizeof(sg_gl_swapchain));
    luaL_setmetatable(L, "sokol.GlSwapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "framebuffer");
        if (!lua_isnil(L, -1)) {
            ud->framebuffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_swapchain_get_framebuffer(lua_State *L) {
    sg_gl_swapchain* self = (sg_gl_swapchain*)luaL_checkudata(L, 1, "sokol.GlSwapchain");
    lua_pushinteger(L, (lua_Integer)self->framebuffer);
    return 1;
}

static int l_sg_gl_swapchain_set_framebuffer(lua_State *L) {
    sg_gl_swapchain* self = (sg_gl_swapchain*)luaL_checkudata(L, 1, "sokol.GlSwapchain");
    self->framebuffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "framebuffer") == 0) return l_sg_gl_swapchain_get_framebuffer(L);
    return 0;
}

static int l_sg_gl_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "framebuffer") == 0) return l_sg_gl_swapchain_set_framebuffer(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_swapchain_new(lua_State *L) {
    sg_swapchain* ud = (sg_swapchain*)lua_newuserdatauv(L, sizeof(sg_swapchain), 0);
    memset(ud, 0, sizeof(sg_swapchain));
    luaL_setmetatable(L, "sokol.Swapchain");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "width");
        if (!lua_isnil(L, -1)) {
            ud->width = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "height");
        if (!lua_isnil(L, -1)) {
            ud->height = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sample_count");
        if (!lua_isnil(L, -1)) {
            ud->sample_count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "color_format");
        if (!lua_isnil(L, -1)) {
            ud->color_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_format");
        if (!lua_isnil(L, -1)) {
            ud->depth_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "metal");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_metal_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_metal_swapchain* val = (sg_metal_swapchain*)luaL_testudata(L, -1, "sokol.MetalSwapchain");
                if (val) ud->metal = *val;
                lua_pop(L, 1);
            } else {
                sg_metal_swapchain* val = (sg_metal_swapchain*)luaL_testudata(L, -1, "sokol.MetalSwapchain");
                if (val) ud->metal = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_d3d11_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_d3d11_swapchain* val = (sg_d3d11_swapchain*)luaL_testudata(L, -1, "sokol.D3d11Swapchain");
                if (val) ud->d3d11 = *val;
                lua_pop(L, 1);
            } else {
                sg_d3d11_swapchain* val = (sg_d3d11_swapchain*)luaL_testudata(L, -1, "sokol.D3d11Swapchain");
                if (val) ud->d3d11 = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_wgpu_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_wgpu_swapchain* val = (sg_wgpu_swapchain*)luaL_testudata(L, -1, "sokol.WgpuSwapchain");
                if (val) ud->wgpu = *val;
                lua_pop(L, 1);
            } else {
                sg_wgpu_swapchain* val = (sg_wgpu_swapchain*)luaL_testudata(L, -1, "sokol.WgpuSwapchain");
                if (val) ud->wgpu = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vulkan");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_vulkan_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_vulkan_swapchain* val = (sg_vulkan_swapchain*)luaL_testudata(L, -1, "sokol.VulkanSwapchain");
                if (val) ud->vulkan = *val;
                lua_pop(L, 1);
            } else {
                sg_vulkan_swapchain* val = (sg_vulkan_swapchain*)luaL_testudata(L, -1, "sokol.VulkanSwapchain");
                if (val) ud->vulkan = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_gl_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_gl_swapchain* val = (sg_gl_swapchain*)luaL_testudata(L, -1, "sokol.GlSwapchain");
                if (val) ud->gl = *val;
                lua_pop(L, 1);
            } else {
                sg_gl_swapchain* val = (sg_gl_swapchain*)luaL_testudata(L, -1, "sokol.GlSwapchain");
                if (val) ud->gl = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_swapchain_get_width(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->width);
    return 1;
}

static int l_sg_swapchain_set_width(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_swapchain_get_height(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->height);
    return 1;
}

static int l_sg_swapchain_set_height(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_swapchain_get_sample_count(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sg_swapchain_set_sample_count(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_swapchain_get_color_format(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sg_swapchain_set_color_format(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->color_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_swapchain_get_depth_format(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sg_swapchain_set_depth_format(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->depth_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_swapchain_get_metal(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_metal_swapchain* ud = (sg_metal_swapchain*)lua_newuserdatauv(L, sizeof(sg_metal_swapchain), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.MetalSwapchain");
    return 1;
}

static int l_sg_swapchain_set_metal(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_metal_swapchain* val = (sg_metal_swapchain*)luaL_checkudata(L, 2, "sokol.MetalSwapchain");
    self->metal = *val;
    return 0;
}

static int l_sg_swapchain_get_d3d11(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_d3d11_swapchain* ud = (sg_d3d11_swapchain*)lua_newuserdatauv(L, sizeof(sg_d3d11_swapchain), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.D3d11Swapchain");
    return 1;
}

static int l_sg_swapchain_set_d3d11(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_d3d11_swapchain* val = (sg_d3d11_swapchain*)luaL_checkudata(L, 2, "sokol.D3d11Swapchain");
    self->d3d11 = *val;
    return 0;
}

static int l_sg_swapchain_get_wgpu(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_wgpu_swapchain* ud = (sg_wgpu_swapchain*)lua_newuserdatauv(L, sizeof(sg_wgpu_swapchain), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.WgpuSwapchain");
    return 1;
}

static int l_sg_swapchain_set_wgpu(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_wgpu_swapchain* val = (sg_wgpu_swapchain*)luaL_checkudata(L, 2, "sokol.WgpuSwapchain");
    self->wgpu = *val;
    return 0;
}

static int l_sg_swapchain_get_vulkan(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_vulkan_swapchain* ud = (sg_vulkan_swapchain*)lua_newuserdatauv(L, sizeof(sg_vulkan_swapchain), 0);
    *ud = self->vulkan;
    luaL_setmetatable(L, "sokol.VulkanSwapchain");
    return 1;
}

static int l_sg_swapchain_set_vulkan(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_vulkan_swapchain* val = (sg_vulkan_swapchain*)luaL_checkudata(L, 2, "sokol.VulkanSwapchain");
    self->vulkan = *val;
    return 0;
}

static int l_sg_swapchain_get_gl(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_gl_swapchain* ud = (sg_gl_swapchain*)lua_newuserdatauv(L, sizeof(sg_gl_swapchain), 0);
    *ud = self->gl;
    luaL_setmetatable(L, "sokol.GlSwapchain");
    return 1;
}

static int l_sg_swapchain_set_gl(lua_State *L) {
    sg_swapchain* self = (sg_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sg_gl_swapchain* val = (sg_gl_swapchain*)luaL_checkudata(L, 2, "sokol.GlSwapchain");
    self->gl = *val;
    return 0;
}

static int l_sg_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sg_swapchain_get_width(L);
    if (strcmp(key, "height") == 0) return l_sg_swapchain_get_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_swapchain_get_sample_count(L);
    if (strcmp(key, "color_format") == 0) return l_sg_swapchain_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sg_swapchain_get_depth_format(L);
    if (strcmp(key, "metal") == 0) return l_sg_swapchain_get_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_swapchain_get_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_swapchain_get_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_swapchain_get_vulkan(L);
    if (strcmp(key, "gl") == 0) return l_sg_swapchain_get_gl(L);
    return 0;
}

static int l_sg_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sg_swapchain_set_width(L);
    if (strcmp(key, "height") == 0) return l_sg_swapchain_set_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_swapchain_set_sample_count(L);
    if (strcmp(key, "color_format") == 0) return l_sg_swapchain_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sg_swapchain_set_depth_format(L);
    if (strcmp(key, "metal") == 0) return l_sg_swapchain_set_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_swapchain_set_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_swapchain_set_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_swapchain_set_vulkan(L);
    if (strcmp(key, "gl") == 0) return l_sg_swapchain_set_gl(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_attachments_new(lua_State *L) {
    sg_attachments* ud = (sg_attachments*)lua_newuserdatauv(L, sizeof(sg_attachments), 0);
    memset(ud, 0, sizeof(sg_attachments));
    luaL_setmetatable(L, "sokol.Attachments");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "colors");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_view_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->colors[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->colors[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolves");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_view_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->resolves[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->resolves[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_view_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                if (val) ud->depth_stencil = *val;
                lua_pop(L, 1);
            } else {
                sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                if (val) ud->depth_stencil = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_attachments_get_colors(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
        *ud = self->colors[i];
        luaL_setmetatable(L, "sokol.View");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_attachments_set_colors(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
            if (val) self->colors[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_attachments_get_resolves(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
        *ud = self->resolves[i];
        luaL_setmetatable(L, "sokol.View");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_attachments_set_resolves(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
            if (val) self->resolves[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_attachments_get_depth_stencil(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
    *ud = self->depth_stencil;
    luaL_setmetatable(L, "sokol.View");
    return 1;
}

static int l_sg_attachments_set_depth_stencil(lua_State *L) {
    sg_attachments* self = (sg_attachments*)luaL_checkudata(L, 1, "sokol.Attachments");
    sg_view* val = (sg_view*)luaL_checkudata(L, 2, "sokol.View");
    self->depth_stencil = *val;
    return 0;
}

static int l_sg_attachments__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "colors") == 0) return l_sg_attachments_get_colors(L);
    if (strcmp(key, "resolves") == 0) return l_sg_attachments_get_resolves(L);
    if (strcmp(key, "depth_stencil") == 0) return l_sg_attachments_get_depth_stencil(L);
    return 0;
}

static int l_sg_attachments__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "colors") == 0) return l_sg_attachments_set_colors(L);
    if (strcmp(key, "resolves") == 0) return l_sg_attachments_set_resolves(L);
    if (strcmp(key, "depth_stencil") == 0) return l_sg_attachments_set_depth_stencil(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pass_new(lua_State *L) {
    sg_pass* ud = (sg_pass*)lua_newuserdatauv(L, sizeof(sg_pass), 0);
    memset(ud, 0, sizeof(sg_pass));
    luaL_setmetatable(L, "sokol.Pass");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compute");
        if (!lua_isnil(L, -1)) {
            ud->compute = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "action");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_pass_action_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_pass_action* val = (sg_pass_action*)luaL_testudata(L, -1, "sokol.PassAction");
                if (val) ud->action = *val;
                lua_pop(L, 1);
            } else {
                sg_pass_action* val = (sg_pass_action*)luaL_testudata(L, -1, "sokol.PassAction");
                if (val) ud->action = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "attachments");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_attachments_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_attachments* val = (sg_attachments*)luaL_testudata(L, -1, "sokol.Attachments");
                if (val) ud->attachments = *val;
                lua_pop(L, 1);
            } else {
                sg_attachments* val = (sg_attachments*)luaL_testudata(L, -1, "sokol.Attachments");
                if (val) ud->attachments = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "swapchain");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_swapchain_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_swapchain* val = (sg_swapchain*)luaL_testudata(L, -1, "sokol.Swapchain");
                if (val) ud->swapchain = *val;
                lua_pop(L, 1);
            } else {
                sg_swapchain* val = (sg_swapchain*)luaL_testudata(L, -1, "sokol.Swapchain");
                if (val) ud->swapchain = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pass_get__start_canary(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_pass_set__start_canary(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pass_get_compute(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    lua_pushboolean(L, self->compute);
    return 1;
}

static int l_sg_pass_set_compute(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    self->compute = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pass_get_action(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_pass_action* ud = (sg_pass_action*)lua_newuserdatauv(L, sizeof(sg_pass_action), 0);
    *ud = self->action;
    luaL_setmetatable(L, "sokol.PassAction");
    return 1;
}

static int l_sg_pass_set_action(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_pass_action* val = (sg_pass_action*)luaL_checkudata(L, 2, "sokol.PassAction");
    self->action = *val;
    return 0;
}

static int l_sg_pass_get_attachments(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_attachments* ud = (sg_attachments*)lua_newuserdatauv(L, sizeof(sg_attachments), 0);
    *ud = self->attachments;
    luaL_setmetatable(L, "sokol.Attachments");
    return 1;
}

static int l_sg_pass_set_attachments(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_attachments* val = (sg_attachments*)luaL_checkudata(L, 2, "sokol.Attachments");
    self->attachments = *val;
    return 0;
}

static int l_sg_pass_get_swapchain(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_swapchain* ud = (sg_swapchain*)lua_newuserdatauv(L, sizeof(sg_swapchain), 0);
    *ud = self->swapchain;
    luaL_setmetatable(L, "sokol.Swapchain");
    return 1;
}

static int l_sg_pass_set_swapchain(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_swapchain* val = (sg_swapchain*)luaL_checkudata(L, 2, "sokol.Swapchain");
    self->swapchain = *val;
    return 0;
}

static int l_sg_pass_get_label(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_pass_set_label(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_pass_get__end_canary(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_pass_set__end_canary(lua_State *L) {
    sg_pass* self = (sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pass__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_pass_get__start_canary(L);
    if (strcmp(key, "compute") == 0) return l_sg_pass_get_compute(L);
    if (strcmp(key, "action") == 0) return l_sg_pass_get_action(L);
    if (strcmp(key, "attachments") == 0) return l_sg_pass_get_attachments(L);
    if (strcmp(key, "swapchain") == 0) return l_sg_pass_get_swapchain(L);
    if (strcmp(key, "label") == 0) return l_sg_pass_get_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_pass_get__end_canary(L);
    return 0;
}

static int l_sg_pass__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_pass_set__start_canary(L);
    if (strcmp(key, "compute") == 0) return l_sg_pass_set_compute(L);
    if (strcmp(key, "action") == 0) return l_sg_pass_set_action(L);
    if (strcmp(key, "attachments") == 0) return l_sg_pass_set_attachments(L);
    if (strcmp(key, "swapchain") == 0) return l_sg_pass_set_swapchain(L);
    if (strcmp(key, "label") == 0) return l_sg_pass_set_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_pass_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_bindings_new(lua_State *L) {
    sg_bindings* ud = (sg_bindings*)lua_newuserdatauv(L, sizeof(sg_bindings), 0);
    memset(ud, 0, sizeof(sg_bindings));
    luaL_setmetatable(L, "sokol.Bindings");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vertex_buffers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_buffer_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                        if (val) ud->vertex_buffers[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                        if (val) ud->vertex_buffers[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vertex_buffer_offsets");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->vertex_buffer_offsets[i] = (int)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "index_buffer");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_buffer_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                if (val) ud->index_buffer = *val;
                lua_pop(L, 1);
            } else {
                sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                if (val) ud->index_buffer = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "index_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->index_buffer_offset = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "views");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 32; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_view_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->views[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
                        if (val) ud->views[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "samplers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 12; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_sampler_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_sampler* val = (sg_sampler*)luaL_testudata(L, -1, "sokol.Sampler");
                        if (val) ud->samplers[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_sampler* val = (sg_sampler*)luaL_testudata(L, -1, "sokol.Sampler");
                        if (val) ud->samplers[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_bindings_get__start_canary(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_bindings_set__start_canary(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_bindings_get_vertex_buffers(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
        *ud = self->vertex_buffers[i];
        luaL_setmetatable(L, "sokol.Buffer");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_bindings_set_vertex_buffers(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
            if (val) self->vertex_buffers[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_bindings_get_vertex_buffer_offsets(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        lua_pushinteger(L, (lua_Integer)self->vertex_buffer_offsets[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_bindings_set_vertex_buffer_offsets(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->vertex_buffer_offsets[i] = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_bindings_get_index_buffer(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    *ud = self->index_buffer;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sg_bindings_set_index_buffer(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    sg_buffer* val = (sg_buffer*)luaL_checkudata(L, 2, "sokol.Buffer");
    self->index_buffer = *val;
    return 0;
}

static int l_sg_bindings_get_index_buffer_offset(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_pushinteger(L, (lua_Integer)self->index_buffer_offset);
    return 1;
}

static int l_sg_bindings_set_index_buffer_offset(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    self->index_buffer_offset = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_bindings_get_views(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_newtable(L);
    for (int i = 0; i < 32; i++) {
        sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
        *ud = self->views[i];
        luaL_setmetatable(L, "sokol.View");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_bindings_set_views(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 32; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_view* val = (sg_view*)luaL_testudata(L, -1, "sokol.View");
            if (val) self->views[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_bindings_get_samplers(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_newtable(L);
    for (int i = 0; i < 12; i++) {
        sg_sampler* ud = (sg_sampler*)lua_newuserdatauv(L, sizeof(sg_sampler), 0);
        *ud = self->samplers[i];
        luaL_setmetatable(L, "sokol.Sampler");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_bindings_set_samplers(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 12; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_sampler* val = (sg_sampler*)luaL_testudata(L, -1, "sokol.Sampler");
            if (val) self->samplers[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_bindings_get__end_canary(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_bindings_set__end_canary(lua_State *L) {
    sg_bindings* self = (sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_bindings__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_bindings_get__start_canary(L);
    if (strcmp(key, "vertex_buffers") == 0) return l_sg_bindings_get_vertex_buffers(L);
    if (strcmp(key, "vertex_buffer_offsets") == 0) return l_sg_bindings_get_vertex_buffer_offsets(L);
    if (strcmp(key, "index_buffer") == 0) return l_sg_bindings_get_index_buffer(L);
    if (strcmp(key, "index_buffer_offset") == 0) return l_sg_bindings_get_index_buffer_offset(L);
    if (strcmp(key, "views") == 0) return l_sg_bindings_get_views(L);
    if (strcmp(key, "samplers") == 0) return l_sg_bindings_get_samplers(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_bindings_get__end_canary(L);
    return 0;
}

static int l_sg_bindings__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_bindings_set__start_canary(L);
    if (strcmp(key, "vertex_buffers") == 0) return l_sg_bindings_set_vertex_buffers(L);
    if (strcmp(key, "vertex_buffer_offsets") == 0) return l_sg_bindings_set_vertex_buffer_offsets(L);
    if (strcmp(key, "index_buffer") == 0) return l_sg_bindings_set_index_buffer(L);
    if (strcmp(key, "index_buffer_offset") == 0) return l_sg_bindings_set_index_buffer_offset(L);
    if (strcmp(key, "views") == 0) return l_sg_bindings_set_views(L);
    if (strcmp(key, "samplers") == 0) return l_sg_bindings_set_samplers(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_bindings_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_buffer_usage_new(lua_State *L) {
    sg_buffer_usage* ud = (sg_buffer_usage*)lua_newuserdatauv(L, sizeof(sg_buffer_usage), 0);
    memset(ud, 0, sizeof(sg_buffer_usage));
    luaL_setmetatable(L, "sokol.BufferUsage");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "vertex_buffer");
        if (!lua_isnil(L, -1)) {
            ud->vertex_buffer = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "index_buffer");
        if (!lua_isnil(L, -1)) {
            ud->index_buffer = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "storage_buffer");
        if (!lua_isnil(L, -1)) {
            ud->storage_buffer = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "immutable");
        if (!lua_isnil(L, -1)) {
            ud->immutable = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dynamic_update");
        if (!lua_isnil(L, -1)) {
            ud->dynamic_update = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "stream_update");
        if (!lua_isnil(L, -1)) {
            ud->stream_update = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_buffer_usage_get_vertex_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->vertex_buffer);
    return 1;
}

static int l_sg_buffer_usage_set_vertex_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->vertex_buffer = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage_get_index_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->index_buffer);
    return 1;
}

static int l_sg_buffer_usage_set_index_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->index_buffer = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage_get_storage_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->storage_buffer);
    return 1;
}

static int l_sg_buffer_usage_set_storage_buffer(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->storage_buffer = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage_get_immutable(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->immutable);
    return 1;
}

static int l_sg_buffer_usage_set_immutable(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->immutable = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage_get_dynamic_update(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->dynamic_update);
    return 1;
}

static int l_sg_buffer_usage_set_dynamic_update(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->dynamic_update = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage_get_stream_update(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    lua_pushboolean(L, self->stream_update);
    return 1;
}

static int l_sg_buffer_usage_set_stream_update(lua_State *L) {
    sg_buffer_usage* self = (sg_buffer_usage*)luaL_checkudata(L, 1, "sokol.BufferUsage");
    self->stream_update = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_usage__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertex_buffer") == 0) return l_sg_buffer_usage_get_vertex_buffer(L);
    if (strcmp(key, "index_buffer") == 0) return l_sg_buffer_usage_get_index_buffer(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_buffer_usage_get_storage_buffer(L);
    if (strcmp(key, "immutable") == 0) return l_sg_buffer_usage_get_immutable(L);
    if (strcmp(key, "dynamic_update") == 0) return l_sg_buffer_usage_get_dynamic_update(L);
    if (strcmp(key, "stream_update") == 0) return l_sg_buffer_usage_get_stream_update(L);
    return 0;
}

static int l_sg_buffer_usage__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertex_buffer") == 0) return l_sg_buffer_usage_set_vertex_buffer(L);
    if (strcmp(key, "index_buffer") == 0) return l_sg_buffer_usage_set_index_buffer(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_buffer_usage_set_storage_buffer(L);
    if (strcmp(key, "immutable") == 0) return l_sg_buffer_usage_set_immutable(L);
    if (strcmp(key, "dynamic_update") == 0) return l_sg_buffer_usage_set_dynamic_update(L);
    if (strcmp(key, "stream_update") == 0) return l_sg_buffer_usage_set_stream_update(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_buffer_desc_new(lua_State *L) {
    sg_buffer_desc* ud = (sg_buffer_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_desc), 0);
    memset(ud, 0, sizeof(sg_buffer_desc));
    luaL_setmetatable(L, "sokol.BufferDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size");
        if (!lua_isnil(L, -1)) {
            ud->size = (size_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "usage");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_buffer_usage_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_buffer_usage* val = (sg_buffer_usage*)luaL_testudata(L, -1, "sokol.BufferUsage");
                if (val) ud->usage = *val;
                lua_pop(L, 1);
            } else {
                sg_buffer_usage* val = (sg_buffer_usage*)luaL_testudata(L, -1, "sokol.BufferUsage");
                if (val) ud->usage = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "data");
        if (!lua_isnil(L, -1)) {
            if (lua_isstring(L, -1)) {
                /* Initialize sg_range from binary string */
                size_t len;
                const char* data = lua_tolstring(L, -1, &len);
                ud->data.ptr = data;
                ud->data.size = len;
            } else if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_range_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                if (val) ud->data = *val;
                lua_pop(L, 1);
            } else {
                sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                if (val) ud->data = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_buffers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->gl_buffers[i] = (uint32_t)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mtl_buffers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_buffer");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_buffer = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu_buffer");
        if (!lua_isnil(L, -1)) {
            ud->wgpu_buffer = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_buffer_desc_get__start_canary(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_buffer_desc_set__start_canary(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_desc_get_size(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sg_buffer_desc_set_size(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_desc_get_usage(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_buffer_usage* ud = (sg_buffer_usage*)lua_newuserdatauv(L, sizeof(sg_buffer_usage), 0);
    *ud = self->usage;
    luaL_setmetatable(L, "sokol.BufferUsage");
    return 1;
}

static int l_sg_buffer_desc_set_usage(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_buffer_usage* val = (sg_buffer_usage*)luaL_checkudata(L, 2, "sokol.BufferUsage");
    self->usage = *val;
    return 0;
}

static int l_sg_buffer_desc_get_data(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_range* ud = (sg_range*)lua_newuserdatauv(L, sizeof(sg_range), 0);
    *ud = self->data;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sg_buffer_desc_set_data(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_range* val = (sg_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->data = *val;
    return 0;
}

static int l_sg_buffer_desc_get_label(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_buffer_desc_set_label(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_buffer_desc_get_gl_buffers(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushinteger(L, (lua_Integer)self->gl_buffers[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_buffer_desc_set_gl_buffers(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->gl_buffers[i] = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_buffer_desc_get_mtl_buffers(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushnil(L); /* unsupported array type */
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_buffer_desc_set_mtl_buffers(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_buffer_desc_get_d3d11_buffer(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushlightuserdata(L, (void*)self->d3d11_buffer);
    return 1;
}

static int l_sg_buffer_desc_set_d3d11_buffer(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->d3d11_buffer = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_buffer_desc_get_wgpu_buffer(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushlightuserdata(L, (void*)self->wgpu_buffer);
    return 1;
}

static int l_sg_buffer_desc_set_wgpu_buffer(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->wgpu_buffer = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_buffer_desc_get__end_canary(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_buffer_desc_set__end_canary(lua_State *L) {
    sg_buffer_desc* self = (sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_buffer_desc_get__start_canary(L);
    if (strcmp(key, "size") == 0) return l_sg_buffer_desc_get_size(L);
    if (strcmp(key, "usage") == 0) return l_sg_buffer_desc_get_usage(L);
    if (strcmp(key, "data") == 0) return l_sg_buffer_desc_get_data(L);
    if (strcmp(key, "label") == 0) return l_sg_buffer_desc_get_label(L);
    if (strcmp(key, "gl_buffers") == 0) return l_sg_buffer_desc_get_gl_buffers(L);
    if (strcmp(key, "mtl_buffers") == 0) return l_sg_buffer_desc_get_mtl_buffers(L);
    if (strcmp(key, "d3d11_buffer") == 0) return l_sg_buffer_desc_get_d3d11_buffer(L);
    if (strcmp(key, "wgpu_buffer") == 0) return l_sg_buffer_desc_get_wgpu_buffer(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_buffer_desc_get__end_canary(L);
    return 0;
}

static int l_sg_buffer_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_buffer_desc_set__start_canary(L);
    if (strcmp(key, "size") == 0) return l_sg_buffer_desc_set_size(L);
    if (strcmp(key, "usage") == 0) return l_sg_buffer_desc_set_usage(L);
    if (strcmp(key, "data") == 0) return l_sg_buffer_desc_set_data(L);
    if (strcmp(key, "label") == 0) return l_sg_buffer_desc_set_label(L);
    if (strcmp(key, "gl_buffers") == 0) return l_sg_buffer_desc_set_gl_buffers(L);
    if (strcmp(key, "mtl_buffers") == 0) return l_sg_buffer_desc_set_mtl_buffers(L);
    if (strcmp(key, "d3d11_buffer") == 0) return l_sg_buffer_desc_set_d3d11_buffer(L);
    if (strcmp(key, "wgpu_buffer") == 0) return l_sg_buffer_desc_set_wgpu_buffer(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_buffer_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_usage_new(lua_State *L) {
    sg_image_usage* ud = (sg_image_usage*)lua_newuserdatauv(L, sizeof(sg_image_usage), 0);
    memset(ud, 0, sizeof(sg_image_usage));
    luaL_setmetatable(L, "sokol.ImageUsage");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "storage_image");
        if (!lua_isnil(L, -1)) {
            ud->storage_image = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "color_attachment");
        if (!lua_isnil(L, -1)) {
            ud->color_attachment = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_attachment");
        if (!lua_isnil(L, -1)) {
            ud->resolve_attachment = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_attachment");
        if (!lua_isnil(L, -1)) {
            ud->depth_stencil_attachment = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "immutable");
        if (!lua_isnil(L, -1)) {
            ud->immutable = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dynamic_update");
        if (!lua_isnil(L, -1)) {
            ud->dynamic_update = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "stream_update");
        if (!lua_isnil(L, -1)) {
            ud->stream_update = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_usage_get_storage_image(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->storage_image);
    return 1;
}

static int l_sg_image_usage_set_storage_image(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->storage_image = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_color_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->color_attachment);
    return 1;
}

static int l_sg_image_usage_set_color_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->color_attachment = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_resolve_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->resolve_attachment);
    return 1;
}

static int l_sg_image_usage_set_resolve_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->resolve_attachment = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_depth_stencil_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->depth_stencil_attachment);
    return 1;
}

static int l_sg_image_usage_set_depth_stencil_attachment(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->depth_stencil_attachment = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_immutable(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->immutable);
    return 1;
}

static int l_sg_image_usage_set_immutable(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->immutable = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_dynamic_update(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->dynamic_update);
    return 1;
}

static int l_sg_image_usage_set_dynamic_update(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->dynamic_update = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage_get_stream_update(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    lua_pushboolean(L, self->stream_update);
    return 1;
}

static int l_sg_image_usage_set_stream_update(lua_State *L) {
    sg_image_usage* self = (sg_image_usage*)luaL_checkudata(L, 1, "sokol.ImageUsage");
    self->stream_update = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_image_usage__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "storage_image") == 0) return l_sg_image_usage_get_storage_image(L);
    if (strcmp(key, "color_attachment") == 0) return l_sg_image_usage_get_color_attachment(L);
    if (strcmp(key, "resolve_attachment") == 0) return l_sg_image_usage_get_resolve_attachment(L);
    if (strcmp(key, "depth_stencil_attachment") == 0) return l_sg_image_usage_get_depth_stencil_attachment(L);
    if (strcmp(key, "immutable") == 0) return l_sg_image_usage_get_immutable(L);
    if (strcmp(key, "dynamic_update") == 0) return l_sg_image_usage_get_dynamic_update(L);
    if (strcmp(key, "stream_update") == 0) return l_sg_image_usage_get_stream_update(L);
    return 0;
}

static int l_sg_image_usage__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "storage_image") == 0) return l_sg_image_usage_set_storage_image(L);
    if (strcmp(key, "color_attachment") == 0) return l_sg_image_usage_set_color_attachment(L);
    if (strcmp(key, "resolve_attachment") == 0) return l_sg_image_usage_set_resolve_attachment(L);
    if (strcmp(key, "depth_stencil_attachment") == 0) return l_sg_image_usage_set_depth_stencil_attachment(L);
    if (strcmp(key, "immutable") == 0) return l_sg_image_usage_set_immutable(L);
    if (strcmp(key, "dynamic_update") == 0) return l_sg_image_usage_set_dynamic_update(L);
    if (strcmp(key, "stream_update") == 0) return l_sg_image_usage_set_stream_update(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_data_new(lua_State *L) {
    sg_image_data* ud = (sg_image_data*)lua_newuserdatauv(L, sizeof(sg_image_data), 0);
    memset(ud, 0, sizeof(sg_image_data));
    luaL_setmetatable(L, "sokol.ImageData");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "mip_levels");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 16; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_isstring(L, -1)) {
                        /* Initialize sg_range from binary string */
                        size_t len;
                        const char* data = lua_tolstring(L, -1, &len);
                        ud->mip_levels[i].ptr = data;
                        ud->mip_levels[i].size = len;
                    } else if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_range_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                        if (val) ud->mip_levels[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                        if (val) ud->mip_levels[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_data_get_mip_levels(lua_State *L) {
    sg_image_data* self = (sg_image_data*)luaL_checkudata(L, 1, "sokol.ImageData");
    lua_newtable(L);
    for (int i = 0; i < 16; i++) {
        sg_range* ud = (sg_range*)lua_newuserdatauv(L, sizeof(sg_range), 0);
        *ud = self->mip_levels[i];
        luaL_setmetatable(L, "sokol.Range");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_image_data_set_mip_levels(lua_State *L) {
    sg_image_data* self = (sg_image_data*)luaL_checkudata(L, 1, "sokol.ImageData");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 16; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
            if (val) self->mip_levels[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_image_data__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "mip_levels") == 0) return l_sg_image_data_get_mip_levels(L);
    return 0;
}

static int l_sg_image_data__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "mip_levels") == 0) return l_sg_image_data_set_mip_levels(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_desc_new(lua_State *L) {
    sg_image_desc* ud = (sg_image_desc*)lua_newuserdatauv(L, sizeof(sg_image_desc), 0);
    memset(ud, 0, sizeof(sg_image_desc));
    luaL_setmetatable(L, "sokol.ImageDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "type");
        if (!lua_isnil(L, -1)) {
            ud->type = (sg_image_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "usage");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_usage_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_usage* val = (sg_image_usage*)luaL_testudata(L, -1, "sokol.ImageUsage");
                if (val) ud->usage = *val;
                lua_pop(L, 1);
            } else {
                sg_image_usage* val = (sg_image_usage*)luaL_testudata(L, -1, "sokol.ImageUsage");
                if (val) ud->usage = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "width");
        if (!lua_isnil(L, -1)) {
            ud->width = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "height");
        if (!lua_isnil(L, -1)) {
            ud->height = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_slices");
        if (!lua_isnil(L, -1)) {
            ud->num_slices = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_mipmaps");
        if (!lua_isnil(L, -1)) {
            ud->num_mipmaps = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pixel_format");
        if (!lua_isnil(L, -1)) {
            ud->pixel_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sample_count");
        if (!lua_isnil(L, -1)) {
            ud->sample_count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "data");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_data_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_data* val = (sg_image_data*)luaL_testudata(L, -1, "sokol.ImageData");
                if (val) ud->data = *val;
                lua_pop(L, 1);
            } else {
                sg_image_data* val = (sg_image_data*)luaL_testudata(L, -1, "sokol.ImageData");
                if (val) ud->data = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_textures");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->gl_textures[i] = (uint32_t)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_texture_target");
        if (!lua_isnil(L, -1)) {
            ud->gl_texture_target = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mtl_textures");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_texture");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_texture = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu_texture");
        if (!lua_isnil(L, -1)) {
            ud->wgpu_texture = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_desc_get__start_canary(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_image_desc_set__start_canary(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_type(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->type);
    return 1;
}

static int l_sg_image_desc_set_type(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->type = (sg_image_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_usage(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image_usage* ud = (sg_image_usage*)lua_newuserdatauv(L, sizeof(sg_image_usage), 0);
    *ud = self->usage;
    luaL_setmetatable(L, "sokol.ImageUsage");
    return 1;
}

static int l_sg_image_desc_set_usage(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image_usage* val = (sg_image_usage*)luaL_checkudata(L, 2, "sokol.ImageUsage");
    self->usage = *val;
    return 0;
}

static int l_sg_image_desc_get_width(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->width);
    return 1;
}

static int l_sg_image_desc_set_width(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_height(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->height);
    return 1;
}

static int l_sg_image_desc_set_height(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_num_slices(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->num_slices);
    return 1;
}

static int l_sg_image_desc_set_num_slices(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->num_slices = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_num_mipmaps(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->num_mipmaps);
    return 1;
}

static int l_sg_image_desc_set_num_mipmaps(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->num_mipmaps = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_pixel_format(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->pixel_format);
    return 1;
}

static int l_sg_image_desc_set_pixel_format(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->pixel_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_sample_count(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sg_image_desc_set_sample_count(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_data(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image_data* ud = (sg_image_data*)lua_newuserdatauv(L, sizeof(sg_image_data), 0);
    *ud = self->data;
    luaL_setmetatable(L, "sokol.ImageData");
    return 1;
}

static int l_sg_image_desc_set_data(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image_data* val = (sg_image_data*)luaL_checkudata(L, 2, "sokol.ImageData");
    self->data = *val;
    return 0;
}

static int l_sg_image_desc_get_label(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_image_desc_set_label(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_image_desc_get_gl_textures(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushinteger(L, (lua_Integer)self->gl_textures[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_image_desc_set_gl_textures(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->gl_textures[i] = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_image_desc_get_gl_texture_target(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->gl_texture_target);
    return 1;
}

static int l_sg_image_desc_set_gl_texture_target(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->gl_texture_target = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc_get_mtl_textures(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushnil(L); /* unsupported array type */
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_image_desc_set_mtl_textures(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_image_desc_get_d3d11_texture(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushlightuserdata(L, (void*)self->d3d11_texture);
    return 1;
}

static int l_sg_image_desc_set_d3d11_texture(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->d3d11_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_image_desc_get_wgpu_texture(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushlightuserdata(L, (void*)self->wgpu_texture);
    return 1;
}

static int l_sg_image_desc_set_wgpu_texture(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->wgpu_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_image_desc_get__end_canary(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_image_desc_set__end_canary(lua_State *L) {
    sg_image_desc* self = (sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_image_desc_get__start_canary(L);
    if (strcmp(key, "type") == 0) return l_sg_image_desc_get_type(L);
    if (strcmp(key, "usage") == 0) return l_sg_image_desc_get_usage(L);
    if (strcmp(key, "width") == 0) return l_sg_image_desc_get_width(L);
    if (strcmp(key, "height") == 0) return l_sg_image_desc_get_height(L);
    if (strcmp(key, "num_slices") == 0) return l_sg_image_desc_get_num_slices(L);
    if (strcmp(key, "num_mipmaps") == 0) return l_sg_image_desc_get_num_mipmaps(L);
    if (strcmp(key, "pixel_format") == 0) return l_sg_image_desc_get_pixel_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_image_desc_get_sample_count(L);
    if (strcmp(key, "data") == 0) return l_sg_image_desc_get_data(L);
    if (strcmp(key, "label") == 0) return l_sg_image_desc_get_label(L);
    if (strcmp(key, "gl_textures") == 0) return l_sg_image_desc_get_gl_textures(L);
    if (strcmp(key, "gl_texture_target") == 0) return l_sg_image_desc_get_gl_texture_target(L);
    if (strcmp(key, "mtl_textures") == 0) return l_sg_image_desc_get_mtl_textures(L);
    if (strcmp(key, "d3d11_texture") == 0) return l_sg_image_desc_get_d3d11_texture(L);
    if (strcmp(key, "wgpu_texture") == 0) return l_sg_image_desc_get_wgpu_texture(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_image_desc_get__end_canary(L);
    return 0;
}

static int l_sg_image_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_image_desc_set__start_canary(L);
    if (strcmp(key, "type") == 0) return l_sg_image_desc_set_type(L);
    if (strcmp(key, "usage") == 0) return l_sg_image_desc_set_usage(L);
    if (strcmp(key, "width") == 0) return l_sg_image_desc_set_width(L);
    if (strcmp(key, "height") == 0) return l_sg_image_desc_set_height(L);
    if (strcmp(key, "num_slices") == 0) return l_sg_image_desc_set_num_slices(L);
    if (strcmp(key, "num_mipmaps") == 0) return l_sg_image_desc_set_num_mipmaps(L);
    if (strcmp(key, "pixel_format") == 0) return l_sg_image_desc_set_pixel_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_image_desc_set_sample_count(L);
    if (strcmp(key, "data") == 0) return l_sg_image_desc_set_data(L);
    if (strcmp(key, "label") == 0) return l_sg_image_desc_set_label(L);
    if (strcmp(key, "gl_textures") == 0) return l_sg_image_desc_set_gl_textures(L);
    if (strcmp(key, "gl_texture_target") == 0) return l_sg_image_desc_set_gl_texture_target(L);
    if (strcmp(key, "mtl_textures") == 0) return l_sg_image_desc_set_mtl_textures(L);
    if (strcmp(key, "d3d11_texture") == 0) return l_sg_image_desc_set_d3d11_texture(L);
    if (strcmp(key, "wgpu_texture") == 0) return l_sg_image_desc_set_wgpu_texture(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_image_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_sampler_desc_new(lua_State *L) {
    sg_sampler_desc* ud = (sg_sampler_desc*)lua_newuserdatauv(L, sizeof(sg_sampler_desc), 0);
    memset(ud, 0, sizeof(sg_sampler_desc));
    luaL_setmetatable(L, "sokol.SamplerDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "min_filter");
        if (!lua_isnil(L, -1)) {
            ud->min_filter = (sg_filter)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mag_filter");
        if (!lua_isnil(L, -1)) {
            ud->mag_filter = (sg_filter)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mipmap_filter");
        if (!lua_isnil(L, -1)) {
            ud->mipmap_filter = (sg_filter)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wrap_u");
        if (!lua_isnil(L, -1)) {
            ud->wrap_u = (sg_wrap)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wrap_v");
        if (!lua_isnil(L, -1)) {
            ud->wrap_v = (sg_wrap)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wrap_w");
        if (!lua_isnil(L, -1)) {
            ud->wrap_w = (sg_wrap)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "min_lod");
        if (!lua_isnil(L, -1)) {
            ud->min_lod = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_lod");
        if (!lua_isnil(L, -1)) {
            ud->max_lod = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "border_color");
        if (!lua_isnil(L, -1)) {
            ud->border_color = (sg_border_color)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compare");
        if (!lua_isnil(L, -1)) {
            ud->compare = (sg_compare_func)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_anisotropy");
        if (!lua_isnil(L, -1)) {
            ud->max_anisotropy = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl_sampler");
        if (!lua_isnil(L, -1)) {
            ud->gl_sampler = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mtl_sampler");
        if (!lua_isnil(L, -1)) {
            ud->mtl_sampler = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_sampler");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_sampler = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu_sampler");
        if (!lua_isnil(L, -1)) {
            ud->wgpu_sampler = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_sampler_desc_get__start_canary(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_sampler_desc_set__start_canary(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_min_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->min_filter);
    return 1;
}

static int l_sg_sampler_desc_set_min_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->min_filter = (sg_filter)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_mag_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->mag_filter);
    return 1;
}

static int l_sg_sampler_desc_set_mag_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->mag_filter = (sg_filter)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_mipmap_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->mipmap_filter);
    return 1;
}

static int l_sg_sampler_desc_set_mipmap_filter(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->mipmap_filter = (sg_filter)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_wrap_u(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->wrap_u);
    return 1;
}

static int l_sg_sampler_desc_set_wrap_u(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->wrap_u = (sg_wrap)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_wrap_v(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->wrap_v);
    return 1;
}

static int l_sg_sampler_desc_set_wrap_v(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->wrap_v = (sg_wrap)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_wrap_w(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->wrap_w);
    return 1;
}

static int l_sg_sampler_desc_set_wrap_w(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->wrap_w = (sg_wrap)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_min_lod(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushnumber(L, (lua_Number)self->min_lod);
    return 1;
}

static int l_sg_sampler_desc_set_min_lod(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->min_lod = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_max_lod(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushnumber(L, (lua_Number)self->max_lod);
    return 1;
}

static int l_sg_sampler_desc_set_max_lod(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->max_lod = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_border_color(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->border_color);
    return 1;
}

static int l_sg_sampler_desc_set_border_color(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->border_color = (sg_border_color)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_compare(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->compare);
    return 1;
}

static int l_sg_sampler_desc_set_compare(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->compare = (sg_compare_func)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_max_anisotropy(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->max_anisotropy);
    return 1;
}

static int l_sg_sampler_desc_set_max_anisotropy(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->max_anisotropy = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_label(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_sampler_desc_set_label(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_gl_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->gl_sampler);
    return 1;
}

static int l_sg_sampler_desc_set_gl_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->gl_sampler = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_mtl_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushlightuserdata(L, (void*)self->mtl_sampler);
    return 1;
}

static int l_sg_sampler_desc_set_mtl_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->mtl_sampler = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_d3d11_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushlightuserdata(L, (void*)self->d3d11_sampler);
    return 1;
}

static int l_sg_sampler_desc_set_d3d11_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->d3d11_sampler = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get_wgpu_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushlightuserdata(L, (void*)self->wgpu_sampler);
    return 1;
}

static int l_sg_sampler_desc_set_wgpu_sampler(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->wgpu_sampler = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_sampler_desc_get__end_canary(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_sampler_desc_set__end_canary(lua_State *L) {
    sg_sampler_desc* self = (sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_sampler_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_sampler_desc_get__start_canary(L);
    if (strcmp(key, "min_filter") == 0) return l_sg_sampler_desc_get_min_filter(L);
    if (strcmp(key, "mag_filter") == 0) return l_sg_sampler_desc_get_mag_filter(L);
    if (strcmp(key, "mipmap_filter") == 0) return l_sg_sampler_desc_get_mipmap_filter(L);
    if (strcmp(key, "wrap_u") == 0) return l_sg_sampler_desc_get_wrap_u(L);
    if (strcmp(key, "wrap_v") == 0) return l_sg_sampler_desc_get_wrap_v(L);
    if (strcmp(key, "wrap_w") == 0) return l_sg_sampler_desc_get_wrap_w(L);
    if (strcmp(key, "min_lod") == 0) return l_sg_sampler_desc_get_min_lod(L);
    if (strcmp(key, "max_lod") == 0) return l_sg_sampler_desc_get_max_lod(L);
    if (strcmp(key, "border_color") == 0) return l_sg_sampler_desc_get_border_color(L);
    if (strcmp(key, "compare") == 0) return l_sg_sampler_desc_get_compare(L);
    if (strcmp(key, "max_anisotropy") == 0) return l_sg_sampler_desc_get_max_anisotropy(L);
    if (strcmp(key, "label") == 0) return l_sg_sampler_desc_get_label(L);
    if (strcmp(key, "gl_sampler") == 0) return l_sg_sampler_desc_get_gl_sampler(L);
    if (strcmp(key, "mtl_sampler") == 0) return l_sg_sampler_desc_get_mtl_sampler(L);
    if (strcmp(key, "d3d11_sampler") == 0) return l_sg_sampler_desc_get_d3d11_sampler(L);
    if (strcmp(key, "wgpu_sampler") == 0) return l_sg_sampler_desc_get_wgpu_sampler(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_sampler_desc_get__end_canary(L);
    return 0;
}

static int l_sg_sampler_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_sampler_desc_set__start_canary(L);
    if (strcmp(key, "min_filter") == 0) return l_sg_sampler_desc_set_min_filter(L);
    if (strcmp(key, "mag_filter") == 0) return l_sg_sampler_desc_set_mag_filter(L);
    if (strcmp(key, "mipmap_filter") == 0) return l_sg_sampler_desc_set_mipmap_filter(L);
    if (strcmp(key, "wrap_u") == 0) return l_sg_sampler_desc_set_wrap_u(L);
    if (strcmp(key, "wrap_v") == 0) return l_sg_sampler_desc_set_wrap_v(L);
    if (strcmp(key, "wrap_w") == 0) return l_sg_sampler_desc_set_wrap_w(L);
    if (strcmp(key, "min_lod") == 0) return l_sg_sampler_desc_set_min_lod(L);
    if (strcmp(key, "max_lod") == 0) return l_sg_sampler_desc_set_max_lod(L);
    if (strcmp(key, "border_color") == 0) return l_sg_sampler_desc_set_border_color(L);
    if (strcmp(key, "compare") == 0) return l_sg_sampler_desc_set_compare(L);
    if (strcmp(key, "max_anisotropy") == 0) return l_sg_sampler_desc_set_max_anisotropy(L);
    if (strcmp(key, "label") == 0) return l_sg_sampler_desc_set_label(L);
    if (strcmp(key, "gl_sampler") == 0) return l_sg_sampler_desc_set_gl_sampler(L);
    if (strcmp(key, "mtl_sampler") == 0) return l_sg_sampler_desc_set_mtl_sampler(L);
    if (strcmp(key, "d3d11_sampler") == 0) return l_sg_sampler_desc_set_d3d11_sampler(L);
    if (strcmp(key, "wgpu_sampler") == 0) return l_sg_sampler_desc_set_wgpu_sampler(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_sampler_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_function_new(lua_State *L) {
    sg_shader_function* ud = (sg_shader_function*)lua_newuserdatauv(L, sizeof(sg_shader_function), 0);
    memset(ud, 0, sizeof(sg_shader_function));
    luaL_setmetatable(L, "sokol.ShaderFunction");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "source");
        if (!lua_isnil(L, -1)) {
            ud->source = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bytecode");
        if (!lua_isnil(L, -1)) {
            if (lua_isstring(L, -1)) {
                /* Initialize sg_range from binary string */
                size_t len;
                const char* data = lua_tolstring(L, -1, &len);
                ud->bytecode.ptr = data;
                ud->bytecode.size = len;
            } else if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_range_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                if (val) ud->bytecode = *val;
                lua_pop(L, 1);
            } else {
                sg_range* val = (sg_range*)luaL_testudata(L, -1, "sokol.Range");
                if (val) ud->bytecode = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "entry");
        if (!lua_isnil(L, -1)) {
            ud->entry = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_target");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_target = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11_filepath");
        if (!lua_isnil(L, -1)) {
            ud->d3d11_filepath = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_function_get_source(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    lua_pushstring(L, self->source);
    return 1;
}

static int l_sg_shader_function_set_source(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    self->source = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_function_get_bytecode(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    sg_range* ud = (sg_range*)lua_newuserdatauv(L, sizeof(sg_range), 0);
    *ud = self->bytecode;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sg_shader_function_set_bytecode(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    sg_range* val = (sg_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->bytecode = *val;
    return 0;
}

static int l_sg_shader_function_get_entry(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    lua_pushstring(L, self->entry);
    return 1;
}

static int l_sg_shader_function_set_entry(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    self->entry = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_function_get_d3d11_target(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    lua_pushstring(L, self->d3d11_target);
    return 1;
}

static int l_sg_shader_function_set_d3d11_target(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    self->d3d11_target = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_function_get_d3d11_filepath(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    lua_pushstring(L, self->d3d11_filepath);
    return 1;
}

static int l_sg_shader_function_set_d3d11_filepath(lua_State *L) {
    sg_shader_function* self = (sg_shader_function*)luaL_checkudata(L, 1, "sokol.ShaderFunction");
    self->d3d11_filepath = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_function__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "source") == 0) return l_sg_shader_function_get_source(L);
    if (strcmp(key, "bytecode") == 0) return l_sg_shader_function_get_bytecode(L);
    if (strcmp(key, "entry") == 0) return l_sg_shader_function_get_entry(L);
    if (strcmp(key, "d3d11_target") == 0) return l_sg_shader_function_get_d3d11_target(L);
    if (strcmp(key, "d3d11_filepath") == 0) return l_sg_shader_function_get_d3d11_filepath(L);
    return 0;
}

static int l_sg_shader_function__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "source") == 0) return l_sg_shader_function_set_source(L);
    if (strcmp(key, "bytecode") == 0) return l_sg_shader_function_set_bytecode(L);
    if (strcmp(key, "entry") == 0) return l_sg_shader_function_set_entry(L);
    if (strcmp(key, "d3d11_target") == 0) return l_sg_shader_function_set_d3d11_target(L);
    if (strcmp(key, "d3d11_filepath") == 0) return l_sg_shader_function_set_d3d11_filepath(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_vertex_attr_new(lua_State *L) {
    sg_shader_vertex_attr* ud = (sg_shader_vertex_attr*)lua_newuserdatauv(L, sizeof(sg_shader_vertex_attr), 0);
    memset(ud, 0, sizeof(sg_shader_vertex_attr));
    luaL_setmetatable(L, "sokol.ShaderVertexAttr");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "base_type");
        if (!lua_isnil(L, -1)) {
            ud->base_type = (sg_shader_attr_base_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_name");
        if (!lua_isnil(L, -1)) {
            ud->glsl_name = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_sem_name");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_sem_name = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_sem_index");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_sem_index = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_vertex_attr_get_base_type(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    lua_pushinteger(L, (lua_Integer)self->base_type);
    return 1;
}

static int l_sg_shader_vertex_attr_set_base_type(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    self->base_type = (sg_shader_attr_base_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_vertex_attr_get_glsl_name(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    lua_pushstring(L, self->glsl_name);
    return 1;
}

static int l_sg_shader_vertex_attr_set_glsl_name(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    self->glsl_name = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_vertex_attr_get_hlsl_sem_name(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    lua_pushstring(L, self->hlsl_sem_name);
    return 1;
}

static int l_sg_shader_vertex_attr_set_hlsl_sem_name(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    self->hlsl_sem_name = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_vertex_attr_get_hlsl_sem_index(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    lua_pushinteger(L, (lua_Integer)self->hlsl_sem_index);
    return 1;
}

static int l_sg_shader_vertex_attr_set_hlsl_sem_index(lua_State *L) {
    sg_shader_vertex_attr* self = (sg_shader_vertex_attr*)luaL_checkudata(L, 1, "sokol.ShaderVertexAttr");
    self->hlsl_sem_index = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_vertex_attr__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base_type") == 0) return l_sg_shader_vertex_attr_get_base_type(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_shader_vertex_attr_get_glsl_name(L);
    if (strcmp(key, "hlsl_sem_name") == 0) return l_sg_shader_vertex_attr_get_hlsl_sem_name(L);
    if (strcmp(key, "hlsl_sem_index") == 0) return l_sg_shader_vertex_attr_get_hlsl_sem_index(L);
    return 0;
}

static int l_sg_shader_vertex_attr__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base_type") == 0) return l_sg_shader_vertex_attr_set_base_type(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_shader_vertex_attr_set_glsl_name(L);
    if (strcmp(key, "hlsl_sem_name") == 0) return l_sg_shader_vertex_attr_set_hlsl_sem_name(L);
    if (strcmp(key, "hlsl_sem_index") == 0) return l_sg_shader_vertex_attr_set_hlsl_sem_index(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_glsl_shader_uniform_new(lua_State *L) {
    sg_glsl_shader_uniform* ud = (sg_glsl_shader_uniform*)lua_newuserdatauv(L, sizeof(sg_glsl_shader_uniform), 0);
    memset(ud, 0, sizeof(sg_glsl_shader_uniform));
    luaL_setmetatable(L, "sokol.GlslShaderUniform");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "type");
        if (!lua_isnil(L, -1)) {
            ud->type = (sg_uniform_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "array_count");
        if (!lua_isnil(L, -1)) {
            ud->array_count = (uint16_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_name");
        if (!lua_isnil(L, -1)) {
            ud->glsl_name = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_glsl_shader_uniform_get_type(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    lua_pushinteger(L, (lua_Integer)self->type);
    return 1;
}

static int l_sg_glsl_shader_uniform_set_type(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    self->type = (sg_uniform_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_glsl_shader_uniform_get_array_count(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    lua_pushinteger(L, (lua_Integer)self->array_count);
    return 1;
}

static int l_sg_glsl_shader_uniform_set_array_count(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    self->array_count = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_glsl_shader_uniform_get_glsl_name(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    lua_pushstring(L, self->glsl_name);
    return 1;
}

static int l_sg_glsl_shader_uniform_set_glsl_name(lua_State *L) {
    sg_glsl_shader_uniform* self = (sg_glsl_shader_uniform*)luaL_checkudata(L, 1, "sokol.GlslShaderUniform");
    self->glsl_name = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_glsl_shader_uniform__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "type") == 0) return l_sg_glsl_shader_uniform_get_type(L);
    if (strcmp(key, "array_count") == 0) return l_sg_glsl_shader_uniform_get_array_count(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_glsl_shader_uniform_get_glsl_name(L);
    return 0;
}

static int l_sg_glsl_shader_uniform__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "type") == 0) return l_sg_glsl_shader_uniform_set_type(L);
    if (strcmp(key, "array_count") == 0) return l_sg_glsl_shader_uniform_set_array_count(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_glsl_shader_uniform_set_glsl_name(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_uniform_block_new(lua_State *L) {
    sg_shader_uniform_block* ud = (sg_shader_uniform_block*)lua_newuserdatauv(L, sizeof(sg_shader_uniform_block), 0);
    memset(ud, 0, sizeof(sg_shader_uniform_block));
    luaL_setmetatable(L, "sokol.ShaderUniformBlock");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size");
        if (!lua_isnil(L, -1)) {
            ud->size = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_b_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_b_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msl_buffer_n");
        if (!lua_isnil(L, -1)) {
            ud->msl_buffer_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgsl_group0_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->wgsl_group0_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "spirv_set0_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->spirv_set0_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "layout");
        if (!lua_isnil(L, -1)) {
            ud->layout = (sg_uniform_layout)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_uniforms");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 16; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_glsl_shader_uniform_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_glsl_shader_uniform* val = (sg_glsl_shader_uniform*)luaL_testudata(L, -1, "sokol.GlslShaderUniform");
                        if (val) ud->glsl_uniforms[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_glsl_shader_uniform* val = (sg_glsl_shader_uniform*)luaL_testudata(L, -1, "sokol.GlslShaderUniform");
                        if (val) ud->glsl_uniforms[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_uniform_block_get_stage(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_uniform_block_set_stage(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_size(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sg_shader_uniform_block_set_size(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->size = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_hlsl_register_b_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_b_n);
    return 1;
}

static int l_sg_shader_uniform_block_set_hlsl_register_b_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->hlsl_register_b_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_msl_buffer_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->msl_buffer_n);
    return 1;
}

static int l_sg_shader_uniform_block_set_msl_buffer_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->msl_buffer_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_wgsl_group0_binding_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->wgsl_group0_binding_n);
    return 1;
}

static int l_sg_shader_uniform_block_set_wgsl_group0_binding_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->wgsl_group0_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_spirv_set0_binding_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->spirv_set0_binding_n);
    return 1;
}

static int l_sg_shader_uniform_block_set_spirv_set0_binding_n(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->spirv_set0_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_layout(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_pushinteger(L, (lua_Integer)self->layout);
    return 1;
}

static int l_sg_shader_uniform_block_set_layout(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    self->layout = (sg_uniform_layout)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_uniform_block_get_glsl_uniforms(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    lua_newtable(L);
    for (int i = 0; i < 16; i++) {
        sg_glsl_shader_uniform* ud = (sg_glsl_shader_uniform*)lua_newuserdatauv(L, sizeof(sg_glsl_shader_uniform), 0);
        *ud = self->glsl_uniforms[i];
        luaL_setmetatable(L, "sokol.GlslShaderUniform");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_uniform_block_set_glsl_uniforms(lua_State *L) {
    sg_shader_uniform_block* self = (sg_shader_uniform_block*)luaL_checkudata(L, 1, "sokol.ShaderUniformBlock");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 16; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_glsl_shader_uniform* val = (sg_glsl_shader_uniform*)luaL_testudata(L, -1, "sokol.GlslShaderUniform");
            if (val) self->glsl_uniforms[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_uniform_block__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_uniform_block_get_stage(L);
    if (strcmp(key, "size") == 0) return l_sg_shader_uniform_block_get_size(L);
    if (strcmp(key, "hlsl_register_b_n") == 0) return l_sg_shader_uniform_block_get_hlsl_register_b_n(L);
    if (strcmp(key, "msl_buffer_n") == 0) return l_sg_shader_uniform_block_get_msl_buffer_n(L);
    if (strcmp(key, "wgsl_group0_binding_n") == 0) return l_sg_shader_uniform_block_get_wgsl_group0_binding_n(L);
    if (strcmp(key, "spirv_set0_binding_n") == 0) return l_sg_shader_uniform_block_get_spirv_set0_binding_n(L);
    if (strcmp(key, "layout") == 0) return l_sg_shader_uniform_block_get_layout(L);
    if (strcmp(key, "glsl_uniforms") == 0) return l_sg_shader_uniform_block_get_glsl_uniforms(L);
    return 0;
}

static int l_sg_shader_uniform_block__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_uniform_block_set_stage(L);
    if (strcmp(key, "size") == 0) return l_sg_shader_uniform_block_set_size(L);
    if (strcmp(key, "hlsl_register_b_n") == 0) return l_sg_shader_uniform_block_set_hlsl_register_b_n(L);
    if (strcmp(key, "msl_buffer_n") == 0) return l_sg_shader_uniform_block_set_msl_buffer_n(L);
    if (strcmp(key, "wgsl_group0_binding_n") == 0) return l_sg_shader_uniform_block_set_wgsl_group0_binding_n(L);
    if (strcmp(key, "spirv_set0_binding_n") == 0) return l_sg_shader_uniform_block_set_spirv_set0_binding_n(L);
    if (strcmp(key, "layout") == 0) return l_sg_shader_uniform_block_set_layout(L);
    if (strcmp(key, "glsl_uniforms") == 0) return l_sg_shader_uniform_block_set_glsl_uniforms(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_texture_view_new(lua_State *L) {
    sg_shader_texture_view* ud = (sg_shader_texture_view*)lua_newuserdatauv(L, sizeof(sg_shader_texture_view), 0);
    memset(ud, 0, sizeof(sg_shader_texture_view));
    luaL_setmetatable(L, "sokol.ShaderTextureView");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "image_type");
        if (!lua_isnil(L, -1)) {
            ud->image_type = (sg_image_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sample_type");
        if (!lua_isnil(L, -1)) {
            ud->sample_type = (sg_image_sample_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "multisampled");
        if (!lua_isnil(L, -1)) {
            ud->multisampled = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_t_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_t_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msl_texture_n");
        if (!lua_isnil(L, -1)) {
            ud->msl_texture_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgsl_group1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->wgsl_group1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "spirv_set1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->spirv_set1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_texture_view_get_stage(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_texture_view_set_stage(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_image_type(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->image_type);
    return 1;
}

static int l_sg_shader_texture_view_set_image_type(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->image_type = (sg_image_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_sample_type(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->sample_type);
    return 1;
}

static int l_sg_shader_texture_view_set_sample_type(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->sample_type = (sg_image_sample_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_multisampled(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushboolean(L, self->multisampled);
    return 1;
}

static int l_sg_shader_texture_view_set_multisampled(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->multisampled = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_hlsl_register_t_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_t_n);
    return 1;
}

static int l_sg_shader_texture_view_set_hlsl_register_t_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->hlsl_register_t_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_msl_texture_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->msl_texture_n);
    return 1;
}

static int l_sg_shader_texture_view_set_msl_texture_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->msl_texture_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->wgsl_group1_binding_n);
    return 1;
}

static int l_sg_shader_texture_view_set_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->wgsl_group1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view_get_spirv_set1_binding_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    lua_pushinteger(L, (lua_Integer)self->spirv_set1_binding_n);
    return 1;
}

static int l_sg_shader_texture_view_set_spirv_set1_binding_n(lua_State *L) {
    sg_shader_texture_view* self = (sg_shader_texture_view*)luaL_checkudata(L, 1, "sokol.ShaderTextureView");
    self->spirv_set1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_view__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_texture_view_get_stage(L);
    if (strcmp(key, "image_type") == 0) return l_sg_shader_texture_view_get_image_type(L);
    if (strcmp(key, "sample_type") == 0) return l_sg_shader_texture_view_get_sample_type(L);
    if (strcmp(key, "multisampled") == 0) return l_sg_shader_texture_view_get_multisampled(L);
    if (strcmp(key, "hlsl_register_t_n") == 0) return l_sg_shader_texture_view_get_hlsl_register_t_n(L);
    if (strcmp(key, "msl_texture_n") == 0) return l_sg_shader_texture_view_get_msl_texture_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_texture_view_get_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_texture_view_get_spirv_set1_binding_n(L);
    return 0;
}

static int l_sg_shader_texture_view__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_texture_view_set_stage(L);
    if (strcmp(key, "image_type") == 0) return l_sg_shader_texture_view_set_image_type(L);
    if (strcmp(key, "sample_type") == 0) return l_sg_shader_texture_view_set_sample_type(L);
    if (strcmp(key, "multisampled") == 0) return l_sg_shader_texture_view_set_multisampled(L);
    if (strcmp(key, "hlsl_register_t_n") == 0) return l_sg_shader_texture_view_set_hlsl_register_t_n(L);
    if (strcmp(key, "msl_texture_n") == 0) return l_sg_shader_texture_view_set_msl_texture_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_texture_view_set_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_texture_view_set_spirv_set1_binding_n(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_storage_buffer_view_new(lua_State *L) {
    sg_shader_storage_buffer_view* ud = (sg_shader_storage_buffer_view*)lua_newuserdatauv(L, sizeof(sg_shader_storage_buffer_view), 0);
    memset(ud, 0, sizeof(sg_shader_storage_buffer_view));
    luaL_setmetatable(L, "sokol.ShaderStorageBufferView");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "readonly");
        if (!lua_isnil(L, -1)) {
            ud->readonly = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_t_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_t_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_u_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_u_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msl_buffer_n");
        if (!lua_isnil(L, -1)) {
            ud->msl_buffer_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgsl_group1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->wgsl_group1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "spirv_set1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->spirv_set1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->glsl_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_storage_buffer_view_get_stage(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_stage(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_readonly(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushboolean(L, self->readonly);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_readonly(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->readonly = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_hlsl_register_t_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_t_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_hlsl_register_t_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->hlsl_register_t_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_hlsl_register_u_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_u_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_hlsl_register_u_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->hlsl_register_u_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_msl_buffer_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->msl_buffer_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_msl_buffer_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->msl_buffer_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->wgsl_group1_binding_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->wgsl_group1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_spirv_set1_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->spirv_set1_binding_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_spirv_set1_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->spirv_set1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view_get_glsl_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    lua_pushinteger(L, (lua_Integer)self->glsl_binding_n);
    return 1;
}

static int l_sg_shader_storage_buffer_view_set_glsl_binding_n(lua_State *L) {
    sg_shader_storage_buffer_view* self = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageBufferView");
    self->glsl_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_buffer_view__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_storage_buffer_view_get_stage(L);
    if (strcmp(key, "readonly") == 0) return l_sg_shader_storage_buffer_view_get_readonly(L);
    if (strcmp(key, "hlsl_register_t_n") == 0) return l_sg_shader_storage_buffer_view_get_hlsl_register_t_n(L);
    if (strcmp(key, "hlsl_register_u_n") == 0) return l_sg_shader_storage_buffer_view_get_hlsl_register_u_n(L);
    if (strcmp(key, "msl_buffer_n") == 0) return l_sg_shader_storage_buffer_view_get_msl_buffer_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_storage_buffer_view_get_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_storage_buffer_view_get_spirv_set1_binding_n(L);
    if (strcmp(key, "glsl_binding_n") == 0) return l_sg_shader_storage_buffer_view_get_glsl_binding_n(L);
    return 0;
}

static int l_sg_shader_storage_buffer_view__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_storage_buffer_view_set_stage(L);
    if (strcmp(key, "readonly") == 0) return l_sg_shader_storage_buffer_view_set_readonly(L);
    if (strcmp(key, "hlsl_register_t_n") == 0) return l_sg_shader_storage_buffer_view_set_hlsl_register_t_n(L);
    if (strcmp(key, "hlsl_register_u_n") == 0) return l_sg_shader_storage_buffer_view_set_hlsl_register_u_n(L);
    if (strcmp(key, "msl_buffer_n") == 0) return l_sg_shader_storage_buffer_view_set_msl_buffer_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_storage_buffer_view_set_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_storage_buffer_view_set_spirv_set1_binding_n(L);
    if (strcmp(key, "glsl_binding_n") == 0) return l_sg_shader_storage_buffer_view_set_glsl_binding_n(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_storage_image_view_new(lua_State *L) {
    sg_shader_storage_image_view* ud = (sg_shader_storage_image_view*)lua_newuserdatauv(L, sizeof(sg_shader_storage_image_view), 0);
    memset(ud, 0, sizeof(sg_shader_storage_image_view));
    luaL_setmetatable(L, "sokol.ShaderStorageImageView");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "image_type");
        if (!lua_isnil(L, -1)) {
            ud->image_type = (sg_image_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "access_format");
        if (!lua_isnil(L, -1)) {
            ud->access_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "writeonly");
        if (!lua_isnil(L, -1)) {
            ud->writeonly = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_u_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_u_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msl_texture_n");
        if (!lua_isnil(L, -1)) {
            ud->msl_texture_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgsl_group1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->wgsl_group1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "spirv_set1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->spirv_set1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->glsl_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_storage_image_view_get_stage(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_storage_image_view_set_stage(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_image_type(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->image_type);
    return 1;
}

static int l_sg_shader_storage_image_view_set_image_type(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->image_type = (sg_image_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_access_format(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->access_format);
    return 1;
}

static int l_sg_shader_storage_image_view_set_access_format(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->access_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_writeonly(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushboolean(L, self->writeonly);
    return 1;
}

static int l_sg_shader_storage_image_view_set_writeonly(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->writeonly = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_hlsl_register_u_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_u_n);
    return 1;
}

static int l_sg_shader_storage_image_view_set_hlsl_register_u_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->hlsl_register_u_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_msl_texture_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->msl_texture_n);
    return 1;
}

static int l_sg_shader_storage_image_view_set_msl_texture_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->msl_texture_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->wgsl_group1_binding_n);
    return 1;
}

static int l_sg_shader_storage_image_view_set_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->wgsl_group1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_spirv_set1_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->spirv_set1_binding_n);
    return 1;
}

static int l_sg_shader_storage_image_view_set_spirv_set1_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->spirv_set1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view_get_glsl_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    lua_pushinteger(L, (lua_Integer)self->glsl_binding_n);
    return 1;
}

static int l_sg_shader_storage_image_view_set_glsl_binding_n(lua_State *L) {
    sg_shader_storage_image_view* self = (sg_shader_storage_image_view*)luaL_checkudata(L, 1, "sokol.ShaderStorageImageView");
    self->glsl_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_storage_image_view__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_storage_image_view_get_stage(L);
    if (strcmp(key, "image_type") == 0) return l_sg_shader_storage_image_view_get_image_type(L);
    if (strcmp(key, "access_format") == 0) return l_sg_shader_storage_image_view_get_access_format(L);
    if (strcmp(key, "writeonly") == 0) return l_sg_shader_storage_image_view_get_writeonly(L);
    if (strcmp(key, "hlsl_register_u_n") == 0) return l_sg_shader_storage_image_view_get_hlsl_register_u_n(L);
    if (strcmp(key, "msl_texture_n") == 0) return l_sg_shader_storage_image_view_get_msl_texture_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_storage_image_view_get_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_storage_image_view_get_spirv_set1_binding_n(L);
    if (strcmp(key, "glsl_binding_n") == 0) return l_sg_shader_storage_image_view_get_glsl_binding_n(L);
    return 0;
}

static int l_sg_shader_storage_image_view__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_storage_image_view_set_stage(L);
    if (strcmp(key, "image_type") == 0) return l_sg_shader_storage_image_view_set_image_type(L);
    if (strcmp(key, "access_format") == 0) return l_sg_shader_storage_image_view_set_access_format(L);
    if (strcmp(key, "writeonly") == 0) return l_sg_shader_storage_image_view_set_writeonly(L);
    if (strcmp(key, "hlsl_register_u_n") == 0) return l_sg_shader_storage_image_view_set_hlsl_register_u_n(L);
    if (strcmp(key, "msl_texture_n") == 0) return l_sg_shader_storage_image_view_set_msl_texture_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_storage_image_view_set_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_storage_image_view_set_spirv_set1_binding_n(L);
    if (strcmp(key, "glsl_binding_n") == 0) return l_sg_shader_storage_image_view_set_glsl_binding_n(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_view_new(lua_State *L) {
    sg_shader_view* ud = (sg_shader_view*)lua_newuserdatauv(L, sizeof(sg_shader_view), 0);
    memset(ud, 0, sizeof(sg_shader_view));
    luaL_setmetatable(L, "sokol.ShaderView");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "texture");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_texture_view_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_texture_view* val = (sg_shader_texture_view*)luaL_testudata(L, -1, "sokol.ShaderTextureView");
                if (val) ud->texture = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_texture_view* val = (sg_shader_texture_view*)luaL_testudata(L, -1, "sokol.ShaderTextureView");
                if (val) ud->texture = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "storage_buffer");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_storage_buffer_view_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_storage_buffer_view* val = (sg_shader_storage_buffer_view*)luaL_testudata(L, -1, "sokol.ShaderStorageBufferView");
                if (val) ud->storage_buffer = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_storage_buffer_view* val = (sg_shader_storage_buffer_view*)luaL_testudata(L, -1, "sokol.ShaderStorageBufferView");
                if (val) ud->storage_buffer = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "storage_image");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_storage_image_view_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_storage_image_view* val = (sg_shader_storage_image_view*)luaL_testudata(L, -1, "sokol.ShaderStorageImageView");
                if (val) ud->storage_image = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_storage_image_view* val = (sg_shader_storage_image_view*)luaL_testudata(L, -1, "sokol.ShaderStorageImageView");
                if (val) ud->storage_image = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_view_get_texture(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_texture_view* ud = (sg_shader_texture_view*)lua_newuserdatauv(L, sizeof(sg_shader_texture_view), 0);
    *ud = self->texture;
    luaL_setmetatable(L, "sokol.ShaderTextureView");
    return 1;
}

static int l_sg_shader_view_set_texture(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_texture_view* val = (sg_shader_texture_view*)luaL_checkudata(L, 2, "sokol.ShaderTextureView");
    self->texture = *val;
    return 0;
}

static int l_sg_shader_view_get_storage_buffer(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_storage_buffer_view* ud = (sg_shader_storage_buffer_view*)lua_newuserdatauv(L, sizeof(sg_shader_storage_buffer_view), 0);
    *ud = self->storage_buffer;
    luaL_setmetatable(L, "sokol.ShaderStorageBufferView");
    return 1;
}

static int l_sg_shader_view_set_storage_buffer(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_storage_buffer_view* val = (sg_shader_storage_buffer_view*)luaL_checkudata(L, 2, "sokol.ShaderStorageBufferView");
    self->storage_buffer = *val;
    return 0;
}

static int l_sg_shader_view_get_storage_image(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_storage_image_view* ud = (sg_shader_storage_image_view*)lua_newuserdatauv(L, sizeof(sg_shader_storage_image_view), 0);
    *ud = self->storage_image;
    luaL_setmetatable(L, "sokol.ShaderStorageImageView");
    return 1;
}

static int l_sg_shader_view_set_storage_image(lua_State *L) {
    sg_shader_view* self = (sg_shader_view*)luaL_checkudata(L, 1, "sokol.ShaderView");
    sg_shader_storage_image_view* val = (sg_shader_storage_image_view*)luaL_checkudata(L, 2, "sokol.ShaderStorageImageView");
    self->storage_image = *val;
    return 0;
}

static int l_sg_shader_view__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "texture") == 0) return l_sg_shader_view_get_texture(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_shader_view_get_storage_buffer(L);
    if (strcmp(key, "storage_image") == 0) return l_sg_shader_view_get_storage_image(L);
    return 0;
}

static int l_sg_shader_view__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "texture") == 0) return l_sg_shader_view_set_texture(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_shader_view_set_storage_buffer(L);
    if (strcmp(key, "storage_image") == 0) return l_sg_shader_view_set_storage_image(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_sampler_new(lua_State *L) {
    sg_shader_sampler* ud = (sg_shader_sampler*)lua_newuserdatauv(L, sizeof(sg_shader_sampler), 0);
    memset(ud, 0, sizeof(sg_shader_sampler));
    luaL_setmetatable(L, "sokol.ShaderSampler");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sampler_type");
        if (!lua_isnil(L, -1)) {
            ud->sampler_type = (sg_sampler_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "hlsl_register_s_n");
        if (!lua_isnil(L, -1)) {
            ud->hlsl_register_s_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msl_sampler_n");
        if (!lua_isnil(L, -1)) {
            ud->msl_sampler_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgsl_group1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->wgsl_group1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "spirv_set1_binding_n");
        if (!lua_isnil(L, -1)) {
            ud->spirv_set1_binding_n = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_sampler_get_stage(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_sampler_set_stage(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler_get_sampler_type(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->sampler_type);
    return 1;
}

static int l_sg_shader_sampler_set_sampler_type(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->sampler_type = (sg_sampler_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler_get_hlsl_register_s_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->hlsl_register_s_n);
    return 1;
}

static int l_sg_shader_sampler_set_hlsl_register_s_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->hlsl_register_s_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler_get_msl_sampler_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->msl_sampler_n);
    return 1;
}

static int l_sg_shader_sampler_set_msl_sampler_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->msl_sampler_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler_get_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->wgsl_group1_binding_n);
    return 1;
}

static int l_sg_shader_sampler_set_wgsl_group1_binding_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->wgsl_group1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler_get_spirv_set1_binding_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    lua_pushinteger(L, (lua_Integer)self->spirv_set1_binding_n);
    return 1;
}

static int l_sg_shader_sampler_set_spirv_set1_binding_n(lua_State *L) {
    sg_shader_sampler* self = (sg_shader_sampler*)luaL_checkudata(L, 1, "sokol.ShaderSampler");
    self->spirv_set1_binding_n = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_sampler__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_sampler_get_stage(L);
    if (strcmp(key, "sampler_type") == 0) return l_sg_shader_sampler_get_sampler_type(L);
    if (strcmp(key, "hlsl_register_s_n") == 0) return l_sg_shader_sampler_get_hlsl_register_s_n(L);
    if (strcmp(key, "msl_sampler_n") == 0) return l_sg_shader_sampler_get_msl_sampler_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_sampler_get_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_sampler_get_spirv_set1_binding_n(L);
    return 0;
}

static int l_sg_shader_sampler__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_sampler_set_stage(L);
    if (strcmp(key, "sampler_type") == 0) return l_sg_shader_sampler_set_sampler_type(L);
    if (strcmp(key, "hlsl_register_s_n") == 0) return l_sg_shader_sampler_set_hlsl_register_s_n(L);
    if (strcmp(key, "msl_sampler_n") == 0) return l_sg_shader_sampler_set_msl_sampler_n(L);
    if (strcmp(key, "wgsl_group1_binding_n") == 0) return l_sg_shader_sampler_set_wgsl_group1_binding_n(L);
    if (strcmp(key, "spirv_set1_binding_n") == 0) return l_sg_shader_sampler_set_spirv_set1_binding_n(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_texture_sampler_pair_new(lua_State *L) {
    sg_shader_texture_sampler_pair* ud = (sg_shader_texture_sampler_pair*)lua_newuserdatauv(L, sizeof(sg_shader_texture_sampler_pair), 0);
    memset(ud, 0, sizeof(sg_shader_texture_sampler_pair));
    luaL_setmetatable(L, "sokol.ShaderTextureSamplerPair");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stage");
        if (!lua_isnil(L, -1)) {
            ud->stage = (sg_shader_stage)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "view_slot");
        if (!lua_isnil(L, -1)) {
            ud->view_slot = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sampler_slot");
        if (!lua_isnil(L, -1)) {
            ud->sampler_slot = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "glsl_name");
        if (!lua_isnil(L, -1)) {
            ud->glsl_name = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_texture_sampler_pair_get_stage(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    lua_pushinteger(L, (lua_Integer)self->stage);
    return 1;
}

static int l_sg_shader_texture_sampler_pair_set_stage(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    self->stage = (sg_shader_stage)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_sampler_pair_get_view_slot(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    lua_pushinteger(L, (lua_Integer)self->view_slot);
    return 1;
}

static int l_sg_shader_texture_sampler_pair_set_view_slot(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    self->view_slot = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_sampler_pair_get_sampler_slot(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    lua_pushinteger(L, (lua_Integer)self->sampler_slot);
    return 1;
}

static int l_sg_shader_texture_sampler_pair_set_sampler_slot(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    self->sampler_slot = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_texture_sampler_pair_get_glsl_name(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    lua_pushstring(L, self->glsl_name);
    return 1;
}

static int l_sg_shader_texture_sampler_pair_set_glsl_name(lua_State *L) {
    sg_shader_texture_sampler_pair* self = (sg_shader_texture_sampler_pair*)luaL_checkudata(L, 1, "sokol.ShaderTextureSamplerPair");
    self->glsl_name = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_texture_sampler_pair__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_texture_sampler_pair_get_stage(L);
    if (strcmp(key, "view_slot") == 0) return l_sg_shader_texture_sampler_pair_get_view_slot(L);
    if (strcmp(key, "sampler_slot") == 0) return l_sg_shader_texture_sampler_pair_get_sampler_slot(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_shader_texture_sampler_pair_get_glsl_name(L);
    return 0;
}

static int l_sg_shader_texture_sampler_pair__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stage") == 0) return l_sg_shader_texture_sampler_pair_set_stage(L);
    if (strcmp(key, "view_slot") == 0) return l_sg_shader_texture_sampler_pair_set_view_slot(L);
    if (strcmp(key, "sampler_slot") == 0) return l_sg_shader_texture_sampler_pair_set_sampler_slot(L);
    if (strcmp(key, "glsl_name") == 0) return l_sg_shader_texture_sampler_pair_set_glsl_name(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_shader_threads_per_threadgroup_new(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* ud = (sg_mtl_shader_threads_per_threadgroup*)lua_newuserdatauv(L, sizeof(sg_mtl_shader_threads_per_threadgroup), 0);
    memset(ud, 0, sizeof(sg_mtl_shader_threads_per_threadgroup));
    luaL_setmetatable(L, "sokol.MtlShaderThreadsPerThreadgroup");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "x");
        if (!lua_isnil(L, -1)) {
            ud->x = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "y");
        if (!lua_isnil(L, -1)) {
            ud->y = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "z");
        if (!lua_isnil(L, -1)) {
            ud->z = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_shader_threads_per_threadgroup_get_x(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    lua_pushinteger(L, (lua_Integer)self->x);
    return 1;
}

static int l_sg_mtl_shader_threads_per_threadgroup_set_x(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    self->x = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_mtl_shader_threads_per_threadgroup_get_y(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    lua_pushinteger(L, (lua_Integer)self->y);
    return 1;
}

static int l_sg_mtl_shader_threads_per_threadgroup_set_y(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    self->y = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_mtl_shader_threads_per_threadgroup_get_z(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    lua_pushinteger(L, (lua_Integer)self->z);
    return 1;
}

static int l_sg_mtl_shader_threads_per_threadgroup_set_z(lua_State *L) {
    sg_mtl_shader_threads_per_threadgroup* self = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 1, "sokol.MtlShaderThreadsPerThreadgroup");
    self->z = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_mtl_shader_threads_per_threadgroup__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "x") == 0) return l_sg_mtl_shader_threads_per_threadgroup_get_x(L);
    if (strcmp(key, "y") == 0) return l_sg_mtl_shader_threads_per_threadgroup_get_y(L);
    if (strcmp(key, "z") == 0) return l_sg_mtl_shader_threads_per_threadgroup_get_z(L);
    return 0;
}

static int l_sg_mtl_shader_threads_per_threadgroup__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "x") == 0) return l_sg_mtl_shader_threads_per_threadgroup_set_x(L);
    if (strcmp(key, "y") == 0) return l_sg_mtl_shader_threads_per_threadgroup_set_y(L);
    if (strcmp(key, "z") == 0) return l_sg_mtl_shader_threads_per_threadgroup_set_z(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_desc_new(lua_State *L) {
    sg_shader_desc* ud = (sg_shader_desc*)lua_newuserdatauv(L, sizeof(sg_shader_desc), 0);
    memset(ud, 0, sizeof(sg_shader_desc));
    luaL_setmetatable(L, "sokol.ShaderDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vertex_func");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_function_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->vertex_func = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->vertex_func = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fragment_func");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_function_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->fragment_func = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->fragment_func = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compute_func");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_function_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->compute_func = *val;
                lua_pop(L, 1);
            } else {
                sg_shader_function* val = (sg_shader_function*)luaL_testudata(L, -1, "sokol.ShaderFunction");
                if (val) ud->compute_func = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "attrs");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 16; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_shader_vertex_attr_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_shader_vertex_attr* val = (sg_shader_vertex_attr*)luaL_testudata(L, -1, "sokol.ShaderVertexAttr");
                        if (val) ud->attrs[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_shader_vertex_attr* val = (sg_shader_vertex_attr*)luaL_testudata(L, -1, "sokol.ShaderVertexAttr");
                        if (val) ud->attrs[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uniform_blocks");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_shader_uniform_block_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_shader_uniform_block* val = (sg_shader_uniform_block*)luaL_testudata(L, -1, "sokol.ShaderUniformBlock");
                        if (val) ud->uniform_blocks[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_shader_uniform_block* val = (sg_shader_uniform_block*)luaL_testudata(L, -1, "sokol.ShaderUniformBlock");
                        if (val) ud->uniform_blocks[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "views");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 32; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_shader_view_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_shader_view* val = (sg_shader_view*)luaL_testudata(L, -1, "sokol.ShaderView");
                        if (val) ud->views[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_shader_view* val = (sg_shader_view*)luaL_testudata(L, -1, "sokol.ShaderView");
                        if (val) ud->views[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "samplers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 12; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_shader_sampler_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_shader_sampler* val = (sg_shader_sampler*)luaL_testudata(L, -1, "sokol.ShaderSampler");
                        if (val) ud->samplers[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_shader_sampler* val = (sg_shader_sampler*)luaL_testudata(L, -1, "sokol.ShaderSampler");
                        if (val) ud->samplers[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "texture_sampler_pairs");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 32; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_shader_texture_sampler_pair_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_shader_texture_sampler_pair* val = (sg_shader_texture_sampler_pair*)luaL_testudata(L, -1, "sokol.ShaderTextureSamplerPair");
                        if (val) ud->texture_sampler_pairs[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_shader_texture_sampler_pair* val = (sg_shader_texture_sampler_pair*)luaL_testudata(L, -1, "sokol.ShaderTextureSamplerPair");
                        if (val) ud->texture_sampler_pairs[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mtl_threads_per_threadgroup");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_mtl_shader_threads_per_threadgroup_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_mtl_shader_threads_per_threadgroup* val = (sg_mtl_shader_threads_per_threadgroup*)luaL_testudata(L, -1, "sokol.MtlShaderThreadsPerThreadgroup");
                if (val) ud->mtl_threads_per_threadgroup = *val;
                lua_pop(L, 1);
            } else {
                sg_mtl_shader_threads_per_threadgroup* val = (sg_mtl_shader_threads_per_threadgroup*)luaL_testudata(L, -1, "sokol.MtlShaderThreadsPerThreadgroup");
                if (val) ud->mtl_threads_per_threadgroup = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_desc_get__start_canary(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_shader_desc_set__start_canary(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_desc_get_vertex_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* ud = (sg_shader_function*)lua_newuserdatauv(L, sizeof(sg_shader_function), 0);
    *ud = self->vertex_func;
    luaL_setmetatable(L, "sokol.ShaderFunction");
    return 1;
}

static int l_sg_shader_desc_set_vertex_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* val = (sg_shader_function*)luaL_checkudata(L, 2, "sokol.ShaderFunction");
    self->vertex_func = *val;
    return 0;
}

static int l_sg_shader_desc_get_fragment_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* ud = (sg_shader_function*)lua_newuserdatauv(L, sizeof(sg_shader_function), 0);
    *ud = self->fragment_func;
    luaL_setmetatable(L, "sokol.ShaderFunction");
    return 1;
}

static int l_sg_shader_desc_set_fragment_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* val = (sg_shader_function*)luaL_checkudata(L, 2, "sokol.ShaderFunction");
    self->fragment_func = *val;
    return 0;
}

static int l_sg_shader_desc_get_compute_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* ud = (sg_shader_function*)lua_newuserdatauv(L, sizeof(sg_shader_function), 0);
    *ud = self->compute_func;
    luaL_setmetatable(L, "sokol.ShaderFunction");
    return 1;
}

static int l_sg_shader_desc_set_compute_func(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_function* val = (sg_shader_function*)luaL_checkudata(L, 2, "sokol.ShaderFunction");
    self->compute_func = *val;
    return 0;
}

static int l_sg_shader_desc_get_attrs(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_newtable(L);
    for (int i = 0; i < 16; i++) {
        sg_shader_vertex_attr* ud = (sg_shader_vertex_attr*)lua_newuserdatauv(L, sizeof(sg_shader_vertex_attr), 0);
        *ud = self->attrs[i];
        luaL_setmetatable(L, "sokol.ShaderVertexAttr");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_desc_set_attrs(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 16; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_shader_vertex_attr* val = (sg_shader_vertex_attr*)luaL_testudata(L, -1, "sokol.ShaderVertexAttr");
            if (val) self->attrs[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_desc_get_uniform_blocks(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_shader_uniform_block* ud = (sg_shader_uniform_block*)lua_newuserdatauv(L, sizeof(sg_shader_uniform_block), 0);
        *ud = self->uniform_blocks[i];
        luaL_setmetatable(L, "sokol.ShaderUniformBlock");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_desc_set_uniform_blocks(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_shader_uniform_block* val = (sg_shader_uniform_block*)luaL_testudata(L, -1, "sokol.ShaderUniformBlock");
            if (val) self->uniform_blocks[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_desc_get_views(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_newtable(L);
    for (int i = 0; i < 32; i++) {
        sg_shader_view* ud = (sg_shader_view*)lua_newuserdatauv(L, sizeof(sg_shader_view), 0);
        *ud = self->views[i];
        luaL_setmetatable(L, "sokol.ShaderView");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_desc_set_views(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 32; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_shader_view* val = (sg_shader_view*)luaL_testudata(L, -1, "sokol.ShaderView");
            if (val) self->views[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_desc_get_samplers(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_newtable(L);
    for (int i = 0; i < 12; i++) {
        sg_shader_sampler* ud = (sg_shader_sampler*)lua_newuserdatauv(L, sizeof(sg_shader_sampler), 0);
        *ud = self->samplers[i];
        luaL_setmetatable(L, "sokol.ShaderSampler");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_desc_set_samplers(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 12; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_shader_sampler* val = (sg_shader_sampler*)luaL_testudata(L, -1, "sokol.ShaderSampler");
            if (val) self->samplers[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_desc_get_texture_sampler_pairs(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_newtable(L);
    for (int i = 0; i < 32; i++) {
        sg_shader_texture_sampler_pair* ud = (sg_shader_texture_sampler_pair*)lua_newuserdatauv(L, sizeof(sg_shader_texture_sampler_pair), 0);
        *ud = self->texture_sampler_pairs[i];
        luaL_setmetatable(L, "sokol.ShaderTextureSamplerPair");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_shader_desc_set_texture_sampler_pairs(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 32; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_shader_texture_sampler_pair* val = (sg_shader_texture_sampler_pair*)luaL_testudata(L, -1, "sokol.ShaderTextureSamplerPair");
            if (val) self->texture_sampler_pairs[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_shader_desc_get_mtl_threads_per_threadgroup(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_mtl_shader_threads_per_threadgroup* ud = (sg_mtl_shader_threads_per_threadgroup*)lua_newuserdatauv(L, sizeof(sg_mtl_shader_threads_per_threadgroup), 0);
    *ud = self->mtl_threads_per_threadgroup;
    luaL_setmetatable(L, "sokol.MtlShaderThreadsPerThreadgroup");
    return 1;
}

static int l_sg_shader_desc_set_mtl_threads_per_threadgroup(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_mtl_shader_threads_per_threadgroup* val = (sg_mtl_shader_threads_per_threadgroup*)luaL_checkudata(L, 2, "sokol.MtlShaderThreadsPerThreadgroup");
    self->mtl_threads_per_threadgroup = *val;
    return 0;
}

static int l_sg_shader_desc_get_label(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_shader_desc_set_label(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_shader_desc_get__end_canary(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_shader_desc_set__end_canary(lua_State *L) {
    sg_shader_desc* self = (sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_shader_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_shader_desc_get__start_canary(L);
    if (strcmp(key, "vertex_func") == 0) return l_sg_shader_desc_get_vertex_func(L);
    if (strcmp(key, "fragment_func") == 0) return l_sg_shader_desc_get_fragment_func(L);
    if (strcmp(key, "compute_func") == 0) return l_sg_shader_desc_get_compute_func(L);
    if (strcmp(key, "attrs") == 0) return l_sg_shader_desc_get_attrs(L);
    if (strcmp(key, "uniform_blocks") == 0) return l_sg_shader_desc_get_uniform_blocks(L);
    if (strcmp(key, "views") == 0) return l_sg_shader_desc_get_views(L);
    if (strcmp(key, "samplers") == 0) return l_sg_shader_desc_get_samplers(L);
    if (strcmp(key, "texture_sampler_pairs") == 0) return l_sg_shader_desc_get_texture_sampler_pairs(L);
    if (strcmp(key, "mtl_threads_per_threadgroup") == 0) return l_sg_shader_desc_get_mtl_threads_per_threadgroup(L);
    if (strcmp(key, "label") == 0) return l_sg_shader_desc_get_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_shader_desc_get__end_canary(L);
    return 0;
}

static int l_sg_shader_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_shader_desc_set__start_canary(L);
    if (strcmp(key, "vertex_func") == 0) return l_sg_shader_desc_set_vertex_func(L);
    if (strcmp(key, "fragment_func") == 0) return l_sg_shader_desc_set_fragment_func(L);
    if (strcmp(key, "compute_func") == 0) return l_sg_shader_desc_set_compute_func(L);
    if (strcmp(key, "attrs") == 0) return l_sg_shader_desc_set_attrs(L);
    if (strcmp(key, "uniform_blocks") == 0) return l_sg_shader_desc_set_uniform_blocks(L);
    if (strcmp(key, "views") == 0) return l_sg_shader_desc_set_views(L);
    if (strcmp(key, "samplers") == 0) return l_sg_shader_desc_set_samplers(L);
    if (strcmp(key, "texture_sampler_pairs") == 0) return l_sg_shader_desc_set_texture_sampler_pairs(L);
    if (strcmp(key, "mtl_threads_per_threadgroup") == 0) return l_sg_shader_desc_set_mtl_threads_per_threadgroup(L);
    if (strcmp(key, "label") == 0) return l_sg_shader_desc_set_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_shader_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vertex_buffer_layout_state_new(lua_State *L) {
    sg_vertex_buffer_layout_state* ud = (sg_vertex_buffer_layout_state*)lua_newuserdatauv(L, sizeof(sg_vertex_buffer_layout_state), 0);
    memset(ud, 0, sizeof(sg_vertex_buffer_layout_state));
    luaL_setmetatable(L, "sokol.VertexBufferLayoutState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "stride");
        if (!lua_isnil(L, -1)) {
            ud->stride = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "step_func");
        if (!lua_isnil(L, -1)) {
            ud->step_func = (sg_vertex_step)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "step_rate");
        if (!lua_isnil(L, -1)) {
            ud->step_rate = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vertex_buffer_layout_state_get_stride(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    lua_pushinteger(L, (lua_Integer)self->stride);
    return 1;
}

static int l_sg_vertex_buffer_layout_state_set_stride(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    self->stride = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_buffer_layout_state_get_step_func(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    lua_pushinteger(L, (lua_Integer)self->step_func);
    return 1;
}

static int l_sg_vertex_buffer_layout_state_set_step_func(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    self->step_func = (sg_vertex_step)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_buffer_layout_state_get_step_rate(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    lua_pushinteger(L, (lua_Integer)self->step_rate);
    return 1;
}

static int l_sg_vertex_buffer_layout_state_set_step_rate(lua_State *L) {
    sg_vertex_buffer_layout_state* self = (sg_vertex_buffer_layout_state*)luaL_checkudata(L, 1, "sokol.VertexBufferLayoutState");
    self->step_rate = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_buffer_layout_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stride") == 0) return l_sg_vertex_buffer_layout_state_get_stride(L);
    if (strcmp(key, "step_func") == 0) return l_sg_vertex_buffer_layout_state_get_step_func(L);
    if (strcmp(key, "step_rate") == 0) return l_sg_vertex_buffer_layout_state_get_step_rate(L);
    return 0;
}

static int l_sg_vertex_buffer_layout_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "stride") == 0) return l_sg_vertex_buffer_layout_state_set_stride(L);
    if (strcmp(key, "step_func") == 0) return l_sg_vertex_buffer_layout_state_set_step_func(L);
    if (strcmp(key, "step_rate") == 0) return l_sg_vertex_buffer_layout_state_set_step_rate(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vertex_attr_state_new(lua_State *L) {
    sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
    memset(ud, 0, sizeof(sg_vertex_attr_state));
    luaL_setmetatable(L, "sokol.VertexAttrState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buffer_index");
        if (!lua_isnil(L, -1)) {
            ud->buffer_index = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "offset");
        if (!lua_isnil(L, -1)) {
            ud->offset = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "format");
        if (!lua_isnil(L, -1)) {
            ud->format = (sg_vertex_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vertex_attr_state_get_buffer_index(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    lua_pushinteger(L, (lua_Integer)self->buffer_index);
    return 1;
}

static int l_sg_vertex_attr_state_set_buffer_index(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    self->buffer_index = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_attr_state_get_offset(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    lua_pushinteger(L, (lua_Integer)self->offset);
    return 1;
}

static int l_sg_vertex_attr_state_set_offset(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    self->offset = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_attr_state_get_format(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    lua_pushinteger(L, (lua_Integer)self->format);
    return 1;
}

static int l_sg_vertex_attr_state_set_format(lua_State *L) {
    sg_vertex_attr_state* self = (sg_vertex_attr_state*)luaL_checkudata(L, 1, "sokol.VertexAttrState");
    self->format = (sg_vertex_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vertex_attr_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer_index") == 0) return l_sg_vertex_attr_state_get_buffer_index(L);
    if (strcmp(key, "offset") == 0) return l_sg_vertex_attr_state_get_offset(L);
    if (strcmp(key, "format") == 0) return l_sg_vertex_attr_state_get_format(L);
    return 0;
}

static int l_sg_vertex_attr_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer_index") == 0) return l_sg_vertex_attr_state_set_buffer_index(L);
    if (strcmp(key, "offset") == 0) return l_sg_vertex_attr_state_set_offset(L);
    if (strcmp(key, "format") == 0) return l_sg_vertex_attr_state_set_format(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vertex_layout_state_new(lua_State *L) {
    sg_vertex_layout_state* ud = (sg_vertex_layout_state*)lua_newuserdatauv(L, sizeof(sg_vertex_layout_state), 0);
    memset(ud, 0, sizeof(sg_vertex_layout_state));
    luaL_setmetatable(L, "sokol.VertexLayoutState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buffers");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_vertex_buffer_layout_state_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_vertex_buffer_layout_state* val = (sg_vertex_buffer_layout_state*)luaL_testudata(L, -1, "sokol.VertexBufferLayoutState");
                        if (val) ud->buffers[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_vertex_buffer_layout_state* val = (sg_vertex_buffer_layout_state*)luaL_testudata(L, -1, "sokol.VertexBufferLayoutState");
                        if (val) ud->buffers[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "attrs");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 16; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_vertex_attr_state_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_vertex_attr_state* val = (sg_vertex_attr_state*)luaL_testudata(L, -1, "sokol.VertexAttrState");
                        if (val) ud->attrs[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_vertex_attr_state* val = (sg_vertex_attr_state*)luaL_testudata(L, -1, "sokol.VertexAttrState");
                        if (val) ud->attrs[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vertex_layout_state_get_buffers(lua_State *L) {
    sg_vertex_layout_state* self = (sg_vertex_layout_state*)luaL_checkudata(L, 1, "sokol.VertexLayoutState");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_vertex_buffer_layout_state* ud = (sg_vertex_buffer_layout_state*)lua_newuserdatauv(L, sizeof(sg_vertex_buffer_layout_state), 0);
        *ud = self->buffers[i];
        luaL_setmetatable(L, "sokol.VertexBufferLayoutState");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_vertex_layout_state_set_buffers(lua_State *L) {
    sg_vertex_layout_state* self = (sg_vertex_layout_state*)luaL_checkudata(L, 1, "sokol.VertexLayoutState");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_vertex_buffer_layout_state* val = (sg_vertex_buffer_layout_state*)luaL_testudata(L, -1, "sokol.VertexBufferLayoutState");
            if (val) self->buffers[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_vertex_layout_state_get_attrs(lua_State *L) {
    sg_vertex_layout_state* self = (sg_vertex_layout_state*)luaL_checkudata(L, 1, "sokol.VertexLayoutState");
    lua_newtable(L);
    for (int i = 0; i < 16; i++) {
        sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
        *ud = self->attrs[i];
        luaL_setmetatable(L, "sokol.VertexAttrState");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_vertex_layout_state_set_attrs(lua_State *L) {
    sg_vertex_layout_state* self = (sg_vertex_layout_state*)luaL_checkudata(L, 1, "sokol.VertexLayoutState");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 16; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_vertex_attr_state* val = (sg_vertex_attr_state*)luaL_testudata(L, -1, "sokol.VertexAttrState");
            if (val) self->attrs[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_vertex_layout_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffers") == 0) return l_sg_vertex_layout_state_get_buffers(L);
    if (strcmp(key, "attrs") == 0) return l_sg_vertex_layout_state_get_attrs(L);
    return 0;
}

static int l_sg_vertex_layout_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffers") == 0) return l_sg_vertex_layout_state_set_buffers(L);
    if (strcmp(key, "attrs") == 0) return l_sg_vertex_layout_state_set_attrs(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_stencil_face_state_new(lua_State *L) {
    sg_stencil_face_state* ud = (sg_stencil_face_state*)lua_newuserdatauv(L, sizeof(sg_stencil_face_state), 0);
    memset(ud, 0, sizeof(sg_stencil_face_state));
    luaL_setmetatable(L, "sokol.StencilFaceState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "compare");
        if (!lua_isnil(L, -1)) {
            ud->compare = (sg_compare_func)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fail_op");
        if (!lua_isnil(L, -1)) {
            ud->fail_op = (sg_stencil_op)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_fail_op");
        if (!lua_isnil(L, -1)) {
            ud->depth_fail_op = (sg_stencil_op)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pass_op");
        if (!lua_isnil(L, -1)) {
            ud->pass_op = (sg_stencil_op)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_stencil_face_state_get_compare(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    lua_pushinteger(L, (lua_Integer)self->compare);
    return 1;
}

static int l_sg_stencil_face_state_set_compare(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    self->compare = (sg_compare_func)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_face_state_get_fail_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    lua_pushinteger(L, (lua_Integer)self->fail_op);
    return 1;
}

static int l_sg_stencil_face_state_set_fail_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    self->fail_op = (sg_stencil_op)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_face_state_get_depth_fail_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    lua_pushinteger(L, (lua_Integer)self->depth_fail_op);
    return 1;
}

static int l_sg_stencil_face_state_set_depth_fail_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    self->depth_fail_op = (sg_stencil_op)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_face_state_get_pass_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    lua_pushinteger(L, (lua_Integer)self->pass_op);
    return 1;
}

static int l_sg_stencil_face_state_set_pass_op(lua_State *L) {
    sg_stencil_face_state* self = (sg_stencil_face_state*)luaL_checkudata(L, 1, "sokol.StencilFaceState");
    self->pass_op = (sg_stencil_op)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_face_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "compare") == 0) return l_sg_stencil_face_state_get_compare(L);
    if (strcmp(key, "fail_op") == 0) return l_sg_stencil_face_state_get_fail_op(L);
    if (strcmp(key, "depth_fail_op") == 0) return l_sg_stencil_face_state_get_depth_fail_op(L);
    if (strcmp(key, "pass_op") == 0) return l_sg_stencil_face_state_get_pass_op(L);
    return 0;
}

static int l_sg_stencil_face_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "compare") == 0) return l_sg_stencil_face_state_set_compare(L);
    if (strcmp(key, "fail_op") == 0) return l_sg_stencil_face_state_set_fail_op(L);
    if (strcmp(key, "depth_fail_op") == 0) return l_sg_stencil_face_state_set_depth_fail_op(L);
    if (strcmp(key, "pass_op") == 0) return l_sg_stencil_face_state_set_pass_op(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_stencil_state_new(lua_State *L) {
    sg_stencil_state* ud = (sg_stencil_state*)lua_newuserdatauv(L, sizeof(sg_stencil_state), 0);
    memset(ud, 0, sizeof(sg_stencil_state));
    luaL_setmetatable(L, "sokol.StencilState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "enabled");
        if (!lua_isnil(L, -1)) {
            ud->enabled = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "front");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_stencil_face_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_testudata(L, -1, "sokol.StencilFaceState");
                if (val) ud->front = *val;
                lua_pop(L, 1);
            } else {
                sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_testudata(L, -1, "sokol.StencilFaceState");
                if (val) ud->front = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "back");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_stencil_face_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_testudata(L, -1, "sokol.StencilFaceState");
                if (val) ud->back = *val;
                lua_pop(L, 1);
            } else {
                sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_testudata(L, -1, "sokol.StencilFaceState");
                if (val) ud->back = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "read_mask");
        if (!lua_isnil(L, -1)) {
            ud->read_mask = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "write_mask");
        if (!lua_isnil(L, -1)) {
            ud->write_mask = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "ref");
        if (!lua_isnil(L, -1)) {
            ud->ref = (uint8_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_stencil_state_get_enabled(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    lua_pushboolean(L, self->enabled);
    return 1;
}

static int l_sg_stencil_state_set_enabled(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    self->enabled = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_stencil_state_get_front(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    sg_stencil_face_state* ud = (sg_stencil_face_state*)lua_newuserdatauv(L, sizeof(sg_stencil_face_state), 0);
    *ud = self->front;
    luaL_setmetatable(L, "sokol.StencilFaceState");
    return 1;
}

static int l_sg_stencil_state_set_front(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_checkudata(L, 2, "sokol.StencilFaceState");
    self->front = *val;
    return 0;
}

static int l_sg_stencil_state_get_back(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    sg_stencil_face_state* ud = (sg_stencil_face_state*)lua_newuserdatauv(L, sizeof(sg_stencil_face_state), 0);
    *ud = self->back;
    luaL_setmetatable(L, "sokol.StencilFaceState");
    return 1;
}

static int l_sg_stencil_state_set_back(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    sg_stencil_face_state* val = (sg_stencil_face_state*)luaL_checkudata(L, 2, "sokol.StencilFaceState");
    self->back = *val;
    return 0;
}

static int l_sg_stencil_state_get_read_mask(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    lua_pushinteger(L, (lua_Integer)self->read_mask);
    return 1;
}

static int l_sg_stencil_state_set_read_mask(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    self->read_mask = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_state_get_write_mask(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    lua_pushinteger(L, (lua_Integer)self->write_mask);
    return 1;
}

static int l_sg_stencil_state_set_write_mask(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    self->write_mask = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_state_get_ref(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    lua_pushinteger(L, (lua_Integer)self->ref);
    return 1;
}

static int l_sg_stencil_state_set_ref(lua_State *L) {
    sg_stencil_state* self = (sg_stencil_state*)luaL_checkudata(L, 1, "sokol.StencilState");
    self->ref = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_stencil_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "enabled") == 0) return l_sg_stencil_state_get_enabled(L);
    if (strcmp(key, "front") == 0) return l_sg_stencil_state_get_front(L);
    if (strcmp(key, "back") == 0) return l_sg_stencil_state_get_back(L);
    if (strcmp(key, "read_mask") == 0) return l_sg_stencil_state_get_read_mask(L);
    if (strcmp(key, "write_mask") == 0) return l_sg_stencil_state_get_write_mask(L);
    if (strcmp(key, "ref") == 0) return l_sg_stencil_state_get_ref(L);
    return 0;
}

static int l_sg_stencil_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "enabled") == 0) return l_sg_stencil_state_set_enabled(L);
    if (strcmp(key, "front") == 0) return l_sg_stencil_state_set_front(L);
    if (strcmp(key, "back") == 0) return l_sg_stencil_state_set_back(L);
    if (strcmp(key, "read_mask") == 0) return l_sg_stencil_state_set_read_mask(L);
    if (strcmp(key, "write_mask") == 0) return l_sg_stencil_state_set_write_mask(L);
    if (strcmp(key, "ref") == 0) return l_sg_stencil_state_set_ref(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_depth_state_new(lua_State *L) {
    sg_depth_state* ud = (sg_depth_state*)lua_newuserdatauv(L, sizeof(sg_depth_state), 0);
    memset(ud, 0, sizeof(sg_depth_state));
    luaL_setmetatable(L, "sokol.DepthState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "pixel_format");
        if (!lua_isnil(L, -1)) {
            ud->pixel_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compare");
        if (!lua_isnil(L, -1)) {
            ud->compare = (sg_compare_func)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "write_enabled");
        if (!lua_isnil(L, -1)) {
            ud->write_enabled = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bias");
        if (!lua_isnil(L, -1)) {
            ud->bias = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bias_slope_scale");
        if (!lua_isnil(L, -1)) {
            ud->bias_slope_scale = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bias_clamp");
        if (!lua_isnil(L, -1)) {
            ud->bias_clamp = (float)lua_tonumber(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_depth_state_get_pixel_format(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushinteger(L, (lua_Integer)self->pixel_format);
    return 1;
}

static int l_sg_depth_state_set_pixel_format(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->pixel_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_depth_state_get_compare(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushinteger(L, (lua_Integer)self->compare);
    return 1;
}

static int l_sg_depth_state_set_compare(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->compare = (sg_compare_func)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_depth_state_get_write_enabled(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushboolean(L, self->write_enabled);
    return 1;
}

static int l_sg_depth_state_set_write_enabled(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->write_enabled = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_depth_state_get_bias(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushnumber(L, (lua_Number)self->bias);
    return 1;
}

static int l_sg_depth_state_set_bias(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->bias = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_depth_state_get_bias_slope_scale(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushnumber(L, (lua_Number)self->bias_slope_scale);
    return 1;
}

static int l_sg_depth_state_set_bias_slope_scale(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->bias_slope_scale = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_depth_state_get_bias_clamp(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    lua_pushnumber(L, (lua_Number)self->bias_clamp);
    return 1;
}

static int l_sg_depth_state_set_bias_clamp(lua_State *L) {
    sg_depth_state* self = (sg_depth_state*)luaL_checkudata(L, 1, "sokol.DepthState");
    self->bias_clamp = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sg_depth_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pixel_format") == 0) return l_sg_depth_state_get_pixel_format(L);
    if (strcmp(key, "compare") == 0) return l_sg_depth_state_get_compare(L);
    if (strcmp(key, "write_enabled") == 0) return l_sg_depth_state_get_write_enabled(L);
    if (strcmp(key, "bias") == 0) return l_sg_depth_state_get_bias(L);
    if (strcmp(key, "bias_slope_scale") == 0) return l_sg_depth_state_get_bias_slope_scale(L);
    if (strcmp(key, "bias_clamp") == 0) return l_sg_depth_state_get_bias_clamp(L);
    return 0;
}

static int l_sg_depth_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pixel_format") == 0) return l_sg_depth_state_set_pixel_format(L);
    if (strcmp(key, "compare") == 0) return l_sg_depth_state_set_compare(L);
    if (strcmp(key, "write_enabled") == 0) return l_sg_depth_state_set_write_enabled(L);
    if (strcmp(key, "bias") == 0) return l_sg_depth_state_set_bias(L);
    if (strcmp(key, "bias_slope_scale") == 0) return l_sg_depth_state_set_bias_slope_scale(L);
    if (strcmp(key, "bias_clamp") == 0) return l_sg_depth_state_set_bias_clamp(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_blend_state_new(lua_State *L) {
    sg_blend_state* ud = (sg_blend_state*)lua_newuserdatauv(L, sizeof(sg_blend_state), 0);
    memset(ud, 0, sizeof(sg_blend_state));
    luaL_setmetatable(L, "sokol.BlendState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "enabled");
        if (!lua_isnil(L, -1)) {
            ud->enabled = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "src_factor_rgb");
        if (!lua_isnil(L, -1)) {
            ud->src_factor_rgb = (sg_blend_factor)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dst_factor_rgb");
        if (!lua_isnil(L, -1)) {
            ud->dst_factor_rgb = (sg_blend_factor)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "op_rgb");
        if (!lua_isnil(L, -1)) {
            ud->op_rgb = (sg_blend_op)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "src_factor_alpha");
        if (!lua_isnil(L, -1)) {
            ud->src_factor_alpha = (sg_blend_factor)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dst_factor_alpha");
        if (!lua_isnil(L, -1)) {
            ud->dst_factor_alpha = (sg_blend_factor)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "op_alpha");
        if (!lua_isnil(L, -1)) {
            ud->op_alpha = (sg_blend_op)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_blend_state_get_enabled(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushboolean(L, self->enabled);
    return 1;
}

static int l_sg_blend_state_set_enabled(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->enabled = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_blend_state_get_src_factor_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->src_factor_rgb);
    return 1;
}

static int l_sg_blend_state_set_src_factor_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->src_factor_rgb = (sg_blend_factor)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state_get_dst_factor_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->dst_factor_rgb);
    return 1;
}

static int l_sg_blend_state_set_dst_factor_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->dst_factor_rgb = (sg_blend_factor)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state_get_op_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->op_rgb);
    return 1;
}

static int l_sg_blend_state_set_op_rgb(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->op_rgb = (sg_blend_op)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state_get_src_factor_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->src_factor_alpha);
    return 1;
}

static int l_sg_blend_state_set_src_factor_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->src_factor_alpha = (sg_blend_factor)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state_get_dst_factor_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->dst_factor_alpha);
    return 1;
}

static int l_sg_blend_state_set_dst_factor_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->dst_factor_alpha = (sg_blend_factor)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state_get_op_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    lua_pushinteger(L, (lua_Integer)self->op_alpha);
    return 1;
}

static int l_sg_blend_state_set_op_alpha(lua_State *L) {
    sg_blend_state* self = (sg_blend_state*)luaL_checkudata(L, 1, "sokol.BlendState");
    self->op_alpha = (sg_blend_op)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_blend_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "enabled") == 0) return l_sg_blend_state_get_enabled(L);
    if (strcmp(key, "src_factor_rgb") == 0) return l_sg_blend_state_get_src_factor_rgb(L);
    if (strcmp(key, "dst_factor_rgb") == 0) return l_sg_blend_state_get_dst_factor_rgb(L);
    if (strcmp(key, "op_rgb") == 0) return l_sg_blend_state_get_op_rgb(L);
    if (strcmp(key, "src_factor_alpha") == 0) return l_sg_blend_state_get_src_factor_alpha(L);
    if (strcmp(key, "dst_factor_alpha") == 0) return l_sg_blend_state_get_dst_factor_alpha(L);
    if (strcmp(key, "op_alpha") == 0) return l_sg_blend_state_get_op_alpha(L);
    return 0;
}

static int l_sg_blend_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "enabled") == 0) return l_sg_blend_state_set_enabled(L);
    if (strcmp(key, "src_factor_rgb") == 0) return l_sg_blend_state_set_src_factor_rgb(L);
    if (strcmp(key, "dst_factor_rgb") == 0) return l_sg_blend_state_set_dst_factor_rgb(L);
    if (strcmp(key, "op_rgb") == 0) return l_sg_blend_state_set_op_rgb(L);
    if (strcmp(key, "src_factor_alpha") == 0) return l_sg_blend_state_set_src_factor_alpha(L);
    if (strcmp(key, "dst_factor_alpha") == 0) return l_sg_blend_state_set_dst_factor_alpha(L);
    if (strcmp(key, "op_alpha") == 0) return l_sg_blend_state_set_op_alpha(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_color_target_state_new(lua_State *L) {
    sg_color_target_state* ud = (sg_color_target_state*)lua_newuserdatauv(L, sizeof(sg_color_target_state), 0);
    memset(ud, 0, sizeof(sg_color_target_state));
    luaL_setmetatable(L, "sokol.ColorTargetState");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "pixel_format");
        if (!lua_isnil(L, -1)) {
            ud->pixel_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "write_mask");
        if (!lua_isnil(L, -1)) {
            ud->write_mask = (sg_color_mask)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "blend");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_blend_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_blend_state* val = (sg_blend_state*)luaL_testudata(L, -1, "sokol.BlendState");
                if (val) ud->blend = *val;
                lua_pop(L, 1);
            } else {
                sg_blend_state* val = (sg_blend_state*)luaL_testudata(L, -1, "sokol.BlendState");
                if (val) ud->blend = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_color_target_state_get_pixel_format(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    lua_pushinteger(L, (lua_Integer)self->pixel_format);
    return 1;
}

static int l_sg_color_target_state_set_pixel_format(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    self->pixel_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_color_target_state_get_write_mask(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    lua_pushinteger(L, (lua_Integer)self->write_mask);
    return 1;
}

static int l_sg_color_target_state_set_write_mask(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    self->write_mask = (sg_color_mask)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_color_target_state_get_blend(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    sg_blend_state* ud = (sg_blend_state*)lua_newuserdatauv(L, sizeof(sg_blend_state), 0);
    *ud = self->blend;
    luaL_setmetatable(L, "sokol.BlendState");
    return 1;
}

static int l_sg_color_target_state_set_blend(lua_State *L) {
    sg_color_target_state* self = (sg_color_target_state*)luaL_checkudata(L, 1, "sokol.ColorTargetState");
    sg_blend_state* val = (sg_blend_state*)luaL_checkudata(L, 2, "sokol.BlendState");
    self->blend = *val;
    return 0;
}

static int l_sg_color_target_state__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pixel_format") == 0) return l_sg_color_target_state_get_pixel_format(L);
    if (strcmp(key, "write_mask") == 0) return l_sg_color_target_state_get_write_mask(L);
    if (strcmp(key, "blend") == 0) return l_sg_color_target_state_get_blend(L);
    return 0;
}

static int l_sg_color_target_state__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pixel_format") == 0) return l_sg_color_target_state_set_pixel_format(L);
    if (strcmp(key, "write_mask") == 0) return l_sg_color_target_state_set_write_mask(L);
    if (strcmp(key, "blend") == 0) return l_sg_color_target_state_set_blend(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pipeline_desc_new(lua_State *L) {
    sg_pipeline_desc* ud = (sg_pipeline_desc*)lua_newuserdatauv(L, sizeof(sg_pipeline_desc), 0);
    memset(ud, 0, sizeof(sg_pipeline_desc));
    luaL_setmetatable(L, "sokol.PipelineDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compute");
        if (!lua_isnil(L, -1)) {
            ud->compute = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "shader");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_shader_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_shader* val = (sg_shader*)luaL_testudata(L, -1, "sokol.Shader");
                if (val) ud->shader = *val;
                lua_pop(L, 1);
            } else {
                sg_shader* val = (sg_shader*)luaL_testudata(L, -1, "sokol.Shader");
                if (val) ud->shader = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "layout");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_vertex_layout_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_vertex_layout_state* val = (sg_vertex_layout_state*)luaL_testudata(L, -1, "sokol.VertexLayoutState");
                if (val) ud->layout = *val;
                lua_pop(L, 1);
            } else {
                sg_vertex_layout_state* val = (sg_vertex_layout_state*)luaL_testudata(L, -1, "sokol.VertexLayoutState");
                if (val) ud->layout = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_depth_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_depth_state* val = (sg_depth_state*)luaL_testudata(L, -1, "sokol.DepthState");
                if (val) ud->depth = *val;
                lua_pop(L, 1);
            } else {
                sg_depth_state* val = (sg_depth_state*)luaL_testudata(L, -1, "sokol.DepthState");
                if (val) ud->depth = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "stencil");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_stencil_state_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_stencil_state* val = (sg_stencil_state*)luaL_testudata(L, -1, "sokol.StencilState");
                if (val) ud->stencil = *val;
                lua_pop(L, 1);
            } else {
                sg_stencil_state* val = (sg_stencil_state*)luaL_testudata(L, -1, "sokol.StencilState");
                if (val) ud->stencil = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "color_count");
        if (!lua_isnil(L, -1)) {
            ud->color_count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "colors");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    if (lua_istable(L, -1)) {
                        /* Initialize from inline table */
                        lua_pushcfunction(L, l_sg_color_target_state_new);
                        lua_pushvalue(L, -2);
                        lua_call(L, 1, 1);
                        sg_color_target_state* val = (sg_color_target_state*)luaL_testudata(L, -1, "sokol.ColorTargetState");
                        if (val) ud->colors[i] = *val;
                        lua_pop(L, 1);
                    } else {
                        sg_color_target_state* val = (sg_color_target_state*)luaL_testudata(L, -1, "sokol.ColorTargetState");
                        if (val) ud->colors[i] = *val;
                    }
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "primitive_type");
        if (!lua_isnil(L, -1)) {
            ud->primitive_type = (sg_primitive_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "index_type");
        if (!lua_isnil(L, -1)) {
            ud->index_type = (sg_index_type)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "cull_mode");
        if (!lua_isnil(L, -1)) {
            ud->cull_mode = (sg_cull_mode)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "face_winding");
        if (!lua_isnil(L, -1)) {
            ud->face_winding = (sg_face_winding)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sample_count");
        if (!lua_isnil(L, -1)) {
            ud->sample_count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "blend_color");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_color_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_color* val = (sg_color*)luaL_testudata(L, -1, "sokol.Color");
                if (val) ud->blend_color = *val;
                lua_pop(L, 1);
            } else {
                sg_color* val = (sg_color*)luaL_testudata(L, -1, "sokol.Color");
                if (val) ud->blend_color = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "alpha_to_coverage_enabled");
        if (!lua_isnil(L, -1)) {
            ud->alpha_to_coverage_enabled = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pipeline_desc_get__start_canary(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_pipeline_desc_set__start_canary(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_compute(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushboolean(L, self->compute);
    return 1;
}

static int l_sg_pipeline_desc_set_compute(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->compute = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_shader(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_shader* ud = (sg_shader*)lua_newuserdatauv(L, sizeof(sg_shader), 0);
    *ud = self->shader;
    luaL_setmetatable(L, "sokol.Shader");
    return 1;
}

static int l_sg_pipeline_desc_set_shader(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_shader* val = (sg_shader*)luaL_checkudata(L, 2, "sokol.Shader");
    self->shader = *val;
    return 0;
}

static int l_sg_pipeline_desc_get_layout(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_vertex_layout_state* ud = (sg_vertex_layout_state*)lua_newuserdatauv(L, sizeof(sg_vertex_layout_state), 0);
    *ud = self->layout;
    luaL_setmetatable(L, "sokol.VertexLayoutState");
    return 1;
}

static int l_sg_pipeline_desc_set_layout(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_vertex_layout_state* val = (sg_vertex_layout_state*)luaL_checkudata(L, 2, "sokol.VertexLayoutState");
    self->layout = *val;
    return 0;
}

static int l_sg_pipeline_desc_get_depth(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_depth_state* ud = (sg_depth_state*)lua_newuserdatauv(L, sizeof(sg_depth_state), 0);
    *ud = self->depth;
    luaL_setmetatable(L, "sokol.DepthState");
    return 1;
}

static int l_sg_pipeline_desc_set_depth(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_depth_state* val = (sg_depth_state*)luaL_checkudata(L, 2, "sokol.DepthState");
    self->depth = *val;
    return 0;
}

static int l_sg_pipeline_desc_get_stencil(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_stencil_state* ud = (sg_stencil_state*)lua_newuserdatauv(L, sizeof(sg_stencil_state), 0);
    *ud = self->stencil;
    luaL_setmetatable(L, "sokol.StencilState");
    return 1;
}

static int l_sg_pipeline_desc_set_stencil(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_stencil_state* val = (sg_stencil_state*)luaL_checkudata(L, 2, "sokol.StencilState");
    self->stencil = *val;
    return 0;
}

static int l_sg_pipeline_desc_get_color_count(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->color_count);
    return 1;
}

static int l_sg_pipeline_desc_set_color_count(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->color_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_colors(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        sg_color_target_state* ud = (sg_color_target_state*)lua_newuserdatauv(L, sizeof(sg_color_target_state), 0);
        *ud = self->colors[i];
        luaL_setmetatable(L, "sokol.ColorTargetState");
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_pipeline_desc_set_colors(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            sg_color_target_state* val = (sg_color_target_state*)luaL_testudata(L, -1, "sokol.ColorTargetState");
            if (val) self->colors[i] = *val;
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_pipeline_desc_get_primitive_type(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->primitive_type);
    return 1;
}

static int l_sg_pipeline_desc_set_primitive_type(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->primitive_type = (sg_primitive_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_index_type(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->index_type);
    return 1;
}

static int l_sg_pipeline_desc_set_index_type(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->index_type = (sg_index_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_cull_mode(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->cull_mode);
    return 1;
}

static int l_sg_pipeline_desc_set_cull_mode(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->cull_mode = (sg_cull_mode)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_face_winding(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->face_winding);
    return 1;
}

static int l_sg_pipeline_desc_set_face_winding(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->face_winding = (sg_face_winding)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_sample_count(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sg_pipeline_desc_set_sample_count(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_blend_color(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_color* ud = (sg_color*)lua_newuserdatauv(L, sizeof(sg_color), 0);
    *ud = self->blend_color;
    luaL_setmetatable(L, "sokol.Color");
    return 1;
}

static int l_sg_pipeline_desc_set_blend_color(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_color* val = (sg_color*)luaL_checkudata(L, 2, "sokol.Color");
    self->blend_color = *val;
    return 0;
}

static int l_sg_pipeline_desc_get_alpha_to_coverage_enabled(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushboolean(L, self->alpha_to_coverage_enabled);
    return 1;
}

static int l_sg_pipeline_desc_set_alpha_to_coverage_enabled(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->alpha_to_coverage_enabled = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get_label(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_pipeline_desc_set_label(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_pipeline_desc_get__end_canary(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_pipeline_desc_set__end_canary(lua_State *L) {
    sg_pipeline_desc* self = (sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_pipeline_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_pipeline_desc_get__start_canary(L);
    if (strcmp(key, "compute") == 0) return l_sg_pipeline_desc_get_compute(L);
    if (strcmp(key, "shader") == 0) return l_sg_pipeline_desc_get_shader(L);
    if (strcmp(key, "layout") == 0) return l_sg_pipeline_desc_get_layout(L);
    if (strcmp(key, "depth") == 0) return l_sg_pipeline_desc_get_depth(L);
    if (strcmp(key, "stencil") == 0) return l_sg_pipeline_desc_get_stencil(L);
    if (strcmp(key, "color_count") == 0) return l_sg_pipeline_desc_get_color_count(L);
    if (strcmp(key, "colors") == 0) return l_sg_pipeline_desc_get_colors(L);
    if (strcmp(key, "primitive_type") == 0) return l_sg_pipeline_desc_get_primitive_type(L);
    if (strcmp(key, "index_type") == 0) return l_sg_pipeline_desc_get_index_type(L);
    if (strcmp(key, "cull_mode") == 0) return l_sg_pipeline_desc_get_cull_mode(L);
    if (strcmp(key, "face_winding") == 0) return l_sg_pipeline_desc_get_face_winding(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_pipeline_desc_get_sample_count(L);
    if (strcmp(key, "blend_color") == 0) return l_sg_pipeline_desc_get_blend_color(L);
    if (strcmp(key, "alpha_to_coverage_enabled") == 0) return l_sg_pipeline_desc_get_alpha_to_coverage_enabled(L);
    if (strcmp(key, "label") == 0) return l_sg_pipeline_desc_get_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_pipeline_desc_get__end_canary(L);
    return 0;
}

static int l_sg_pipeline_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_pipeline_desc_set__start_canary(L);
    if (strcmp(key, "compute") == 0) return l_sg_pipeline_desc_set_compute(L);
    if (strcmp(key, "shader") == 0) return l_sg_pipeline_desc_set_shader(L);
    if (strcmp(key, "layout") == 0) return l_sg_pipeline_desc_set_layout(L);
    if (strcmp(key, "depth") == 0) return l_sg_pipeline_desc_set_depth(L);
    if (strcmp(key, "stencil") == 0) return l_sg_pipeline_desc_set_stencil(L);
    if (strcmp(key, "color_count") == 0) return l_sg_pipeline_desc_set_color_count(L);
    if (strcmp(key, "colors") == 0) return l_sg_pipeline_desc_set_colors(L);
    if (strcmp(key, "primitive_type") == 0) return l_sg_pipeline_desc_set_primitive_type(L);
    if (strcmp(key, "index_type") == 0) return l_sg_pipeline_desc_set_index_type(L);
    if (strcmp(key, "cull_mode") == 0) return l_sg_pipeline_desc_set_cull_mode(L);
    if (strcmp(key, "face_winding") == 0) return l_sg_pipeline_desc_set_face_winding(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_pipeline_desc_set_sample_count(L);
    if (strcmp(key, "blend_color") == 0) return l_sg_pipeline_desc_set_blend_color(L);
    if (strcmp(key, "alpha_to_coverage_enabled") == 0) return l_sg_pipeline_desc_set_alpha_to_coverage_enabled(L);
    if (strcmp(key, "label") == 0) return l_sg_pipeline_desc_set_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_pipeline_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_buffer_view_desc_new(lua_State *L) {
    sg_buffer_view_desc* ud = (sg_buffer_view_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_view_desc), 0);
    memset(ud, 0, sizeof(sg_buffer_view_desc));
    luaL_setmetatable(L, "sokol.BufferViewDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buffer");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_buffer_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                if (val) ud->buffer = *val;
                lua_pop(L, 1);
            } else {
                sg_buffer* val = (sg_buffer*)luaL_testudata(L, -1, "sokol.Buffer");
                if (val) ud->buffer = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "offset");
        if (!lua_isnil(L, -1)) {
            ud->offset = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_buffer_view_desc_get_buffer(lua_State *L) {
    sg_buffer_view_desc* self = (sg_buffer_view_desc*)luaL_checkudata(L, 1, "sokol.BufferViewDesc");
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    *ud = self->buffer;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sg_buffer_view_desc_set_buffer(lua_State *L) {
    sg_buffer_view_desc* self = (sg_buffer_view_desc*)luaL_checkudata(L, 1, "sokol.BufferViewDesc");
    sg_buffer* val = (sg_buffer*)luaL_checkudata(L, 2, "sokol.Buffer");
    self->buffer = *val;
    return 0;
}

static int l_sg_buffer_view_desc_get_offset(lua_State *L) {
    sg_buffer_view_desc* self = (sg_buffer_view_desc*)luaL_checkudata(L, 1, "sokol.BufferViewDesc");
    lua_pushinteger(L, (lua_Integer)self->offset);
    return 1;
}

static int l_sg_buffer_view_desc_set_offset(lua_State *L) {
    sg_buffer_view_desc* self = (sg_buffer_view_desc*)luaL_checkudata(L, 1, "sokol.BufferViewDesc");
    self->offset = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_view_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer") == 0) return l_sg_buffer_view_desc_get_buffer(L);
    if (strcmp(key, "offset") == 0) return l_sg_buffer_view_desc_get_offset(L);
    return 0;
}

static int l_sg_buffer_view_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer") == 0) return l_sg_buffer_view_desc_set_buffer(L);
    if (strcmp(key, "offset") == 0) return l_sg_buffer_view_desc_set_offset(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_view_desc_new(lua_State *L) {
    sg_image_view_desc* ud = (sg_image_view_desc*)lua_newuserdatauv(L, sizeof(sg_image_view_desc), 0);
    memset(ud, 0, sizeof(sg_image_view_desc));
    luaL_setmetatable(L, "sokol.ImageViewDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "image");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image* val = (sg_image*)luaL_testudata(L, -1, "sokol.Image");
                if (val) ud->image = *val;
                lua_pop(L, 1);
            } else {
                sg_image* val = (sg_image*)luaL_testudata(L, -1, "sokol.Image");
                if (val) ud->image = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mip_level");
        if (!lua_isnil(L, -1)) {
            ud->mip_level = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "slice");
        if (!lua_isnil(L, -1)) {
            ud->slice = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_view_desc_get_image(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    *ud = self->image;
    luaL_setmetatable(L, "sokol.Image");
    return 1;
}

static int l_sg_image_view_desc_set_image(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    sg_image* val = (sg_image*)luaL_checkudata(L, 2, "sokol.Image");
    self->image = *val;
    return 0;
}

static int l_sg_image_view_desc_get_mip_level(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    lua_pushinteger(L, (lua_Integer)self->mip_level);
    return 1;
}

static int l_sg_image_view_desc_set_mip_level(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    self->mip_level = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_view_desc_get_slice(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    lua_pushinteger(L, (lua_Integer)self->slice);
    return 1;
}

static int l_sg_image_view_desc_set_slice(lua_State *L) {
    sg_image_view_desc* self = (sg_image_view_desc*)luaL_checkudata(L, 1, "sokol.ImageViewDesc");
    self->slice = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_view_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "image") == 0) return l_sg_image_view_desc_get_image(L);
    if (strcmp(key, "mip_level") == 0) return l_sg_image_view_desc_get_mip_level(L);
    if (strcmp(key, "slice") == 0) return l_sg_image_view_desc_get_slice(L);
    return 0;
}

static int l_sg_image_view_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "image") == 0) return l_sg_image_view_desc_set_image(L);
    if (strcmp(key, "mip_level") == 0) return l_sg_image_view_desc_set_mip_level(L);
    if (strcmp(key, "slice") == 0) return l_sg_image_view_desc_set_slice(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_texture_view_range_new(lua_State *L) {
    sg_texture_view_range* ud = (sg_texture_view_range*)lua_newuserdatauv(L, sizeof(sg_texture_view_range), 0);
    memset(ud, 0, sizeof(sg_texture_view_range));
    luaL_setmetatable(L, "sokol.TextureViewRange");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "base");
        if (!lua_isnil(L, -1)) {
            ud->base = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "count");
        if (!lua_isnil(L, -1)) {
            ud->count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_texture_view_range_get_base(lua_State *L) {
    sg_texture_view_range* self = (sg_texture_view_range*)luaL_checkudata(L, 1, "sokol.TextureViewRange");
    lua_pushinteger(L, (lua_Integer)self->base);
    return 1;
}

static int l_sg_texture_view_range_set_base(lua_State *L) {
    sg_texture_view_range* self = (sg_texture_view_range*)luaL_checkudata(L, 1, "sokol.TextureViewRange");
    self->base = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_texture_view_range_get_count(lua_State *L) {
    sg_texture_view_range* self = (sg_texture_view_range*)luaL_checkudata(L, 1, "sokol.TextureViewRange");
    lua_pushinteger(L, (lua_Integer)self->count);
    return 1;
}

static int l_sg_texture_view_range_set_count(lua_State *L) {
    sg_texture_view_range* self = (sg_texture_view_range*)luaL_checkudata(L, 1, "sokol.TextureViewRange");
    self->count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_texture_view_range__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base") == 0) return l_sg_texture_view_range_get_base(L);
    if (strcmp(key, "count") == 0) return l_sg_texture_view_range_get_count(L);
    return 0;
}

static int l_sg_texture_view_range__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base") == 0) return l_sg_texture_view_range_set_base(L);
    if (strcmp(key, "count") == 0) return l_sg_texture_view_range_set_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_texture_view_desc_new(lua_State *L) {
    sg_texture_view_desc* ud = (sg_texture_view_desc*)lua_newuserdatauv(L, sizeof(sg_texture_view_desc), 0);
    memset(ud, 0, sizeof(sg_texture_view_desc));
    luaL_setmetatable(L, "sokol.TextureViewDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "image");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image* val = (sg_image*)luaL_testudata(L, -1, "sokol.Image");
                if (val) ud->image = *val;
                lua_pop(L, 1);
            } else {
                sg_image* val = (sg_image*)luaL_testudata(L, -1, "sokol.Image");
                if (val) ud->image = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "mip_levels");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_texture_view_range_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_texture_view_range* val = (sg_texture_view_range*)luaL_testudata(L, -1, "sokol.TextureViewRange");
                if (val) ud->mip_levels = *val;
                lua_pop(L, 1);
            } else {
                sg_texture_view_range* val = (sg_texture_view_range*)luaL_testudata(L, -1, "sokol.TextureViewRange");
                if (val) ud->mip_levels = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "slices");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_texture_view_range_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_texture_view_range* val = (sg_texture_view_range*)luaL_testudata(L, -1, "sokol.TextureViewRange");
                if (val) ud->slices = *val;
                lua_pop(L, 1);
            } else {
                sg_texture_view_range* val = (sg_texture_view_range*)luaL_testudata(L, -1, "sokol.TextureViewRange");
                if (val) ud->slices = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_texture_view_desc_get_image(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    *ud = self->image;
    luaL_setmetatable(L, "sokol.Image");
    return 1;
}

static int l_sg_texture_view_desc_set_image(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_image* val = (sg_image*)luaL_checkudata(L, 2, "sokol.Image");
    self->image = *val;
    return 0;
}

static int l_sg_texture_view_desc_get_mip_levels(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_texture_view_range* ud = (sg_texture_view_range*)lua_newuserdatauv(L, sizeof(sg_texture_view_range), 0);
    *ud = self->mip_levels;
    luaL_setmetatable(L, "sokol.TextureViewRange");
    return 1;
}

static int l_sg_texture_view_desc_set_mip_levels(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_texture_view_range* val = (sg_texture_view_range*)luaL_checkudata(L, 2, "sokol.TextureViewRange");
    self->mip_levels = *val;
    return 0;
}

static int l_sg_texture_view_desc_get_slices(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_texture_view_range* ud = (sg_texture_view_range*)lua_newuserdatauv(L, sizeof(sg_texture_view_range), 0);
    *ud = self->slices;
    luaL_setmetatable(L, "sokol.TextureViewRange");
    return 1;
}

static int l_sg_texture_view_desc_set_slices(lua_State *L) {
    sg_texture_view_desc* self = (sg_texture_view_desc*)luaL_checkudata(L, 1, "sokol.TextureViewDesc");
    sg_texture_view_range* val = (sg_texture_view_range*)luaL_checkudata(L, 2, "sokol.TextureViewRange");
    self->slices = *val;
    return 0;
}

static int l_sg_texture_view_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "image") == 0) return l_sg_texture_view_desc_get_image(L);
    if (strcmp(key, "mip_levels") == 0) return l_sg_texture_view_desc_get_mip_levels(L);
    if (strcmp(key, "slices") == 0) return l_sg_texture_view_desc_get_slices(L);
    return 0;
}

static int l_sg_texture_view_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "image") == 0) return l_sg_texture_view_desc_set_image(L);
    if (strcmp(key, "mip_levels") == 0) return l_sg_texture_view_desc_set_mip_levels(L);
    if (strcmp(key, "slices") == 0) return l_sg_texture_view_desc_set_slices(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_view_desc_new(lua_State *L) {
    sg_view_desc* ud = (sg_view_desc*)lua_newuserdatauv(L, sizeof(sg_view_desc), 0);
    memset(ud, 0, sizeof(sg_view_desc));
    luaL_setmetatable(L, "sokol.ViewDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "texture");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_texture_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_texture_view_desc* val = (sg_texture_view_desc*)luaL_testudata(L, -1, "sokol.TextureViewDesc");
                if (val) ud->texture = *val;
                lua_pop(L, 1);
            } else {
                sg_texture_view_desc* val = (sg_texture_view_desc*)luaL_testudata(L, -1, "sokol.TextureViewDesc");
                if (val) ud->texture = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "storage_buffer");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_buffer_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_buffer_view_desc* val = (sg_buffer_view_desc*)luaL_testudata(L, -1, "sokol.BufferViewDesc");
                if (val) ud->storage_buffer = *val;
                lua_pop(L, 1);
            } else {
                sg_buffer_view_desc* val = (sg_buffer_view_desc*)luaL_testudata(L, -1, "sokol.BufferViewDesc");
                if (val) ud->storage_buffer = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "storage_image");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->storage_image = *val;
                lua_pop(L, 1);
            } else {
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->storage_image = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "color_attachment");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->color_attachment = *val;
                lua_pop(L, 1);
            } else {
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->color_attachment = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "resolve_attachment");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->resolve_attachment = *val;
                lua_pop(L, 1);
            } else {
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->resolve_attachment = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_stencil_attachment");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_image_view_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->depth_stencil_attachment = *val;
                lua_pop(L, 1);
            } else {
                sg_image_view_desc* val = (sg_image_view_desc*)luaL_testudata(L, -1, "sokol.ImageViewDesc");
                if (val) ud->depth_stencil_attachment = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "label");
        if (!lua_isnil(L, -1)) {
            ud->label = lua_tostring(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_view_desc_get__start_canary(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_view_desc_set__start_canary(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_view_desc_get_texture(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_texture_view_desc* ud = (sg_texture_view_desc*)lua_newuserdatauv(L, sizeof(sg_texture_view_desc), 0);
    *ud = self->texture;
    luaL_setmetatable(L, "sokol.TextureViewDesc");
    return 1;
}

static int l_sg_view_desc_set_texture(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_texture_view_desc* val = (sg_texture_view_desc*)luaL_checkudata(L, 2, "sokol.TextureViewDesc");
    self->texture = *val;
    return 0;
}

static int l_sg_view_desc_get_storage_buffer(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_buffer_view_desc* ud = (sg_buffer_view_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_view_desc), 0);
    *ud = self->storage_buffer;
    luaL_setmetatable(L, "sokol.BufferViewDesc");
    return 1;
}

static int l_sg_view_desc_set_storage_buffer(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_buffer_view_desc* val = (sg_buffer_view_desc*)luaL_checkudata(L, 2, "sokol.BufferViewDesc");
    self->storage_buffer = *val;
    return 0;
}

static int l_sg_view_desc_get_storage_image(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* ud = (sg_image_view_desc*)lua_newuserdatauv(L, sizeof(sg_image_view_desc), 0);
    *ud = self->storage_image;
    luaL_setmetatable(L, "sokol.ImageViewDesc");
    return 1;
}

static int l_sg_view_desc_set_storage_image(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* val = (sg_image_view_desc*)luaL_checkudata(L, 2, "sokol.ImageViewDesc");
    self->storage_image = *val;
    return 0;
}

static int l_sg_view_desc_get_color_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* ud = (sg_image_view_desc*)lua_newuserdatauv(L, sizeof(sg_image_view_desc), 0);
    *ud = self->color_attachment;
    luaL_setmetatable(L, "sokol.ImageViewDesc");
    return 1;
}

static int l_sg_view_desc_set_color_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* val = (sg_image_view_desc*)luaL_checkudata(L, 2, "sokol.ImageViewDesc");
    self->color_attachment = *val;
    return 0;
}

static int l_sg_view_desc_get_resolve_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* ud = (sg_image_view_desc*)lua_newuserdatauv(L, sizeof(sg_image_view_desc), 0);
    *ud = self->resolve_attachment;
    luaL_setmetatable(L, "sokol.ImageViewDesc");
    return 1;
}

static int l_sg_view_desc_set_resolve_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* val = (sg_image_view_desc*)luaL_checkudata(L, 2, "sokol.ImageViewDesc");
    self->resolve_attachment = *val;
    return 0;
}

static int l_sg_view_desc_get_depth_stencil_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* ud = (sg_image_view_desc*)lua_newuserdatauv(L, sizeof(sg_image_view_desc), 0);
    *ud = self->depth_stencil_attachment;
    luaL_setmetatable(L, "sokol.ImageViewDesc");
    return 1;
}

static int l_sg_view_desc_set_depth_stencil_attachment(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_image_view_desc* val = (sg_image_view_desc*)luaL_checkudata(L, 2, "sokol.ImageViewDesc");
    self->depth_stencil_attachment = *val;
    return 0;
}

static int l_sg_view_desc_get_label(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    lua_pushstring(L, self->label);
    return 1;
}

static int l_sg_view_desc_set_label(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    self->label = luaL_checkstring(L, 2);
    return 0;
}

static int l_sg_view_desc_get__end_canary(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_view_desc_set__end_canary(lua_State *L) {
    sg_view_desc* self = (sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_view_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_view_desc_get__start_canary(L);
    if (strcmp(key, "texture") == 0) return l_sg_view_desc_get_texture(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_view_desc_get_storage_buffer(L);
    if (strcmp(key, "storage_image") == 0) return l_sg_view_desc_get_storage_image(L);
    if (strcmp(key, "color_attachment") == 0) return l_sg_view_desc_get_color_attachment(L);
    if (strcmp(key, "resolve_attachment") == 0) return l_sg_view_desc_get_resolve_attachment(L);
    if (strcmp(key, "depth_stencil_attachment") == 0) return l_sg_view_desc_get_depth_stencil_attachment(L);
    if (strcmp(key, "label") == 0) return l_sg_view_desc_get_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_view_desc_get__end_canary(L);
    return 0;
}

static int l_sg_view_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_view_desc_set__start_canary(L);
    if (strcmp(key, "texture") == 0) return l_sg_view_desc_set_texture(L);
    if (strcmp(key, "storage_buffer") == 0) return l_sg_view_desc_set_storage_buffer(L);
    if (strcmp(key, "storage_image") == 0) return l_sg_view_desc_set_storage_image(L);
    if (strcmp(key, "color_attachment") == 0) return l_sg_view_desc_set_color_attachment(L);
    if (strcmp(key, "resolve_attachment") == 0) return l_sg_view_desc_set_resolve_attachment(L);
    if (strcmp(key, "depth_stencil_attachment") == 0) return l_sg_view_desc_set_depth_stencil_attachment(L);
    if (strcmp(key, "label") == 0) return l_sg_view_desc_set_label(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_view_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_trace_hooks_new(lua_State *L) {
    sg_trace_hooks* ud = (sg_trace_hooks*)lua_newuserdatauv(L, sizeof(sg_trace_hooks), 0);
    memset(ud, 0, sizeof(sg_trace_hooks));
    luaL_setmetatable(L, "sokol.TraceHooks");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "user_data");
        if (!lua_isnil(L, -1)) {
            ud->user_data = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_trace_hooks_get_user_data(lua_State *L) {
    sg_trace_hooks* self = (sg_trace_hooks*)luaL_checkudata(L, 1, "sokol.TraceHooks");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sg_trace_hooks_set_user_data(lua_State *L) {
    sg_trace_hooks* self = (sg_trace_hooks*)luaL_checkudata(L, 1, "sokol.TraceHooks");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_trace_hooks__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_trace_hooks_get_user_data(L);
    return 0;
}

static int l_sg_trace_hooks__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_trace_hooks_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_slot_info_new(lua_State *L) {
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    memset(ud, 0, sizeof(sg_slot_info));
    luaL_setmetatable(L, "sokol.SlotInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "state");
        if (!lua_isnil(L, -1)) {
            ud->state = (sg_resource_state)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "res_id");
        if (!lua_isnil(L, -1)) {
            ud->res_id = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uninit_count");
        if (!lua_isnil(L, -1)) {
            ud->uninit_count = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_slot_info_get_state(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    lua_pushinteger(L, (lua_Integer)self->state);
    return 1;
}

static int l_sg_slot_info_set_state(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    self->state = (sg_resource_state)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_slot_info_get_res_id(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    lua_pushinteger(L, (lua_Integer)self->res_id);
    return 1;
}

static int l_sg_slot_info_set_res_id(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    self->res_id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_slot_info_get_uninit_count(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    lua_pushinteger(L, (lua_Integer)self->uninit_count);
    return 1;
}

static int l_sg_slot_info_set_uninit_count(lua_State *L) {
    sg_slot_info* self = (sg_slot_info*)luaL_checkudata(L, 1, "sokol.SlotInfo");
    self->uninit_count = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_slot_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "state") == 0) return l_sg_slot_info_get_state(L);
    if (strcmp(key, "res_id") == 0) return l_sg_slot_info_get_res_id(L);
    if (strcmp(key, "uninit_count") == 0) return l_sg_slot_info_get_uninit_count(L);
    return 0;
}

static int l_sg_slot_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "state") == 0) return l_sg_slot_info_set_state(L);
    if (strcmp(key, "res_id") == 0) return l_sg_slot_info_set_res_id(L);
    if (strcmp(key, "uninit_count") == 0) return l_sg_slot_info_set_uninit_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_buffer_info_new(lua_State *L) {
    sg_buffer_info* ud = (sg_buffer_info*)lua_newuserdatauv(L, sizeof(sg_buffer_info), 0);
    memset(ud, 0, sizeof(sg_buffer_info));
    luaL_setmetatable(L, "sokol.BufferInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "update_frame_index");
        if (!lua_isnil(L, -1)) {
            ud->update_frame_index = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "append_frame_index");
        if (!lua_isnil(L, -1)) {
            ud->append_frame_index = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "append_pos");
        if (!lua_isnil(L, -1)) {
            ud->append_pos = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "append_overflow");
        if (!lua_isnil(L, -1)) {
            ud->append_overflow = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_slots");
        if (!lua_isnil(L, -1)) {
            ud->num_slots = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_buffer_info_get_slot(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_buffer_info_set_slot(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_buffer_info_get_update_frame_index(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushinteger(L, (lua_Integer)self->update_frame_index);
    return 1;
}

static int l_sg_buffer_info_set_update_frame_index(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->update_frame_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_info_get_append_frame_index(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushinteger(L, (lua_Integer)self->append_frame_index);
    return 1;
}

static int l_sg_buffer_info_set_append_frame_index(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->append_frame_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_info_get_append_pos(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushinteger(L, (lua_Integer)self->append_pos);
    return 1;
}

static int l_sg_buffer_info_set_append_pos(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->append_pos = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_info_get_append_overflow(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushboolean(L, self->append_overflow);
    return 1;
}

static int l_sg_buffer_info_set_append_overflow(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->append_overflow = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_buffer_info_get_num_slots(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushinteger(L, (lua_Integer)self->num_slots);
    return 1;
}

static int l_sg_buffer_info_set_num_slots(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->num_slots = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_info_get_active_slot(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_buffer_info_set_active_slot(lua_State *L) {
    sg_buffer_info* self = (sg_buffer_info*)luaL_checkudata(L, 1, "sokol.BufferInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_buffer_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_buffer_info_get_slot(L);
    if (strcmp(key, "update_frame_index") == 0) return l_sg_buffer_info_get_update_frame_index(L);
    if (strcmp(key, "append_frame_index") == 0) return l_sg_buffer_info_get_append_frame_index(L);
    if (strcmp(key, "append_pos") == 0) return l_sg_buffer_info_get_append_pos(L);
    if (strcmp(key, "append_overflow") == 0) return l_sg_buffer_info_get_append_overflow(L);
    if (strcmp(key, "num_slots") == 0) return l_sg_buffer_info_get_num_slots(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_buffer_info_get_active_slot(L);
    return 0;
}

static int l_sg_buffer_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_buffer_info_set_slot(L);
    if (strcmp(key, "update_frame_index") == 0) return l_sg_buffer_info_set_update_frame_index(L);
    if (strcmp(key, "append_frame_index") == 0) return l_sg_buffer_info_set_append_frame_index(L);
    if (strcmp(key, "append_pos") == 0) return l_sg_buffer_info_set_append_pos(L);
    if (strcmp(key, "append_overflow") == 0) return l_sg_buffer_info_set_append_overflow(L);
    if (strcmp(key, "num_slots") == 0) return l_sg_buffer_info_set_num_slots(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_buffer_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_image_info_new(lua_State *L) {
    sg_image_info* ud = (sg_image_info*)lua_newuserdatauv(L, sizeof(sg_image_info), 0);
    memset(ud, 0, sizeof(sg_image_info));
    luaL_setmetatable(L, "sokol.ImageInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "upd_frame_index");
        if (!lua_isnil(L, -1)) {
            ud->upd_frame_index = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_slots");
        if (!lua_isnil(L, -1)) {
            ud->num_slots = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_image_info_get_slot(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_image_info_set_slot(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_image_info_get_upd_frame_index(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    lua_pushinteger(L, (lua_Integer)self->upd_frame_index);
    return 1;
}

static int l_sg_image_info_set_upd_frame_index(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    self->upd_frame_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_info_get_num_slots(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    lua_pushinteger(L, (lua_Integer)self->num_slots);
    return 1;
}

static int l_sg_image_info_set_num_slots(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    self->num_slots = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_info_get_active_slot(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_image_info_set_active_slot(lua_State *L) {
    sg_image_info* self = (sg_image_info*)luaL_checkudata(L, 1, "sokol.ImageInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_image_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_image_info_get_slot(L);
    if (strcmp(key, "upd_frame_index") == 0) return l_sg_image_info_get_upd_frame_index(L);
    if (strcmp(key, "num_slots") == 0) return l_sg_image_info_get_num_slots(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_image_info_get_active_slot(L);
    return 0;
}

static int l_sg_image_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_image_info_set_slot(L);
    if (strcmp(key, "upd_frame_index") == 0) return l_sg_image_info_set_upd_frame_index(L);
    if (strcmp(key, "num_slots") == 0) return l_sg_image_info_set_num_slots(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_image_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_sampler_info_new(lua_State *L) {
    sg_sampler_info* ud = (sg_sampler_info*)lua_newuserdatauv(L, sizeof(sg_sampler_info), 0);
    memset(ud, 0, sizeof(sg_sampler_info));
    luaL_setmetatable(L, "sokol.SamplerInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_sampler_info_get_slot(lua_State *L) {
    sg_sampler_info* self = (sg_sampler_info*)luaL_checkudata(L, 1, "sokol.SamplerInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_sampler_info_set_slot(lua_State *L) {
    sg_sampler_info* self = (sg_sampler_info*)luaL_checkudata(L, 1, "sokol.SamplerInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_sampler_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_sampler_info_get_slot(L);
    return 0;
}

static int l_sg_sampler_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_sampler_info_set_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_shader_info_new(lua_State *L) {
    sg_shader_info* ud = (sg_shader_info*)lua_newuserdatauv(L, sizeof(sg_shader_info), 0);
    memset(ud, 0, sizeof(sg_shader_info));
    luaL_setmetatable(L, "sokol.ShaderInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_shader_info_get_slot(lua_State *L) {
    sg_shader_info* self = (sg_shader_info*)luaL_checkudata(L, 1, "sokol.ShaderInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_shader_info_set_slot(lua_State *L) {
    sg_shader_info* self = (sg_shader_info*)luaL_checkudata(L, 1, "sokol.ShaderInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_shader_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_shader_info_get_slot(L);
    return 0;
}

static int l_sg_shader_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_shader_info_set_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_pipeline_info_new(lua_State *L) {
    sg_pipeline_info* ud = (sg_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_pipeline_info), 0);
    memset(ud, 0, sizeof(sg_pipeline_info));
    luaL_setmetatable(L, "sokol.PipelineInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_pipeline_info_get_slot(lua_State *L) {
    sg_pipeline_info* self = (sg_pipeline_info*)luaL_checkudata(L, 1, "sokol.PipelineInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_pipeline_info_set_slot(lua_State *L) {
    sg_pipeline_info* self = (sg_pipeline_info*)luaL_checkudata(L, 1, "sokol.PipelineInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_pipeline_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_pipeline_info_get_slot(L);
    return 0;
}

static int l_sg_pipeline_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_pipeline_info_set_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_view_info_new(lua_State *L) {
    sg_view_info* ud = (sg_view_info*)lua_newuserdatauv(L, sizeof(sg_view_info), 0);
    memset(ud, 0, sizeof(sg_view_info));
    luaL_setmetatable(L, "sokol.ViewInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "slot");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_slot_info_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
                lua_pop(L, 1);
            } else {
                sg_slot_info* val = (sg_slot_info*)luaL_testudata(L, -1, "sokol.SlotInfo");
                if (val) ud->slot = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_view_info_get_slot(lua_State *L) {
    sg_view_info* self = (sg_view_info*)luaL_checkudata(L, 1, "sokol.ViewInfo");
    sg_slot_info* ud = (sg_slot_info*)lua_newuserdatauv(L, sizeof(sg_slot_info), 0);
    *ud = self->slot;
    luaL_setmetatable(L, "sokol.SlotInfo");
    return 1;
}

static int l_sg_view_info_set_slot(lua_State *L) {
    sg_view_info* self = (sg_view_info*)luaL_checkudata(L, 1, "sokol.ViewInfo");
    sg_slot_info* val = (sg_slot_info*)luaL_checkudata(L, 2, "sokol.SlotInfo");
    self->slot = *val;
    return 0;
}

static int l_sg_view_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_view_info_get_slot(L);
    return 0;
}

static int l_sg_view_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "slot") == 0) return l_sg_view_info_set_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_gl_new(lua_State *L) {
    sg_frame_stats_gl* ud = (sg_frame_stats_gl*)lua_newuserdatauv(L, sizeof(sg_frame_stats_gl), 0);
    memset(ud, 0, sizeof(sg_frame_stats_gl));
    luaL_setmetatable(L, "sokol.FrameStatsGl");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_bind_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_bind_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_active_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_active_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bind_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_bind_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bind_sampler");
        if (!lua_isnil(L, -1)) {
            ud->num_bind_sampler = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bind_image_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_bind_image_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_use_program");
        if (!lua_isnil(L, -1)) {
            ud->num_use_program = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_render_state");
        if (!lua_isnil(L, -1)) {
            ud->num_render_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vertex_attrib_pointer");
        if (!lua_isnil(L, -1)) {
            ud->num_vertex_attrib_pointer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vertex_attrib_divisor");
        if (!lua_isnil(L, -1)) {
            ud->num_vertex_attrib_divisor = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_enable_vertex_attrib_array");
        if (!lua_isnil(L, -1)) {
            ud->num_enable_vertex_attrib_array = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_disable_vertex_attrib_array");
        if (!lua_isnil(L, -1)) {
            ud->num_disable_vertex_attrib_array = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_uniform");
        if (!lua_isnil(L, -1)) {
            ud->num_uniform = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_memory_barriers");
        if (!lua_isnil(L, -1)) {
            ud->num_memory_barriers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_gl_get_num_bind_buffer(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_bind_buffer);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_bind_buffer(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_bind_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_active_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_active_texture);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_active_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_active_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_bind_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_bind_texture);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_bind_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_bind_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_bind_sampler(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_bind_sampler);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_bind_sampler(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_bind_sampler = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_bind_image_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_bind_image_texture);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_bind_image_texture(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_bind_image_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_use_program(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_use_program);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_use_program(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_use_program = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_render_state(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_render_state);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_render_state(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_render_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_vertex_attrib_pointer(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_vertex_attrib_pointer);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_vertex_attrib_pointer(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_vertex_attrib_pointer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_vertex_attrib_divisor(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_vertex_attrib_divisor);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_vertex_attrib_divisor(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_vertex_attrib_divisor = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_enable_vertex_attrib_array(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_enable_vertex_attrib_array);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_enable_vertex_attrib_array(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_enable_vertex_attrib_array = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_disable_vertex_attrib_array(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_disable_vertex_attrib_array);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_disable_vertex_attrib_array(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_disable_vertex_attrib_array = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_uniform(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_uniform);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_uniform(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_uniform = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl_get_num_memory_barriers(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    lua_pushinteger(L, (lua_Integer)self->num_memory_barriers);
    return 1;
}

static int l_sg_frame_stats_gl_set_num_memory_barriers(lua_State *L) {
    sg_frame_stats_gl* self = (sg_frame_stats_gl*)luaL_checkudata(L, 1, "sokol.FrameStatsGl");
    self->num_memory_barriers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_gl__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_bind_buffer") == 0) return l_sg_frame_stats_gl_get_num_bind_buffer(L);
    if (strcmp(key, "num_active_texture") == 0) return l_sg_frame_stats_gl_get_num_active_texture(L);
    if (strcmp(key, "num_bind_texture") == 0) return l_sg_frame_stats_gl_get_num_bind_texture(L);
    if (strcmp(key, "num_bind_sampler") == 0) return l_sg_frame_stats_gl_get_num_bind_sampler(L);
    if (strcmp(key, "num_bind_image_texture") == 0) return l_sg_frame_stats_gl_get_num_bind_image_texture(L);
    if (strcmp(key, "num_use_program") == 0) return l_sg_frame_stats_gl_get_num_use_program(L);
    if (strcmp(key, "num_render_state") == 0) return l_sg_frame_stats_gl_get_num_render_state(L);
    if (strcmp(key, "num_vertex_attrib_pointer") == 0) return l_sg_frame_stats_gl_get_num_vertex_attrib_pointer(L);
    if (strcmp(key, "num_vertex_attrib_divisor") == 0) return l_sg_frame_stats_gl_get_num_vertex_attrib_divisor(L);
    if (strcmp(key, "num_enable_vertex_attrib_array") == 0) return l_sg_frame_stats_gl_get_num_enable_vertex_attrib_array(L);
    if (strcmp(key, "num_disable_vertex_attrib_array") == 0) return l_sg_frame_stats_gl_get_num_disable_vertex_attrib_array(L);
    if (strcmp(key, "num_uniform") == 0) return l_sg_frame_stats_gl_get_num_uniform(L);
    if (strcmp(key, "num_memory_barriers") == 0) return l_sg_frame_stats_gl_get_num_memory_barriers(L);
    return 0;
}

static int l_sg_frame_stats_gl__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_bind_buffer") == 0) return l_sg_frame_stats_gl_set_num_bind_buffer(L);
    if (strcmp(key, "num_active_texture") == 0) return l_sg_frame_stats_gl_set_num_active_texture(L);
    if (strcmp(key, "num_bind_texture") == 0) return l_sg_frame_stats_gl_set_num_bind_texture(L);
    if (strcmp(key, "num_bind_sampler") == 0) return l_sg_frame_stats_gl_set_num_bind_sampler(L);
    if (strcmp(key, "num_bind_image_texture") == 0) return l_sg_frame_stats_gl_set_num_bind_image_texture(L);
    if (strcmp(key, "num_use_program") == 0) return l_sg_frame_stats_gl_set_num_use_program(L);
    if (strcmp(key, "num_render_state") == 0) return l_sg_frame_stats_gl_set_num_render_state(L);
    if (strcmp(key, "num_vertex_attrib_pointer") == 0) return l_sg_frame_stats_gl_set_num_vertex_attrib_pointer(L);
    if (strcmp(key, "num_vertex_attrib_divisor") == 0) return l_sg_frame_stats_gl_set_num_vertex_attrib_divisor(L);
    if (strcmp(key, "num_enable_vertex_attrib_array") == 0) return l_sg_frame_stats_gl_set_num_enable_vertex_attrib_array(L);
    if (strcmp(key, "num_disable_vertex_attrib_array") == 0) return l_sg_frame_stats_gl_set_num_disable_vertex_attrib_array(L);
    if (strcmp(key, "num_uniform") == 0) return l_sg_frame_stats_gl_set_num_uniform(L);
    if (strcmp(key, "num_memory_barriers") == 0) return l_sg_frame_stats_gl_set_num_memory_barriers(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_pass_new(lua_State *L) {
    sg_frame_stats_d3d11_pass* ud = (sg_frame_stats_d3d11_pass*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_pass), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11_pass));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Pass");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_om_set_render_targets");
        if (!lua_isnil(L, -1)) {
            ud->num_om_set_render_targets = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_clear_render_target_view");
        if (!lua_isnil(L, -1)) {
            ud->num_clear_render_target_view = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_clear_depth_stencil_view");
        if (!lua_isnil(L, -1)) {
            ud->num_clear_depth_stencil_view = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_resolve_subresource");
        if (!lua_isnil(L, -1)) {
            ud->num_resolve_subresource = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_pass_get_num_om_set_render_targets(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    lua_pushinteger(L, (lua_Integer)self->num_om_set_render_targets);
    return 1;
}

static int l_sg_frame_stats_d3d11_pass_set_num_om_set_render_targets(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    self->num_om_set_render_targets = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pass_get_num_clear_render_target_view(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    lua_pushinteger(L, (lua_Integer)self->num_clear_render_target_view);
    return 1;
}

static int l_sg_frame_stats_d3d11_pass_set_num_clear_render_target_view(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    self->num_clear_render_target_view = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pass_get_num_clear_depth_stencil_view(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    lua_pushinteger(L, (lua_Integer)self->num_clear_depth_stencil_view);
    return 1;
}

static int l_sg_frame_stats_d3d11_pass_set_num_clear_depth_stencil_view(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    self->num_clear_depth_stencil_view = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pass_get_num_resolve_subresource(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    lua_pushinteger(L, (lua_Integer)self->num_resolve_subresource);
    return 1;
}

static int l_sg_frame_stats_d3d11_pass_set_num_resolve_subresource(lua_State *L) {
    sg_frame_stats_d3d11_pass* self = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pass");
    self->num_resolve_subresource = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pass__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_om_set_render_targets") == 0) return l_sg_frame_stats_d3d11_pass_get_num_om_set_render_targets(L);
    if (strcmp(key, "num_clear_render_target_view") == 0) return l_sg_frame_stats_d3d11_pass_get_num_clear_render_target_view(L);
    if (strcmp(key, "num_clear_depth_stencil_view") == 0) return l_sg_frame_stats_d3d11_pass_get_num_clear_depth_stencil_view(L);
    if (strcmp(key, "num_resolve_subresource") == 0) return l_sg_frame_stats_d3d11_pass_get_num_resolve_subresource(L);
    return 0;
}

static int l_sg_frame_stats_d3d11_pass__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_om_set_render_targets") == 0) return l_sg_frame_stats_d3d11_pass_set_num_om_set_render_targets(L);
    if (strcmp(key, "num_clear_render_target_view") == 0) return l_sg_frame_stats_d3d11_pass_set_num_clear_render_target_view(L);
    if (strcmp(key, "num_clear_depth_stencil_view") == 0) return l_sg_frame_stats_d3d11_pass_set_num_clear_depth_stencil_view(L);
    if (strcmp(key, "num_resolve_subresource") == 0) return l_sg_frame_stats_d3d11_pass_set_num_resolve_subresource(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_pipeline_new(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* ud = (sg_frame_stats_d3d11_pipeline*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_pipeline), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11_pipeline));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Pipeline");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_rs_set_state");
        if (!lua_isnil(L, -1)) {
            ud->num_rs_set_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_om_set_depth_stencil_state");
        if (!lua_isnil(L, -1)) {
            ud->num_om_set_depth_stencil_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_om_set_blend_state");
        if (!lua_isnil(L, -1)) {
            ud->num_om_set_blend_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ia_set_primitive_topology");
        if (!lua_isnil(L, -1)) {
            ud->num_ia_set_primitive_topology = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ia_set_input_layout");
        if (!lua_isnil(L, -1)) {
            ud->num_ia_set_input_layout = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vs_set_shader");
        if (!lua_isnil(L, -1)) {
            ud->num_vs_set_shader = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vs_set_constant_buffers");
        if (!lua_isnil(L, -1)) {
            ud->num_vs_set_constant_buffers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ps_set_shader");
        if (!lua_isnil(L, -1)) {
            ud->num_ps_set_shader = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ps_set_constant_buffers");
        if (!lua_isnil(L, -1)) {
            ud->num_ps_set_constant_buffers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cs_set_shader");
        if (!lua_isnil(L, -1)) {
            ud->num_cs_set_shader = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cs_set_constant_buffers");
        if (!lua_isnil(L, -1)) {
            ud->num_cs_set_constant_buffers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_rs_set_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_rs_set_state);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_rs_set_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_rs_set_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_om_set_depth_stencil_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_om_set_depth_stencil_state);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_om_set_depth_stencil_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_om_set_depth_stencil_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_om_set_blend_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_om_set_blend_state);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_om_set_blend_state(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_om_set_blend_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_ia_set_primitive_topology(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_ia_set_primitive_topology);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_ia_set_primitive_topology(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_ia_set_primitive_topology = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_ia_set_input_layout(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_ia_set_input_layout);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_ia_set_input_layout(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_ia_set_input_layout = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_vs_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_vs_set_shader);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_vs_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_vs_set_shader = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_vs_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_vs_set_constant_buffers);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_vs_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_vs_set_constant_buffers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_ps_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_ps_set_shader);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_ps_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_ps_set_shader = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_ps_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_ps_set_constant_buffers);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_ps_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_ps_set_constant_buffers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_cs_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_cs_set_shader);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_cs_set_shader(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_cs_set_shader = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline_get_num_cs_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    lua_pushinteger(L, (lua_Integer)self->num_cs_set_constant_buffers);
    return 1;
}

static int l_sg_frame_stats_d3d11_pipeline_set_num_cs_set_constant_buffers(lua_State *L) {
    sg_frame_stats_d3d11_pipeline* self = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Pipeline");
    self->num_cs_set_constant_buffers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_rs_set_state") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_rs_set_state(L);
    if (strcmp(key, "num_om_set_depth_stencil_state") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_om_set_depth_stencil_state(L);
    if (strcmp(key, "num_om_set_blend_state") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_om_set_blend_state(L);
    if (strcmp(key, "num_ia_set_primitive_topology") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_ia_set_primitive_topology(L);
    if (strcmp(key, "num_ia_set_input_layout") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_ia_set_input_layout(L);
    if (strcmp(key, "num_vs_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_vs_set_shader(L);
    if (strcmp(key, "num_vs_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_vs_set_constant_buffers(L);
    if (strcmp(key, "num_ps_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_ps_set_shader(L);
    if (strcmp(key, "num_ps_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_ps_set_constant_buffers(L);
    if (strcmp(key, "num_cs_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_cs_set_shader(L);
    if (strcmp(key, "num_cs_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_get_num_cs_set_constant_buffers(L);
    return 0;
}

static int l_sg_frame_stats_d3d11_pipeline__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_rs_set_state") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_rs_set_state(L);
    if (strcmp(key, "num_om_set_depth_stencil_state") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_om_set_depth_stencil_state(L);
    if (strcmp(key, "num_om_set_blend_state") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_om_set_blend_state(L);
    if (strcmp(key, "num_ia_set_primitive_topology") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_ia_set_primitive_topology(L);
    if (strcmp(key, "num_ia_set_input_layout") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_ia_set_input_layout(L);
    if (strcmp(key, "num_vs_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_vs_set_shader(L);
    if (strcmp(key, "num_vs_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_vs_set_constant_buffers(L);
    if (strcmp(key, "num_ps_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_ps_set_shader(L);
    if (strcmp(key, "num_ps_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_ps_set_constant_buffers(L);
    if (strcmp(key, "num_cs_set_shader") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_cs_set_shader(L);
    if (strcmp(key, "num_cs_set_constant_buffers") == 0) return l_sg_frame_stats_d3d11_pipeline_set_num_cs_set_constant_buffers(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_bindings_new(lua_State *L) {
    sg_frame_stats_d3d11_bindings* ud = (sg_frame_stats_d3d11_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_bindings), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11_bindings));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Bindings");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_ia_set_vertex_buffers");
        if (!lua_isnil(L, -1)) {
            ud->num_ia_set_vertex_buffers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ia_set_index_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_ia_set_index_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vs_set_shader_resources");
        if (!lua_isnil(L, -1)) {
            ud->num_vs_set_shader_resources = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_vs_set_samplers");
        if (!lua_isnil(L, -1)) {
            ud->num_vs_set_samplers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ps_set_shader_resources");
        if (!lua_isnil(L, -1)) {
            ud->num_ps_set_shader_resources = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_ps_set_samplers");
        if (!lua_isnil(L, -1)) {
            ud->num_ps_set_samplers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cs_set_shader_resources");
        if (!lua_isnil(L, -1)) {
            ud->num_cs_set_shader_resources = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cs_set_samplers");
        if (!lua_isnil(L, -1)) {
            ud->num_cs_set_samplers = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cs_set_unordered_access_views");
        if (!lua_isnil(L, -1)) {
            ud->num_cs_set_unordered_access_views = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_ia_set_vertex_buffers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_ia_set_vertex_buffers);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_ia_set_vertex_buffers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_ia_set_vertex_buffers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_ia_set_index_buffer(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_ia_set_index_buffer);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_ia_set_index_buffer(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_ia_set_index_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_vs_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_vs_set_shader_resources);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_vs_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_vs_set_shader_resources = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_vs_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_vs_set_samplers);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_vs_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_vs_set_samplers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_ps_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_ps_set_shader_resources);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_ps_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_ps_set_shader_resources = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_ps_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_ps_set_samplers);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_ps_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_ps_set_samplers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_cs_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_cs_set_shader_resources);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_cs_set_shader_resources(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_cs_set_shader_resources = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_cs_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_cs_set_samplers);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_cs_set_samplers(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_cs_set_samplers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings_get_num_cs_set_unordered_access_views(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    lua_pushinteger(L, (lua_Integer)self->num_cs_set_unordered_access_views);
    return 1;
}

static int l_sg_frame_stats_d3d11_bindings_set_num_cs_set_unordered_access_views(lua_State *L) {
    sg_frame_stats_d3d11_bindings* self = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Bindings");
    self->num_cs_set_unordered_access_views = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_ia_set_vertex_buffers") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_ia_set_vertex_buffers(L);
    if (strcmp(key, "num_ia_set_index_buffer") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_ia_set_index_buffer(L);
    if (strcmp(key, "num_vs_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_vs_set_shader_resources(L);
    if (strcmp(key, "num_vs_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_vs_set_samplers(L);
    if (strcmp(key, "num_ps_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_ps_set_shader_resources(L);
    if (strcmp(key, "num_ps_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_ps_set_samplers(L);
    if (strcmp(key, "num_cs_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_cs_set_shader_resources(L);
    if (strcmp(key, "num_cs_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_cs_set_samplers(L);
    if (strcmp(key, "num_cs_set_unordered_access_views") == 0) return l_sg_frame_stats_d3d11_bindings_get_num_cs_set_unordered_access_views(L);
    return 0;
}

static int l_sg_frame_stats_d3d11_bindings__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_ia_set_vertex_buffers") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_ia_set_vertex_buffers(L);
    if (strcmp(key, "num_ia_set_index_buffer") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_ia_set_index_buffer(L);
    if (strcmp(key, "num_vs_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_vs_set_shader_resources(L);
    if (strcmp(key, "num_vs_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_vs_set_samplers(L);
    if (strcmp(key, "num_ps_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_ps_set_shader_resources(L);
    if (strcmp(key, "num_ps_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_ps_set_samplers(L);
    if (strcmp(key, "num_cs_set_shader_resources") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_cs_set_shader_resources(L);
    if (strcmp(key, "num_cs_set_samplers") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_cs_set_samplers(L);
    if (strcmp(key, "num_cs_set_unordered_access_views") == 0) return l_sg_frame_stats_d3d11_bindings_set_num_cs_set_unordered_access_views(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_uniforms_new(lua_State *L) {
    sg_frame_stats_d3d11_uniforms* ud = (sg_frame_stats_d3d11_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_uniforms), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11_uniforms));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Uniforms");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_update_subresource");
        if (!lua_isnil(L, -1)) {
            ud->num_update_subresource = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_uniforms_get_num_update_subresource(lua_State *L) {
    sg_frame_stats_d3d11_uniforms* self = (sg_frame_stats_d3d11_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Uniforms");
    lua_pushinteger(L, (lua_Integer)self->num_update_subresource);
    return 1;
}

static int l_sg_frame_stats_d3d11_uniforms_set_num_update_subresource(lua_State *L) {
    sg_frame_stats_d3d11_uniforms* self = (sg_frame_stats_d3d11_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Uniforms");
    self->num_update_subresource = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_uniforms__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_update_subresource") == 0) return l_sg_frame_stats_d3d11_uniforms_get_num_update_subresource(L);
    return 0;
}

static int l_sg_frame_stats_d3d11_uniforms__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_update_subresource") == 0) return l_sg_frame_stats_d3d11_uniforms_set_num_update_subresource(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_draw_new(lua_State *L) {
    sg_frame_stats_d3d11_draw* ud = (sg_frame_stats_d3d11_draw*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_draw), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11_draw));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Draw");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_draw_indexed_instanced");
        if (!lua_isnil(L, -1)) {
            ud->num_draw_indexed_instanced = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_draw_indexed");
        if (!lua_isnil(L, -1)) {
            ud->num_draw_indexed = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_draw_instanced");
        if (!lua_isnil(L, -1)) {
            ud->num_draw_instanced = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_draw");
        if (!lua_isnil(L, -1)) {
            ud->num_draw = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_draw_get_num_draw_indexed_instanced(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    lua_pushinteger(L, (lua_Integer)self->num_draw_indexed_instanced);
    return 1;
}

static int l_sg_frame_stats_d3d11_draw_set_num_draw_indexed_instanced(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    self->num_draw_indexed_instanced = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_draw_get_num_draw_indexed(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    lua_pushinteger(L, (lua_Integer)self->num_draw_indexed);
    return 1;
}

static int l_sg_frame_stats_d3d11_draw_set_num_draw_indexed(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    self->num_draw_indexed = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_draw_get_num_draw_instanced(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    lua_pushinteger(L, (lua_Integer)self->num_draw_instanced);
    return 1;
}

static int l_sg_frame_stats_d3d11_draw_set_num_draw_instanced(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    self->num_draw_instanced = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_draw_get_num_draw(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    lua_pushinteger(L, (lua_Integer)self->num_draw);
    return 1;
}

static int l_sg_frame_stats_d3d11_draw_set_num_draw(lua_State *L) {
    sg_frame_stats_d3d11_draw* self = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11Draw");
    self->num_draw = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_draw__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_draw_indexed_instanced") == 0) return l_sg_frame_stats_d3d11_draw_get_num_draw_indexed_instanced(L);
    if (strcmp(key, "num_draw_indexed") == 0) return l_sg_frame_stats_d3d11_draw_get_num_draw_indexed(L);
    if (strcmp(key, "num_draw_instanced") == 0) return l_sg_frame_stats_d3d11_draw_get_num_draw_instanced(L);
    if (strcmp(key, "num_draw") == 0) return l_sg_frame_stats_d3d11_draw_get_num_draw(L);
    return 0;
}

static int l_sg_frame_stats_d3d11_draw__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_draw_indexed_instanced") == 0) return l_sg_frame_stats_d3d11_draw_set_num_draw_indexed_instanced(L);
    if (strcmp(key, "num_draw_indexed") == 0) return l_sg_frame_stats_d3d11_draw_set_num_draw_indexed(L);
    if (strcmp(key, "num_draw_instanced") == 0) return l_sg_frame_stats_d3d11_draw_set_num_draw_instanced(L);
    if (strcmp(key, "num_draw") == 0) return l_sg_frame_stats_d3d11_draw_set_num_draw(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_d3d11_new(lua_State *L) {
    sg_frame_stats_d3d11* ud = (sg_frame_stats_d3d11*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11), 0);
    memset(ud, 0, sizeof(sg_frame_stats_d3d11));
    luaL_setmetatable(L, "sokol.FrameStatsD3d11");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "pass");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_pass_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11_pass* val = (sg_frame_stats_d3d11_pass*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Pass");
                if (val) ud->pass = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11_pass* val = (sg_frame_stats_d3d11_pass*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Pass");
                if (val) ud->pass = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pipeline");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_pipeline_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11_pipeline* val = (sg_frame_stats_d3d11_pipeline*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Pipeline");
                if (val) ud->pipeline = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11_pipeline* val = (sg_frame_stats_d3d11_pipeline*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Pipeline");
                if (val) ud->pipeline = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bindings");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_bindings_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11_bindings* val = (sg_frame_stats_d3d11_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Bindings");
                if (val) ud->bindings = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11_bindings* val = (sg_frame_stats_d3d11_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Bindings");
                if (val) ud->bindings = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uniforms");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_uniforms_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11_uniforms* val = (sg_frame_stats_d3d11_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Uniforms");
                if (val) ud->uniforms = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11_uniforms* val = (sg_frame_stats_d3d11_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Uniforms");
                if (val) ud->uniforms = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "draw");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_draw_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11_draw* val = (sg_frame_stats_d3d11_draw*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Draw");
                if (val) ud->draw = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11_draw* val = (sg_frame_stats_d3d11_draw*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11Draw");
                if (val) ud->draw = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_map");
        if (!lua_isnil(L, -1)) {
            ud->num_map = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_unmap");
        if (!lua_isnil(L, -1)) {
            ud->num_unmap = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_d3d11_get_pass(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_pass* ud = (sg_frame_stats_d3d11_pass*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_pass), 0);
    *ud = self->pass;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Pass");
    return 1;
}

static int l_sg_frame_stats_d3d11_set_pass(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_pass* val = (sg_frame_stats_d3d11_pass*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11Pass");
    self->pass = *val;
    return 0;
}

static int l_sg_frame_stats_d3d11_get_pipeline(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_pipeline* ud = (sg_frame_stats_d3d11_pipeline*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_pipeline), 0);
    *ud = self->pipeline;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Pipeline");
    return 1;
}

static int l_sg_frame_stats_d3d11_set_pipeline(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_pipeline* val = (sg_frame_stats_d3d11_pipeline*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11Pipeline");
    self->pipeline = *val;
    return 0;
}

static int l_sg_frame_stats_d3d11_get_bindings(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_bindings* ud = (sg_frame_stats_d3d11_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_bindings), 0);
    *ud = self->bindings;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Bindings");
    return 1;
}

static int l_sg_frame_stats_d3d11_set_bindings(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_bindings* val = (sg_frame_stats_d3d11_bindings*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11Bindings");
    self->bindings = *val;
    return 0;
}

static int l_sg_frame_stats_d3d11_get_uniforms(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_uniforms* ud = (sg_frame_stats_d3d11_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_uniforms), 0);
    *ud = self->uniforms;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Uniforms");
    return 1;
}

static int l_sg_frame_stats_d3d11_set_uniforms(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_uniforms* val = (sg_frame_stats_d3d11_uniforms*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11Uniforms");
    self->uniforms = *val;
    return 0;
}

static int l_sg_frame_stats_d3d11_get_draw(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_draw* ud = (sg_frame_stats_d3d11_draw*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11_draw), 0);
    *ud = self->draw;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11Draw");
    return 1;
}

static int l_sg_frame_stats_d3d11_set_draw(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    sg_frame_stats_d3d11_draw* val = (sg_frame_stats_d3d11_draw*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11Draw");
    self->draw = *val;
    return 0;
}

static int l_sg_frame_stats_d3d11_get_num_map(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    lua_pushinteger(L, (lua_Integer)self->num_map);
    return 1;
}

static int l_sg_frame_stats_d3d11_set_num_map(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    self->num_map = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11_get_num_unmap(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    lua_pushinteger(L, (lua_Integer)self->num_unmap);
    return 1;
}

static int l_sg_frame_stats_d3d11_set_num_unmap(lua_State *L) {
    sg_frame_stats_d3d11* self = (sg_frame_stats_d3d11*)luaL_checkudata(L, 1, "sokol.FrameStatsD3d11");
    self->num_unmap = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_d3d11__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pass") == 0) return l_sg_frame_stats_d3d11_get_pass(L);
    if (strcmp(key, "pipeline") == 0) return l_sg_frame_stats_d3d11_get_pipeline(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_d3d11_get_bindings(L);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_d3d11_get_uniforms(L);
    if (strcmp(key, "draw") == 0) return l_sg_frame_stats_d3d11_get_draw(L);
    if (strcmp(key, "num_map") == 0) return l_sg_frame_stats_d3d11_get_num_map(L);
    if (strcmp(key, "num_unmap") == 0) return l_sg_frame_stats_d3d11_get_num_unmap(L);
    return 0;
}

static int l_sg_frame_stats_d3d11__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "pass") == 0) return l_sg_frame_stats_d3d11_set_pass(L);
    if (strcmp(key, "pipeline") == 0) return l_sg_frame_stats_d3d11_set_pipeline(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_d3d11_set_bindings(L);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_d3d11_set_uniforms(L);
    if (strcmp(key, "draw") == 0) return l_sg_frame_stats_d3d11_set_draw(L);
    if (strcmp(key, "num_map") == 0) return l_sg_frame_stats_d3d11_set_num_map(L);
    if (strcmp(key, "num_unmap") == 0) return l_sg_frame_stats_d3d11_set_num_unmap(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_metal_idpool_new(lua_State *L) {
    sg_frame_stats_metal_idpool* ud = (sg_frame_stats_metal_idpool*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_idpool), 0);
    memset(ud, 0, sizeof(sg_frame_stats_metal_idpool));
    luaL_setmetatable(L, "sokol.FrameStatsMetalIdpool");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_added");
        if (!lua_isnil(L, -1)) {
            ud->num_added = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_released");
        if (!lua_isnil(L, -1)) {
            ud->num_released = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_garbage_collected");
        if (!lua_isnil(L, -1)) {
            ud->num_garbage_collected = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_metal_idpool_get_num_added(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    lua_pushinteger(L, (lua_Integer)self->num_added);
    return 1;
}

static int l_sg_frame_stats_metal_idpool_set_num_added(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    self->num_added = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_idpool_get_num_released(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    lua_pushinteger(L, (lua_Integer)self->num_released);
    return 1;
}

static int l_sg_frame_stats_metal_idpool_set_num_released(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    self->num_released = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_idpool_get_num_garbage_collected(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    lua_pushinteger(L, (lua_Integer)self->num_garbage_collected);
    return 1;
}

static int l_sg_frame_stats_metal_idpool_set_num_garbage_collected(lua_State *L) {
    sg_frame_stats_metal_idpool* self = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalIdpool");
    self->num_garbage_collected = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_idpool__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_added") == 0) return l_sg_frame_stats_metal_idpool_get_num_added(L);
    if (strcmp(key, "num_released") == 0) return l_sg_frame_stats_metal_idpool_get_num_released(L);
    if (strcmp(key, "num_garbage_collected") == 0) return l_sg_frame_stats_metal_idpool_get_num_garbage_collected(L);
    return 0;
}

static int l_sg_frame_stats_metal_idpool__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_added") == 0) return l_sg_frame_stats_metal_idpool_set_num_added(L);
    if (strcmp(key, "num_released") == 0) return l_sg_frame_stats_metal_idpool_set_num_released(L);
    if (strcmp(key, "num_garbage_collected") == 0) return l_sg_frame_stats_metal_idpool_set_num_garbage_collected(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_metal_pipeline_new(lua_State *L) {
    sg_frame_stats_metal_pipeline* ud = (sg_frame_stats_metal_pipeline*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_pipeline), 0);
    memset(ud, 0, sizeof(sg_frame_stats_metal_pipeline));
    luaL_setmetatable(L, "sokol.FrameStatsMetalPipeline");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_set_blend_color");
        if (!lua_isnil(L, -1)) {
            ud->num_set_blend_color = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_cull_mode");
        if (!lua_isnil(L, -1)) {
            ud->num_set_cull_mode = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_front_facing_winding");
        if (!lua_isnil(L, -1)) {
            ud->num_set_front_facing_winding = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_stencil_reference_value");
        if (!lua_isnil(L, -1)) {
            ud->num_set_stencil_reference_value = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_depth_bias");
        if (!lua_isnil(L, -1)) {
            ud->num_set_depth_bias = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_render_pipeline_state");
        if (!lua_isnil(L, -1)) {
            ud->num_set_render_pipeline_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_depth_stencil_state");
        if (!lua_isnil(L, -1)) {
            ud->num_set_depth_stencil_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_blend_color(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_blend_color);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_blend_color(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_blend_color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_cull_mode(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_cull_mode);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_cull_mode(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_cull_mode = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_front_facing_winding(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_front_facing_winding);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_front_facing_winding(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_front_facing_winding = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_stencil_reference_value(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_stencil_reference_value);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_stencil_reference_value(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_stencil_reference_value = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_depth_bias(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_depth_bias);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_depth_bias(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_depth_bias = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_render_pipeline_state(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_render_pipeline_state);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_render_pipeline_state(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_render_pipeline_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline_get_num_set_depth_stencil_state(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    lua_pushinteger(L, (lua_Integer)self->num_set_depth_stencil_state);
    return 1;
}

static int l_sg_frame_stats_metal_pipeline_set_num_set_depth_stencil_state(lua_State *L) {
    sg_frame_stats_metal_pipeline* self = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalPipeline");
    self->num_set_depth_stencil_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_blend_color") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_blend_color(L);
    if (strcmp(key, "num_set_cull_mode") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_cull_mode(L);
    if (strcmp(key, "num_set_front_facing_winding") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_front_facing_winding(L);
    if (strcmp(key, "num_set_stencil_reference_value") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_stencil_reference_value(L);
    if (strcmp(key, "num_set_depth_bias") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_depth_bias(L);
    if (strcmp(key, "num_set_render_pipeline_state") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_render_pipeline_state(L);
    if (strcmp(key, "num_set_depth_stencil_state") == 0) return l_sg_frame_stats_metal_pipeline_get_num_set_depth_stencil_state(L);
    return 0;
}

static int l_sg_frame_stats_metal_pipeline__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_blend_color") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_blend_color(L);
    if (strcmp(key, "num_set_cull_mode") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_cull_mode(L);
    if (strcmp(key, "num_set_front_facing_winding") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_front_facing_winding(L);
    if (strcmp(key, "num_set_stencil_reference_value") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_stencil_reference_value(L);
    if (strcmp(key, "num_set_depth_bias") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_depth_bias(L);
    if (strcmp(key, "num_set_render_pipeline_state") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_render_pipeline_state(L);
    if (strcmp(key, "num_set_depth_stencil_state") == 0) return l_sg_frame_stats_metal_pipeline_set_num_set_depth_stencil_state(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_metal_bindings_new(lua_State *L) {
    sg_frame_stats_metal_bindings* ud = (sg_frame_stats_metal_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_bindings), 0);
    memset(ud, 0, sizeof(sg_frame_stats_metal_bindings));
    luaL_setmetatable(L, "sokol.FrameStatsMetalBindings");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_set_vertex_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_vertex_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_vertex_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_vertex_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_vertex_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_vertex_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_vertex_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_vertex_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_vertex_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_vertex_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_fragment_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_set_fragment_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_fragment_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_fragment_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_fragment_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_fragment_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_fragment_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_set_fragment_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_fragment_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_fragment_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_fragment_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_set_fragment_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_fragment_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_fragment_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_compute_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_set_compute_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_compute_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_compute_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_compute_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_compute_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_compute_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_set_compute_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_compute_texture");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_compute_texture = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_compute_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_set_compute_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_compute_sampler_state");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_compute_sampler_state = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_vertex_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_vertex_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_vertex_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_vertex_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_vertex_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_vertex_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_vertex_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_vertex_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_vertex_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_vertex_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_vertex_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_vertex_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_vertex_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_vertex_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_vertex_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_vertex_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_vertex_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_vertex_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_fragment_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_fragment_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_fragment_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_fragment_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_fragment_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_fragment_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_fragment_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_fragment_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_fragment_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_fragment_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_fragment_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_fragment_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_fragment_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_fragment_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_fragment_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_fragment_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_fragment_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_fragment_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_fragment_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_fragment_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_fragment_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_fragment_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_compute_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_compute_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_compute_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_compute_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_compute_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_compute_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_compute_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_compute_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_compute_buffer);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_buffer(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_compute_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_compute_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_compute_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_compute_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_compute_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_compute_texture);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_texture(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_compute_texture = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_set_compute_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_compute_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_set_compute_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_set_compute_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_compute_sampler_state);
    return 1;
}

static int l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_sampler_state(lua_State *L) {
    sg_frame_stats_metal_bindings* self = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalBindings");
    self->num_skip_redundant_compute_sampler_state = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_bindings__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_vertex_buffer(L);
    if (strcmp(key, "num_set_vertex_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_vertex_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_vertex_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_buffer(L);
    if (strcmp(key, "num_set_vertex_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_vertex_texture(L);
    if (strcmp(key, "num_skip_redundant_vertex_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_texture(L);
    if (strcmp(key, "num_set_vertex_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_vertex_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_vertex_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_vertex_sampler_state(L);
    if (strcmp(key, "num_set_fragment_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_fragment_buffer(L);
    if (strcmp(key, "num_set_fragment_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_fragment_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_fragment_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_buffer(L);
    if (strcmp(key, "num_set_fragment_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_fragment_texture(L);
    if (strcmp(key, "num_skip_redundant_fragment_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_texture(L);
    if (strcmp(key, "num_set_fragment_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_fragment_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_fragment_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_fragment_sampler_state(L);
    if (strcmp(key, "num_set_compute_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_compute_buffer(L);
    if (strcmp(key, "num_set_compute_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_compute_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_compute_buffer") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_buffer(L);
    if (strcmp(key, "num_set_compute_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_compute_texture(L);
    if (strcmp(key, "num_skip_redundant_compute_texture") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_texture(L);
    if (strcmp(key, "num_set_compute_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_set_compute_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_compute_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_get_num_skip_redundant_compute_sampler_state(L);
    return 0;
}

static int l_sg_frame_stats_metal_bindings__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_vertex_buffer(L);
    if (strcmp(key, "num_set_vertex_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_vertex_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_vertex_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_buffer(L);
    if (strcmp(key, "num_set_vertex_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_vertex_texture(L);
    if (strcmp(key, "num_skip_redundant_vertex_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_texture(L);
    if (strcmp(key, "num_set_vertex_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_vertex_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_vertex_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_vertex_sampler_state(L);
    if (strcmp(key, "num_set_fragment_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_fragment_buffer(L);
    if (strcmp(key, "num_set_fragment_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_fragment_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_fragment_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_buffer(L);
    if (strcmp(key, "num_set_fragment_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_fragment_texture(L);
    if (strcmp(key, "num_skip_redundant_fragment_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_texture(L);
    if (strcmp(key, "num_set_fragment_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_fragment_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_fragment_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_fragment_sampler_state(L);
    if (strcmp(key, "num_set_compute_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_compute_buffer(L);
    if (strcmp(key, "num_set_compute_buffer_offset") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_compute_buffer_offset(L);
    if (strcmp(key, "num_skip_redundant_compute_buffer") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_buffer(L);
    if (strcmp(key, "num_set_compute_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_compute_texture(L);
    if (strcmp(key, "num_skip_redundant_compute_texture") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_texture(L);
    if (strcmp(key, "num_set_compute_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_set_compute_sampler_state(L);
    if (strcmp(key, "num_skip_redundant_compute_sampler_state") == 0) return l_sg_frame_stats_metal_bindings_set_num_skip_redundant_compute_sampler_state(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_metal_uniforms_new(lua_State *L) {
    sg_frame_stats_metal_uniforms* ud = (sg_frame_stats_metal_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_uniforms), 0);
    memset(ud, 0, sizeof(sg_frame_stats_metal_uniforms));
    luaL_setmetatable(L, "sokol.FrameStatsMetalUniforms");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_set_vertex_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_fragment_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_fragment_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_compute_buffer_offset");
        if (!lua_isnil(L, -1)) {
            ud->num_set_compute_buffer_offset = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_metal_uniforms_get_num_set_vertex_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_uniforms_set_num_set_vertex_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    self->num_set_vertex_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_uniforms_get_num_set_fragment_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    lua_pushinteger(L, (lua_Integer)self->num_set_fragment_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_uniforms_set_num_set_fragment_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    self->num_set_fragment_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_uniforms_get_num_set_compute_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    lua_pushinteger(L, (lua_Integer)self->num_set_compute_buffer_offset);
    return 1;
}

static int l_sg_frame_stats_metal_uniforms_set_num_set_compute_buffer_offset(lua_State *L) {
    sg_frame_stats_metal_uniforms* self = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsMetalUniforms");
    self->num_set_compute_buffer_offset = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_metal_uniforms__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_get_num_set_vertex_buffer_offset(L);
    if (strcmp(key, "num_set_fragment_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_get_num_set_fragment_buffer_offset(L);
    if (strcmp(key, "num_set_compute_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_get_num_set_compute_buffer_offset(L);
    return 0;
}

static int l_sg_frame_stats_metal_uniforms__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_set_num_set_vertex_buffer_offset(L);
    if (strcmp(key, "num_set_fragment_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_set_num_set_fragment_buffer_offset(L);
    if (strcmp(key, "num_set_compute_buffer_offset") == 0) return l_sg_frame_stats_metal_uniforms_set_num_set_compute_buffer_offset(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_metal_new(lua_State *L) {
    sg_frame_stats_metal* ud = (sg_frame_stats_metal*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal), 0);
    memset(ud, 0, sizeof(sg_frame_stats_metal));
    luaL_setmetatable(L, "sokol.FrameStatsMetal");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "idpool");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_metal_idpool_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_metal_idpool* val = (sg_frame_stats_metal_idpool*)luaL_testudata(L, -1, "sokol.FrameStatsMetalIdpool");
                if (val) ud->idpool = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_metal_idpool* val = (sg_frame_stats_metal_idpool*)luaL_testudata(L, -1, "sokol.FrameStatsMetalIdpool");
                if (val) ud->idpool = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pipeline");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_metal_pipeline_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_metal_pipeline* val = (sg_frame_stats_metal_pipeline*)luaL_testudata(L, -1, "sokol.FrameStatsMetalPipeline");
                if (val) ud->pipeline = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_metal_pipeline* val = (sg_frame_stats_metal_pipeline*)luaL_testudata(L, -1, "sokol.FrameStatsMetalPipeline");
                if (val) ud->pipeline = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bindings");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_metal_bindings_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_metal_bindings* val = (sg_frame_stats_metal_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsMetalBindings");
                if (val) ud->bindings = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_metal_bindings* val = (sg_frame_stats_metal_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsMetalBindings");
                if (val) ud->bindings = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uniforms");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_metal_uniforms_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_metal_uniforms* val = (sg_frame_stats_metal_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsMetalUniforms");
                if (val) ud->uniforms = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_metal_uniforms* val = (sg_frame_stats_metal_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsMetalUniforms");
                if (val) ud->uniforms = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_metal_get_idpool(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_idpool* ud = (sg_frame_stats_metal_idpool*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_idpool), 0);
    *ud = self->idpool;
    luaL_setmetatable(L, "sokol.FrameStatsMetalIdpool");
    return 1;
}

static int l_sg_frame_stats_metal_set_idpool(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_idpool* val = (sg_frame_stats_metal_idpool*)luaL_checkudata(L, 2, "sokol.FrameStatsMetalIdpool");
    self->idpool = *val;
    return 0;
}

static int l_sg_frame_stats_metal_get_pipeline(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_pipeline* ud = (sg_frame_stats_metal_pipeline*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_pipeline), 0);
    *ud = self->pipeline;
    luaL_setmetatable(L, "sokol.FrameStatsMetalPipeline");
    return 1;
}

static int l_sg_frame_stats_metal_set_pipeline(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_pipeline* val = (sg_frame_stats_metal_pipeline*)luaL_checkudata(L, 2, "sokol.FrameStatsMetalPipeline");
    self->pipeline = *val;
    return 0;
}

static int l_sg_frame_stats_metal_get_bindings(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_bindings* ud = (sg_frame_stats_metal_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_bindings), 0);
    *ud = self->bindings;
    luaL_setmetatable(L, "sokol.FrameStatsMetalBindings");
    return 1;
}

static int l_sg_frame_stats_metal_set_bindings(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_bindings* val = (sg_frame_stats_metal_bindings*)luaL_checkudata(L, 2, "sokol.FrameStatsMetalBindings");
    self->bindings = *val;
    return 0;
}

static int l_sg_frame_stats_metal_get_uniforms(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_uniforms* ud = (sg_frame_stats_metal_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal_uniforms), 0);
    *ud = self->uniforms;
    luaL_setmetatable(L, "sokol.FrameStatsMetalUniforms");
    return 1;
}

static int l_sg_frame_stats_metal_set_uniforms(lua_State *L) {
    sg_frame_stats_metal* self = (sg_frame_stats_metal*)luaL_checkudata(L, 1, "sokol.FrameStatsMetal");
    sg_frame_stats_metal_uniforms* val = (sg_frame_stats_metal_uniforms*)luaL_checkudata(L, 2, "sokol.FrameStatsMetalUniforms");
    self->uniforms = *val;
    return 0;
}

static int l_sg_frame_stats_metal__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "idpool") == 0) return l_sg_frame_stats_metal_get_idpool(L);
    if (strcmp(key, "pipeline") == 0) return l_sg_frame_stats_metal_get_pipeline(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_metal_get_bindings(L);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_metal_get_uniforms(L);
    return 0;
}

static int l_sg_frame_stats_metal__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "idpool") == 0) return l_sg_frame_stats_metal_set_idpool(L);
    if (strcmp(key, "pipeline") == 0) return l_sg_frame_stats_metal_set_pipeline(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_metal_set_bindings(L);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_metal_set_uniforms(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_wgpu_uniforms_new(lua_State *L) {
    sg_frame_stats_wgpu_uniforms* ud = (sg_frame_stats_wgpu_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu_uniforms), 0);
    memset(ud, 0, sizeof(sg_frame_stats_wgpu_uniforms));
    luaL_setmetatable(L, "sokol.FrameStatsWgpuUniforms");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_set_bindgroup");
        if (!lua_isnil(L, -1)) {
            ud->num_set_bindgroup = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_write_buffer");
        if (!lua_isnil(L, -1)) {
            ud->size_write_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_wgpu_uniforms_get_num_set_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_uniforms* self = (sg_frame_stats_wgpu_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuUniforms");
    lua_pushinteger(L, (lua_Integer)self->num_set_bindgroup);
    return 1;
}

static int l_sg_frame_stats_wgpu_uniforms_set_num_set_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_uniforms* self = (sg_frame_stats_wgpu_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuUniforms");
    self->num_set_bindgroup = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_uniforms_get_size_write_buffer(lua_State *L) {
    sg_frame_stats_wgpu_uniforms* self = (sg_frame_stats_wgpu_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuUniforms");
    lua_pushinteger(L, (lua_Integer)self->size_write_buffer);
    return 1;
}

static int l_sg_frame_stats_wgpu_uniforms_set_size_write_buffer(lua_State *L) {
    sg_frame_stats_wgpu_uniforms* self = (sg_frame_stats_wgpu_uniforms*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuUniforms");
    self->size_write_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_uniforms__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_bindgroup") == 0) return l_sg_frame_stats_wgpu_uniforms_get_num_set_bindgroup(L);
    if (strcmp(key, "size_write_buffer") == 0) return l_sg_frame_stats_wgpu_uniforms_get_size_write_buffer(L);
    return 0;
}

static int l_sg_frame_stats_wgpu_uniforms__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_bindgroup") == 0) return l_sg_frame_stats_wgpu_uniforms_set_num_set_bindgroup(L);
    if (strcmp(key, "size_write_buffer") == 0) return l_sg_frame_stats_wgpu_uniforms_set_size_write_buffer(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_wgpu_bindings_new(lua_State *L) {
    sg_frame_stats_wgpu_bindings* ud = (sg_frame_stats_wgpu_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu_bindings), 0);
    memset(ud, 0, sizeof(sg_frame_stats_wgpu_bindings));
    luaL_setmetatable(L, "sokol.FrameStatsWgpuBindings");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_set_vertex_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_set_vertex_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_vertex_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_vertex_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_index_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_set_index_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_index_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_index_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_create_bindgroup");
        if (!lua_isnil(L, -1)) {
            ud->num_create_bindgroup = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_discard_bindgroup");
        if (!lua_isnil(L, -1)) {
            ud->num_discard_bindgroup = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_set_bindgroup");
        if (!lua_isnil(L, -1)) {
            ud->num_set_bindgroup = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_skip_redundant_bindgroup");
        if (!lua_isnil(L, -1)) {
            ud->num_skip_redundant_bindgroup = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bindgroup_cache_hits");
        if (!lua_isnil(L, -1)) {
            ud->num_bindgroup_cache_hits = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bindgroup_cache_misses");
        if (!lua_isnil(L, -1)) {
            ud->num_bindgroup_cache_misses = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bindgroup_cache_collisions");
        if (!lua_isnil(L, -1)) {
            ud->num_bindgroup_cache_collisions = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bindgroup_cache_invalidates");
        if (!lua_isnil(L, -1)) {
            ud->num_bindgroup_cache_invalidates = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_bindgroup_cache_hash_vs_key_mismatch");
        if (!lua_isnil(L, -1)) {
            ud->num_bindgroup_cache_hash_vs_key_mismatch = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_set_vertex_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_vertex_buffer);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_set_vertex_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_set_vertex_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_vertex_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_vertex_buffer);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_vertex_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_skip_redundant_vertex_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_set_index_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_index_buffer);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_set_index_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_set_index_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_index_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_index_buffer);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_index_buffer(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_skip_redundant_index_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_create_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_create_bindgroup);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_create_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_create_bindgroup = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_discard_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_discard_bindgroup);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_discard_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_discard_bindgroup = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_set_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_set_bindgroup);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_set_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_set_bindgroup = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_skip_redundant_bindgroup);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_bindgroup(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_skip_redundant_bindgroup = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_hits(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_bindgroup_cache_hits);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_hits(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_bindgroup_cache_hits = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_misses(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_bindgroup_cache_misses);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_misses(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_bindgroup_cache_misses = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_collisions(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_bindgroup_cache_collisions);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_collisions(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_bindgroup_cache_collisions = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_invalidates(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_bindgroup_cache_invalidates);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_invalidates(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_bindgroup_cache_invalidates = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_hash_vs_key_mismatch(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    lua_pushinteger(L, (lua_Integer)self->num_bindgroup_cache_hash_vs_key_mismatch);
    return 1;
}

static int l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_hash_vs_key_mismatch(lua_State *L) {
    sg_frame_stats_wgpu_bindings* self = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpuBindings");
    self->num_bindgroup_cache_hash_vs_key_mismatch = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_set_vertex_buffer(L);
    if (strcmp(key, "num_skip_redundant_vertex_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_vertex_buffer(L);
    if (strcmp(key, "num_set_index_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_set_index_buffer(L);
    if (strcmp(key, "num_skip_redundant_index_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_index_buffer(L);
    if (strcmp(key, "num_create_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_create_bindgroup(L);
    if (strcmp(key, "num_discard_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_discard_bindgroup(L);
    if (strcmp(key, "num_set_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_set_bindgroup(L);
    if (strcmp(key, "num_skip_redundant_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_skip_redundant_bindgroup(L);
    if (strcmp(key, "num_bindgroup_cache_hits") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_hits(L);
    if (strcmp(key, "num_bindgroup_cache_misses") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_misses(L);
    if (strcmp(key, "num_bindgroup_cache_collisions") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_collisions(L);
    if (strcmp(key, "num_bindgroup_cache_invalidates") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_invalidates(L);
    if (strcmp(key, "num_bindgroup_cache_hash_vs_key_mismatch") == 0) return l_sg_frame_stats_wgpu_bindings_get_num_bindgroup_cache_hash_vs_key_mismatch(L);
    return 0;
}

static int l_sg_frame_stats_wgpu_bindings__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_set_vertex_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_set_vertex_buffer(L);
    if (strcmp(key, "num_skip_redundant_vertex_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_vertex_buffer(L);
    if (strcmp(key, "num_set_index_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_set_index_buffer(L);
    if (strcmp(key, "num_skip_redundant_index_buffer") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_index_buffer(L);
    if (strcmp(key, "num_create_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_create_bindgroup(L);
    if (strcmp(key, "num_discard_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_discard_bindgroup(L);
    if (strcmp(key, "num_set_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_set_bindgroup(L);
    if (strcmp(key, "num_skip_redundant_bindgroup") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_skip_redundant_bindgroup(L);
    if (strcmp(key, "num_bindgroup_cache_hits") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_hits(L);
    if (strcmp(key, "num_bindgroup_cache_misses") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_misses(L);
    if (strcmp(key, "num_bindgroup_cache_collisions") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_collisions(L);
    if (strcmp(key, "num_bindgroup_cache_invalidates") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_invalidates(L);
    if (strcmp(key, "num_bindgroup_cache_hash_vs_key_mismatch") == 0) return l_sg_frame_stats_wgpu_bindings_set_num_bindgroup_cache_hash_vs_key_mismatch(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_wgpu_new(lua_State *L) {
    sg_frame_stats_wgpu* ud = (sg_frame_stats_wgpu*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu), 0);
    memset(ud, 0, sizeof(sg_frame_stats_wgpu));
    luaL_setmetatable(L, "sokol.FrameStatsWgpu");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "uniforms");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_wgpu_uniforms_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_wgpu_uniforms* val = (sg_frame_stats_wgpu_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsWgpuUniforms");
                if (val) ud->uniforms = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_wgpu_uniforms* val = (sg_frame_stats_wgpu_uniforms*)luaL_testudata(L, -1, "sokol.FrameStatsWgpuUniforms");
                if (val) ud->uniforms = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bindings");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_wgpu_bindings_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_wgpu_bindings* val = (sg_frame_stats_wgpu_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsWgpuBindings");
                if (val) ud->bindings = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_wgpu_bindings* val = (sg_frame_stats_wgpu_bindings*)luaL_testudata(L, -1, "sokol.FrameStatsWgpuBindings");
                if (val) ud->bindings = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_wgpu_get_uniforms(lua_State *L) {
    sg_frame_stats_wgpu* self = (sg_frame_stats_wgpu*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpu");
    sg_frame_stats_wgpu_uniforms* ud = (sg_frame_stats_wgpu_uniforms*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu_uniforms), 0);
    *ud = self->uniforms;
    luaL_setmetatable(L, "sokol.FrameStatsWgpuUniforms");
    return 1;
}

static int l_sg_frame_stats_wgpu_set_uniforms(lua_State *L) {
    sg_frame_stats_wgpu* self = (sg_frame_stats_wgpu*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpu");
    sg_frame_stats_wgpu_uniforms* val = (sg_frame_stats_wgpu_uniforms*)luaL_checkudata(L, 2, "sokol.FrameStatsWgpuUniforms");
    self->uniforms = *val;
    return 0;
}

static int l_sg_frame_stats_wgpu_get_bindings(lua_State *L) {
    sg_frame_stats_wgpu* self = (sg_frame_stats_wgpu*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpu");
    sg_frame_stats_wgpu_bindings* ud = (sg_frame_stats_wgpu_bindings*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu_bindings), 0);
    *ud = self->bindings;
    luaL_setmetatable(L, "sokol.FrameStatsWgpuBindings");
    return 1;
}

static int l_sg_frame_stats_wgpu_set_bindings(lua_State *L) {
    sg_frame_stats_wgpu* self = (sg_frame_stats_wgpu*)luaL_checkudata(L, 1, "sokol.FrameStatsWgpu");
    sg_frame_stats_wgpu_bindings* val = (sg_frame_stats_wgpu_bindings*)luaL_checkudata(L, 2, "sokol.FrameStatsWgpuBindings");
    self->bindings = *val;
    return 0;
}

static int l_sg_frame_stats_wgpu__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_wgpu_get_uniforms(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_wgpu_get_bindings(L);
    return 0;
}

static int l_sg_frame_stats_wgpu__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "uniforms") == 0) return l_sg_frame_stats_wgpu_set_uniforms(L);
    if (strcmp(key, "bindings") == 0) return l_sg_frame_stats_wgpu_set_bindings(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_vk_new(lua_State *L) {
    sg_frame_stats_vk* ud = (sg_frame_stats_vk*)lua_newuserdatauv(L, sizeof(sg_frame_stats_vk), 0);
    memset(ud, 0, sizeof(sg_frame_stats_vk));
    luaL_setmetatable(L, "sokol.FrameStatsVk");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "num_cmd_pipeline_barrier");
        if (!lua_isnil(L, -1)) {
            ud->num_cmd_pipeline_barrier = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_allocate_memory");
        if (!lua_isnil(L, -1)) {
            ud->num_allocate_memory = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_free_memory");
        if (!lua_isnil(L, -1)) {
            ud->num_free_memory = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_allocate_memory");
        if (!lua_isnil(L, -1)) {
            ud->size_allocate_memory = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_delete_queue_added");
        if (!lua_isnil(L, -1)) {
            ud->num_delete_queue_added = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_delete_queue_collected");
        if (!lua_isnil(L, -1)) {
            ud->num_delete_queue_collected = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cmd_copy_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_cmd_copy_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cmd_copy_buffer_to_image");
        if (!lua_isnil(L, -1)) {
            ud->num_cmd_copy_buffer_to_image = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_cmd_set_descriptor_buffer_offsets");
        if (!lua_isnil(L, -1)) {
            ud->num_cmd_set_descriptor_buffer_offsets = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_descriptor_buffer_writes");
        if (!lua_isnil(L, -1)) {
            ud->size_descriptor_buffer_writes = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_vk_get_num_cmd_pipeline_barrier(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_cmd_pipeline_barrier);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_cmd_pipeline_barrier(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_cmd_pipeline_barrier = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_allocate_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_allocate_memory);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_allocate_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_allocate_memory = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_free_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_free_memory);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_free_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_free_memory = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_size_allocate_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->size_allocate_memory);
    return 1;
}

static int l_sg_frame_stats_vk_set_size_allocate_memory(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->size_allocate_memory = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_delete_queue_added(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_delete_queue_added);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_delete_queue_added(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_delete_queue_added = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_delete_queue_collected(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_delete_queue_collected);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_delete_queue_collected(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_delete_queue_collected = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_cmd_copy_buffer(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_cmd_copy_buffer);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_cmd_copy_buffer(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_cmd_copy_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_cmd_copy_buffer_to_image(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_cmd_copy_buffer_to_image);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_cmd_copy_buffer_to_image(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_cmd_copy_buffer_to_image = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_num_cmd_set_descriptor_buffer_offsets(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->num_cmd_set_descriptor_buffer_offsets);
    return 1;
}

static int l_sg_frame_stats_vk_set_num_cmd_set_descriptor_buffer_offsets(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->num_cmd_set_descriptor_buffer_offsets = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk_get_size_descriptor_buffer_writes(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    lua_pushinteger(L, (lua_Integer)self->size_descriptor_buffer_writes);
    return 1;
}

static int l_sg_frame_stats_vk_set_size_descriptor_buffer_writes(lua_State *L) {
    sg_frame_stats_vk* self = (sg_frame_stats_vk*)luaL_checkudata(L, 1, "sokol.FrameStatsVk");
    self->size_descriptor_buffer_writes = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_vk__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_cmd_pipeline_barrier") == 0) return l_sg_frame_stats_vk_get_num_cmd_pipeline_barrier(L);
    if (strcmp(key, "num_allocate_memory") == 0) return l_sg_frame_stats_vk_get_num_allocate_memory(L);
    if (strcmp(key, "num_free_memory") == 0) return l_sg_frame_stats_vk_get_num_free_memory(L);
    if (strcmp(key, "size_allocate_memory") == 0) return l_sg_frame_stats_vk_get_size_allocate_memory(L);
    if (strcmp(key, "num_delete_queue_added") == 0) return l_sg_frame_stats_vk_get_num_delete_queue_added(L);
    if (strcmp(key, "num_delete_queue_collected") == 0) return l_sg_frame_stats_vk_get_num_delete_queue_collected(L);
    if (strcmp(key, "num_cmd_copy_buffer") == 0) return l_sg_frame_stats_vk_get_num_cmd_copy_buffer(L);
    if (strcmp(key, "num_cmd_copy_buffer_to_image") == 0) return l_sg_frame_stats_vk_get_num_cmd_copy_buffer_to_image(L);
    if (strcmp(key, "num_cmd_set_descriptor_buffer_offsets") == 0) return l_sg_frame_stats_vk_get_num_cmd_set_descriptor_buffer_offsets(L);
    if (strcmp(key, "size_descriptor_buffer_writes") == 0) return l_sg_frame_stats_vk_get_size_descriptor_buffer_writes(L);
    return 0;
}

static int l_sg_frame_stats_vk__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num_cmd_pipeline_barrier") == 0) return l_sg_frame_stats_vk_set_num_cmd_pipeline_barrier(L);
    if (strcmp(key, "num_allocate_memory") == 0) return l_sg_frame_stats_vk_set_num_allocate_memory(L);
    if (strcmp(key, "num_free_memory") == 0) return l_sg_frame_stats_vk_set_num_free_memory(L);
    if (strcmp(key, "size_allocate_memory") == 0) return l_sg_frame_stats_vk_set_size_allocate_memory(L);
    if (strcmp(key, "num_delete_queue_added") == 0) return l_sg_frame_stats_vk_set_num_delete_queue_added(L);
    if (strcmp(key, "num_delete_queue_collected") == 0) return l_sg_frame_stats_vk_set_num_delete_queue_collected(L);
    if (strcmp(key, "num_cmd_copy_buffer") == 0) return l_sg_frame_stats_vk_set_num_cmd_copy_buffer(L);
    if (strcmp(key, "num_cmd_copy_buffer_to_image") == 0) return l_sg_frame_stats_vk_set_num_cmd_copy_buffer_to_image(L);
    if (strcmp(key, "num_cmd_set_descriptor_buffer_offsets") == 0) return l_sg_frame_stats_vk_set_num_cmd_set_descriptor_buffer_offsets(L);
    if (strcmp(key, "size_descriptor_buffer_writes") == 0) return l_sg_frame_stats_vk_set_size_descriptor_buffer_writes(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_resource_stats_new(lua_State *L) {
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    memset(ud, 0, sizeof(sg_frame_resource_stats));
    luaL_setmetatable(L, "sokol.FrameResourceStats");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "allocated");
        if (!lua_isnil(L, -1)) {
            ud->allocated = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "deallocated");
        if (!lua_isnil(L, -1)) {
            ud->deallocated = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "inited");
        if (!lua_isnil(L, -1)) {
            ud->inited = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uninited");
        if (!lua_isnil(L, -1)) {
            ud->uninited = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_resource_stats_get_allocated(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    lua_pushinteger(L, (lua_Integer)self->allocated);
    return 1;
}

static int l_sg_frame_resource_stats_set_allocated(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    self->allocated = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_resource_stats_get_deallocated(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    lua_pushinteger(L, (lua_Integer)self->deallocated);
    return 1;
}

static int l_sg_frame_resource_stats_set_deallocated(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    self->deallocated = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_resource_stats_get_inited(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    lua_pushinteger(L, (lua_Integer)self->inited);
    return 1;
}

static int l_sg_frame_resource_stats_set_inited(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    self->inited = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_resource_stats_get_uninited(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    lua_pushinteger(L, (lua_Integer)self->uninited);
    return 1;
}

static int l_sg_frame_resource_stats_set_uninited(lua_State *L) {
    sg_frame_resource_stats* self = (sg_frame_resource_stats*)luaL_checkudata(L, 1, "sokol.FrameResourceStats");
    self->uninited = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_resource_stats__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "allocated") == 0) return l_sg_frame_resource_stats_get_allocated(L);
    if (strcmp(key, "deallocated") == 0) return l_sg_frame_resource_stats_get_deallocated(L);
    if (strcmp(key, "inited") == 0) return l_sg_frame_resource_stats_get_inited(L);
    if (strcmp(key, "uninited") == 0) return l_sg_frame_resource_stats_get_uninited(L);
    return 0;
}

static int l_sg_frame_resource_stats__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "allocated") == 0) return l_sg_frame_resource_stats_set_allocated(L);
    if (strcmp(key, "deallocated") == 0) return l_sg_frame_resource_stats_set_deallocated(L);
    if (strcmp(key, "inited") == 0) return l_sg_frame_resource_stats_set_inited(L);
    if (strcmp(key, "uninited") == 0) return l_sg_frame_resource_stats_set_uninited(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_total_resource_stats_new(lua_State *L) {
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    memset(ud, 0, sizeof(sg_total_resource_stats));
    luaL_setmetatable(L, "sokol.TotalResourceStats");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "alive");
        if (!lua_isnil(L, -1)) {
            ud->alive = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "free");
        if (!lua_isnil(L, -1)) {
            ud->free = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "allocated");
        if (!lua_isnil(L, -1)) {
            ud->allocated = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "deallocated");
        if (!lua_isnil(L, -1)) {
            ud->deallocated = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "inited");
        if (!lua_isnil(L, -1)) {
            ud->inited = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uninited");
        if (!lua_isnil(L, -1)) {
            ud->uninited = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_total_resource_stats_get_alive(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->alive);
    return 1;
}

static int l_sg_total_resource_stats_set_alive(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->alive = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats_get_free(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->free);
    return 1;
}

static int l_sg_total_resource_stats_set_free(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->free = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats_get_allocated(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->allocated);
    return 1;
}

static int l_sg_total_resource_stats_set_allocated(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->allocated = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats_get_deallocated(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->deallocated);
    return 1;
}

static int l_sg_total_resource_stats_set_deallocated(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->deallocated = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats_get_inited(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->inited);
    return 1;
}

static int l_sg_total_resource_stats_set_inited(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->inited = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats_get_uninited(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    lua_pushinteger(L, (lua_Integer)self->uninited);
    return 1;
}

static int l_sg_total_resource_stats_set_uninited(lua_State *L) {
    sg_total_resource_stats* self = (sg_total_resource_stats*)luaL_checkudata(L, 1, "sokol.TotalResourceStats");
    self->uninited = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_total_resource_stats__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "alive") == 0) return l_sg_total_resource_stats_get_alive(L);
    if (strcmp(key, "free") == 0) return l_sg_total_resource_stats_get_free(L);
    if (strcmp(key, "allocated") == 0) return l_sg_total_resource_stats_get_allocated(L);
    if (strcmp(key, "deallocated") == 0) return l_sg_total_resource_stats_get_deallocated(L);
    if (strcmp(key, "inited") == 0) return l_sg_total_resource_stats_get_inited(L);
    if (strcmp(key, "uninited") == 0) return l_sg_total_resource_stats_get_uninited(L);
    return 0;
}

static int l_sg_total_resource_stats__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "alive") == 0) return l_sg_total_resource_stats_set_alive(L);
    if (strcmp(key, "free") == 0) return l_sg_total_resource_stats_set_free(L);
    if (strcmp(key, "allocated") == 0) return l_sg_total_resource_stats_set_allocated(L);
    if (strcmp(key, "deallocated") == 0) return l_sg_total_resource_stats_set_deallocated(L);
    if (strcmp(key, "inited") == 0) return l_sg_total_resource_stats_set_inited(L);
    if (strcmp(key, "uninited") == 0) return l_sg_total_resource_stats_set_uninited(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_total_stats_new(lua_State *L) {
    sg_total_stats* ud = (sg_total_stats*)lua_newuserdatauv(L, sizeof(sg_total_stats), 0);
    memset(ud, 0, sizeof(sg_total_stats));
    luaL_setmetatable(L, "sokol.TotalStats");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buffers");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->buffers = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->buffers = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "images");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->images = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->images = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "samplers");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->samplers = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->samplers = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "views");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->views = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->views = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "shaders");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->shaders = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->shaders = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pipelines");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->pipelines = *val;
                lua_pop(L, 1);
            } else {
                sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_testudata(L, -1, "sokol.TotalResourceStats");
                if (val) ud->pipelines = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_total_stats_get_buffers(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->buffers;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_buffers(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->buffers = *val;
    return 0;
}

static int l_sg_total_stats_get_images(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->images;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_images(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->images = *val;
    return 0;
}

static int l_sg_total_stats_get_samplers(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->samplers;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_samplers(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->samplers = *val;
    return 0;
}

static int l_sg_total_stats_get_views(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->views;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_views(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->views = *val;
    return 0;
}

static int l_sg_total_stats_get_shaders(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->shaders;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_shaders(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->shaders = *val;
    return 0;
}

static int l_sg_total_stats_get_pipelines(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* ud = (sg_total_resource_stats*)lua_newuserdatauv(L, sizeof(sg_total_resource_stats), 0);
    *ud = self->pipelines;
    luaL_setmetatable(L, "sokol.TotalResourceStats");
    return 1;
}

static int l_sg_total_stats_set_pipelines(lua_State *L) {
    sg_total_stats* self = (sg_total_stats*)luaL_checkudata(L, 1, "sokol.TotalStats");
    sg_total_resource_stats* val = (sg_total_resource_stats*)luaL_checkudata(L, 2, "sokol.TotalResourceStats");
    self->pipelines = *val;
    return 0;
}

static int l_sg_total_stats__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffers") == 0) return l_sg_total_stats_get_buffers(L);
    if (strcmp(key, "images") == 0) return l_sg_total_stats_get_images(L);
    if (strcmp(key, "samplers") == 0) return l_sg_total_stats_get_samplers(L);
    if (strcmp(key, "views") == 0) return l_sg_total_stats_get_views(L);
    if (strcmp(key, "shaders") == 0) return l_sg_total_stats_get_shaders(L);
    if (strcmp(key, "pipelines") == 0) return l_sg_total_stats_get_pipelines(L);
    return 0;
}

static int l_sg_total_stats__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffers") == 0) return l_sg_total_stats_set_buffers(L);
    if (strcmp(key, "images") == 0) return l_sg_total_stats_set_images(L);
    if (strcmp(key, "samplers") == 0) return l_sg_total_stats_set_samplers(L);
    if (strcmp(key, "views") == 0) return l_sg_total_stats_set_views(L);
    if (strcmp(key, "shaders") == 0) return l_sg_total_stats_set_shaders(L);
    if (strcmp(key, "pipelines") == 0) return l_sg_total_stats_set_pipelines(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_frame_stats_new(lua_State *L) {
    sg_frame_stats* ud = (sg_frame_stats*)lua_newuserdatauv(L, sizeof(sg_frame_stats), 0);
    memset(ud, 0, sizeof(sg_frame_stats));
    luaL_setmetatable(L, "sokol.FrameStats");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "frame_index");
        if (!lua_isnil(L, -1)) {
            ud->frame_index = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_passes");
        if (!lua_isnil(L, -1)) {
            ud->num_passes = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_apply_viewport");
        if (!lua_isnil(L, -1)) {
            ud->num_apply_viewport = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_apply_scissor_rect");
        if (!lua_isnil(L, -1)) {
            ud->num_apply_scissor_rect = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_apply_pipeline");
        if (!lua_isnil(L, -1)) {
            ud->num_apply_pipeline = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_apply_bindings");
        if (!lua_isnil(L, -1)) {
            ud->num_apply_bindings = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_apply_uniforms");
        if (!lua_isnil(L, -1)) {
            ud->num_apply_uniforms = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_draw");
        if (!lua_isnil(L, -1)) {
            ud->num_draw = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_draw_ex");
        if (!lua_isnil(L, -1)) {
            ud->num_draw_ex = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_dispatch");
        if (!lua_isnil(L, -1)) {
            ud->num_dispatch = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_update_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_update_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_append_buffer");
        if (!lua_isnil(L, -1)) {
            ud->num_append_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "num_update_image");
        if (!lua_isnil(L, -1)) {
            ud->num_update_image = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_apply_uniforms");
        if (!lua_isnil(L, -1)) {
            ud->size_apply_uniforms = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_update_buffer");
        if (!lua_isnil(L, -1)) {
            ud->size_update_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_append_buffer");
        if (!lua_isnil(L, -1)) {
            ud->size_append_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "size_update_image");
        if (!lua_isnil(L, -1)) {
            ud->size_update_image = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "buffers");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->buffers = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->buffers = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "images");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->images = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->images = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "samplers");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->samplers = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->samplers = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "views");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->views = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->views = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "shaders");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->shaders = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->shaders = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pipelines");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_resource_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->pipelines = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_testudata(L, -1, "sokol.FrameResourceStats");
                if (val) ud->pipelines = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "gl");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_gl_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_gl* val = (sg_frame_stats_gl*)luaL_testudata(L, -1, "sokol.FrameStatsGl");
                if (val) ud->gl = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_gl* val = (sg_frame_stats_gl*)luaL_testudata(L, -1, "sokol.FrameStatsGl");
                if (val) ud->gl = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_d3d11_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_d3d11* val = (sg_frame_stats_d3d11*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11");
                if (val) ud->d3d11 = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_d3d11* val = (sg_frame_stats_d3d11*)luaL_testudata(L, -1, "sokol.FrameStatsD3d11");
                if (val) ud->d3d11 = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "metal");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_metal_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_metal* val = (sg_frame_stats_metal*)luaL_testudata(L, -1, "sokol.FrameStatsMetal");
                if (val) ud->metal = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_metal* val = (sg_frame_stats_metal*)luaL_testudata(L, -1, "sokol.FrameStatsMetal");
                if (val) ud->metal = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_wgpu_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_wgpu* val = (sg_frame_stats_wgpu*)luaL_testudata(L, -1, "sokol.FrameStatsWgpu");
                if (val) ud->wgpu = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_wgpu* val = (sg_frame_stats_wgpu*)luaL_testudata(L, -1, "sokol.FrameStatsWgpu");
                if (val) ud->wgpu = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vk");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_vk_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats_vk* val = (sg_frame_stats_vk*)luaL_testudata(L, -1, "sokol.FrameStatsVk");
                if (val) ud->vk = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats_vk* val = (sg_frame_stats_vk*)luaL_testudata(L, -1, "sokol.FrameStatsVk");
                if (val) ud->vk = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_frame_stats_get_frame_index(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->frame_index);
    return 1;
}

static int l_sg_frame_stats_set_frame_index(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->frame_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_passes(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_passes);
    return 1;
}

static int l_sg_frame_stats_set_num_passes(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_passes = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_apply_viewport(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_apply_viewport);
    return 1;
}

static int l_sg_frame_stats_set_num_apply_viewport(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_apply_viewport = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_apply_scissor_rect(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_apply_scissor_rect);
    return 1;
}

static int l_sg_frame_stats_set_num_apply_scissor_rect(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_apply_scissor_rect = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_apply_pipeline(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_apply_pipeline);
    return 1;
}

static int l_sg_frame_stats_set_num_apply_pipeline(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_apply_pipeline = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_apply_bindings(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_apply_bindings);
    return 1;
}

static int l_sg_frame_stats_set_num_apply_bindings(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_apply_bindings = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_apply_uniforms(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_apply_uniforms);
    return 1;
}

static int l_sg_frame_stats_set_num_apply_uniforms(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_apply_uniforms = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_draw(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_draw);
    return 1;
}

static int l_sg_frame_stats_set_num_draw(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_draw = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_draw_ex(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_draw_ex);
    return 1;
}

static int l_sg_frame_stats_set_num_draw_ex(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_draw_ex = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_dispatch(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_dispatch);
    return 1;
}

static int l_sg_frame_stats_set_num_dispatch(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_dispatch = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_update_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_update_buffer);
    return 1;
}

static int l_sg_frame_stats_set_num_update_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_update_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_append_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_append_buffer);
    return 1;
}

static int l_sg_frame_stats_set_num_append_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_append_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_num_update_image(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->num_update_image);
    return 1;
}

static int l_sg_frame_stats_set_num_update_image(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->num_update_image = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_size_apply_uniforms(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->size_apply_uniforms);
    return 1;
}

static int l_sg_frame_stats_set_size_apply_uniforms(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->size_apply_uniforms = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_size_update_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->size_update_buffer);
    return 1;
}

static int l_sg_frame_stats_set_size_update_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->size_update_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_size_append_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->size_append_buffer);
    return 1;
}

static int l_sg_frame_stats_set_size_append_buffer(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->size_append_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_size_update_image(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    lua_pushinteger(L, (lua_Integer)self->size_update_image);
    return 1;
}

static int l_sg_frame_stats_set_size_update_image(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    self->size_update_image = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_frame_stats_get_buffers(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->buffers;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_buffers(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->buffers = *val;
    return 0;
}

static int l_sg_frame_stats_get_images(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->images;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_images(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->images = *val;
    return 0;
}

static int l_sg_frame_stats_get_samplers(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->samplers;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_samplers(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->samplers = *val;
    return 0;
}

static int l_sg_frame_stats_get_views(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->views;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_views(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->views = *val;
    return 0;
}

static int l_sg_frame_stats_get_shaders(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->shaders;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_shaders(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->shaders = *val;
    return 0;
}

static int l_sg_frame_stats_get_pipelines(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* ud = (sg_frame_resource_stats*)lua_newuserdatauv(L, sizeof(sg_frame_resource_stats), 0);
    *ud = self->pipelines;
    luaL_setmetatable(L, "sokol.FrameResourceStats");
    return 1;
}

static int l_sg_frame_stats_set_pipelines(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_resource_stats* val = (sg_frame_resource_stats*)luaL_checkudata(L, 2, "sokol.FrameResourceStats");
    self->pipelines = *val;
    return 0;
}

static int l_sg_frame_stats_get_gl(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_gl* ud = (sg_frame_stats_gl*)lua_newuserdatauv(L, sizeof(sg_frame_stats_gl), 0);
    *ud = self->gl;
    luaL_setmetatable(L, "sokol.FrameStatsGl");
    return 1;
}

static int l_sg_frame_stats_set_gl(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_gl* val = (sg_frame_stats_gl*)luaL_checkudata(L, 2, "sokol.FrameStatsGl");
    self->gl = *val;
    return 0;
}

static int l_sg_frame_stats_get_d3d11(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_d3d11* ud = (sg_frame_stats_d3d11*)lua_newuserdatauv(L, sizeof(sg_frame_stats_d3d11), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.FrameStatsD3d11");
    return 1;
}

static int l_sg_frame_stats_set_d3d11(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_d3d11* val = (sg_frame_stats_d3d11*)luaL_checkudata(L, 2, "sokol.FrameStatsD3d11");
    self->d3d11 = *val;
    return 0;
}

static int l_sg_frame_stats_get_metal(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_metal* ud = (sg_frame_stats_metal*)lua_newuserdatauv(L, sizeof(sg_frame_stats_metal), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.FrameStatsMetal");
    return 1;
}

static int l_sg_frame_stats_set_metal(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_metal* val = (sg_frame_stats_metal*)luaL_checkudata(L, 2, "sokol.FrameStatsMetal");
    self->metal = *val;
    return 0;
}

static int l_sg_frame_stats_get_wgpu(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_wgpu* ud = (sg_frame_stats_wgpu*)lua_newuserdatauv(L, sizeof(sg_frame_stats_wgpu), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.FrameStatsWgpu");
    return 1;
}

static int l_sg_frame_stats_set_wgpu(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_wgpu* val = (sg_frame_stats_wgpu*)luaL_checkudata(L, 2, "sokol.FrameStatsWgpu");
    self->wgpu = *val;
    return 0;
}

static int l_sg_frame_stats_get_vk(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_vk* ud = (sg_frame_stats_vk*)lua_newuserdatauv(L, sizeof(sg_frame_stats_vk), 0);
    *ud = self->vk;
    luaL_setmetatable(L, "sokol.FrameStatsVk");
    return 1;
}

static int l_sg_frame_stats_set_vk(lua_State *L) {
    sg_frame_stats* self = (sg_frame_stats*)luaL_checkudata(L, 1, "sokol.FrameStats");
    sg_frame_stats_vk* val = (sg_frame_stats_vk*)luaL_checkudata(L, 2, "sokol.FrameStatsVk");
    self->vk = *val;
    return 0;
}

static int l_sg_frame_stats__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "frame_index") == 0) return l_sg_frame_stats_get_frame_index(L);
    if (strcmp(key, "num_passes") == 0) return l_sg_frame_stats_get_num_passes(L);
    if (strcmp(key, "num_apply_viewport") == 0) return l_sg_frame_stats_get_num_apply_viewport(L);
    if (strcmp(key, "num_apply_scissor_rect") == 0) return l_sg_frame_stats_get_num_apply_scissor_rect(L);
    if (strcmp(key, "num_apply_pipeline") == 0) return l_sg_frame_stats_get_num_apply_pipeline(L);
    if (strcmp(key, "num_apply_bindings") == 0) return l_sg_frame_stats_get_num_apply_bindings(L);
    if (strcmp(key, "num_apply_uniforms") == 0) return l_sg_frame_stats_get_num_apply_uniforms(L);
    if (strcmp(key, "num_draw") == 0) return l_sg_frame_stats_get_num_draw(L);
    if (strcmp(key, "num_draw_ex") == 0) return l_sg_frame_stats_get_num_draw_ex(L);
    if (strcmp(key, "num_dispatch") == 0) return l_sg_frame_stats_get_num_dispatch(L);
    if (strcmp(key, "num_update_buffer") == 0) return l_sg_frame_stats_get_num_update_buffer(L);
    if (strcmp(key, "num_append_buffer") == 0) return l_sg_frame_stats_get_num_append_buffer(L);
    if (strcmp(key, "num_update_image") == 0) return l_sg_frame_stats_get_num_update_image(L);
    if (strcmp(key, "size_apply_uniforms") == 0) return l_sg_frame_stats_get_size_apply_uniforms(L);
    if (strcmp(key, "size_update_buffer") == 0) return l_sg_frame_stats_get_size_update_buffer(L);
    if (strcmp(key, "size_append_buffer") == 0) return l_sg_frame_stats_get_size_append_buffer(L);
    if (strcmp(key, "size_update_image") == 0) return l_sg_frame_stats_get_size_update_image(L);
    if (strcmp(key, "buffers") == 0) return l_sg_frame_stats_get_buffers(L);
    if (strcmp(key, "images") == 0) return l_sg_frame_stats_get_images(L);
    if (strcmp(key, "samplers") == 0) return l_sg_frame_stats_get_samplers(L);
    if (strcmp(key, "views") == 0) return l_sg_frame_stats_get_views(L);
    if (strcmp(key, "shaders") == 0) return l_sg_frame_stats_get_shaders(L);
    if (strcmp(key, "pipelines") == 0) return l_sg_frame_stats_get_pipelines(L);
    if (strcmp(key, "gl") == 0) return l_sg_frame_stats_get_gl(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_frame_stats_get_d3d11(L);
    if (strcmp(key, "metal") == 0) return l_sg_frame_stats_get_metal(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_frame_stats_get_wgpu(L);
    if (strcmp(key, "vk") == 0) return l_sg_frame_stats_get_vk(L);
    return 0;
}

static int l_sg_frame_stats__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "frame_index") == 0) return l_sg_frame_stats_set_frame_index(L);
    if (strcmp(key, "num_passes") == 0) return l_sg_frame_stats_set_num_passes(L);
    if (strcmp(key, "num_apply_viewport") == 0) return l_sg_frame_stats_set_num_apply_viewport(L);
    if (strcmp(key, "num_apply_scissor_rect") == 0) return l_sg_frame_stats_set_num_apply_scissor_rect(L);
    if (strcmp(key, "num_apply_pipeline") == 0) return l_sg_frame_stats_set_num_apply_pipeline(L);
    if (strcmp(key, "num_apply_bindings") == 0) return l_sg_frame_stats_set_num_apply_bindings(L);
    if (strcmp(key, "num_apply_uniforms") == 0) return l_sg_frame_stats_set_num_apply_uniforms(L);
    if (strcmp(key, "num_draw") == 0) return l_sg_frame_stats_set_num_draw(L);
    if (strcmp(key, "num_draw_ex") == 0) return l_sg_frame_stats_set_num_draw_ex(L);
    if (strcmp(key, "num_dispatch") == 0) return l_sg_frame_stats_set_num_dispatch(L);
    if (strcmp(key, "num_update_buffer") == 0) return l_sg_frame_stats_set_num_update_buffer(L);
    if (strcmp(key, "num_append_buffer") == 0) return l_sg_frame_stats_set_num_append_buffer(L);
    if (strcmp(key, "num_update_image") == 0) return l_sg_frame_stats_set_num_update_image(L);
    if (strcmp(key, "size_apply_uniforms") == 0) return l_sg_frame_stats_set_size_apply_uniforms(L);
    if (strcmp(key, "size_update_buffer") == 0) return l_sg_frame_stats_set_size_update_buffer(L);
    if (strcmp(key, "size_append_buffer") == 0) return l_sg_frame_stats_set_size_append_buffer(L);
    if (strcmp(key, "size_update_image") == 0) return l_sg_frame_stats_set_size_update_image(L);
    if (strcmp(key, "buffers") == 0) return l_sg_frame_stats_set_buffers(L);
    if (strcmp(key, "images") == 0) return l_sg_frame_stats_set_images(L);
    if (strcmp(key, "samplers") == 0) return l_sg_frame_stats_set_samplers(L);
    if (strcmp(key, "views") == 0) return l_sg_frame_stats_set_views(L);
    if (strcmp(key, "shaders") == 0) return l_sg_frame_stats_set_shaders(L);
    if (strcmp(key, "pipelines") == 0) return l_sg_frame_stats_set_pipelines(L);
    if (strcmp(key, "gl") == 0) return l_sg_frame_stats_set_gl(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_frame_stats_set_d3d11(L);
    if (strcmp(key, "metal") == 0) return l_sg_frame_stats_set_metal(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_frame_stats_set_wgpu(L);
    if (strcmp(key, "vk") == 0) return l_sg_frame_stats_set_vk(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_stats_new(lua_State *L) {
    sg_stats* ud = (sg_stats*)lua_newuserdatauv(L, sizeof(sg_stats), 0);
    memset(ud, 0, sizeof(sg_stats));
    luaL_setmetatable(L, "sokol.Stats");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "prev_frame");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats* val = (sg_frame_stats*)luaL_testudata(L, -1, "sokol.FrameStats");
                if (val) ud->prev_frame = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats* val = (sg_frame_stats*)luaL_testudata(L, -1, "sokol.FrameStats");
                if (val) ud->prev_frame = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "cur_frame");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_frame_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_frame_stats* val = (sg_frame_stats*)luaL_testudata(L, -1, "sokol.FrameStats");
                if (val) ud->cur_frame = *val;
                lua_pop(L, 1);
            } else {
                sg_frame_stats* val = (sg_frame_stats*)luaL_testudata(L, -1, "sokol.FrameStats");
                if (val) ud->cur_frame = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "total");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_total_stats_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_total_stats* val = (sg_total_stats*)luaL_testudata(L, -1, "sokol.TotalStats");
                if (val) ud->total = *val;
                lua_pop(L, 1);
            } else {
                sg_total_stats* val = (sg_total_stats*)luaL_testudata(L, -1, "sokol.TotalStats");
                if (val) ud->total = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_stats_get_prev_frame(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_frame_stats* ud = (sg_frame_stats*)lua_newuserdatauv(L, sizeof(sg_frame_stats), 0);
    *ud = self->prev_frame;
    luaL_setmetatable(L, "sokol.FrameStats");
    return 1;
}

static int l_sg_stats_set_prev_frame(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_frame_stats* val = (sg_frame_stats*)luaL_checkudata(L, 2, "sokol.FrameStats");
    self->prev_frame = *val;
    return 0;
}

static int l_sg_stats_get_cur_frame(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_frame_stats* ud = (sg_frame_stats*)lua_newuserdatauv(L, sizeof(sg_frame_stats), 0);
    *ud = self->cur_frame;
    luaL_setmetatable(L, "sokol.FrameStats");
    return 1;
}

static int l_sg_stats_set_cur_frame(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_frame_stats* val = (sg_frame_stats*)luaL_checkudata(L, 2, "sokol.FrameStats");
    self->cur_frame = *val;
    return 0;
}

static int l_sg_stats_get_total(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_total_stats* ud = (sg_total_stats*)lua_newuserdatauv(L, sizeof(sg_total_stats), 0);
    *ud = self->total;
    luaL_setmetatable(L, "sokol.TotalStats");
    return 1;
}

static int l_sg_stats_set_total(lua_State *L) {
    sg_stats* self = (sg_stats*)luaL_checkudata(L, 1, "sokol.Stats");
    sg_total_stats* val = (sg_total_stats*)luaL_checkudata(L, 2, "sokol.TotalStats");
    self->total = *val;
    return 0;
}

static int l_sg_stats__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "prev_frame") == 0) return l_sg_stats_get_prev_frame(L);
    if (strcmp(key, "cur_frame") == 0) return l_sg_stats_get_cur_frame(L);
    if (strcmp(key, "total") == 0) return l_sg_stats_get_total(L);
    return 0;
}

static int l_sg_stats__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "prev_frame") == 0) return l_sg_stats_set_prev_frame(L);
    if (strcmp(key, "cur_frame") == 0) return l_sg_stats_set_cur_frame(L);
    if (strcmp(key, "total") == 0) return l_sg_stats_set_total(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_environment_defaults_new(lua_State *L) {
    sg_environment_defaults* ud = (sg_environment_defaults*)lua_newuserdatauv(L, sizeof(sg_environment_defaults), 0);
    memset(ud, 0, sizeof(sg_environment_defaults));
    luaL_setmetatable(L, "sokol.EnvironmentDefaults");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "color_format");
        if (!lua_isnil(L, -1)) {
            ud->color_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "depth_format");
        if (!lua_isnil(L, -1)) {
            ud->depth_format = (sg_pixel_format)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sample_count");
        if (!lua_isnil(L, -1)) {
            ud->sample_count = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_environment_defaults_get_color_format(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sg_environment_defaults_set_color_format(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->color_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_environment_defaults_get_depth_format(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sg_environment_defaults_set_depth_format(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->depth_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_environment_defaults_get_sample_count(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sg_environment_defaults_set_sample_count(lua_State *L) {
    sg_environment_defaults* self = (sg_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_environment_defaults__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "color_format") == 0) return l_sg_environment_defaults_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sg_environment_defaults_get_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_environment_defaults_get_sample_count(L);
    return 0;
}

static int l_sg_environment_defaults__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "color_format") == 0) return l_sg_environment_defaults_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sg_environment_defaults_set_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sg_environment_defaults_set_sample_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_metal_environment_new(lua_State *L) {
    sg_metal_environment* ud = (sg_metal_environment*)lua_newuserdatauv(L, sizeof(sg_metal_environment), 0);
    memset(ud, 0, sizeof(sg_metal_environment));
    luaL_setmetatable(L, "sokol.MetalEnvironment");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "device");
        if (!lua_isnil(L, -1)) {
            ud->device = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_metal_environment_get_device(lua_State *L) {
    sg_metal_environment* self = (sg_metal_environment*)luaL_checkudata(L, 1, "sokol.MetalEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sg_metal_environment_set_device(lua_State *L) {
    sg_metal_environment* self = (sg_metal_environment*)luaL_checkudata(L, 1, "sokol.MetalEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_metal_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_metal_environment_get_device(L);
    return 0;
}

static int l_sg_metal_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_metal_environment_set_device(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_environment_new(lua_State *L) {
    sg_d3d11_environment* ud = (sg_d3d11_environment*)lua_newuserdatauv(L, sizeof(sg_d3d11_environment), 0);
    memset(ud, 0, sizeof(sg_d3d11_environment));
    luaL_setmetatable(L, "sokol.D3d11Environment");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "device");
        if (!lua_isnil(L, -1)) {
            ud->device = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "device_context");
        if (!lua_isnil(L, -1)) {
            ud->device_context = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_environment_get_device(lua_State *L) {
    sg_d3d11_environment* self = (sg_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sg_d3d11_environment_set_device(lua_State *L) {
    sg_d3d11_environment* self = (sg_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_environment_get_device_context(lua_State *L) {
    sg_d3d11_environment* self = (sg_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    lua_pushlightuserdata(L, (void*)self->device_context);
    return 1;
}

static int l_sg_d3d11_environment_set_device_context(lua_State *L) {
    sg_d3d11_environment* self = (sg_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    self->device_context = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_d3d11_environment_get_device(L);
    if (strcmp(key, "device_context") == 0) return l_sg_d3d11_environment_get_device_context(L);
    return 0;
}

static int l_sg_d3d11_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_d3d11_environment_set_device(L);
    if (strcmp(key, "device_context") == 0) return l_sg_d3d11_environment_set_device_context(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_environment_new(lua_State *L) {
    sg_wgpu_environment* ud = (sg_wgpu_environment*)lua_newuserdatauv(L, sizeof(sg_wgpu_environment), 0);
    memset(ud, 0, sizeof(sg_wgpu_environment));
    luaL_setmetatable(L, "sokol.WgpuEnvironment");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "device");
        if (!lua_isnil(L, -1)) {
            ud->device = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_environment_get_device(lua_State *L) {
    sg_wgpu_environment* self = (sg_wgpu_environment*)luaL_checkudata(L, 1, "sokol.WgpuEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sg_wgpu_environment_set_device(lua_State *L) {
    sg_wgpu_environment* self = (sg_wgpu_environment*)luaL_checkudata(L, 1, "sokol.WgpuEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_wgpu_environment_get_device(L);
    return 0;
}

static int l_sg_wgpu_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sg_wgpu_environment_set_device(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vulkan_environment_new(lua_State *L) {
    sg_vulkan_environment* ud = (sg_vulkan_environment*)lua_newuserdatauv(L, sizeof(sg_vulkan_environment), 0);
    memset(ud, 0, sizeof(sg_vulkan_environment));
    luaL_setmetatable(L, "sokol.VulkanEnvironment");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "physical_device");
        if (!lua_isnil(L, -1)) {
            ud->physical_device = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "device");
        if (!lua_isnil(L, -1)) {
            ud->device = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "queue");
        if (!lua_isnil(L, -1)) {
            ud->queue = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "queue_family_index");
        if (!lua_isnil(L, -1)) {
            ud->queue_family_index = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vulkan_environment_get_physical_device(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->physical_device);
    return 1;
}

static int l_sg_vulkan_environment_set_physical_device(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->physical_device = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_environment_get_device(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sg_vulkan_environment_set_device(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_environment_get_queue(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->queue);
    return 1;
}

static int l_sg_vulkan_environment_set_queue(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->queue = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_vulkan_environment_get_queue_family_index(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushinteger(L, (lua_Integer)self->queue_family_index);
    return 1;
}

static int l_sg_vulkan_environment_set_queue_family_index(lua_State *L) {
    sg_vulkan_environment* self = (sg_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->queue_family_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vulkan_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "physical_device") == 0) return l_sg_vulkan_environment_get_physical_device(L);
    if (strcmp(key, "device") == 0) return l_sg_vulkan_environment_get_device(L);
    if (strcmp(key, "queue") == 0) return l_sg_vulkan_environment_get_queue(L);
    if (strcmp(key, "queue_family_index") == 0) return l_sg_vulkan_environment_get_queue_family_index(L);
    return 0;
}

static int l_sg_vulkan_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "physical_device") == 0) return l_sg_vulkan_environment_set_physical_device(L);
    if (strcmp(key, "device") == 0) return l_sg_vulkan_environment_set_device(L);
    if (strcmp(key, "queue") == 0) return l_sg_vulkan_environment_set_queue(L);
    if (strcmp(key, "queue_family_index") == 0) return l_sg_vulkan_environment_set_queue_family_index(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_environment_new(lua_State *L) {
    sg_environment* ud = (sg_environment*)lua_newuserdatauv(L, sizeof(sg_environment), 0);
    memset(ud, 0, sizeof(sg_environment));
    luaL_setmetatable(L, "sokol.Environment");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "defaults");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_environment_defaults_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_environment_defaults* val = (sg_environment_defaults*)luaL_testudata(L, -1, "sokol.EnvironmentDefaults");
                if (val) ud->defaults = *val;
                lua_pop(L, 1);
            } else {
                sg_environment_defaults* val = (sg_environment_defaults*)luaL_testudata(L, -1, "sokol.EnvironmentDefaults");
                if (val) ud->defaults = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "metal");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_metal_environment_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_metal_environment* val = (sg_metal_environment*)luaL_testudata(L, -1, "sokol.MetalEnvironment");
                if (val) ud->metal = *val;
                lua_pop(L, 1);
            } else {
                sg_metal_environment* val = (sg_metal_environment*)luaL_testudata(L, -1, "sokol.MetalEnvironment");
                if (val) ud->metal = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_d3d11_environment_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_d3d11_environment* val = (sg_d3d11_environment*)luaL_testudata(L, -1, "sokol.D3d11Environment");
                if (val) ud->d3d11 = *val;
                lua_pop(L, 1);
            } else {
                sg_d3d11_environment* val = (sg_d3d11_environment*)luaL_testudata(L, -1, "sokol.D3d11Environment");
                if (val) ud->d3d11 = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_wgpu_environment_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_wgpu_environment* val = (sg_wgpu_environment*)luaL_testudata(L, -1, "sokol.WgpuEnvironment");
                if (val) ud->wgpu = *val;
                lua_pop(L, 1);
            } else {
                sg_wgpu_environment* val = (sg_wgpu_environment*)luaL_testudata(L, -1, "sokol.WgpuEnvironment");
                if (val) ud->wgpu = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vulkan");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_vulkan_environment_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_vulkan_environment* val = (sg_vulkan_environment*)luaL_testudata(L, -1, "sokol.VulkanEnvironment");
                if (val) ud->vulkan = *val;
                lua_pop(L, 1);
            } else {
                sg_vulkan_environment* val = (sg_vulkan_environment*)luaL_testudata(L, -1, "sokol.VulkanEnvironment");
                if (val) ud->vulkan = *val;
            }
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_environment_get_defaults(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_environment_defaults* ud = (sg_environment_defaults*)lua_newuserdatauv(L, sizeof(sg_environment_defaults), 0);
    *ud = self->defaults;
    luaL_setmetatable(L, "sokol.EnvironmentDefaults");
    return 1;
}

static int l_sg_environment_set_defaults(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_environment_defaults* val = (sg_environment_defaults*)luaL_checkudata(L, 2, "sokol.EnvironmentDefaults");
    self->defaults = *val;
    return 0;
}

static int l_sg_environment_get_metal(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_metal_environment* ud = (sg_metal_environment*)lua_newuserdatauv(L, sizeof(sg_metal_environment), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.MetalEnvironment");
    return 1;
}

static int l_sg_environment_set_metal(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_metal_environment* val = (sg_metal_environment*)luaL_checkudata(L, 2, "sokol.MetalEnvironment");
    self->metal = *val;
    return 0;
}

static int l_sg_environment_get_d3d11(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_d3d11_environment* ud = (sg_d3d11_environment*)lua_newuserdatauv(L, sizeof(sg_d3d11_environment), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.D3d11Environment");
    return 1;
}

static int l_sg_environment_set_d3d11(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_d3d11_environment* val = (sg_d3d11_environment*)luaL_checkudata(L, 2, "sokol.D3d11Environment");
    self->d3d11 = *val;
    return 0;
}

static int l_sg_environment_get_wgpu(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_wgpu_environment* ud = (sg_wgpu_environment*)lua_newuserdatauv(L, sizeof(sg_wgpu_environment), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.WgpuEnvironment");
    return 1;
}

static int l_sg_environment_set_wgpu(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_wgpu_environment* val = (sg_wgpu_environment*)luaL_checkudata(L, 2, "sokol.WgpuEnvironment");
    self->wgpu = *val;
    return 0;
}

static int l_sg_environment_get_vulkan(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_vulkan_environment* ud = (sg_vulkan_environment*)lua_newuserdatauv(L, sizeof(sg_vulkan_environment), 0);
    *ud = self->vulkan;
    luaL_setmetatable(L, "sokol.VulkanEnvironment");
    return 1;
}

static int l_sg_environment_set_vulkan(lua_State *L) {
    sg_environment* self = (sg_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sg_vulkan_environment* val = (sg_vulkan_environment*)luaL_checkudata(L, 2, "sokol.VulkanEnvironment");
    self->vulkan = *val;
    return 0;
}

static int l_sg_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "defaults") == 0) return l_sg_environment_get_defaults(L);
    if (strcmp(key, "metal") == 0) return l_sg_environment_get_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_environment_get_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_environment_get_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_environment_get_vulkan(L);
    return 0;
}

static int l_sg_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "defaults") == 0) return l_sg_environment_set_defaults(L);
    if (strcmp(key, "metal") == 0) return l_sg_environment_set_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_environment_set_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_environment_set_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_environment_set_vulkan(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_commit_listener_new(lua_State *L) {
    sg_commit_listener* ud = (sg_commit_listener*)lua_newuserdatauv(L, sizeof(sg_commit_listener), 0);
    memset(ud, 0, sizeof(sg_commit_listener));
    luaL_setmetatable(L, "sokol.CommitListener");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "user_data");
        if (!lua_isnil(L, -1)) {
            ud->user_data = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_commit_listener_get_user_data(lua_State *L) {
    sg_commit_listener* self = (sg_commit_listener*)luaL_checkudata(L, 1, "sokol.CommitListener");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sg_commit_listener_set_user_data(lua_State *L) {
    sg_commit_listener* self = (sg_commit_listener*)luaL_checkudata(L, 1, "sokol.CommitListener");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_commit_listener__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_commit_listener_get_user_data(L);
    return 0;
}

static int l_sg_commit_listener__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_commit_listener_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_allocator_new(lua_State *L) {
    sg_allocator* ud = (sg_allocator*)lua_newuserdatauv(L, sizeof(sg_allocator), 0);
    memset(ud, 0, sizeof(sg_allocator));
    luaL_setmetatable(L, "sokol.Allocator");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "user_data");
        if (!lua_isnil(L, -1)) {
            ud->user_data = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_allocator_get_user_data(lua_State *L) {
    sg_allocator* self = (sg_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sg_allocator_set_user_data(lua_State *L) {
    sg_allocator* self = (sg_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_allocator__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_allocator_get_user_data(L);
    return 0;
}

static int l_sg_allocator__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_allocator_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_logger_new(lua_State *L) {
    sg_logger* ud = (sg_logger*)lua_newuserdatauv(L, sizeof(sg_logger), 0);
    memset(ud, 0, sizeof(sg_logger));
    luaL_setmetatable(L, "sokol.Logger");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "user_data");
        if (!lua_isnil(L, -1)) {
            ud->user_data = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_logger_get_user_data(lua_State *L) {
    sg_logger* self = (sg_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sg_logger_set_user_data(lua_State *L) {
    sg_logger* self = (sg_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_logger__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_logger_get_user_data(L);
    return 0;
}

static int l_sg_logger__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sg_logger_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_desc_new(lua_State *L) {
    sg_d3d11_desc* ud = (sg_d3d11_desc*)lua_newuserdatauv(L, sizeof(sg_d3d11_desc), 0);
    memset(ud, 0, sizeof(sg_d3d11_desc));
    luaL_setmetatable(L, "sokol.D3d11Desc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "shader_debugging");
        if (!lua_isnil(L, -1)) {
            ud->shader_debugging = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_desc_get_shader_debugging(lua_State *L) {
    sg_d3d11_desc* self = (sg_d3d11_desc*)luaL_checkudata(L, 1, "sokol.D3d11Desc");
    lua_pushboolean(L, self->shader_debugging);
    return 1;
}

static int l_sg_d3d11_desc_set_shader_debugging(lua_State *L) {
    sg_d3d11_desc* self = (sg_d3d11_desc*)luaL_checkudata(L, 1, "sokol.D3d11Desc");
    self->shader_debugging = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_d3d11_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "shader_debugging") == 0) return l_sg_d3d11_desc_get_shader_debugging(L);
    return 0;
}

static int l_sg_d3d11_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "shader_debugging") == 0) return l_sg_d3d11_desc_set_shader_debugging(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_metal_desc_new(lua_State *L) {
    sg_metal_desc* ud = (sg_metal_desc*)lua_newuserdatauv(L, sizeof(sg_metal_desc), 0);
    memset(ud, 0, sizeof(sg_metal_desc));
    luaL_setmetatable(L, "sokol.MetalDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "force_managed_storage_mode");
        if (!lua_isnil(L, -1)) {
            ud->force_managed_storage_mode = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "use_command_buffer_with_retained_references");
        if (!lua_isnil(L, -1)) {
            ud->use_command_buffer_with_retained_references = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_metal_desc_get_force_managed_storage_mode(lua_State *L) {
    sg_metal_desc* self = (sg_metal_desc*)luaL_checkudata(L, 1, "sokol.MetalDesc");
    lua_pushboolean(L, self->force_managed_storage_mode);
    return 1;
}

static int l_sg_metal_desc_set_force_managed_storage_mode(lua_State *L) {
    sg_metal_desc* self = (sg_metal_desc*)luaL_checkudata(L, 1, "sokol.MetalDesc");
    self->force_managed_storage_mode = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_metal_desc_get_use_command_buffer_with_retained_references(lua_State *L) {
    sg_metal_desc* self = (sg_metal_desc*)luaL_checkudata(L, 1, "sokol.MetalDesc");
    lua_pushboolean(L, self->use_command_buffer_with_retained_references);
    return 1;
}

static int l_sg_metal_desc_set_use_command_buffer_with_retained_references(lua_State *L) {
    sg_metal_desc* self = (sg_metal_desc*)luaL_checkudata(L, 1, "sokol.MetalDesc");
    self->use_command_buffer_with_retained_references = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_metal_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "force_managed_storage_mode") == 0) return l_sg_metal_desc_get_force_managed_storage_mode(L);
    if (strcmp(key, "use_command_buffer_with_retained_references") == 0) return l_sg_metal_desc_get_use_command_buffer_with_retained_references(L);
    return 0;
}

static int l_sg_metal_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "force_managed_storage_mode") == 0) return l_sg_metal_desc_set_force_managed_storage_mode(L);
    if (strcmp(key, "use_command_buffer_with_retained_references") == 0) return l_sg_metal_desc_set_use_command_buffer_with_retained_references(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_desc_new(lua_State *L) {
    sg_wgpu_desc* ud = (sg_wgpu_desc*)lua_newuserdatauv(L, sizeof(sg_wgpu_desc), 0);
    memset(ud, 0, sizeof(sg_wgpu_desc));
    luaL_setmetatable(L, "sokol.WgpuDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "disable_bindgroups_cache");
        if (!lua_isnil(L, -1)) {
            ud->disable_bindgroups_cache = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bindgroups_cache_size");
        if (!lua_isnil(L, -1)) {
            ud->bindgroups_cache_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_desc_get_disable_bindgroups_cache(lua_State *L) {
    sg_wgpu_desc* self = (sg_wgpu_desc*)luaL_checkudata(L, 1, "sokol.WgpuDesc");
    lua_pushboolean(L, self->disable_bindgroups_cache);
    return 1;
}

static int l_sg_wgpu_desc_set_disable_bindgroups_cache(lua_State *L) {
    sg_wgpu_desc* self = (sg_wgpu_desc*)luaL_checkudata(L, 1, "sokol.WgpuDesc");
    self->disable_bindgroups_cache = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_wgpu_desc_get_bindgroups_cache_size(lua_State *L) {
    sg_wgpu_desc* self = (sg_wgpu_desc*)luaL_checkudata(L, 1, "sokol.WgpuDesc");
    lua_pushinteger(L, (lua_Integer)self->bindgroups_cache_size);
    return 1;
}

static int l_sg_wgpu_desc_set_bindgroups_cache_size(lua_State *L) {
    sg_wgpu_desc* self = (sg_wgpu_desc*)luaL_checkudata(L, 1, "sokol.WgpuDesc");
    self->bindgroups_cache_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_wgpu_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "disable_bindgroups_cache") == 0) return l_sg_wgpu_desc_get_disable_bindgroups_cache(L);
    if (strcmp(key, "bindgroups_cache_size") == 0) return l_sg_wgpu_desc_get_bindgroups_cache_size(L);
    return 0;
}

static int l_sg_wgpu_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "disable_bindgroups_cache") == 0) return l_sg_wgpu_desc_set_disable_bindgroups_cache(L);
    if (strcmp(key, "bindgroups_cache_size") == 0) return l_sg_wgpu_desc_set_bindgroups_cache_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_vulkan_desc_new(lua_State *L) {
    sg_vulkan_desc* ud = (sg_vulkan_desc*)lua_newuserdatauv(L, sizeof(sg_vulkan_desc), 0);
    memset(ud, 0, sizeof(sg_vulkan_desc));
    luaL_setmetatable(L, "sokol.VulkanDesc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "copy_staging_buffer_size");
        if (!lua_isnil(L, -1)) {
            ud->copy_staging_buffer_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "stream_staging_buffer_size");
        if (!lua_isnil(L, -1)) {
            ud->stream_staging_buffer_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "descriptor_buffer_size");
        if (!lua_isnil(L, -1)) {
            ud->descriptor_buffer_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_vulkan_desc_get_copy_staging_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    lua_pushinteger(L, (lua_Integer)self->copy_staging_buffer_size);
    return 1;
}

static int l_sg_vulkan_desc_set_copy_staging_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    self->copy_staging_buffer_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vulkan_desc_get_stream_staging_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    lua_pushinteger(L, (lua_Integer)self->stream_staging_buffer_size);
    return 1;
}

static int l_sg_vulkan_desc_set_stream_staging_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    self->stream_staging_buffer_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vulkan_desc_get_descriptor_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    lua_pushinteger(L, (lua_Integer)self->descriptor_buffer_size);
    return 1;
}

static int l_sg_vulkan_desc_set_descriptor_buffer_size(lua_State *L) {
    sg_vulkan_desc* self = (sg_vulkan_desc*)luaL_checkudata(L, 1, "sokol.VulkanDesc");
    self->descriptor_buffer_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_vulkan_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "copy_staging_buffer_size") == 0) return l_sg_vulkan_desc_get_copy_staging_buffer_size(L);
    if (strcmp(key, "stream_staging_buffer_size") == 0) return l_sg_vulkan_desc_get_stream_staging_buffer_size(L);
    if (strcmp(key, "descriptor_buffer_size") == 0) return l_sg_vulkan_desc_get_descriptor_buffer_size(L);
    return 0;
}

static int l_sg_vulkan_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "copy_staging_buffer_size") == 0) return l_sg_vulkan_desc_set_copy_staging_buffer_size(L);
    if (strcmp(key, "stream_staging_buffer_size") == 0) return l_sg_vulkan_desc_set_stream_staging_buffer_size(L);
    if (strcmp(key, "descriptor_buffer_size") == 0) return l_sg_vulkan_desc_set_descriptor_buffer_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_desc_new(lua_State *L) {
    sg_desc* ud = (sg_desc*)lua_newuserdatauv(L, sizeof(sg_desc), 0);
    memset(ud, 0, sizeof(sg_desc));
    luaL_setmetatable(L, "sokol.Desc");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "_start_canary");
        if (!lua_isnil(L, -1)) {
            ud->_start_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "buffer_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->buffer_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "image_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->image_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "sampler_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->sampler_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "shader_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->shader_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "pipeline_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->pipeline_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "view_pool_size");
        if (!lua_isnil(L, -1)) {
            ud->view_pool_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uniform_buffer_size");
        if (!lua_isnil(L, -1)) {
            ud->uniform_buffer_size = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "max_commit_listeners");
        if (!lua_isnil(L, -1)) {
            ud->max_commit_listeners = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "disable_validation");
        if (!lua_isnil(L, -1)) {
            ud->disable_validation = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "enforce_portable_limits");
        if (!lua_isnil(L, -1)) {
            ud->enforce_portable_limits = lua_toboolean(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "d3d11");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_d3d11_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_d3d11_desc* val = (sg_d3d11_desc*)luaL_testudata(L, -1, "sokol.D3d11Desc");
                if (val) ud->d3d11 = *val;
                lua_pop(L, 1);
            } else {
                sg_d3d11_desc* val = (sg_d3d11_desc*)luaL_testudata(L, -1, "sokol.D3d11Desc");
                if (val) ud->d3d11 = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "metal");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_metal_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_metal_desc* val = (sg_metal_desc*)luaL_testudata(L, -1, "sokol.MetalDesc");
                if (val) ud->metal = *val;
                lua_pop(L, 1);
            } else {
                sg_metal_desc* val = (sg_metal_desc*)luaL_testudata(L, -1, "sokol.MetalDesc");
                if (val) ud->metal = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "wgpu");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_wgpu_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_wgpu_desc* val = (sg_wgpu_desc*)luaL_testudata(L, -1, "sokol.WgpuDesc");
                if (val) ud->wgpu = *val;
                lua_pop(L, 1);
            } else {
                sg_wgpu_desc* val = (sg_wgpu_desc*)luaL_testudata(L, -1, "sokol.WgpuDesc");
                if (val) ud->wgpu = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vulkan");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_vulkan_desc_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_vulkan_desc* val = (sg_vulkan_desc*)luaL_testudata(L, -1, "sokol.VulkanDesc");
                if (val) ud->vulkan = *val;
                lua_pop(L, 1);
            } else {
                sg_vulkan_desc* val = (sg_vulkan_desc*)luaL_testudata(L, -1, "sokol.VulkanDesc");
                if (val) ud->vulkan = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "allocator");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_allocator_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_allocator* val = (sg_allocator*)luaL_testudata(L, -1, "sokol.Allocator");
                if (val) ud->allocator = *val;
                lua_pop(L, 1);
            } else {
                sg_allocator* val = (sg_allocator*)luaL_testudata(L, -1, "sokol.Allocator");
                if (val) ud->allocator = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "logger");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_logger_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_logger* val = (sg_logger*)luaL_testudata(L, -1, "sokol.Logger");
                if (val) ud->logger = *val;
                lua_pop(L, 1);
            } else {
                sg_logger* val = (sg_logger*)luaL_testudata(L, -1, "sokol.Logger");
                if (val) ud->logger = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "environment");
        if (!lua_isnil(L, -1)) {
            if (lua_istable(L, -1)) {
                /* Initialize from inline table */
                lua_pushcfunction(L, l_sg_environment_new);
                lua_pushvalue(L, -2);
                lua_call(L, 1, 1);
                sg_environment* val = (sg_environment*)luaL_testudata(L, -1, "sokol.Environment");
                if (val) ud->environment = *val;
                lua_pop(L, 1);
            } else {
                sg_environment* val = (sg_environment*)luaL_testudata(L, -1, "sokol.Environment");
                if (val) ud->environment = *val;
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "_end_canary");
        if (!lua_isnil(L, -1)) {
            ud->_end_canary = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_desc_get__start_canary(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->_start_canary);
    return 1;
}

static int l_sg_desc_set__start_canary(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->_start_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_buffer_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->buffer_pool_size);
    return 1;
}

static int l_sg_desc_set_buffer_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->buffer_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_image_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->image_pool_size);
    return 1;
}

static int l_sg_desc_set_image_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->image_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_sampler_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->sampler_pool_size);
    return 1;
}

static int l_sg_desc_set_sampler_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->sampler_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_shader_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->shader_pool_size);
    return 1;
}

static int l_sg_desc_set_shader_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->shader_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_pipeline_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->pipeline_pool_size);
    return 1;
}

static int l_sg_desc_set_pipeline_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->pipeline_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_view_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->view_pool_size);
    return 1;
}

static int l_sg_desc_set_view_pool_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->view_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_uniform_buffer_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->uniform_buffer_size);
    return 1;
}

static int l_sg_desc_set_uniform_buffer_size(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->uniform_buffer_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_max_commit_listeners(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->max_commit_listeners);
    return 1;
}

static int l_sg_desc_set_max_commit_listeners(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->max_commit_listeners = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc_get_disable_validation(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->disable_validation);
    return 1;
}

static int l_sg_desc_set_disable_validation(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->disable_validation = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_desc_get_enforce_portable_limits(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->enforce_portable_limits);
    return 1;
}

static int l_sg_desc_set_enforce_portable_limits(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->enforce_portable_limits = lua_toboolean(L, 2);
    return 0;
}

static int l_sg_desc_get_d3d11(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_d3d11_desc* ud = (sg_d3d11_desc*)lua_newuserdatauv(L, sizeof(sg_d3d11_desc), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.D3d11Desc");
    return 1;
}

static int l_sg_desc_set_d3d11(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_d3d11_desc* val = (sg_d3d11_desc*)luaL_checkudata(L, 2, "sokol.D3d11Desc");
    self->d3d11 = *val;
    return 0;
}

static int l_sg_desc_get_metal(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_metal_desc* ud = (sg_metal_desc*)lua_newuserdatauv(L, sizeof(sg_metal_desc), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.MetalDesc");
    return 1;
}

static int l_sg_desc_set_metal(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_metal_desc* val = (sg_metal_desc*)luaL_checkudata(L, 2, "sokol.MetalDesc");
    self->metal = *val;
    return 0;
}

static int l_sg_desc_get_wgpu(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_wgpu_desc* ud = (sg_wgpu_desc*)lua_newuserdatauv(L, sizeof(sg_wgpu_desc), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.WgpuDesc");
    return 1;
}

static int l_sg_desc_set_wgpu(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_wgpu_desc* val = (sg_wgpu_desc*)luaL_checkudata(L, 2, "sokol.WgpuDesc");
    self->wgpu = *val;
    return 0;
}

static int l_sg_desc_get_vulkan(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_vulkan_desc* ud = (sg_vulkan_desc*)lua_newuserdatauv(L, sizeof(sg_vulkan_desc), 0);
    *ud = self->vulkan;
    luaL_setmetatable(L, "sokol.VulkanDesc");
    return 1;
}

static int l_sg_desc_set_vulkan(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_vulkan_desc* val = (sg_vulkan_desc*)luaL_checkudata(L, 2, "sokol.VulkanDesc");
    self->vulkan = *val;
    return 0;
}

static int l_sg_desc_get_allocator(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_allocator* ud = (sg_allocator*)lua_newuserdatauv(L, sizeof(sg_allocator), 0);
    *ud = self->allocator;
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sg_desc_set_allocator(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_allocator* val = (sg_allocator*)luaL_checkudata(L, 2, "sokol.Allocator");
    self->allocator = *val;
    return 0;
}

static int l_sg_desc_get_logger(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_logger* ud = (sg_logger*)lua_newuserdatauv(L, sizeof(sg_logger), 0);
    *ud = self->logger;
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sg_desc_set_logger(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_logger* val = (sg_logger*)luaL_checkudata(L, 2, "sokol.Logger");
    self->logger = *val;
    return 0;
}

static int l_sg_desc_get_environment(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_environment* ud = (sg_environment*)lua_newuserdatauv(L, sizeof(sg_environment), 0);
    *ud = self->environment;
    luaL_setmetatable(L, "sokol.Environment");
    return 1;
}

static int l_sg_desc_set_environment(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_environment* val = (sg_environment*)luaL_checkudata(L, 2, "sokol.Environment");
    self->environment = *val;
    return 0;
}

static int l_sg_desc_get__end_canary(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->_end_canary);
    return 1;
}

static int l_sg_desc_set__end_canary(lua_State *L) {
    sg_desc* self = (sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->_end_canary = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_desc_get__start_canary(L);
    if (strcmp(key, "buffer_pool_size") == 0) return l_sg_desc_get_buffer_pool_size(L);
    if (strcmp(key, "image_pool_size") == 0) return l_sg_desc_get_image_pool_size(L);
    if (strcmp(key, "sampler_pool_size") == 0) return l_sg_desc_get_sampler_pool_size(L);
    if (strcmp(key, "shader_pool_size") == 0) return l_sg_desc_get_shader_pool_size(L);
    if (strcmp(key, "pipeline_pool_size") == 0) return l_sg_desc_get_pipeline_pool_size(L);
    if (strcmp(key, "view_pool_size") == 0) return l_sg_desc_get_view_pool_size(L);
    if (strcmp(key, "uniform_buffer_size") == 0) return l_sg_desc_get_uniform_buffer_size(L);
    if (strcmp(key, "max_commit_listeners") == 0) return l_sg_desc_get_max_commit_listeners(L);
    if (strcmp(key, "disable_validation") == 0) return l_sg_desc_get_disable_validation(L);
    if (strcmp(key, "enforce_portable_limits") == 0) return l_sg_desc_get_enforce_portable_limits(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_desc_get_d3d11(L);
    if (strcmp(key, "metal") == 0) return l_sg_desc_get_metal(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_desc_get_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_desc_get_vulkan(L);
    if (strcmp(key, "allocator") == 0) return l_sg_desc_get_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sg_desc_get_logger(L);
    if (strcmp(key, "environment") == 0) return l_sg_desc_get_environment(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_desc_get__end_canary(L);
    return 0;
}

static int l_sg_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "_start_canary") == 0) return l_sg_desc_set__start_canary(L);
    if (strcmp(key, "buffer_pool_size") == 0) return l_sg_desc_set_buffer_pool_size(L);
    if (strcmp(key, "image_pool_size") == 0) return l_sg_desc_set_image_pool_size(L);
    if (strcmp(key, "sampler_pool_size") == 0) return l_sg_desc_set_sampler_pool_size(L);
    if (strcmp(key, "shader_pool_size") == 0) return l_sg_desc_set_shader_pool_size(L);
    if (strcmp(key, "pipeline_pool_size") == 0) return l_sg_desc_set_pipeline_pool_size(L);
    if (strcmp(key, "view_pool_size") == 0) return l_sg_desc_set_view_pool_size(L);
    if (strcmp(key, "uniform_buffer_size") == 0) return l_sg_desc_set_uniform_buffer_size(L);
    if (strcmp(key, "max_commit_listeners") == 0) return l_sg_desc_set_max_commit_listeners(L);
    if (strcmp(key, "disable_validation") == 0) return l_sg_desc_set_disable_validation(L);
    if (strcmp(key, "enforce_portable_limits") == 0) return l_sg_desc_set_enforce_portable_limits(L);
    if (strcmp(key, "d3d11") == 0) return l_sg_desc_set_d3d11(L);
    if (strcmp(key, "metal") == 0) return l_sg_desc_set_metal(L);
    if (strcmp(key, "wgpu") == 0) return l_sg_desc_set_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sg_desc_set_vulkan(L);
    if (strcmp(key, "allocator") == 0) return l_sg_desc_set_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sg_desc_set_logger(L);
    if (strcmp(key, "environment") == 0) return l_sg_desc_set_environment(L);
    if (strcmp(key, "_end_canary") == 0) return l_sg_desc_set__end_canary(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_buffer_info_new(lua_State *L) {
    sg_d3d11_buffer_info* ud = (sg_d3d11_buffer_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_buffer_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_buffer_info));
    luaL_setmetatable(L, "sokol.D3d11BufferInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buf");
        if (!lua_isnil(L, -1)) {
            ud->buf = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_buffer_info_get_buf(lua_State *L) {
    sg_d3d11_buffer_info* self = (sg_d3d11_buffer_info*)luaL_checkudata(L, 1, "sokol.D3d11BufferInfo");
    lua_pushlightuserdata(L, (void*)self->buf);
    return 1;
}

static int l_sg_d3d11_buffer_info_set_buf(lua_State *L) {
    sg_d3d11_buffer_info* self = (sg_d3d11_buffer_info*)luaL_checkudata(L, 1, "sokol.D3d11BufferInfo");
    self->buf = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_buffer_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_d3d11_buffer_info_get_buf(L);
    return 0;
}

static int l_sg_d3d11_buffer_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_d3d11_buffer_info_set_buf(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_image_info_new(lua_State *L) {
    sg_d3d11_image_info* ud = (sg_d3d11_image_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_image_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_image_info));
    luaL_setmetatable(L, "sokol.D3d11ImageInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "tex2d");
        if (!lua_isnil(L, -1)) {
            ud->tex2d = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "tex3d");
        if (!lua_isnil(L, -1)) {
            ud->tex3d = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "res");
        if (!lua_isnil(L, -1)) {
            ud->res = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_image_info_get_tex2d(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    lua_pushlightuserdata(L, (void*)self->tex2d);
    return 1;
}

static int l_sg_d3d11_image_info_set_tex2d(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    self->tex2d = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_image_info_get_tex3d(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    lua_pushlightuserdata(L, (void*)self->tex3d);
    return 1;
}

static int l_sg_d3d11_image_info_set_tex3d(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    self->tex3d = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_image_info_get_res(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    lua_pushlightuserdata(L, (void*)self->res);
    return 1;
}

static int l_sg_d3d11_image_info_set_res(lua_State *L) {
    sg_d3d11_image_info* self = (sg_d3d11_image_info*)luaL_checkudata(L, 1, "sokol.D3d11ImageInfo");
    self->res = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_image_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex2d") == 0) return l_sg_d3d11_image_info_get_tex2d(L);
    if (strcmp(key, "tex3d") == 0) return l_sg_d3d11_image_info_get_tex3d(L);
    if (strcmp(key, "res") == 0) return l_sg_d3d11_image_info_get_res(L);
    return 0;
}

static int l_sg_d3d11_image_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex2d") == 0) return l_sg_d3d11_image_info_set_tex2d(L);
    if (strcmp(key, "tex3d") == 0) return l_sg_d3d11_image_info_set_tex3d(L);
    if (strcmp(key, "res") == 0) return l_sg_d3d11_image_info_set_res(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_sampler_info_new(lua_State *L) {
    sg_d3d11_sampler_info* ud = (sg_d3d11_sampler_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_sampler_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_sampler_info));
    luaL_setmetatable(L, "sokol.D3d11SamplerInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "smp");
        if (!lua_isnil(L, -1)) {
            ud->smp = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_sampler_info_get_smp(lua_State *L) {
    sg_d3d11_sampler_info* self = (sg_d3d11_sampler_info*)luaL_checkudata(L, 1, "sokol.D3d11SamplerInfo");
    lua_pushlightuserdata(L, (void*)self->smp);
    return 1;
}

static int l_sg_d3d11_sampler_info_set_smp(lua_State *L) {
    sg_d3d11_sampler_info* self = (sg_d3d11_sampler_info*)luaL_checkudata(L, 1, "sokol.D3d11SamplerInfo");
    self->smp = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_sampler_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_d3d11_sampler_info_get_smp(L);
    return 0;
}

static int l_sg_d3d11_sampler_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_d3d11_sampler_info_set_smp(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_shader_info_new(lua_State *L) {
    sg_d3d11_shader_info* ud = (sg_d3d11_shader_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_shader_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_shader_info));
    luaL_setmetatable(L, "sokol.D3d11ShaderInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "cbufs");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 8; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vs");
        if (!lua_isnil(L, -1)) {
            ud->vs = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fs");
        if (!lua_isnil(L, -1)) {
            ud->fs = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_shader_info_get_cbufs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    lua_newtable(L);
    for (int i = 0; i < 8; i++) {
        lua_pushnil(L); /* unsupported array type */
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_d3d11_shader_info_set_cbufs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 8; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_d3d11_shader_info_get_vs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    lua_pushlightuserdata(L, (void*)self->vs);
    return 1;
}

static int l_sg_d3d11_shader_info_set_vs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    self->vs = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_shader_info_get_fs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    lua_pushlightuserdata(L, (void*)self->fs);
    return 1;
}

static int l_sg_d3d11_shader_info_set_fs(lua_State *L) {
    sg_d3d11_shader_info* self = (sg_d3d11_shader_info*)luaL_checkudata(L, 1, "sokol.D3d11ShaderInfo");
    self->fs = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_shader_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "cbufs") == 0) return l_sg_d3d11_shader_info_get_cbufs(L);
    if (strcmp(key, "vs") == 0) return l_sg_d3d11_shader_info_get_vs(L);
    if (strcmp(key, "fs") == 0) return l_sg_d3d11_shader_info_get_fs(L);
    return 0;
}

static int l_sg_d3d11_shader_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "cbufs") == 0) return l_sg_d3d11_shader_info_set_cbufs(L);
    if (strcmp(key, "vs") == 0) return l_sg_d3d11_shader_info_set_vs(L);
    if (strcmp(key, "fs") == 0) return l_sg_d3d11_shader_info_set_fs(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_pipeline_info_new(lua_State *L) {
    sg_d3d11_pipeline_info* ud = (sg_d3d11_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_pipeline_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_pipeline_info));
    luaL_setmetatable(L, "sokol.D3d11PipelineInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "il");
        if (!lua_isnil(L, -1)) {
            ud->il = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "rs");
        if (!lua_isnil(L, -1)) {
            ud->rs = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dss");
        if (!lua_isnil(L, -1)) {
            ud->dss = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bs");
        if (!lua_isnil(L, -1)) {
            ud->bs = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_pipeline_info_get_il(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    lua_pushlightuserdata(L, (void*)self->il);
    return 1;
}

static int l_sg_d3d11_pipeline_info_set_il(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    self->il = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_pipeline_info_get_rs(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    lua_pushlightuserdata(L, (void*)self->rs);
    return 1;
}

static int l_sg_d3d11_pipeline_info_set_rs(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    self->rs = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_pipeline_info_get_dss(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    lua_pushlightuserdata(L, (void*)self->dss);
    return 1;
}

static int l_sg_d3d11_pipeline_info_set_dss(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    self->dss = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_pipeline_info_get_bs(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    lua_pushlightuserdata(L, (void*)self->bs);
    return 1;
}

static int l_sg_d3d11_pipeline_info_set_bs(lua_State *L) {
    sg_d3d11_pipeline_info* self = (sg_d3d11_pipeline_info*)luaL_checkudata(L, 1, "sokol.D3d11PipelineInfo");
    self->bs = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_pipeline_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "il") == 0) return l_sg_d3d11_pipeline_info_get_il(L);
    if (strcmp(key, "rs") == 0) return l_sg_d3d11_pipeline_info_get_rs(L);
    if (strcmp(key, "dss") == 0) return l_sg_d3d11_pipeline_info_get_dss(L);
    if (strcmp(key, "bs") == 0) return l_sg_d3d11_pipeline_info_get_bs(L);
    return 0;
}

static int l_sg_d3d11_pipeline_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "il") == 0) return l_sg_d3d11_pipeline_info_set_il(L);
    if (strcmp(key, "rs") == 0) return l_sg_d3d11_pipeline_info_set_rs(L);
    if (strcmp(key, "dss") == 0) return l_sg_d3d11_pipeline_info_set_dss(L);
    if (strcmp(key, "bs") == 0) return l_sg_d3d11_pipeline_info_set_bs(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_d3d11_view_info_new(lua_State *L) {
    sg_d3d11_view_info* ud = (sg_d3d11_view_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_view_info), 0);
    memset(ud, 0, sizeof(sg_d3d11_view_info));
    luaL_setmetatable(L, "sokol.D3d11ViewInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "srv");
        if (!lua_isnil(L, -1)) {
            ud->srv = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "uav");
        if (!lua_isnil(L, -1)) {
            ud->uav = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "rtv");
        if (!lua_isnil(L, -1)) {
            ud->rtv = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dsv");
        if (!lua_isnil(L, -1)) {
            ud->dsv = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_d3d11_view_info_get_srv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    lua_pushlightuserdata(L, (void*)self->srv);
    return 1;
}

static int l_sg_d3d11_view_info_set_srv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    self->srv = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_view_info_get_uav(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    lua_pushlightuserdata(L, (void*)self->uav);
    return 1;
}

static int l_sg_d3d11_view_info_set_uav(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    self->uav = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_view_info_get_rtv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    lua_pushlightuserdata(L, (void*)self->rtv);
    return 1;
}

static int l_sg_d3d11_view_info_set_rtv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    self->rtv = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_view_info_get_dsv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    lua_pushlightuserdata(L, (void*)self->dsv);
    return 1;
}

static int l_sg_d3d11_view_info_set_dsv(lua_State *L) {
    sg_d3d11_view_info* self = (sg_d3d11_view_info*)luaL_checkudata(L, 1, "sokol.D3d11ViewInfo");
    self->dsv = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_d3d11_view_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "srv") == 0) return l_sg_d3d11_view_info_get_srv(L);
    if (strcmp(key, "uav") == 0) return l_sg_d3d11_view_info_get_uav(L);
    if (strcmp(key, "rtv") == 0) return l_sg_d3d11_view_info_get_rtv(L);
    if (strcmp(key, "dsv") == 0) return l_sg_d3d11_view_info_get_dsv(L);
    return 0;
}

static int l_sg_d3d11_view_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "srv") == 0) return l_sg_d3d11_view_info_set_srv(L);
    if (strcmp(key, "uav") == 0) return l_sg_d3d11_view_info_set_uav(L);
    if (strcmp(key, "rtv") == 0) return l_sg_d3d11_view_info_set_rtv(L);
    if (strcmp(key, "dsv") == 0) return l_sg_d3d11_view_info_set_dsv(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_buffer_info_new(lua_State *L) {
    sg_mtl_buffer_info* ud = (sg_mtl_buffer_info*)lua_newuserdatauv(L, sizeof(sg_mtl_buffer_info), 0);
    memset(ud, 0, sizeof(sg_mtl_buffer_info));
    luaL_setmetatable(L, "sokol.MtlBufferInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buf");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_buffer_info_get_buf(lua_State *L) {
    sg_mtl_buffer_info* self = (sg_mtl_buffer_info*)luaL_checkudata(L, 1, "sokol.MtlBufferInfo");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushnil(L); /* unsupported array type */
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_mtl_buffer_info_set_buf(lua_State *L) {
    sg_mtl_buffer_info* self = (sg_mtl_buffer_info*)luaL_checkudata(L, 1, "sokol.MtlBufferInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_mtl_buffer_info_get_active_slot(lua_State *L) {
    sg_mtl_buffer_info* self = (sg_mtl_buffer_info*)luaL_checkudata(L, 1, "sokol.MtlBufferInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_mtl_buffer_info_set_active_slot(lua_State *L) {
    sg_mtl_buffer_info* self = (sg_mtl_buffer_info*)luaL_checkudata(L, 1, "sokol.MtlBufferInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_mtl_buffer_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_mtl_buffer_info_get_buf(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_mtl_buffer_info_get_active_slot(L);
    return 0;
}

static int l_sg_mtl_buffer_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_mtl_buffer_info_set_buf(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_mtl_buffer_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_image_info_new(lua_State *L) {
    sg_mtl_image_info* ud = (sg_mtl_image_info*)lua_newuserdatauv(L, sizeof(sg_mtl_image_info), 0);
    memset(ud, 0, sizeof(sg_mtl_image_info));
    luaL_setmetatable(L, "sokol.MtlImageInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "tex");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_image_info_get_tex(lua_State *L) {
    sg_mtl_image_info* self = (sg_mtl_image_info*)luaL_checkudata(L, 1, "sokol.MtlImageInfo");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushnil(L); /* unsupported array type */
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_mtl_image_info_set_tex(lua_State *L) {
    sg_mtl_image_info* self = (sg_mtl_image_info*)luaL_checkudata(L, 1, "sokol.MtlImageInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_mtl_image_info_get_active_slot(lua_State *L) {
    sg_mtl_image_info* self = (sg_mtl_image_info*)luaL_checkudata(L, 1, "sokol.MtlImageInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_mtl_image_info_set_active_slot(lua_State *L) {
    sg_mtl_image_info* self = (sg_mtl_image_info*)luaL_checkudata(L, 1, "sokol.MtlImageInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_mtl_image_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_mtl_image_info_get_tex(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_mtl_image_info_get_active_slot(L);
    return 0;
}

static int l_sg_mtl_image_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_mtl_image_info_set_tex(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_mtl_image_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_sampler_info_new(lua_State *L) {
    sg_mtl_sampler_info* ud = (sg_mtl_sampler_info*)lua_newuserdatauv(L, sizeof(sg_mtl_sampler_info), 0);
    memset(ud, 0, sizeof(sg_mtl_sampler_info));
    luaL_setmetatable(L, "sokol.MtlSamplerInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "smp");
        if (!lua_isnil(L, -1)) {
            ud->smp = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_sampler_info_get_smp(lua_State *L) {
    sg_mtl_sampler_info* self = (sg_mtl_sampler_info*)luaL_checkudata(L, 1, "sokol.MtlSamplerInfo");
    lua_pushlightuserdata(L, (void*)self->smp);
    return 1;
}

static int l_sg_mtl_sampler_info_set_smp(lua_State *L) {
    sg_mtl_sampler_info* self = (sg_mtl_sampler_info*)luaL_checkudata(L, 1, "sokol.MtlSamplerInfo");
    self->smp = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_sampler_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_mtl_sampler_info_get_smp(L);
    return 0;
}

static int l_sg_mtl_sampler_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_mtl_sampler_info_set_smp(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_shader_info_new(lua_State *L) {
    sg_mtl_shader_info* ud = (sg_mtl_shader_info*)lua_newuserdatauv(L, sizeof(sg_mtl_shader_info), 0);
    memset(ud, 0, sizeof(sg_mtl_shader_info));
    luaL_setmetatable(L, "sokol.MtlShaderInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "vertex_lib");
        if (!lua_isnil(L, -1)) {
            ud->vertex_lib = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fragment_lib");
        if (!lua_isnil(L, -1)) {
            ud->fragment_lib = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "vertex_func");
        if (!lua_isnil(L, -1)) {
            ud->vertex_func = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fragment_func");
        if (!lua_isnil(L, -1)) {
            ud->fragment_func = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_shader_info_get_vertex_lib(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    lua_pushlightuserdata(L, (void*)self->vertex_lib);
    return 1;
}

static int l_sg_mtl_shader_info_set_vertex_lib(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    self->vertex_lib = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_shader_info_get_fragment_lib(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    lua_pushlightuserdata(L, (void*)self->fragment_lib);
    return 1;
}

static int l_sg_mtl_shader_info_set_fragment_lib(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    self->fragment_lib = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_shader_info_get_vertex_func(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    lua_pushlightuserdata(L, (void*)self->vertex_func);
    return 1;
}

static int l_sg_mtl_shader_info_set_vertex_func(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    self->vertex_func = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_shader_info_get_fragment_func(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    lua_pushlightuserdata(L, (void*)self->fragment_func);
    return 1;
}

static int l_sg_mtl_shader_info_set_fragment_func(lua_State *L) {
    sg_mtl_shader_info* self = (sg_mtl_shader_info*)luaL_checkudata(L, 1, "sokol.MtlShaderInfo");
    self->fragment_func = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_shader_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertex_lib") == 0) return l_sg_mtl_shader_info_get_vertex_lib(L);
    if (strcmp(key, "fragment_lib") == 0) return l_sg_mtl_shader_info_get_fragment_lib(L);
    if (strcmp(key, "vertex_func") == 0) return l_sg_mtl_shader_info_get_vertex_func(L);
    if (strcmp(key, "fragment_func") == 0) return l_sg_mtl_shader_info_get_fragment_func(L);
    return 0;
}

static int l_sg_mtl_shader_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertex_lib") == 0) return l_sg_mtl_shader_info_set_vertex_lib(L);
    if (strcmp(key, "fragment_lib") == 0) return l_sg_mtl_shader_info_set_fragment_lib(L);
    if (strcmp(key, "vertex_func") == 0) return l_sg_mtl_shader_info_set_vertex_func(L);
    if (strcmp(key, "fragment_func") == 0) return l_sg_mtl_shader_info_set_fragment_func(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_mtl_pipeline_info_new(lua_State *L) {
    sg_mtl_pipeline_info* ud = (sg_mtl_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_mtl_pipeline_info), 0);
    memset(ud, 0, sizeof(sg_mtl_pipeline_info));
    luaL_setmetatable(L, "sokol.MtlPipelineInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "rps");
        if (!lua_isnil(L, -1)) {
            ud->rps = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "dss");
        if (!lua_isnil(L, -1)) {
            ud->dss = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_mtl_pipeline_info_get_rps(lua_State *L) {
    sg_mtl_pipeline_info* self = (sg_mtl_pipeline_info*)luaL_checkudata(L, 1, "sokol.MtlPipelineInfo");
    lua_pushlightuserdata(L, (void*)self->rps);
    return 1;
}

static int l_sg_mtl_pipeline_info_set_rps(lua_State *L) {
    sg_mtl_pipeline_info* self = (sg_mtl_pipeline_info*)luaL_checkudata(L, 1, "sokol.MtlPipelineInfo");
    self->rps = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_pipeline_info_get_dss(lua_State *L) {
    sg_mtl_pipeline_info* self = (sg_mtl_pipeline_info*)luaL_checkudata(L, 1, "sokol.MtlPipelineInfo");
    lua_pushlightuserdata(L, (void*)self->dss);
    return 1;
}

static int l_sg_mtl_pipeline_info_set_dss(lua_State *L) {
    sg_mtl_pipeline_info* self = (sg_mtl_pipeline_info*)luaL_checkudata(L, 1, "sokol.MtlPipelineInfo");
    self->dss = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_mtl_pipeline_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "rps") == 0) return l_sg_mtl_pipeline_info_get_rps(L);
    if (strcmp(key, "dss") == 0) return l_sg_mtl_pipeline_info_get_dss(L);
    return 0;
}

static int l_sg_mtl_pipeline_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "rps") == 0) return l_sg_mtl_pipeline_info_set_rps(L);
    if (strcmp(key, "dss") == 0) return l_sg_mtl_pipeline_info_set_dss(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_buffer_info_new(lua_State *L) {
    sg_wgpu_buffer_info* ud = (sg_wgpu_buffer_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_buffer_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_buffer_info));
    luaL_setmetatable(L, "sokol.WgpuBufferInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buf");
        if (!lua_isnil(L, -1)) {
            ud->buf = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_buffer_info_get_buf(lua_State *L) {
    sg_wgpu_buffer_info* self = (sg_wgpu_buffer_info*)luaL_checkudata(L, 1, "sokol.WgpuBufferInfo");
    lua_pushlightuserdata(L, (void*)self->buf);
    return 1;
}

static int l_sg_wgpu_buffer_info_set_buf(lua_State *L) {
    sg_wgpu_buffer_info* self = (sg_wgpu_buffer_info*)luaL_checkudata(L, 1, "sokol.WgpuBufferInfo");
    self->buf = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_buffer_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_wgpu_buffer_info_get_buf(L);
    return 0;
}

static int l_sg_wgpu_buffer_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_wgpu_buffer_info_set_buf(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_image_info_new(lua_State *L) {
    sg_wgpu_image_info* ud = (sg_wgpu_image_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_image_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_image_info));
    luaL_setmetatable(L, "sokol.WgpuImageInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "tex");
        if (!lua_isnil(L, -1)) {
            ud->tex = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_image_info_get_tex(lua_State *L) {
    sg_wgpu_image_info* self = (sg_wgpu_image_info*)luaL_checkudata(L, 1, "sokol.WgpuImageInfo");
    lua_pushlightuserdata(L, (void*)self->tex);
    return 1;
}

static int l_sg_wgpu_image_info_set_tex(lua_State *L) {
    sg_wgpu_image_info* self = (sg_wgpu_image_info*)luaL_checkudata(L, 1, "sokol.WgpuImageInfo");
    self->tex = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_image_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_wgpu_image_info_get_tex(L);
    return 0;
}

static int l_sg_wgpu_image_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_wgpu_image_info_set_tex(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_sampler_info_new(lua_State *L) {
    sg_wgpu_sampler_info* ud = (sg_wgpu_sampler_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_sampler_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_sampler_info));
    luaL_setmetatable(L, "sokol.WgpuSamplerInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "smp");
        if (!lua_isnil(L, -1)) {
            ud->smp = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_sampler_info_get_smp(lua_State *L) {
    sg_wgpu_sampler_info* self = (sg_wgpu_sampler_info*)luaL_checkudata(L, 1, "sokol.WgpuSamplerInfo");
    lua_pushlightuserdata(L, (void*)self->smp);
    return 1;
}

static int l_sg_wgpu_sampler_info_set_smp(lua_State *L) {
    sg_wgpu_sampler_info* self = (sg_wgpu_sampler_info*)luaL_checkudata(L, 1, "sokol.WgpuSamplerInfo");
    self->smp = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_sampler_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_wgpu_sampler_info_get_smp(L);
    return 0;
}

static int l_sg_wgpu_sampler_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_wgpu_sampler_info_set_smp(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_shader_info_new(lua_State *L) {
    sg_wgpu_shader_info* ud = (sg_wgpu_shader_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_shader_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_shader_info));
    luaL_setmetatable(L, "sokol.WgpuShaderInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "vs_mod");
        if (!lua_isnil(L, -1)) {
            ud->vs_mod = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "fs_mod");
        if (!lua_isnil(L, -1)) {
            ud->fs_mod = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "bgl");
        if (!lua_isnil(L, -1)) {
            ud->bgl = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_shader_info_get_vs_mod(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    lua_pushlightuserdata(L, (void*)self->vs_mod);
    return 1;
}

static int l_sg_wgpu_shader_info_set_vs_mod(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    self->vs_mod = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_shader_info_get_fs_mod(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    lua_pushlightuserdata(L, (void*)self->fs_mod);
    return 1;
}

static int l_sg_wgpu_shader_info_set_fs_mod(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    self->fs_mod = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_shader_info_get_bgl(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    lua_pushlightuserdata(L, (void*)self->bgl);
    return 1;
}

static int l_sg_wgpu_shader_info_set_bgl(lua_State *L) {
    sg_wgpu_shader_info* self = (sg_wgpu_shader_info*)luaL_checkudata(L, 1, "sokol.WgpuShaderInfo");
    self->bgl = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_shader_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vs_mod") == 0) return l_sg_wgpu_shader_info_get_vs_mod(L);
    if (strcmp(key, "fs_mod") == 0) return l_sg_wgpu_shader_info_get_fs_mod(L);
    if (strcmp(key, "bgl") == 0) return l_sg_wgpu_shader_info_get_bgl(L);
    return 0;
}

static int l_sg_wgpu_shader_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vs_mod") == 0) return l_sg_wgpu_shader_info_set_vs_mod(L);
    if (strcmp(key, "fs_mod") == 0) return l_sg_wgpu_shader_info_set_fs_mod(L);
    if (strcmp(key, "bgl") == 0) return l_sg_wgpu_shader_info_set_bgl(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_pipeline_info_new(lua_State *L) {
    sg_wgpu_pipeline_info* ud = (sg_wgpu_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_pipeline_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_pipeline_info));
    luaL_setmetatable(L, "sokol.WgpuPipelineInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "render_pipeline");
        if (!lua_isnil(L, -1)) {
            ud->render_pipeline = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "compute_pipeline");
        if (!lua_isnil(L, -1)) {
            ud->compute_pipeline = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_pipeline_info_get_render_pipeline(lua_State *L) {
    sg_wgpu_pipeline_info* self = (sg_wgpu_pipeline_info*)luaL_checkudata(L, 1, "sokol.WgpuPipelineInfo");
    lua_pushlightuserdata(L, (void*)self->render_pipeline);
    return 1;
}

static int l_sg_wgpu_pipeline_info_set_render_pipeline(lua_State *L) {
    sg_wgpu_pipeline_info* self = (sg_wgpu_pipeline_info*)luaL_checkudata(L, 1, "sokol.WgpuPipelineInfo");
    self->render_pipeline = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_pipeline_info_get_compute_pipeline(lua_State *L) {
    sg_wgpu_pipeline_info* self = (sg_wgpu_pipeline_info*)luaL_checkudata(L, 1, "sokol.WgpuPipelineInfo");
    lua_pushlightuserdata(L, (void*)self->compute_pipeline);
    return 1;
}

static int l_sg_wgpu_pipeline_info_set_compute_pipeline(lua_State *L) {
    sg_wgpu_pipeline_info* self = (sg_wgpu_pipeline_info*)luaL_checkudata(L, 1, "sokol.WgpuPipelineInfo");
    self->compute_pipeline = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_pipeline_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_pipeline") == 0) return l_sg_wgpu_pipeline_info_get_render_pipeline(L);
    if (strcmp(key, "compute_pipeline") == 0) return l_sg_wgpu_pipeline_info_get_compute_pipeline(L);
    return 0;
}

static int l_sg_wgpu_pipeline_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_pipeline") == 0) return l_sg_wgpu_pipeline_info_set_render_pipeline(L);
    if (strcmp(key, "compute_pipeline") == 0) return l_sg_wgpu_pipeline_info_set_compute_pipeline(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_wgpu_view_info_new(lua_State *L) {
    sg_wgpu_view_info* ud = (sg_wgpu_view_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_view_info), 0);
    memset(ud, 0, sizeof(sg_wgpu_view_info));
    luaL_setmetatable(L, "sokol.WgpuViewInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "view");
        if (!lua_isnil(L, -1)) {
            ud->view = lua_touserdata(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_wgpu_view_info_get_view(lua_State *L) {
    sg_wgpu_view_info* self = (sg_wgpu_view_info*)luaL_checkudata(L, 1, "sokol.WgpuViewInfo");
    lua_pushlightuserdata(L, (void*)self->view);
    return 1;
}

static int l_sg_wgpu_view_info_set_view(lua_State *L) {
    sg_wgpu_view_info* self = (sg_wgpu_view_info*)luaL_checkudata(L, 1, "sokol.WgpuViewInfo");
    self->view = lua_touserdata(L, 2);
    return 0;
}

static int l_sg_wgpu_view_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "view") == 0) return l_sg_wgpu_view_info_get_view(L);
    return 0;
}

static int l_sg_wgpu_view_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "view") == 0) return l_sg_wgpu_view_info_set_view(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_buffer_info_new(lua_State *L) {
    sg_gl_buffer_info* ud = (sg_gl_buffer_info*)lua_newuserdatauv(L, sizeof(sg_gl_buffer_info), 0);
    memset(ud, 0, sizeof(sg_gl_buffer_info));
    luaL_setmetatable(L, "sokol.GlBufferInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "buf");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->buf[i] = (uint32_t)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_buffer_info_get_buf(lua_State *L) {
    sg_gl_buffer_info* self = (sg_gl_buffer_info*)luaL_checkudata(L, 1, "sokol.GlBufferInfo");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushinteger(L, (lua_Integer)self->buf[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_gl_buffer_info_set_buf(lua_State *L) {
    sg_gl_buffer_info* self = (sg_gl_buffer_info*)luaL_checkudata(L, 1, "sokol.GlBufferInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->buf[i] = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_gl_buffer_info_get_active_slot(lua_State *L) {
    sg_gl_buffer_info* self = (sg_gl_buffer_info*)luaL_checkudata(L, 1, "sokol.GlBufferInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_gl_buffer_info_set_active_slot(lua_State *L) {
    sg_gl_buffer_info* self = (sg_gl_buffer_info*)luaL_checkudata(L, 1, "sokol.GlBufferInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_buffer_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_gl_buffer_info_get_buf(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_gl_buffer_info_get_active_slot(L);
    return 0;
}

static int l_sg_gl_buffer_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buf") == 0) return l_sg_gl_buffer_info_set_buf(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_gl_buffer_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_image_info_new(lua_State *L) {
    sg_gl_image_info* ud = (sg_gl_image_info*)lua_newuserdatauv(L, sizeof(sg_gl_image_info), 0);
    memset(ud, 0, sizeof(sg_gl_image_info));
    luaL_setmetatable(L, "sokol.GlImageInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "tex");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->tex[i] = (uint32_t)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "tex_target");
        if (!lua_isnil(L, -1)) {
            ud->tex_target = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "active_slot");
        if (!lua_isnil(L, -1)) {
            ud->active_slot = (int)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_image_info_get_tex(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushinteger(L, (lua_Integer)self->tex[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_gl_image_info_set_tex(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->tex[i] = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_gl_image_info_get_tex_target(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    lua_pushinteger(L, (lua_Integer)self->tex_target);
    return 1;
}

static int l_sg_gl_image_info_set_tex_target(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    self->tex_target = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_image_info_get_active_slot(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    lua_pushinteger(L, (lua_Integer)self->active_slot);
    return 1;
}

static int l_sg_gl_image_info_set_active_slot(lua_State *L) {
    sg_gl_image_info* self = (sg_gl_image_info*)luaL_checkudata(L, 1, "sokol.GlImageInfo");
    self->active_slot = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_image_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_gl_image_info_get_tex(L);
    if (strcmp(key, "tex_target") == 0) return l_sg_gl_image_info_get_tex_target(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_gl_image_info_get_active_slot(L);
    return 0;
}

static int l_sg_gl_image_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex") == 0) return l_sg_gl_image_info_set_tex(L);
    if (strcmp(key, "tex_target") == 0) return l_sg_gl_image_info_set_tex_target(L);
    if (strcmp(key, "active_slot") == 0) return l_sg_gl_image_info_set_active_slot(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_sampler_info_new(lua_State *L) {
    sg_gl_sampler_info* ud = (sg_gl_sampler_info*)lua_newuserdatauv(L, sizeof(sg_gl_sampler_info), 0);
    memset(ud, 0, sizeof(sg_gl_sampler_info));
    luaL_setmetatable(L, "sokol.GlSamplerInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "smp");
        if (!lua_isnil(L, -1)) {
            ud->smp = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_sampler_info_get_smp(lua_State *L) {
    sg_gl_sampler_info* self = (sg_gl_sampler_info*)luaL_checkudata(L, 1, "sokol.GlSamplerInfo");
    lua_pushinteger(L, (lua_Integer)self->smp);
    return 1;
}

static int l_sg_gl_sampler_info_set_smp(lua_State *L) {
    sg_gl_sampler_info* self = (sg_gl_sampler_info*)luaL_checkudata(L, 1, "sokol.GlSamplerInfo");
    self->smp = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_sampler_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_gl_sampler_info_get_smp(L);
    return 0;
}

static int l_sg_gl_sampler_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "smp") == 0) return l_sg_gl_sampler_info_set_smp(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_shader_info_new(lua_State *L) {
    sg_gl_shader_info* ud = (sg_gl_shader_info*)lua_newuserdatauv(L, sizeof(sg_gl_shader_info), 0);
    memset(ud, 0, sizeof(sg_gl_shader_info));
    luaL_setmetatable(L, "sokol.GlShaderInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "prog");
        if (!lua_isnil(L, -1)) {
            ud->prog = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_shader_info_get_prog(lua_State *L) {
    sg_gl_shader_info* self = (sg_gl_shader_info*)luaL_checkudata(L, 1, "sokol.GlShaderInfo");
    lua_pushinteger(L, (lua_Integer)self->prog);
    return 1;
}

static int l_sg_gl_shader_info_set_prog(lua_State *L) {
    sg_gl_shader_info* self = (sg_gl_shader_info*)luaL_checkudata(L, 1, "sokol.GlShaderInfo");
    self->prog = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_shader_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "prog") == 0) return l_sg_gl_shader_info_get_prog(L);
    return 0;
}

static int l_sg_gl_shader_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "prog") == 0) return l_sg_gl_shader_info_set_prog(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_gl_view_info_new(lua_State *L) {
    sg_gl_view_info* ud = (sg_gl_view_info*)lua_newuserdatauv(L, sizeof(sg_gl_view_info), 0);
    memset(ud, 0, sizeof(sg_gl_view_info));
    luaL_setmetatable(L, "sokol.GlViewInfo");

    /* If first arg is a table, use it to initialize fields */
    if (lua_istable(L, 1)) {
        lua_getfield(L, 1, "tex_view");
        if (lua_istable(L, -1)) {
            for (int i = 0; i < 2; i++) {
                lua_rawgeti(L, -1, i + 1);
                if (!lua_isnil(L, -1)) {
                    ud->tex_view[i] = (uint32_t)lua_tointeger(L, -1);
                }
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msaa_render_buffer");
        if (!lua_isnil(L, -1)) {
            ud->msaa_render_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
        lua_getfield(L, 1, "msaa_resolve_frame_buffer");
        if (!lua_isnil(L, -1)) {
            ud->msaa_resolve_frame_buffer = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 1;
}

static int l_sg_gl_view_info_get_tex_view(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    lua_newtable(L);
    for (int i = 0; i < 2; i++) {
        lua_pushinteger(L, (lua_Integer)self->tex_view[i]);
        lua_rawseti(L, -2, i + 1);
    }
    return 1;
}

static int l_sg_gl_view_info_set_tex_view(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    luaL_checktype(L, 2, LUA_TTABLE);
    for (int i = 0; i < 2; i++) {
        lua_rawgeti(L, 2, i + 1);
        if (!lua_isnil(L, -1)) {
            self->tex_view[i] = (uint32_t)lua_tointeger(L, -1);
        }
        lua_pop(L, 1);
    }
    return 0;
}

static int l_sg_gl_view_info_get_msaa_render_buffer(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    lua_pushinteger(L, (lua_Integer)self->msaa_render_buffer);
    return 1;
}

static int l_sg_gl_view_info_set_msaa_render_buffer(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    self->msaa_render_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_view_info_get_msaa_resolve_frame_buffer(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    lua_pushinteger(L, (lua_Integer)self->msaa_resolve_frame_buffer);
    return 1;
}

static int l_sg_gl_view_info_set_msaa_resolve_frame_buffer(lua_State *L) {
    sg_gl_view_info* self = (sg_gl_view_info*)luaL_checkudata(L, 1, "sokol.GlViewInfo");
    self->msaa_resolve_frame_buffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sg_gl_view_info__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex_view") == 0) return l_sg_gl_view_info_get_tex_view(L);
    if (strcmp(key, "msaa_render_buffer") == 0) return l_sg_gl_view_info_get_msaa_render_buffer(L);
    if (strcmp(key, "msaa_resolve_frame_buffer") == 0) return l_sg_gl_view_info_get_msaa_resolve_frame_buffer(L);
    return 0;
}

static int l_sg_gl_view_info__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "tex_view") == 0) return l_sg_gl_view_info_set_tex_view(L);
    if (strcmp(key, "msaa_render_buffer") == 0) return l_sg_gl_view_info_set_msaa_render_buffer(L);
    if (strcmp(key, "msaa_resolve_frame_buffer") == 0) return l_sg_gl_view_info_set_msaa_resolve_frame_buffer(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sg_setup(lua_State *L) {
    const sg_desc* desc = (const sg_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sg_setup(desc);
    return 0;
}

static int l_sg_shutdown(lua_State *L) {
    sg_shutdown();
    return 0;
}

static int l_sg_isvalid(lua_State *L) {
    bool result = sg_isvalid();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_reset_state_cache(lua_State *L) {
    sg_reset_state_cache();
    return 0;
}

static int l_sg_push_debug_group(lua_State *L) {
    const char* name = luaL_checkstring(L, 1);
    sg_push_debug_group(name);
    return 0;
}

static int l_sg_pop_debug_group(lua_State *L) {
    sg_pop_debug_group();
    return 0;
}

static int l_sg_add_commit_listener(lua_State *L) {
    sg_commit_listener* listener_ptr = (sg_commit_listener*)luaL_checkudata(L, 1, "sokol.CommitListener");
    sg_commit_listener listener = *listener_ptr;
    bool result = sg_add_commit_listener(listener);
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_remove_commit_listener(lua_State *L) {
    sg_commit_listener* listener_ptr = (sg_commit_listener*)luaL_checkudata(L, 1, "sokol.CommitListener");
    sg_commit_listener listener = *listener_ptr;
    bool result = sg_remove_commit_listener(listener);
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_make_buffer(lua_State *L) {
    const sg_buffer_desc* desc = (const sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_buffer result = sg_make_buffer(desc);
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sg_make_image(lua_State *L) {
    const sg_image_desc* desc = (const sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image result = sg_make_image(desc);
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Image");
    return 1;
}

static int l_sg_make_sampler(lua_State *L) {
    const sg_sampler_desc* desc = (const sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    sg_sampler result = sg_make_sampler(desc);
    sg_sampler* ud = (sg_sampler*)lua_newuserdatauv(L, sizeof(sg_sampler), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sampler");
    return 1;
}

static int l_sg_make_shader(lua_State *L) {
    const sg_shader_desc* desc = (const sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader result = sg_make_shader(desc);
    sg_shader* ud = (sg_shader*)lua_newuserdatauv(L, sizeof(sg_shader), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Shader");
    return 1;
}

static int l_sg_make_pipeline(lua_State *L) {
    const sg_pipeline_desc* desc = (const sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_pipeline result = sg_make_pipeline(desc);
    sg_pipeline* ud = (sg_pipeline*)lua_newuserdatauv(L, sizeof(sg_pipeline), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Pipeline");
    return 1;
}

static int l_sg_make_view(lua_State *L) {
    const sg_view_desc* desc = (const sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_view result = sg_make_view(desc);
    sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.View");
    return 1;
}

static int l_sg_destroy_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_destroy_buffer(buf);
    return 0;
}

static int l_sg_destroy_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_destroy_image(img);
    return 0;
}

static int l_sg_destroy_sampler(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_destroy_sampler(smp);
    return 0;
}

static int l_sg_destroy_shader(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_destroy_shader(shd);
    return 0;
}

static int l_sg_destroy_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_destroy_pipeline(pip);
    return 0;
}

static int l_sg_destroy_view(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_destroy_view(view);
    return 0;
}

static int l_sg_update_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    const sg_range* data = (const sg_range*)luaL_checkudata(L, 2, "sokol.Range");
    sg_update_buffer(buf, data);
    return 0;
}

static int l_sg_update_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    const sg_image_data* data = (const sg_image_data*)luaL_checkudata(L, 2, "sokol.ImageData");
    sg_update_image(img, data);
    return 0;
}

static int l_sg_append_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    const sg_range* data = (const sg_range*)luaL_checkudata(L, 2, "sokol.Range");
    int result = sg_append_buffer(buf, data);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_buffer_overflow(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    bool result = sg_query_buffer_overflow(buf);
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_query_buffer_will_overflow(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    size_t size = (size_t)luaL_checkinteger(L, 2);
    bool result = sg_query_buffer_will_overflow(buf, size);
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_begin_pass(lua_State *L) {
    const sg_pass* pass = (const sg_pass*)luaL_checkudata(L, 1, "sokol.Pass");
    sg_begin_pass(pass);
    return 0;
}

static int l_sg_apply_viewport(lua_State *L) {
    int x = (int)luaL_checkinteger(L, 1);
    int y = (int)luaL_checkinteger(L, 2);
    int width = (int)luaL_checkinteger(L, 3);
    int height = (int)luaL_checkinteger(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sg_apply_viewport(x, y, width, height, origin_top_left);
    return 0;
}

static int l_sg_apply_viewportf(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float width = (float)luaL_checknumber(L, 3);
    float height = (float)luaL_checknumber(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sg_apply_viewportf(x, y, width, height, origin_top_left);
    return 0;
}

static int l_sg_apply_scissor_rect(lua_State *L) {
    int x = (int)luaL_checkinteger(L, 1);
    int y = (int)luaL_checkinteger(L, 2);
    int width = (int)luaL_checkinteger(L, 3);
    int height = (int)luaL_checkinteger(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sg_apply_scissor_rect(x, y, width, height, origin_top_left);
    return 0;
}

static int l_sg_apply_scissor_rectf(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float width = (float)luaL_checknumber(L, 3);
    float height = (float)luaL_checknumber(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sg_apply_scissor_rectf(x, y, width, height, origin_top_left);
    return 0;
}

static int l_sg_apply_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_apply_pipeline(pip);
    return 0;
}

static int l_sg_apply_bindings(lua_State *L) {
    const sg_bindings* bindings = (const sg_bindings*)luaL_checkudata(L, 1, "sokol.Bindings");
    sg_apply_bindings(bindings);
    return 0;
}

static int l_sg_apply_uniforms(lua_State *L) {
    int ub_slot = (int)luaL_checkinteger(L, 1);
    const sg_range* data = (const sg_range*)luaL_checkudata(L, 2, "sokol.Range");
    sg_apply_uniforms(ub_slot, data);
    return 0;
}

static int l_sg_draw(lua_State *L) {
    int base_element = (int)luaL_checkinteger(L, 1);
    int num_elements = (int)luaL_checkinteger(L, 2);
    int num_instances = (int)luaL_checkinteger(L, 3);
    sg_draw(base_element, num_elements, num_instances);
    return 0;
}

static int l_sg_draw_ex(lua_State *L) {
    int base_element = (int)luaL_checkinteger(L, 1);
    int num_elements = (int)luaL_checkinteger(L, 2);
    int num_instances = (int)luaL_checkinteger(L, 3);
    int base_vertex = (int)luaL_checkinteger(L, 4);
    int base_instance = (int)luaL_checkinteger(L, 5);
    sg_draw_ex(base_element, num_elements, num_instances, base_vertex, base_instance);
    return 0;
}

static int l_sg_dispatch(lua_State *L) {
    int num_groups_x = (int)luaL_checkinteger(L, 1);
    int num_groups_y = (int)luaL_checkinteger(L, 2);
    int num_groups_z = (int)luaL_checkinteger(L, 3);
    sg_dispatch(num_groups_x, num_groups_y, num_groups_z);
    return 0;
}

static int l_sg_end_pass(lua_State *L) {
    sg_end_pass();
    return 0;
}

static int l_sg_commit(lua_State *L) {
    sg_commit();
    return 0;
}

static int l_sg_query_desc(lua_State *L) {
    sg_desc result = sg_query_desc();
    sg_desc* ud = (sg_desc*)lua_newuserdatauv(L, sizeof(sg_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_sg_query_backend(lua_State *L) {
    sg_backend result = sg_query_backend();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_features(lua_State *L) {
    sg_features result = sg_query_features();
    sg_features* ud = (sg_features*)lua_newuserdatauv(L, sizeof(sg_features), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Features");
    return 1;
}

static int l_sg_query_limits(lua_State *L) {
    sg_limits result = sg_query_limits();
    sg_limits* ud = (sg_limits*)lua_newuserdatauv(L, sizeof(sg_limits), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Limits");
    return 1;
}

static int l_sg_query_pixelformat(lua_State *L) {
    sg_pixel_format fmt = (sg_pixel_format)luaL_checkinteger(L, 1);
    sg_pixelformat_info result = sg_query_pixelformat(fmt);
    sg_pixelformat_info* ud = (sg_pixelformat_info*)lua_newuserdatauv(L, sizeof(sg_pixelformat_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.PixelformatInfo");
    return 1;
}

static int l_sg_query_row_pitch(lua_State *L) {
    sg_pixel_format fmt = (sg_pixel_format)luaL_checkinteger(L, 1);
    int width = (int)luaL_checkinteger(L, 2);
    int row_align_bytes = (int)luaL_checkinteger(L, 3);
    int result = sg_query_row_pitch(fmt, width, row_align_bytes);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_surface_pitch(lua_State *L) {
    sg_pixel_format fmt = (sg_pixel_format)luaL_checkinteger(L, 1);
    int width = (int)luaL_checkinteger(L, 2);
    int height = (int)luaL_checkinteger(L, 3);
    int row_align_bytes = (int)luaL_checkinteger(L, 4);
    int result = sg_query_surface_pitch(fmt, width, height, row_align_bytes);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_buffer_state(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_resource_state result = sg_query_buffer_state(buf);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_state(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_resource_state result = sg_query_image_state(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_sampler_state(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_resource_state result = sg_query_sampler_state(smp);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_shader_state(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_resource_state result = sg_query_shader_state(shd);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_pipeline_state(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_resource_state result = sg_query_pipeline_state(pip);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_view_state(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_resource_state result = sg_query_view_state(view);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_buffer_info(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_buffer_info result = sg_query_buffer_info(buf);
    sg_buffer_info* ud = (sg_buffer_info*)lua_newuserdatauv(L, sizeof(sg_buffer_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.BufferInfo");
    return 1;
}

static int l_sg_query_image_info(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_image_info result = sg_query_image_info(img);
    sg_image_info* ud = (sg_image_info*)lua_newuserdatauv(L, sizeof(sg_image_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ImageInfo");
    return 1;
}

static int l_sg_query_sampler_info(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_sampler_info result = sg_query_sampler_info(smp);
    sg_sampler_info* ud = (sg_sampler_info*)lua_newuserdatauv(L, sizeof(sg_sampler_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SamplerInfo");
    return 1;
}

static int l_sg_query_shader_info(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_shader_info result = sg_query_shader_info(shd);
    sg_shader_info* ud = (sg_shader_info*)lua_newuserdatauv(L, sizeof(sg_shader_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ShaderInfo");
    return 1;
}

static int l_sg_query_pipeline_info(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_pipeline_info result = sg_query_pipeline_info(pip);
    sg_pipeline_info* ud = (sg_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_pipeline_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.PipelineInfo");
    return 1;
}

static int l_sg_query_view_info(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_view_info result = sg_query_view_info(view);
    sg_view_info* ud = (sg_view_info*)lua_newuserdatauv(L, sizeof(sg_view_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ViewInfo");
    return 1;
}

static int l_sg_query_buffer_desc(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_buffer_desc result = sg_query_buffer_desc(buf);
    sg_buffer_desc* ud = (sg_buffer_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.BufferDesc");
    return 1;
}

static int l_sg_query_image_desc(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_image_desc result = sg_query_image_desc(img);
    sg_image_desc* ud = (sg_image_desc*)lua_newuserdatauv(L, sizeof(sg_image_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ImageDesc");
    return 1;
}

static int l_sg_query_sampler_desc(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_sampler_desc result = sg_query_sampler_desc(smp);
    sg_sampler_desc* ud = (sg_sampler_desc*)lua_newuserdatauv(L, sizeof(sg_sampler_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SamplerDesc");
    return 1;
}

static int l_sg_query_shader_desc(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_shader_desc result = sg_query_shader_desc(shd);
    sg_shader_desc* ud = (sg_shader_desc*)lua_newuserdatauv(L, sizeof(sg_shader_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ShaderDesc");
    return 1;
}

static int l_sg_query_pipeline_desc(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_pipeline_desc result = sg_query_pipeline_desc(pip);
    sg_pipeline_desc* ud = (sg_pipeline_desc*)lua_newuserdatauv(L, sizeof(sg_pipeline_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.PipelineDesc");
    return 1;
}

static int l_sg_query_view_desc(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_view_desc result = sg_query_view_desc(view);
    sg_view_desc* ud = (sg_view_desc*)lua_newuserdatauv(L, sizeof(sg_view_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ViewDesc");
    return 1;
}

static int l_sg_query_buffer_defaults(lua_State *L) {
    const sg_buffer_desc* desc = (const sg_buffer_desc*)luaL_checkudata(L, 1, "sokol.BufferDesc");
    sg_buffer_desc result = sg_query_buffer_defaults(desc);
    sg_buffer_desc* ud = (sg_buffer_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.BufferDesc");
    return 1;
}

static int l_sg_query_image_defaults(lua_State *L) {
    const sg_image_desc* desc = (const sg_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sg_image_desc result = sg_query_image_defaults(desc);
    sg_image_desc* ud = (sg_image_desc*)lua_newuserdatauv(L, sizeof(sg_image_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ImageDesc");
    return 1;
}

static int l_sg_query_sampler_defaults(lua_State *L) {
    const sg_sampler_desc* desc = (const sg_sampler_desc*)luaL_checkudata(L, 1, "sokol.SamplerDesc");
    sg_sampler_desc result = sg_query_sampler_defaults(desc);
    sg_sampler_desc* ud = (sg_sampler_desc*)lua_newuserdatauv(L, sizeof(sg_sampler_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SamplerDesc");
    return 1;
}

static int l_sg_query_shader_defaults(lua_State *L) {
    const sg_shader_desc* desc = (const sg_shader_desc*)luaL_checkudata(L, 1, "sokol.ShaderDesc");
    sg_shader_desc result = sg_query_shader_defaults(desc);
    sg_shader_desc* ud = (sg_shader_desc*)lua_newuserdatauv(L, sizeof(sg_shader_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ShaderDesc");
    return 1;
}

static int l_sg_query_pipeline_defaults(lua_State *L) {
    const sg_pipeline_desc* desc = (const sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.PipelineDesc");
    sg_pipeline_desc result = sg_query_pipeline_defaults(desc);
    sg_pipeline_desc* ud = (sg_pipeline_desc*)lua_newuserdatauv(L, sizeof(sg_pipeline_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.PipelineDesc");
    return 1;
}

static int l_sg_query_view_defaults(lua_State *L) {
    const sg_view_desc* desc = (const sg_view_desc*)luaL_checkudata(L, 1, "sokol.ViewDesc");
    sg_view_desc result = sg_query_view_defaults(desc);
    sg_view_desc* ud = (sg_view_desc*)lua_newuserdatauv(L, sizeof(sg_view_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ViewDesc");
    return 1;
}

static int l_sg_query_buffer_size(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    size_t result = sg_query_buffer_size(buf);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_buffer_usage(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_buffer_usage result = sg_query_buffer_usage(buf);
    sg_buffer_usage* ud = (sg_buffer_usage*)lua_newuserdatauv(L, sizeof(sg_buffer_usage), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.BufferUsage");
    return 1;
}

static int l_sg_query_image_type(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_image_type result = sg_query_image_type(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_width(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    int result = sg_query_image_width(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_height(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    int result = sg_query_image_height(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_num_slices(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    int result = sg_query_image_num_slices(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_num_mipmaps(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    int result = sg_query_image_num_mipmaps(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_pixelformat(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_pixel_format result = sg_query_image_pixelformat(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_image_usage(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_image_usage result = sg_query_image_usage(img);
    sg_image_usage* ud = (sg_image_usage*)lua_newuserdatauv(L, sizeof(sg_image_usage), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ImageUsage");
    return 1;
}

static int l_sg_query_image_sample_count(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    int result = sg_query_image_sample_count(img);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_view_type(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_view_type result = sg_query_view_type(view);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sg_query_view_image(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_image result = sg_query_view_image(view);
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Image");
    return 1;
}

static int l_sg_query_view_buffer(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_buffer result = sg_query_view_buffer(view);
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sg_alloc_buffer(lua_State *L) {
    sg_buffer result = sg_alloc_buffer();
    sg_buffer* ud = (sg_buffer*)lua_newuserdatauv(L, sizeof(sg_buffer), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sg_alloc_image(lua_State *L) {
    sg_image result = sg_alloc_image();
    sg_image* ud = (sg_image*)lua_newuserdatauv(L, sizeof(sg_image), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Image");
    return 1;
}

static int l_sg_alloc_sampler(lua_State *L) {
    sg_sampler result = sg_alloc_sampler();
    sg_sampler* ud = (sg_sampler*)lua_newuserdatauv(L, sizeof(sg_sampler), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sampler");
    return 1;
}

static int l_sg_alloc_shader(lua_State *L) {
    sg_shader result = sg_alloc_shader();
    sg_shader* ud = (sg_shader*)lua_newuserdatauv(L, sizeof(sg_shader), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Shader");
    return 1;
}

static int l_sg_alloc_pipeline(lua_State *L) {
    sg_pipeline result = sg_alloc_pipeline();
    sg_pipeline* ud = (sg_pipeline*)lua_newuserdatauv(L, sizeof(sg_pipeline), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Pipeline");
    return 1;
}

static int l_sg_alloc_view(lua_State *L) {
    sg_view result = sg_alloc_view();
    sg_view* ud = (sg_view*)lua_newuserdatauv(L, sizeof(sg_view), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.View");
    return 1;
}

static int l_sg_dealloc_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_dealloc_buffer(buf);
    return 0;
}

static int l_sg_dealloc_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_dealloc_image(img);
    return 0;
}

static int l_sg_dealloc_sampler(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_dealloc_sampler(smp);
    return 0;
}

static int l_sg_dealloc_shader(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_dealloc_shader(shd);
    return 0;
}

static int l_sg_dealloc_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_dealloc_pipeline(pip);
    return 0;
}

static int l_sg_dealloc_view(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_dealloc_view(view);
    return 0;
}

static int l_sg_init_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    const sg_buffer_desc* desc = (const sg_buffer_desc*)luaL_checkudata(L, 2, "sokol.BufferDesc");
    sg_init_buffer(buf, desc);
    return 0;
}

static int l_sg_init_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    const sg_image_desc* desc = (const sg_image_desc*)luaL_checkudata(L, 2, "sokol.ImageDesc");
    sg_init_image(img, desc);
    return 0;
}

static int l_sg_init_sampler(lua_State *L) {
    sg_sampler* smg_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smg = *smg_ptr;
    const sg_sampler_desc* desc = (const sg_sampler_desc*)luaL_checkudata(L, 2, "sokol.SamplerDesc");
    sg_init_sampler(smg, desc);
    return 0;
}

static int l_sg_init_shader(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    const sg_shader_desc* desc = (const sg_shader_desc*)luaL_checkudata(L, 2, "sokol.ShaderDesc");
    sg_init_shader(shd, desc);
    return 0;
}

static int l_sg_init_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    const sg_pipeline_desc* desc = (const sg_pipeline_desc*)luaL_checkudata(L, 2, "sokol.PipelineDesc");
    sg_init_pipeline(pip, desc);
    return 0;
}

static int l_sg_init_view(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    const sg_view_desc* desc = (const sg_view_desc*)luaL_checkudata(L, 2, "sokol.ViewDesc");
    sg_init_view(view, desc);
    return 0;
}

static int l_sg_uninit_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_uninit_buffer(buf);
    return 0;
}

static int l_sg_uninit_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_uninit_image(img);
    return 0;
}

static int l_sg_uninit_sampler(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_uninit_sampler(smp);
    return 0;
}

static int l_sg_uninit_shader(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_uninit_shader(shd);
    return 0;
}

static int l_sg_uninit_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_uninit_pipeline(pip);
    return 0;
}

static int l_sg_uninit_view(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_uninit_view(view);
    return 0;
}

static int l_sg_fail_buffer(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_fail_buffer(buf);
    return 0;
}

static int l_sg_fail_image(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_fail_image(img);
    return 0;
}

static int l_sg_fail_sampler(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_fail_sampler(smp);
    return 0;
}

static int l_sg_fail_shader(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_fail_shader(shd);
    return 0;
}

static int l_sg_fail_pipeline(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_fail_pipeline(pip);
    return 0;
}

static int l_sg_fail_view(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_fail_view(view);
    return 0;
}

static int l_sg_enable_stats(lua_State *L) {
    sg_enable_stats();
    return 0;
}

static int l_sg_disable_stats(lua_State *L) {
    sg_disable_stats();
    return 0;
}

static int l_sg_stats_enabled(lua_State *L) {
    bool result = sg_stats_enabled();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sg_query_stats(lua_State *L) {
    sg_stats result = sg_query_stats();
    sg_stats* ud = (sg_stats*)lua_newuserdatauv(L, sizeof(sg_stats), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Stats");
    return 1;
}

static int l_sg_d3d11_device(lua_State *L) {
    const void * result = sg_d3d11_device();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_d3d11_device_context(lua_State *L) {
    const void * result = sg_d3d11_device_context();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_d3d11_query_buffer_info(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_d3d11_buffer_info result = sg_d3d11_query_buffer_info(buf);
    sg_d3d11_buffer_info* ud = (sg_d3d11_buffer_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_buffer_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11BufferInfo");
    return 1;
}

static int l_sg_d3d11_query_image_info(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_d3d11_image_info result = sg_d3d11_query_image_info(img);
    sg_d3d11_image_info* ud = (sg_d3d11_image_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_image_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11ImageInfo");
    return 1;
}

static int l_sg_d3d11_query_sampler_info(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_d3d11_sampler_info result = sg_d3d11_query_sampler_info(smp);
    sg_d3d11_sampler_info* ud = (sg_d3d11_sampler_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_sampler_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11SamplerInfo");
    return 1;
}

static int l_sg_d3d11_query_shader_info(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_d3d11_shader_info result = sg_d3d11_query_shader_info(shd);
    sg_d3d11_shader_info* ud = (sg_d3d11_shader_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_shader_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11ShaderInfo");
    return 1;
}

static int l_sg_d3d11_query_pipeline_info(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_d3d11_pipeline_info result = sg_d3d11_query_pipeline_info(pip);
    sg_d3d11_pipeline_info* ud = (sg_d3d11_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_pipeline_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11PipelineInfo");
    return 1;
}

static int l_sg_d3d11_query_view_info(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_d3d11_view_info result = sg_d3d11_query_view_info(view);
    sg_d3d11_view_info* ud = (sg_d3d11_view_info*)lua_newuserdatauv(L, sizeof(sg_d3d11_view_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.D3d11ViewInfo");
    return 1;
}

static int l_sg_mtl_device(lua_State *L) {
    const void * result = sg_mtl_device();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_mtl_render_command_encoder(lua_State *L) {
    const void * result = sg_mtl_render_command_encoder();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_mtl_compute_command_encoder(lua_State *L) {
    const void * result = sg_mtl_compute_command_encoder();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_mtl_query_buffer_info(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_mtl_buffer_info result = sg_mtl_query_buffer_info(buf);
    sg_mtl_buffer_info* ud = (sg_mtl_buffer_info*)lua_newuserdatauv(L, sizeof(sg_mtl_buffer_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.MtlBufferInfo");
    return 1;
}

static int l_sg_mtl_query_image_info(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_mtl_image_info result = sg_mtl_query_image_info(img);
    sg_mtl_image_info* ud = (sg_mtl_image_info*)lua_newuserdatauv(L, sizeof(sg_mtl_image_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.MtlImageInfo");
    return 1;
}

static int l_sg_mtl_query_sampler_info(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_mtl_sampler_info result = sg_mtl_query_sampler_info(smp);
    sg_mtl_sampler_info* ud = (sg_mtl_sampler_info*)lua_newuserdatauv(L, sizeof(sg_mtl_sampler_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.MtlSamplerInfo");
    return 1;
}

static int l_sg_mtl_query_shader_info(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_mtl_shader_info result = sg_mtl_query_shader_info(shd);
    sg_mtl_shader_info* ud = (sg_mtl_shader_info*)lua_newuserdatauv(L, sizeof(sg_mtl_shader_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.MtlShaderInfo");
    return 1;
}

static int l_sg_mtl_query_pipeline_info(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_mtl_pipeline_info result = sg_mtl_query_pipeline_info(pip);
    sg_mtl_pipeline_info* ud = (sg_mtl_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_mtl_pipeline_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.MtlPipelineInfo");
    return 1;
}

static int l_sg_wgpu_device(lua_State *L) {
    const void * result = sg_wgpu_device();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_wgpu_queue(lua_State *L) {
    const void * result = sg_wgpu_queue();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_wgpu_command_encoder(lua_State *L) {
    const void * result = sg_wgpu_command_encoder();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_wgpu_render_pass_encoder(lua_State *L) {
    const void * result = sg_wgpu_render_pass_encoder();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_wgpu_compute_pass_encoder(lua_State *L) {
    const void * result = sg_wgpu_compute_pass_encoder();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sg_wgpu_query_buffer_info(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_wgpu_buffer_info result = sg_wgpu_query_buffer_info(buf);
    sg_wgpu_buffer_info* ud = (sg_wgpu_buffer_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_buffer_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuBufferInfo");
    return 1;
}

static int l_sg_wgpu_query_image_info(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_wgpu_image_info result = sg_wgpu_query_image_info(img);
    sg_wgpu_image_info* ud = (sg_wgpu_image_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_image_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuImageInfo");
    return 1;
}

static int l_sg_wgpu_query_sampler_info(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_wgpu_sampler_info result = sg_wgpu_query_sampler_info(smp);
    sg_wgpu_sampler_info* ud = (sg_wgpu_sampler_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_sampler_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuSamplerInfo");
    return 1;
}

static int l_sg_wgpu_query_shader_info(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_wgpu_shader_info result = sg_wgpu_query_shader_info(shd);
    sg_wgpu_shader_info* ud = (sg_wgpu_shader_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_shader_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuShaderInfo");
    return 1;
}

static int l_sg_wgpu_query_pipeline_info(lua_State *L) {
    sg_pipeline* pip_ptr = (sg_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sg_pipeline pip = *pip_ptr;
    sg_wgpu_pipeline_info result = sg_wgpu_query_pipeline_info(pip);
    sg_wgpu_pipeline_info* ud = (sg_wgpu_pipeline_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_pipeline_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuPipelineInfo");
    return 1;
}

static int l_sg_wgpu_query_view_info(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_wgpu_view_info result = sg_wgpu_query_view_info(view);
    sg_wgpu_view_info* ud = (sg_wgpu_view_info*)lua_newuserdatauv(L, sizeof(sg_wgpu_view_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.WgpuViewInfo");
    return 1;
}

static int l_sg_gl_query_buffer_info(lua_State *L) {
    sg_buffer* buf_ptr = (sg_buffer*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer buf = *buf_ptr;
    sg_gl_buffer_info result = sg_gl_query_buffer_info(buf);
    sg_gl_buffer_info* ud = (sg_gl_buffer_info*)lua_newuserdatauv(L, sizeof(sg_gl_buffer_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.GlBufferInfo");
    return 1;
}

static int l_sg_gl_query_image_info(lua_State *L) {
    sg_image* img_ptr = (sg_image*)luaL_checkudata(L, 1, "sokol.Image");
    sg_image img = *img_ptr;
    sg_gl_image_info result = sg_gl_query_image_info(img);
    sg_gl_image_info* ud = (sg_gl_image_info*)lua_newuserdatauv(L, sizeof(sg_gl_image_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.GlImageInfo");
    return 1;
}

static int l_sg_gl_query_sampler_info(lua_State *L) {
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 1, "sokol.Sampler");
    sg_sampler smp = *smp_ptr;
    sg_gl_sampler_info result = sg_gl_query_sampler_info(smp);
    sg_gl_sampler_info* ud = (sg_gl_sampler_info*)lua_newuserdatauv(L, sizeof(sg_gl_sampler_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.GlSamplerInfo");
    return 1;
}

static int l_sg_gl_query_shader_info(lua_State *L) {
    sg_shader* shd_ptr = (sg_shader*)luaL_checkudata(L, 1, "sokol.Shader");
    sg_shader shd = *shd_ptr;
    sg_gl_shader_info result = sg_gl_query_shader_info(shd);
    sg_gl_shader_info* ud = (sg_gl_shader_info*)lua_newuserdatauv(L, sizeof(sg_gl_shader_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.GlShaderInfo");
    return 1;
}

static int l_sg_gl_query_view_info(lua_State *L) {
    sg_view* view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.View");
    sg_view view = *view_ptr;
    sg_gl_view_info result = sg_gl_query_view_info(view);
    sg_gl_view_info* ud = (sg_gl_view_info*)lua_newuserdatauv(L, sizeof(sg_gl_view_info), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.GlViewInfo");
    return 1;
}

static void register_sg_backend(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_BACKEND_GLCORE);
    lua_setfield(L, -2, "GLCORE");
    lua_pushinteger(L, SG_BACKEND_GLES3);
    lua_setfield(L, -2, "GLES3");
    lua_pushinteger(L, SG_BACKEND_D3D11);
    lua_setfield(L, -2, "D3D11");
    lua_pushinteger(L, SG_BACKEND_METAL_IOS);
    lua_setfield(L, -2, "METAL_IOS");
    lua_pushinteger(L, SG_BACKEND_METAL_MACOS);
    lua_setfield(L, -2, "METAL_MACOS");
    lua_pushinteger(L, SG_BACKEND_METAL_SIMULATOR);
    lua_setfield(L, -2, "METAL_SIMULATOR");
    lua_pushinteger(L, SG_BACKEND_WGPU);
    lua_setfield(L, -2, "WGPU");
    lua_pushinteger(L, SG_BACKEND_VULKAN);
    lua_setfield(L, -2, "VULKAN");
    lua_pushinteger(L, SG_BACKEND_DUMMY);
    lua_setfield(L, -2, "DUMMY");
    lua_setfield(L, -2, "Backend");
}

static void register_sg_pixel_format(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_PIXELFORMAT_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_PIXELFORMAT_NONE);
    lua_setfield(L, -2, "NONE");
    lua_pushinteger(L, SG_PIXELFORMAT_R8);
    lua_setfield(L, -2, "R8");
    lua_pushinteger(L, SG_PIXELFORMAT_R8SN);
    lua_setfield(L, -2, "R8SN");
    lua_pushinteger(L, SG_PIXELFORMAT_R8UI);
    lua_setfield(L, -2, "R8UI");
    lua_pushinteger(L, SG_PIXELFORMAT_R8SI);
    lua_setfield(L, -2, "R8SI");
    lua_pushinteger(L, SG_PIXELFORMAT_R16);
    lua_setfield(L, -2, "R16");
    lua_pushinteger(L, SG_PIXELFORMAT_R16SN);
    lua_setfield(L, -2, "R16SN");
    lua_pushinteger(L, SG_PIXELFORMAT_R16UI);
    lua_setfield(L, -2, "R16UI");
    lua_pushinteger(L, SG_PIXELFORMAT_R16SI);
    lua_setfield(L, -2, "R16SI");
    lua_pushinteger(L, SG_PIXELFORMAT_R16F);
    lua_setfield(L, -2, "R16F");
    lua_pushinteger(L, SG_PIXELFORMAT_RG8);
    lua_setfield(L, -2, "RG8");
    lua_pushinteger(L, SG_PIXELFORMAT_RG8SN);
    lua_setfield(L, -2, "RG8SN");
    lua_pushinteger(L, SG_PIXELFORMAT_RG8UI);
    lua_setfield(L, -2, "RG8UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RG8SI);
    lua_setfield(L, -2, "RG8SI");
    lua_pushinteger(L, SG_PIXELFORMAT_R32UI);
    lua_setfield(L, -2, "R32UI");
    lua_pushinteger(L, SG_PIXELFORMAT_R32SI);
    lua_setfield(L, -2, "R32SI");
    lua_pushinteger(L, SG_PIXELFORMAT_R32F);
    lua_setfield(L, -2, "R32F");
    lua_pushinteger(L, SG_PIXELFORMAT_RG16);
    lua_setfield(L, -2, "RG16");
    lua_pushinteger(L, SG_PIXELFORMAT_RG16SN);
    lua_setfield(L, -2, "RG16SN");
    lua_pushinteger(L, SG_PIXELFORMAT_RG16UI);
    lua_setfield(L, -2, "RG16UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RG16SI);
    lua_setfield(L, -2, "RG16SI");
    lua_pushinteger(L, SG_PIXELFORMAT_RG16F);
    lua_setfield(L, -2, "RG16F");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA8);
    lua_setfield(L, -2, "RGBA8");
    lua_pushinteger(L, SG_PIXELFORMAT_SRGB8A8);
    lua_setfield(L, -2, "SRGB8A8");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA8SN);
    lua_setfield(L, -2, "RGBA8SN");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA8UI);
    lua_setfield(L, -2, "RGBA8UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA8SI);
    lua_setfield(L, -2, "RGBA8SI");
    lua_pushinteger(L, SG_PIXELFORMAT_BGRA8);
    lua_setfield(L, -2, "BGRA8");
    lua_pushinteger(L, SG_PIXELFORMAT_RGB10A2);
    lua_setfield(L, -2, "RGB10A2");
    lua_pushinteger(L, SG_PIXELFORMAT_RG11B10F);
    lua_setfield(L, -2, "RG11B10F");
    lua_pushinteger(L, SG_PIXELFORMAT_RGB9E5);
    lua_setfield(L, -2, "RGB9E5");
    lua_pushinteger(L, SG_PIXELFORMAT_RG32UI);
    lua_setfield(L, -2, "RG32UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RG32SI);
    lua_setfield(L, -2, "RG32SI");
    lua_pushinteger(L, SG_PIXELFORMAT_RG32F);
    lua_setfield(L, -2, "RG32F");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA16);
    lua_setfield(L, -2, "RGBA16");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA16SN);
    lua_setfield(L, -2, "RGBA16SN");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA16UI);
    lua_setfield(L, -2, "RGBA16UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA16SI);
    lua_setfield(L, -2, "RGBA16SI");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA16F);
    lua_setfield(L, -2, "RGBA16F");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA32UI);
    lua_setfield(L, -2, "RGBA32UI");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA32SI);
    lua_setfield(L, -2, "RGBA32SI");
    lua_pushinteger(L, SG_PIXELFORMAT_RGBA32F);
    lua_setfield(L, -2, "RGBA32F");
    lua_pushinteger(L, SG_PIXELFORMAT_DEPTH);
    lua_setfield(L, -2, "DEPTH");
    lua_pushinteger(L, SG_PIXELFORMAT_DEPTH_STENCIL);
    lua_setfield(L, -2, "DEPTH_STENCIL");
    lua_pushinteger(L, SG_PIXELFORMAT_BC1_RGBA);
    lua_setfield(L, -2, "BC1_RGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_BC2_RGBA);
    lua_setfield(L, -2, "BC2_RGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_BC3_RGBA);
    lua_setfield(L, -2, "BC3_RGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_BC3_SRGBA);
    lua_setfield(L, -2, "BC3_SRGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_BC4_R);
    lua_setfield(L, -2, "BC4_R");
    lua_pushinteger(L, SG_PIXELFORMAT_BC4_RSN);
    lua_setfield(L, -2, "BC4_RSN");
    lua_pushinteger(L, SG_PIXELFORMAT_BC5_RG);
    lua_setfield(L, -2, "BC5_RG");
    lua_pushinteger(L, SG_PIXELFORMAT_BC5_RGSN);
    lua_setfield(L, -2, "BC5_RGSN");
    lua_pushinteger(L, SG_PIXELFORMAT_BC6H_RGBF);
    lua_setfield(L, -2, "BC6H_RGBF");
    lua_pushinteger(L, SG_PIXELFORMAT_BC6H_RGBUF);
    lua_setfield(L, -2, "BC6H_RGBUF");
    lua_pushinteger(L, SG_PIXELFORMAT_BC7_RGBA);
    lua_setfield(L, -2, "BC7_RGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_BC7_SRGBA);
    lua_setfield(L, -2, "BC7_SRGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_ETC2_RGB8);
    lua_setfield(L, -2, "ETC2_RGB8");
    lua_pushinteger(L, SG_PIXELFORMAT_ETC2_SRGB8);
    lua_setfield(L, -2, "ETC2_SRGB8");
    lua_pushinteger(L, SG_PIXELFORMAT_ETC2_RGB8A1);
    lua_setfield(L, -2, "ETC2_RGB8A1");
    lua_pushinteger(L, SG_PIXELFORMAT_ETC2_RGBA8);
    lua_setfield(L, -2, "ETC2_RGBA8");
    lua_pushinteger(L, SG_PIXELFORMAT_ETC2_SRGB8A8);
    lua_setfield(L, -2, "ETC2_SRGB8A8");
    lua_pushinteger(L, SG_PIXELFORMAT_EAC_R11);
    lua_setfield(L, -2, "EAC_R11");
    lua_pushinteger(L, SG_PIXELFORMAT_EAC_R11SN);
    lua_setfield(L, -2, "EAC_R11SN");
    lua_pushinteger(L, SG_PIXELFORMAT_EAC_RG11);
    lua_setfield(L, -2, "EAC_RG11");
    lua_pushinteger(L, SG_PIXELFORMAT_EAC_RG11SN);
    lua_setfield(L, -2, "EAC_RG11SN");
    lua_pushinteger(L, SG_PIXELFORMAT_ASTC_4x4_RGBA);
    lua_setfield(L, -2, "ASTC_4x4_RGBA");
    lua_pushinteger(L, SG_PIXELFORMAT_ASTC_4x4_SRGBA);
    lua_setfield(L, -2, "ASTC_4x4_SRGBA");
    lua_pushinteger(L, _SG_PIXELFORMAT_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "PixelFormat");
}

static void register_sg_resource_state(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_RESOURCESTATE_INITIAL);
    lua_setfield(L, -2, "INITIAL");
    lua_pushinteger(L, SG_RESOURCESTATE_ALLOC);
    lua_setfield(L, -2, "ALLOC");
    lua_pushinteger(L, SG_RESOURCESTATE_VALID);
    lua_setfield(L, -2, "VALID");
    lua_pushinteger(L, SG_RESOURCESTATE_FAILED);
    lua_setfield(L, -2, "FAILED");
    lua_pushinteger(L, SG_RESOURCESTATE_INVALID);
    lua_setfield(L, -2, "INVALID");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ResourceState");
}

static void register_sg_index_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_INDEXTYPE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_INDEXTYPE_NONE);
    lua_setfield(L, -2, "NONE");
    lua_pushinteger(L, SG_INDEXTYPE_UINT16);
    lua_setfield(L, -2, "UINT16");
    lua_pushinteger(L, SG_INDEXTYPE_UINT32);
    lua_setfield(L, -2, "UINT32");
    lua_pushinteger(L, _SG_INDEXTYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "IndexType");
}

static void register_sg_image_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_IMAGETYPE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_IMAGETYPE_2D);
    lua_setfield(L, -2, "2D");
    lua_pushinteger(L, SG_IMAGETYPE_CUBE);
    lua_setfield(L, -2, "CUBE");
    lua_pushinteger(L, SG_IMAGETYPE_3D);
    lua_setfield(L, -2, "3D");
    lua_pushinteger(L, SG_IMAGETYPE_ARRAY);
    lua_setfield(L, -2, "ARRAY");
    lua_pushinteger(L, _SG_IMAGETYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ImageType");
}

static void register_sg_image_sample_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_IMAGESAMPLETYPE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_IMAGESAMPLETYPE_FLOAT);
    lua_setfield(L, -2, "FLOAT");
    lua_pushinteger(L, SG_IMAGESAMPLETYPE_DEPTH);
    lua_setfield(L, -2, "DEPTH");
    lua_pushinteger(L, SG_IMAGESAMPLETYPE_SINT);
    lua_setfield(L, -2, "SINT");
    lua_pushinteger(L, SG_IMAGESAMPLETYPE_UINT);
    lua_setfield(L, -2, "UINT");
    lua_pushinteger(L, SG_IMAGESAMPLETYPE_UNFILTERABLE_FLOAT);
    lua_setfield(L, -2, "UNFILTERABLE_FLOAT");
    lua_pushinteger(L, _SG_IMAGESAMPLETYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ImageSampleType");
}

static void register_sg_sampler_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_SAMPLERTYPE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_SAMPLERTYPE_FILTERING);
    lua_setfield(L, -2, "FILTERING");
    lua_pushinteger(L, SG_SAMPLERTYPE_NONFILTERING);
    lua_setfield(L, -2, "NONFILTERING");
    lua_pushinteger(L, SG_SAMPLERTYPE_COMPARISON);
    lua_setfield(L, -2, "COMPARISON");
    lua_pushinteger(L, _SG_SAMPLERTYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, _SG_SAMPLERTYPE_FORCE_U32);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "SamplerType");
}

static void register_sg_primitive_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_PRIMITIVETYPE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_PRIMITIVETYPE_POINTS);
    lua_setfield(L, -2, "POINTS");
    lua_pushinteger(L, SG_PRIMITIVETYPE_LINES);
    lua_setfield(L, -2, "LINES");
    lua_pushinteger(L, SG_PRIMITIVETYPE_LINE_STRIP);
    lua_setfield(L, -2, "LINE_STRIP");
    lua_pushinteger(L, SG_PRIMITIVETYPE_TRIANGLES);
    lua_setfield(L, -2, "TRIANGLES");
    lua_pushinteger(L, SG_PRIMITIVETYPE_TRIANGLE_STRIP);
    lua_setfield(L, -2, "TRIANGLE_STRIP");
    lua_pushinteger(L, _SG_PRIMITIVETYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "PrimitiveType");
}

static void register_sg_filter(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_FILTER_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_FILTER_NEAREST);
    lua_setfield(L, -2, "NEAREST");
    lua_pushinteger(L, SG_FILTER_LINEAR);
    lua_setfield(L, -2, "LINEAR");
    lua_pushinteger(L, _SG_FILTER_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "Filter");
}

static void register_sg_wrap(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_WRAP_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_WRAP_REPEAT);
    lua_setfield(L, -2, "REPEAT");
    lua_pushinteger(L, SG_WRAP_CLAMP_TO_EDGE);
    lua_setfield(L, -2, "CLAMP_TO_EDGE");
    lua_pushinteger(L, SG_WRAP_CLAMP_TO_BORDER);
    lua_setfield(L, -2, "CLAMP_TO_BORDER");
    lua_pushinteger(L, SG_WRAP_MIRRORED_REPEAT);
    lua_setfield(L, -2, "MIRRORED_REPEAT");
    lua_pushinteger(L, _SG_WRAP_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "Wrap");
}

static void register_sg_border_color(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_BORDERCOLOR_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_BORDERCOLOR_TRANSPARENT_BLACK);
    lua_setfield(L, -2, "TRANSPARENT_BLACK");
    lua_pushinteger(L, SG_BORDERCOLOR_OPAQUE_BLACK);
    lua_setfield(L, -2, "OPAQUE_BLACK");
    lua_pushinteger(L, SG_BORDERCOLOR_OPAQUE_WHITE);
    lua_setfield(L, -2, "OPAQUE_WHITE");
    lua_pushinteger(L, _SG_BORDERCOLOR_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "BorderColor");
}

static void register_sg_vertex_format(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_VERTEXFORMAT_INVALID);
    lua_setfield(L, -2, "INVALID");
    lua_pushinteger(L, SG_VERTEXFORMAT_FLOAT);
    lua_setfield(L, -2, "FLOAT");
    lua_pushinteger(L, SG_VERTEXFORMAT_FLOAT2);
    lua_setfield(L, -2, "FLOAT2");
    lua_pushinteger(L, SG_VERTEXFORMAT_FLOAT3);
    lua_setfield(L, -2, "FLOAT3");
    lua_pushinteger(L, SG_VERTEXFORMAT_FLOAT4);
    lua_setfield(L, -2, "FLOAT4");
    lua_pushinteger(L, SG_VERTEXFORMAT_INT);
    lua_setfield(L, -2, "INT");
    lua_pushinteger(L, SG_VERTEXFORMAT_INT2);
    lua_setfield(L, -2, "INT2");
    lua_pushinteger(L, SG_VERTEXFORMAT_INT3);
    lua_setfield(L, -2, "INT3");
    lua_pushinteger(L, SG_VERTEXFORMAT_INT4);
    lua_setfield(L, -2, "INT4");
    lua_pushinteger(L, SG_VERTEXFORMAT_UINT);
    lua_setfield(L, -2, "UINT");
    lua_pushinteger(L, SG_VERTEXFORMAT_UINT2);
    lua_setfield(L, -2, "UINT2");
    lua_pushinteger(L, SG_VERTEXFORMAT_UINT3);
    lua_setfield(L, -2, "UINT3");
    lua_pushinteger(L, SG_VERTEXFORMAT_UINT4);
    lua_setfield(L, -2, "UINT4");
    lua_pushinteger(L, SG_VERTEXFORMAT_BYTE4);
    lua_setfield(L, -2, "BYTE4");
    lua_pushinteger(L, SG_VERTEXFORMAT_BYTE4N);
    lua_setfield(L, -2, "BYTE4N");
    lua_pushinteger(L, SG_VERTEXFORMAT_UBYTE4);
    lua_setfield(L, -2, "UBYTE4");
    lua_pushinteger(L, SG_VERTEXFORMAT_UBYTE4N);
    lua_setfield(L, -2, "UBYTE4N");
    lua_pushinteger(L, SG_VERTEXFORMAT_SHORT2);
    lua_setfield(L, -2, "SHORT2");
    lua_pushinteger(L, SG_VERTEXFORMAT_SHORT2N);
    lua_setfield(L, -2, "SHORT2N");
    lua_pushinteger(L, SG_VERTEXFORMAT_USHORT2);
    lua_setfield(L, -2, "USHORT2");
    lua_pushinteger(L, SG_VERTEXFORMAT_USHORT2N);
    lua_setfield(L, -2, "USHORT2N");
    lua_pushinteger(L, SG_VERTEXFORMAT_SHORT4);
    lua_setfield(L, -2, "SHORT4");
    lua_pushinteger(L, SG_VERTEXFORMAT_SHORT4N);
    lua_setfield(L, -2, "SHORT4N");
    lua_pushinteger(L, SG_VERTEXFORMAT_USHORT4);
    lua_setfield(L, -2, "USHORT4");
    lua_pushinteger(L, SG_VERTEXFORMAT_USHORT4N);
    lua_setfield(L, -2, "USHORT4N");
    lua_pushinteger(L, SG_VERTEXFORMAT_UINT10_N2);
    lua_setfield(L, -2, "UINT10_N2");
    lua_pushinteger(L, SG_VERTEXFORMAT_HALF2);
    lua_setfield(L, -2, "HALF2");
    lua_pushinteger(L, SG_VERTEXFORMAT_HALF4);
    lua_setfield(L, -2, "HALF4");
    lua_pushinteger(L, _SG_VERTEXFORMAT_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "VertexFormat");
}

static void register_sg_vertex_step(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_VERTEXSTEP_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_VERTEXSTEP_PER_VERTEX);
    lua_setfield(L, -2, "PER_VERTEX");
    lua_pushinteger(L, SG_VERTEXSTEP_PER_INSTANCE);
    lua_setfield(L, -2, "PER_INSTANCE");
    lua_pushinteger(L, _SG_VERTEXSTEP_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "VertexStep");
}

static void register_sg_uniform_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_UNIFORMTYPE_INVALID);
    lua_setfield(L, -2, "INVALID");
    lua_pushinteger(L, SG_UNIFORMTYPE_FLOAT);
    lua_setfield(L, -2, "FLOAT");
    lua_pushinteger(L, SG_UNIFORMTYPE_FLOAT2);
    lua_setfield(L, -2, "FLOAT2");
    lua_pushinteger(L, SG_UNIFORMTYPE_FLOAT3);
    lua_setfield(L, -2, "FLOAT3");
    lua_pushinteger(L, SG_UNIFORMTYPE_FLOAT4);
    lua_setfield(L, -2, "FLOAT4");
    lua_pushinteger(L, SG_UNIFORMTYPE_INT);
    lua_setfield(L, -2, "INT");
    lua_pushinteger(L, SG_UNIFORMTYPE_INT2);
    lua_setfield(L, -2, "INT2");
    lua_pushinteger(L, SG_UNIFORMTYPE_INT3);
    lua_setfield(L, -2, "INT3");
    lua_pushinteger(L, SG_UNIFORMTYPE_INT4);
    lua_setfield(L, -2, "INT4");
    lua_pushinteger(L, SG_UNIFORMTYPE_MAT4);
    lua_setfield(L, -2, "MAT4");
    lua_pushinteger(L, _SG_UNIFORMTYPE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "UniformType");
}

static void register_sg_uniform_layout(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_UNIFORMLAYOUT_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_UNIFORMLAYOUT_NATIVE);
    lua_setfield(L, -2, "NATIVE");
    lua_pushinteger(L, SG_UNIFORMLAYOUT_STD140);
    lua_setfield(L, -2, "STD140");
    lua_pushinteger(L, _SG_UNIFORMLAYOUT_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "UniformLayout");
}

static void register_sg_cull_mode(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_CULLMODE_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_CULLMODE_NONE);
    lua_setfield(L, -2, "NONE");
    lua_pushinteger(L, SG_CULLMODE_FRONT);
    lua_setfield(L, -2, "FRONT");
    lua_pushinteger(L, SG_CULLMODE_BACK);
    lua_setfield(L, -2, "BACK");
    lua_pushinteger(L, _SG_CULLMODE_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "CullMode");
}

static void register_sg_face_winding(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_FACEWINDING_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_FACEWINDING_CCW);
    lua_setfield(L, -2, "CCW");
    lua_pushinteger(L, SG_FACEWINDING_CW);
    lua_setfield(L, -2, "CW");
    lua_pushinteger(L, _SG_FACEWINDING_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "FaceWinding");
}

static void register_sg_compare_func(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_COMPAREFUNC_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_COMPAREFUNC_NEVER);
    lua_setfield(L, -2, "NEVER");
    lua_pushinteger(L, SG_COMPAREFUNC_LESS);
    lua_setfield(L, -2, "LESS");
    lua_pushinteger(L, SG_COMPAREFUNC_EQUAL);
    lua_setfield(L, -2, "EQUAL");
    lua_pushinteger(L, SG_COMPAREFUNC_LESS_EQUAL);
    lua_setfield(L, -2, "LESS_EQUAL");
    lua_pushinteger(L, SG_COMPAREFUNC_GREATER);
    lua_setfield(L, -2, "GREATER");
    lua_pushinteger(L, SG_COMPAREFUNC_NOT_EQUAL);
    lua_setfield(L, -2, "NOT_EQUAL");
    lua_pushinteger(L, SG_COMPAREFUNC_GREATER_EQUAL);
    lua_setfield(L, -2, "GREATER_EQUAL");
    lua_pushinteger(L, SG_COMPAREFUNC_ALWAYS);
    lua_setfield(L, -2, "ALWAYS");
    lua_pushinteger(L, _SG_COMPAREFUNC_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "CompareFunc");
}

static void register_sg_stencil_op(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_STENCILOP_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_STENCILOP_KEEP);
    lua_setfield(L, -2, "KEEP");
    lua_pushinteger(L, SG_STENCILOP_ZERO);
    lua_setfield(L, -2, "ZERO");
    lua_pushinteger(L, SG_STENCILOP_REPLACE);
    lua_setfield(L, -2, "REPLACE");
    lua_pushinteger(L, SG_STENCILOP_INCR_CLAMP);
    lua_setfield(L, -2, "INCR_CLAMP");
    lua_pushinteger(L, SG_STENCILOP_DECR_CLAMP);
    lua_setfield(L, -2, "DECR_CLAMP");
    lua_pushinteger(L, SG_STENCILOP_INVERT);
    lua_setfield(L, -2, "INVERT");
    lua_pushinteger(L, SG_STENCILOP_INCR_WRAP);
    lua_setfield(L, -2, "INCR_WRAP");
    lua_pushinteger(L, SG_STENCILOP_DECR_WRAP);
    lua_setfield(L, -2, "DECR_WRAP");
    lua_pushinteger(L, _SG_STENCILOP_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "StencilOp");
}

static void register_sg_blend_factor(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_BLENDFACTOR_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_BLENDFACTOR_ZERO);
    lua_setfield(L, -2, "ZERO");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE);
    lua_setfield(L, -2, "ONE");
    lua_pushinteger(L, SG_BLENDFACTOR_SRC_COLOR);
    lua_setfield(L, -2, "SRC_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_SRC_COLOR);
    lua_setfield(L, -2, "ONE_MINUS_SRC_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_SRC_ALPHA);
    lua_setfield(L, -2, "SRC_ALPHA");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_SRC_ALPHA);
    lua_setfield(L, -2, "ONE_MINUS_SRC_ALPHA");
    lua_pushinteger(L, SG_BLENDFACTOR_DST_COLOR);
    lua_setfield(L, -2, "DST_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_DST_COLOR);
    lua_setfield(L, -2, "ONE_MINUS_DST_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_DST_ALPHA);
    lua_setfield(L, -2, "DST_ALPHA");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_DST_ALPHA);
    lua_setfield(L, -2, "ONE_MINUS_DST_ALPHA");
    lua_pushinteger(L, SG_BLENDFACTOR_SRC_ALPHA_SATURATED);
    lua_setfield(L, -2, "SRC_ALPHA_SATURATED");
    lua_pushinteger(L, SG_BLENDFACTOR_BLEND_COLOR);
    lua_setfield(L, -2, "BLEND_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_BLEND_COLOR);
    lua_setfield(L, -2, "ONE_MINUS_BLEND_COLOR");
    lua_pushinteger(L, SG_BLENDFACTOR_BLEND_ALPHA);
    lua_setfield(L, -2, "BLEND_ALPHA");
    lua_pushinteger(L, SG_BLENDFACTOR_ONE_MINUS_BLEND_ALPHA);
    lua_setfield(L, -2, "ONE_MINUS_BLEND_ALPHA");
    lua_pushinteger(L, _SG_BLENDFACTOR_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "BlendFactor");
}

static void register_sg_blend_op(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_BLENDOP_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_BLENDOP_ADD);
    lua_setfield(L, -2, "ADD");
    lua_pushinteger(L, SG_BLENDOP_SUBTRACT);
    lua_setfield(L, -2, "SUBTRACT");
    lua_pushinteger(L, SG_BLENDOP_REVERSE_SUBTRACT);
    lua_setfield(L, -2, "REVERSE_SUBTRACT");
    lua_pushinteger(L, SG_BLENDOP_MIN);
    lua_setfield(L, -2, "MIN");
    lua_pushinteger(L, SG_BLENDOP_MAX);
    lua_setfield(L, -2, "MAX");
    lua_pushinteger(L, _SG_BLENDOP_NUM);
    lua_setfield(L, -2, "NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "BlendOp");
}

static void register_sg_color_mask(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, 16);
    lua_setfield(L, -2, "NONE");
    lua_pushinteger(L, 1);
    lua_setfield(L, -2, "R");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "G");
    lua_pushinteger(L, 3);
    lua_setfield(L, -2, "RG");
    lua_pushinteger(L, 4);
    lua_setfield(L, -2, "B");
    lua_pushinteger(L, 5);
    lua_setfield(L, -2, "RB");
    lua_pushinteger(L, 6);
    lua_setfield(L, -2, "GB");
    lua_pushinteger(L, 7);
    lua_setfield(L, -2, "RGB");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "A");
    lua_pushinteger(L, 9);
    lua_setfield(L, -2, "RA");
    lua_pushinteger(L, 10);
    lua_setfield(L, -2, "GA");
    lua_pushinteger(L, 11);
    lua_setfield(L, -2, "RGA");
    lua_pushinteger(L, 12);
    lua_setfield(L, -2, "BA");
    lua_pushinteger(L, 13);
    lua_setfield(L, -2, "RBA");
    lua_pushinteger(L, 14);
    lua_setfield(L, -2, "GBA");
    lua_pushinteger(L, 15);
    lua_setfield(L, -2, "RGBA");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ColorMask");
}

static void register_sg_load_action(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_LOADACTION_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_LOADACTION_CLEAR);
    lua_setfield(L, -2, "CLEAR");
    lua_pushinteger(L, SG_LOADACTION_LOAD);
    lua_setfield(L, -2, "LOAD");
    lua_pushinteger(L, SG_LOADACTION_DONTCARE);
    lua_setfield(L, -2, "DONTCARE");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "LoadAction");
}

static void register_sg_store_action(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SG_STOREACTION_DEFAULT);
    lua_setfield(L, -2, "DEFAULT");
    lua_pushinteger(L, SG_STOREACTION_STORE);
    lua_setfield(L, -2, "STORE");
    lua_pushinteger(L, SG_STOREACTION_DONTCARE);
    lua_setfield(L, -2, "DONTCARE");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "StoreAction");
}

static void register_sg_view_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_VIEWTYPE_INVALID);
    lua_setfield(L, -2, "INVALID");
    lua_pushinteger(L, SG_VIEWTYPE_STORAGEBUFFER);
    lua_setfield(L, -2, "STORAGEBUFFER");
    lua_pushinteger(L, SG_VIEWTYPE_STORAGEIMAGE);
    lua_setfield(L, -2, "STORAGEIMAGE");
    lua_pushinteger(L, SG_VIEWTYPE_TEXTURE);
    lua_setfield(L, -2, "TEXTURE");
    lua_pushinteger(L, SG_VIEWTYPE_COLORATTACHMENT);
    lua_setfield(L, -2, "COLORATTACHMENT");
    lua_pushinteger(L, SG_VIEWTYPE_RESOLVEATTACHMENT);
    lua_setfield(L, -2, "RESOLVEATTACHMENT");
    lua_pushinteger(L, SG_VIEWTYPE_DEPTHSTENCILATTACHMENT);
    lua_setfield(L, -2, "DEPTHSTENCILATTACHMENT");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ViewType");
}

static void register_sg_shader_stage(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_SHADERSTAGE_NONE);
    lua_setfield(L, -2, "NONE");
    lua_pushinteger(L, SG_SHADERSTAGE_VERTEX);
    lua_setfield(L, -2, "VERTEX");
    lua_pushinteger(L, SG_SHADERSTAGE_FRAGMENT);
    lua_setfield(L, -2, "FRAGMENT");
    lua_pushinteger(L, SG_SHADERSTAGE_COMPUTE);
    lua_setfield(L, -2, "COMPUTE");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ShaderStage");
}

static void register_sg_shader_attr_base_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_SHADERATTRBASETYPE_UNDEFINED);
    lua_setfield(L, -2, "UNDEFINED");
    lua_pushinteger(L, SG_SHADERATTRBASETYPE_FLOAT);
    lua_setfield(L, -2, "FLOAT");
    lua_pushinteger(L, SG_SHADERATTRBASETYPE_SINT);
    lua_setfield(L, -2, "SINT");
    lua_pushinteger(L, SG_SHADERATTRBASETYPE_UINT);
    lua_setfield(L, -2, "UINT");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "FORCE_U32");
    lua_setfield(L, -2, "ShaderAttrBaseType");
}

static void register_sg_log_item(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SG_LOGITEM_OK);
    lua_setfield(L, -2, "OK");
    lua_pushinteger(L, SG_LOGITEM_MALLOC_FAILED);
    lua_setfield(L, -2, "MALLOC_FAILED");
    lua_pushinteger(L, SG_LOGITEM_GL_TEXTURE_FORMAT_NOT_SUPPORTED);
    lua_setfield(L, -2, "GL_TEXTURE_FORMAT_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_GL_3D_TEXTURES_NOT_SUPPORTED);
    lua_setfield(L, -2, "GL_3D_TEXTURES_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_GL_ARRAY_TEXTURES_NOT_SUPPORTED);
    lua_setfield(L, -2, "GL_ARRAY_TEXTURES_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_GL_STORAGEBUFFER_GLSL_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "GL_STORAGEBUFFER_GLSL_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_GL_STORAGEIMAGE_GLSL_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "GL_STORAGEIMAGE_GLSL_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_GL_SHADER_COMPILATION_FAILED);
    lua_setfield(L, -2, "GL_SHADER_COMPILATION_FAILED");
    lua_pushinteger(L, SG_LOGITEM_GL_SHADER_LINKING_FAILED);
    lua_setfield(L, -2, "GL_SHADER_LINKING_FAILED");
    lua_pushinteger(L, SG_LOGITEM_GL_VERTEX_ATTRIBUTE_NOT_FOUND_IN_SHADER);
    lua_setfield(L, -2, "GL_VERTEX_ATTRIBUTE_NOT_FOUND_IN_SHADER");
    lua_pushinteger(L, SG_LOGITEM_GL_UNIFORMBLOCK_NAME_NOT_FOUND_IN_SHADER);
    lua_setfield(L, -2, "GL_UNIFORMBLOCK_NAME_NOT_FOUND_IN_SHADER");
    lua_pushinteger(L, SG_LOGITEM_GL_IMAGE_SAMPLER_NAME_NOT_FOUND_IN_SHADER);
    lua_setfield(L, -2, "GL_IMAGE_SAMPLER_NAME_NOT_FOUND_IN_SHADER");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_UNDEFINED);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_UNDEFINED");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_INCOMPLETE_ATTACHMENT);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_INCOMPLETE_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_INCOMPLETE_MISSING_ATTACHMENT);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_INCOMPLETE_MISSING_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_UNSUPPORTED);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_UNSUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_INCOMPLETE_MULTISAMPLE);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_INCOMPLETE_MULTISAMPLE");
    lua_pushinteger(L, SG_LOGITEM_GL_FRAMEBUFFER_STATUS_UNKNOWN);
    lua_setfield(L, -2, "GL_FRAMEBUFFER_STATUS_UNKNOWN");
    lua_pushinteger(L, SG_LOGITEM_D3D11_FEATURE_LEVEL_0_DETECTED);
    lua_setfield(L, -2, "D3D11_FEATURE_LEVEL_0_DETECTED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_BUFFER_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_BUFFER_SRV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_BUFFER_SRV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_BUFFER_UAV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_BUFFER_UAV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_DEPTH_TEXTURE_UNSUPPORTED_PIXEL_FORMAT);
    lua_setfield(L, -2, "D3D11_CREATE_DEPTH_TEXTURE_UNSUPPORTED_PIXEL_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_DEPTH_TEXTURE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_DEPTH_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_2D_TEXTURE_UNSUPPORTED_PIXEL_FORMAT);
    lua_setfield(L, -2, "D3D11_CREATE_2D_TEXTURE_UNSUPPORTED_PIXEL_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_2D_TEXTURE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_2D_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_2D_SRV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_2D_SRV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_3D_TEXTURE_UNSUPPORTED_PIXEL_FORMAT);
    lua_setfield(L, -2, "D3D11_CREATE_3D_TEXTURE_UNSUPPORTED_PIXEL_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_3D_TEXTURE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_3D_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_3D_SRV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_3D_SRV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_MSAA_TEXTURE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_MSAA_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_SAMPLER_STATE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_SAMPLER_STATE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_UNIFORMBLOCK_HLSL_REGISTER_B_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_UNIFORMBLOCK_HLSL_REGISTER_B_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_STORAGEBUFFER_HLSL_REGISTER_T_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_STORAGEBUFFER_HLSL_REGISTER_T_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_STORAGEBUFFER_HLSL_REGISTER_U_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_STORAGEBUFFER_HLSL_REGISTER_U_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_IMAGE_HLSL_REGISTER_T_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_IMAGE_HLSL_REGISTER_T_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_STORAGEIMAGE_HLSL_REGISTER_U_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_STORAGEIMAGE_HLSL_REGISTER_U_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_SAMPLER_HLSL_REGISTER_S_OUT_OF_RANGE);
    lua_setfield(L, -2, "D3D11_SAMPLER_HLSL_REGISTER_S_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_D3D11_LOAD_D3DCOMPILER_47_DLL_FAILED);
    lua_setfield(L, -2, "D3D11_LOAD_D3DCOMPILER_47_DLL_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_SHADER_COMPILATION_FAILED);
    lua_setfield(L, -2, "D3D11_SHADER_COMPILATION_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_SHADER_COMPILATION_OUTPUT);
    lua_setfield(L, -2, "D3D11_SHADER_COMPILATION_OUTPUT");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_CONSTANT_BUFFER_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_CONSTANT_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_INPUT_LAYOUT_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_INPUT_LAYOUT_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_RASTERIZER_STATE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_RASTERIZER_STATE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_DEPTH_STENCIL_STATE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_DEPTH_STENCIL_STATE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_BLEND_STATE_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_BLEND_STATE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_RTV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_RTV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_DSV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_DSV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_CREATE_UAV_FAILED);
    lua_setfield(L, -2, "D3D11_CREATE_UAV_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_MAP_FOR_UPDATE_BUFFER_FAILED);
    lua_setfield(L, -2, "D3D11_MAP_FOR_UPDATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_MAP_FOR_APPEND_BUFFER_FAILED);
    lua_setfield(L, -2, "D3D11_MAP_FOR_APPEND_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_D3D11_MAP_FOR_UPDATE_IMAGE_FAILED);
    lua_setfield(L, -2, "D3D11_MAP_FOR_UPDATE_IMAGE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_BUFFER_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_TEXTURE_FORMAT_NOT_SUPPORTED);
    lua_setfield(L, -2, "METAL_TEXTURE_FORMAT_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_TEXTURE_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_SAMPLER_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_SAMPLER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_SHADER_COMPILATION_FAILED);
    lua_setfield(L, -2, "METAL_SHADER_COMPILATION_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_SHADER_CREATION_FAILED);
    lua_setfield(L, -2, "METAL_SHADER_CREATION_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_SHADER_COMPILATION_OUTPUT);
    lua_setfield(L, -2, "METAL_SHADER_COMPILATION_OUTPUT");
    lua_pushinteger(L, SG_LOGITEM_METAL_SHADER_ENTRY_NOT_FOUND);
    lua_setfield(L, -2, "METAL_SHADER_ENTRY_NOT_FOUND");
    lua_pushinteger(L, SG_LOGITEM_METAL_UNIFORMBLOCK_MSL_BUFFER_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "METAL_UNIFORMBLOCK_MSL_BUFFER_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_METAL_STORAGEBUFFER_MSL_BUFFER_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "METAL_STORAGEBUFFER_MSL_BUFFER_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_METAL_STORAGEIMAGE_MSL_TEXTURE_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "METAL_STORAGEIMAGE_MSL_TEXTURE_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_METAL_IMAGE_MSL_TEXTURE_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "METAL_IMAGE_MSL_TEXTURE_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_METAL_SAMPLER_MSL_SAMPLER_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "METAL_SAMPLER_MSL_SAMPLER_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_CPS_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_CPS_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_CPS_OUTPUT);
    lua_setfield(L, -2, "METAL_CREATE_CPS_OUTPUT");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_RPS_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_RPS_FAILED");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_RPS_OUTPUT);
    lua_setfield(L, -2, "METAL_CREATE_RPS_OUTPUT");
    lua_pushinteger(L, SG_LOGITEM_METAL_CREATE_DSS_FAILED);
    lua_setfield(L, -2, "METAL_CREATE_DSS_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_BINDGROUPS_POOL_EXHAUSTED);
    lua_setfield(L, -2, "WGPU_BINDGROUPS_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_BINDGROUPSCACHE_SIZE_GREATER_ONE);
    lua_setfield(L, -2, "WGPU_BINDGROUPSCACHE_SIZE_GREATER_ONE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_BINDGROUPSCACHE_SIZE_POW2);
    lua_setfield(L, -2, "WGPU_BINDGROUPSCACHE_SIZE_POW2");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATEBINDGROUP_FAILED);
    lua_setfield(L, -2, "WGPU_CREATEBINDGROUP_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_BUFFER_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_TEXTURE_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_TEXTURE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_TEXTURE_VIEW_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_TEXTURE_VIEW_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_SAMPLER_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_SAMPLER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_SHADER_MODULE_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_SHADER_MODULE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_SHADER_CREATE_BINDGROUP_LAYOUT_FAILED);
    lua_setfield(L, -2, "WGPU_SHADER_CREATE_BINDGROUP_LAYOUT_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_UNIFORMBLOCK_WGSL_GROUP0_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "WGPU_UNIFORMBLOCK_WGSL_GROUP0_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_TEXTURE_WGSL_GROUP1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "WGPU_TEXTURE_WGSL_GROUP1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_STORAGEBUFFER_WGSL_GROUP1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "WGPU_STORAGEBUFFER_WGSL_GROUP1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_STORAGEIMAGE_WGSL_GROUP1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "WGPU_STORAGEIMAGE_WGSL_GROUP1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_SAMPLER_WGSL_GROUP1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "WGPU_SAMPLER_WGSL_GROUP1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_PIPELINE_LAYOUT_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_PIPELINE_LAYOUT_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_RENDER_PIPELINE_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_RENDER_PIPELINE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_WGPU_CREATE_COMPUTE_PIPELINE_FAILED);
    lua_setfield(L, -2, "WGPU_CREATE_COMPUTE_PIPELINE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_REQUIRED_EXTENSION_FUNCTION_MISSING);
    lua_setfield(L, -2, "VULKAN_REQUIRED_EXTENSION_FUNCTION_MISSING");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_ALLOC_DEVICE_MEMORY_NO_SUITABLE_MEMORY_TYPE);
    lua_setfield(L, -2, "VULKAN_ALLOC_DEVICE_MEMORY_NO_SUITABLE_MEMORY_TYPE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_ALLOCATE_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_ALLOCATE_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_ALLOC_BUFFER_DEVICE_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_ALLOC_BUFFER_DEVICE_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_ALLOC_IMAGE_DEVICE_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_ALLOC_IMAGE_DEVICE_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_DELETE_QUEUE_EXHAUSTED);
    lua_setfield(L, -2, "VULKAN_DELETE_QUEUE_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STAGING_CREATE_BUFFER_FAILED);
    lua_setfield(L, -2, "VULKAN_STAGING_CREATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STAGING_ALLOCATE_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_STAGING_ALLOCATE_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STAGING_BIND_BUFFER_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_STAGING_BIND_BUFFER_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STAGING_STREAM_BUFFER_OVERFLOW);
    lua_setfield(L, -2, "VULKAN_STAGING_STREAM_BUFFER_OVERFLOW");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_SHARED_BUFFER_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_SHARED_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_ALLOCATE_SHARED_BUFFER_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_ALLOCATE_SHARED_BUFFER_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_BIND_SHARED_BUFFER_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_BIND_SHARED_BUFFER_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_MAP_SHARED_BUFFER_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_MAP_SHARED_BUFFER_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_BUFFER_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_BUFFER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_BIND_BUFFER_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_BIND_BUFFER_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_IMAGE_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_IMAGE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_BIND_IMAGE_MEMORY_FAILED);
    lua_setfield(L, -2, "VULKAN_BIND_IMAGE_MEMORY_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_SHADER_MODULE_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_SHADER_MODULE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_UNIFORMBLOCK_SPIRV_SET0_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "VULKAN_UNIFORMBLOCK_SPIRV_SET0_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_TEXTURE_SPIRV_SET1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "VULKAN_TEXTURE_SPIRV_SET1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STORAGEBUFFER_SPIRV_SET1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "VULKAN_STORAGEBUFFER_SPIRV_SET1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_STORAGEIMAGE_SPIRV_SET1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "VULKAN_STORAGEIMAGE_SPIRV_SET1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_SAMPLER_SPIRV_SET1_BINDING_OUT_OF_RANGE);
    lua_setfield(L, -2, "VULKAN_SAMPLER_SPIRV_SET1_BINDING_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_DESCRIPTOR_SET_LAYOUT_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_DESCRIPTOR_SET_LAYOUT_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_PIPELINE_LAYOUT_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_PIPELINE_LAYOUT_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_GRAPHICS_PIPELINE_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_GRAPHICS_PIPELINE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_COMPUTE_PIPELINE_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_COMPUTE_PIPELINE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_IMAGE_VIEW_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_IMAGE_VIEW_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_VIEW_MAX_DESCRIPTOR_SIZE);
    lua_setfield(L, -2, "VULKAN_VIEW_MAX_DESCRIPTOR_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_CREATE_SAMPLER_FAILED);
    lua_setfield(L, -2, "VULKAN_CREATE_SAMPLER_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_SAMPLER_MAX_DESCRIPTOR_SIZE);
    lua_setfield(L, -2, "VULKAN_SAMPLER_MAX_DESCRIPTOR_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_WAIT_FOR_FENCE_FAILED);
    lua_setfield(L, -2, "VULKAN_WAIT_FOR_FENCE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_UNIFORM_BUFFER_OVERFLOW);
    lua_setfield(L, -2, "VULKAN_UNIFORM_BUFFER_OVERFLOW");
    lua_pushinteger(L, SG_LOGITEM_VULKAN_DESCRIPTOR_BUFFER_OVERFLOW);
    lua_setfield(L, -2, "VULKAN_DESCRIPTOR_BUFFER_OVERFLOW");
    lua_pushinteger(L, SG_LOGITEM_IDENTICAL_COMMIT_LISTENER);
    lua_setfield(L, -2, "IDENTICAL_COMMIT_LISTENER");
    lua_pushinteger(L, SG_LOGITEM_COMMIT_LISTENER_ARRAY_FULL);
    lua_setfield(L, -2, "COMMIT_LISTENER_ARRAY_FULL");
    lua_pushinteger(L, SG_LOGITEM_TRACE_HOOKS_NOT_ENABLED);
    lua_setfield(L, -2, "TRACE_HOOKS_NOT_ENABLED");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_BUFFER_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_BUFFER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_IMAGE_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_IMAGE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_SAMPLER_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_SAMPLER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_SHADER_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_SHADER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_PIPELINE_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_PIPELINE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_DEALLOC_VIEW_INVALID_STATE);
    lua_setfield(L, -2, "DEALLOC_VIEW_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_BUFFER_INVALID_STATE);
    lua_setfield(L, -2, "INIT_BUFFER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_IMAGE_INVALID_STATE);
    lua_setfield(L, -2, "INIT_IMAGE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_SAMPLER_INVALID_STATE);
    lua_setfield(L, -2, "INIT_SAMPLER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_SHADER_INVALID_STATE);
    lua_setfield(L, -2, "INIT_SHADER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_PIPELINE_INVALID_STATE);
    lua_setfield(L, -2, "INIT_PIPELINE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_INIT_VIEW_INVALID_STATE);
    lua_setfield(L, -2, "INIT_VIEW_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_BUFFER_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_BUFFER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_IMAGE_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_IMAGE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_SAMPLER_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_SAMPLER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_SHADER_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_SHADER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_PIPELINE_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_PIPELINE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_UNINIT_VIEW_INVALID_STATE);
    lua_setfield(L, -2, "UNINIT_VIEW_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_BUFFER_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_BUFFER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_IMAGE_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_IMAGE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_SAMPLER_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_SAMPLER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_SHADER_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_SHADER_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_PIPELINE_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_PIPELINE_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_FAIL_VIEW_INVALID_STATE);
    lua_setfield(L, -2, "FAIL_VIEW_INVALID_STATE");
    lua_pushinteger(L, SG_LOGITEM_BUFFER_POOL_EXHAUSTED);
    lua_setfield(L, -2, "BUFFER_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_IMAGE_POOL_EXHAUSTED);
    lua_setfield(L, -2, "IMAGE_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_SAMPLER_POOL_EXHAUSTED);
    lua_setfield(L, -2, "SAMPLER_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_SHADER_POOL_EXHAUSTED);
    lua_setfield(L, -2, "SHADER_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_PIPELINE_POOL_EXHAUSTED);
    lua_setfield(L, -2, "PIPELINE_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_VIEW_POOL_EXHAUSTED);
    lua_setfield(L, -2, "VIEW_POOL_EXHAUSTED");
    lua_pushinteger(L, SG_LOGITEM_BEGINPASS_TOO_MANY_COLOR_ATTACHMENTS);
    lua_setfield(L, -2, "BEGINPASS_TOO_MANY_COLOR_ATTACHMENTS");
    lua_pushinteger(L, SG_LOGITEM_BEGINPASS_TOO_MANY_RESOLVE_ATTACHMENTS);
    lua_setfield(L, -2, "BEGINPASS_TOO_MANY_RESOLVE_ATTACHMENTS");
    lua_pushinteger(L, SG_LOGITEM_BEGINPASS_ATTACHMENTS_ALIVE);
    lua_setfield(L, -2, "BEGINPASS_ATTACHMENTS_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_DRAW_WITHOUT_BINDINGS);
    lua_setfield(L, -2, "DRAW_WITHOUT_BINDINGS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_VERTEXSTAGE_TEXTURES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_VERTEXSTAGE_TEXTURES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_FRAGMENTSTAGE_TEXTURES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_FRAGMENTSTAGE_TEXTURES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_COMPUTESTAGE_TEXTURES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_COMPUTESTAGE_TEXTURES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_VERTEXSTAGE_STORAGEBUFFERS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_VERTEXSTAGE_STORAGEBUFFERS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_FRAGMENTSTAGE_STORAGEBUFFERS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_FRAGMENTSTAGE_STORAGEBUFFERS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_COMPUTESTAGE_STORAGEBUFFERS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_COMPUTESTAGE_STORAGEBUFFERS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_VERTEXSTAGE_STORAGEIMAGES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_VERTEXSTAGE_STORAGEIMAGES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_FRAGMENTSTAGE_STORAGEIMAGES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_FRAGMENTSTAGE_STORAGEIMAGES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_COMPUTESTAGE_STORAGEIMAGES);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_COMPUTESTAGE_STORAGEIMAGES");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_VERTEXSTAGE_TEXTURESAMPLERPAIRS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_VERTEXSTAGE_TEXTURESAMPLERPAIRS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_FRAGMENTSTAGE_TEXTURESAMPLERPAIRS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_FRAGMENTSTAGE_TEXTURESAMPLERPAIRS");
    lua_pushinteger(L, SG_LOGITEM_SHADERDESC_TOO_MANY_COMPUTESTAGE_TEXTURESAMPLERPAIRS);
    lua_setfield(L, -2, "SHADERDESC_TOO_MANY_COMPUTESTAGE_TEXTURESAMPLERPAIRS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_IMMUTABLE_DYNAMIC_STREAM);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_IMMUTABLE_DYNAMIC_STREAM");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_SEPARATE_BUFFER_TYPES);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_SEPARATE_BUFFER_TYPES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_EXPECT_NONZERO_SIZE);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_EXPECT_NONZERO_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_EXPECT_MATCHING_DATA_SIZE);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_EXPECT_MATCHING_DATA_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_EXPECT_ZERO_DATA_SIZE);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_EXPECT_ZERO_DATA_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_EXPECT_NO_DATA);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_EXPECT_NO_DATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_EXPECT_DATA);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_EXPECT_DATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_STORAGEBUFFER_SUPPORTED);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_STORAGEBUFFER_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BUFFERDESC_STORAGEBUFFER_SIZE_MULTIPLE_4);
    lua_setfield(L, -2, "VALIDATE_BUFFERDESC_STORAGEBUFFER_SIZE_MULTIPLE_4");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDATA_NODATA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDATA_NODATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDATA_DATA_SIZE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDATA_DATA_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_IMMUTABLE_DYNAMIC_STREAM);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_IMMUTABLE_DYNAMIC_STREAM");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_IMAGETYPE_2D_NUMSLICES);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_IMAGETYPE_2D_NUMSLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_IMAGETYPE_CUBE_NUMSLICES);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_IMAGETYPE_CUBE_NUMSLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_IMAGETYPE_ARRAY_NUMSLICES);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_IMAGETYPE_ARRAY_NUMSLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_IMAGETYPE_3D_NUMSLICES);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_IMAGETYPE_3D_NUMSLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_NUMSLICES);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_NUMSLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_WIDTH);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_WIDTH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_HEIGHT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_HEIGHT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_NONRT_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_NONRT_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_MSAA_BUT_NO_ATTACHMENT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_MSAA_BUT_NO_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_DEPTH_3D_IMAGE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_DEPTH_3D_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_EXPECT_IMMUTABLE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_EXPECT_IMMUTABLE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_EXPECT_NO_DATA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_EXPECT_NO_DATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_RESOLVE_EXPECT_NO_MSAA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_RESOLVE_EXPECT_NO_MSAA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_NO_MSAA_SUPPORT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_NO_MSAA_SUPPORT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_NUM_MIPMAPS);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_NUM_MIPMAPS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_3D_IMAGE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_3D_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_CUBE_IMAGE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_CUBE_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_ARRAY_IMAGE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_ATTACHMENT_MSAA_ARRAY_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_STORAGEIMAGE_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_STORAGEIMAGE_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_STORAGEIMAGE_EXPECT_NO_MSAA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_STORAGEIMAGE_EXPECT_NO_MSAA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_INJECTED_NO_DATA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_INJECTED_NO_DATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_DYNAMIC_NO_DATA);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_DYNAMIC_NO_DATA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_IMAGEDESC_COMPRESSED_IMMUTABLE);
    lua_setfield(L, -2, "VALIDATE_IMAGEDESC_COMPRESSED_IMMUTABLE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SAMPLERDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_SAMPLERDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SAMPLERDESC_ANISTROPIC_REQUIRES_LINEAR_FILTERING);
    lua_setfield(L, -2, "VALIDATE_SAMPLERDESC_ANISTROPIC_REQUIRES_LINEAR_FILTERING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VERTEX_SOURCE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VERTEX_SOURCE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_FRAGMENT_SOURCE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_FRAGMENT_SOURCE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_COMPUTE_SOURCE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_COMPUTE_SOURCE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VERTEX_SOURCE_OR_BYTECODE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VERTEX_SOURCE_OR_BYTECODE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_FRAGMENT_SOURCE_OR_BYTECODE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_FRAGMENT_SOURCE_OR_BYTECODE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_COMPUTE_SOURCE_OR_BYTECODE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_COMPUTE_SOURCE_OR_BYTECODE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_INVALID_SHADER_COMBO);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_INVALID_SHADER_COMBO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_NO_BYTECODE_SIZE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_NO_BYTECODE_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_METAL_THREADS_PER_THREADGROUP_INITIALIZED);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_METAL_THREADS_PER_THREADGROUP_INITIALIZED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_METAL_THREADS_PER_THREADGROUP_MULTIPLE_32);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_METAL_THREADS_PER_THREADGROUP_MULTIPLE_32");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_NO_CONT_MEMBERS);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_NO_CONT_MEMBERS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_SIZE_IS_ZERO);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_SIZE_IS_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_METAL_BUFFER_SLOT_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_METAL_BUFFER_SLOT_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_HLSL_REGISTER_B_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_HLSL_REGISTER_B_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_WGSL_GROUP0_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_WGSL_GROUP0_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_SPIRV_SET0_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_SPIRV_SET0_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_NO_MEMBERS);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_NO_MEMBERS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_UNIFORM_GLSL_NAME);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_UNIFORM_GLSL_NAME");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_SIZE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_SIZE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_ARRAY_COUNT);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_ARRAY_COUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_UNIFORMBLOCK_STD140_ARRAY_TYPE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_UNIFORMBLOCK_STD140_ARRAY_TYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_METAL_BUFFER_SLOT_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_METAL_BUFFER_SLOT_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_HLSL_REGISTER_T_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_HLSL_REGISTER_T_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_HLSL_REGISTER_U_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_HLSL_REGISTER_U_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_GLSL_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_GLSL_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_WGSL_GROUP1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_WGSL_GROUP1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_SPIRV_SET1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEBUFFER_SPIRV_SET1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_EXPECT_COMPUTE_STAGE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_EXPECT_COMPUTE_STAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_METAL_TEXTURE_SLOT_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_METAL_TEXTURE_SLOT_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_HLSL_REGISTER_U_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_HLSL_REGISTER_U_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_GLSL_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_GLSL_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_WGSL_GROUP1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_WGSL_GROUP1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_SPIRV_SET1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_STORAGEIMAGE_SPIRV_SET1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_TEXTURE_METAL_TEXTURE_SLOT_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_TEXTURE_METAL_TEXTURE_SLOT_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_TEXTURE_HLSL_REGISTER_T_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_TEXTURE_HLSL_REGISTER_T_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_TEXTURE_WGSL_GROUP1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_TEXTURE_WGSL_GROUP1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_VIEW_TEXTURE_SPIRV_SET1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_VIEW_TEXTURE_SPIRV_SET1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_SAMPLER_METAL_SAMPLER_SLOT_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_SAMPLER_METAL_SAMPLER_SLOT_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_SAMPLER_HLSL_REGISTER_S_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_SAMPLER_HLSL_REGISTER_S_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_SAMPLER_WGSL_GROUP1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_SAMPLER_WGSL_GROUP1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_SAMPLER_SPIRV_SET1_BINDING_COLLISION);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_SAMPLER_SPIRV_SET1_BINDING_COLLISION");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_VIEW_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_VIEW_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_SAMPLER_SLOT_OUT_OF_RANGE);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_SAMPLER_SLOT_OUT_OF_RANGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_TEXTURE_STAGE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_TEXTURE_STAGE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_EXPECT_TEXTURE_VIEW);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_EXPECT_TEXTURE_VIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_SAMPLER_STAGE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_SAMPLER_STAGE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_GLSL_NAME);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXTURE_SAMPLER_PAIR_GLSL_NAME");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_NONFILTERING_SAMPLER_REQUIRED);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_NONFILTERING_SAMPLER_REQUIRED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_COMPARISON_SAMPLER_REQUIRED);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_COMPARISON_SAMPLER_REQUIRED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_TEXVIEW_NOT_REFERENCED_BY_TEXTURE_SAMPLER_PAIRS);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_TEXVIEW_NOT_REFERENCED_BY_TEXTURE_SAMPLER_PAIRS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_SAMPLER_NOT_REFERENCED_BY_TEXTURE_SAMPLER_PAIRS);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_SAMPLER_NOT_REFERENCED_BY_TEXTURE_SAMPLER_PAIRS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_SHADERDESC_ATTR_STRING_TOO_LONG);
    lua_setfield(L, -2, "VALIDATE_SHADERDESC_ATTR_STRING_TOO_LONG");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_SHADER);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_SHADER");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_COMPUTE_SHADER_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_COMPUTE_SHADER_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_NO_COMPUTE_SHADER_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_NO_COMPUTE_SHADER_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_NO_CONT_ATTRS);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_NO_CONT_ATTRS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_ATTR_BASETYPE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_ATTR_BASETYPE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_LAYOUT_STRIDE4);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_LAYOUT_STRIDE4");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_ATTR_SEMANTICS);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_ATTR_SEMANTICS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_SHADER_READONLY_STORAGEBUFFERS);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_SHADER_READONLY_STORAGEBUFFERS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_PIPELINEDESC_BLENDOP_MINMAX_REQUIRES_BLENDFACTOR_ONE);
    lua_setfield(L, -2, "VALIDATE_PIPELINEDESC_BLENDOP_MINMAX_REQUIRES_BLENDFACTOR_ONE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_CANARY);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_UNIQUE_VIEWTYPE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_UNIQUE_VIEWTYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_ANY_VIEWTYPE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_ANY_VIEWTYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_RESOURCE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_RESOURCE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_RESOURCE_FAILED);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_RESOURCE_FAILED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_STORAGEBUFFER_OFFSET_VS_BUFFER_SIZE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_STORAGEBUFFER_OFFSET_VS_BUFFER_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_STORAGEBUFFER_OFFSET_MULTIPLE_256);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_STORAGEBUFFER_OFFSET_MULTIPLE_256");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_STORAGEBUFFER_USAGE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_STORAGEBUFFER_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_STORAGEIMAGE_USAGE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_STORAGEIMAGE_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_COLORATTACHMENT_USAGE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_COLORATTACHMENT_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_RESOLVEATTACHMENT_USAGE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_RESOLVEATTACHMENT_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_DEPTHSTENCILATTACHMENT_USAGE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_DEPTHSTENCILATTACHMENT_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_IMAGE_MIPLEVEL);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_IMAGE_MIPLEVEL");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_IMAGE_2D_SLICE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_IMAGE_2D_SLICE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_IMAGE_CUBEMAP_SLICE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_IMAGE_CUBEMAP_SLICE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_IMAGE_ARRAY_SLICE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_IMAGE_ARRAY_SLICE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_IMAGE_3D_SLICE);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_IMAGE_3D_SLICE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_EXPECT_NO_MSAA);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_EXPECT_NO_MSAA");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_MIPLEVELS);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_MIPLEVELS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_2D_SLICES);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_2D_SLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_CUBEMAP_SLICES);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_CUBEMAP_SLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_ARRAY_SLICES);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_ARRAY_SLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_TEXTURE_3D_SLICES);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_TEXTURE_3D_SLICES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_STORAGEIMAGE_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_STORAGEIMAGE_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_COLORATTACHMENT_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_COLORATTACHMENT_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_DEPTHSTENCILATTACHMENT_PIXELFORMAT);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_DEPTHSTENCILATTACHMENT_PIXELFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_VIEWDESC_RESOLVEATTACHMENT_SAMPLECOUNT);
    lua_setfield(L, -2, "VALIDATE_VIEWDESC_RESOLVEATTACHMENT_SAMPLECOUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_CANARY);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_CANARY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COMPUTEPASS_EXPECT_NO_ATTACHMENTS);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COMPUTEPASS_EXPECT_NO_ATTACHMENTS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_WIDTH);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_WIDTH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_WIDTH_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_WIDTH_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_HEIGHT);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_HEIGHT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_HEIGHT_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_HEIGHT_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_SAMPLECOUNT);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_SAMPLECOUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_SAMPLECOUNT_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_SAMPLECOUNT_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_COLORFORMAT);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_COLORFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_COLORFORMAT_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_COLORFORMAT_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_DEPTHFORMAT_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_EXPECT_DEPTHFORMAT_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_CURRENTDRAWABLE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_CURRENTDRAWABLE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_CURRENTDRAWABLE_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_CURRENTDRAWABLE_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_DEPTHSTENCILTEXTURE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_DEPTHSTENCILTEXTURE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_DEPTHSTENCILTEXTURE_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_DEPTHSTENCILTEXTURE_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_MSAACOLORTEXTURE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_MSAACOLORTEXTURE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_MSAACOLORTEXTURE_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_METAL_EXPECT_MSAACOLORTEXTURE_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RENDERVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RENDERVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RENDERVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RENDERVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RESOLVEVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RESOLVEVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RESOLVEVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_RESOLVEVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_DEPTHSTENCILVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_DEPTHSTENCILVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_DEPTHSTENCILVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_D3D11_EXPECT_DEPTHSTENCILVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RENDERVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RENDERVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RENDERVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RENDERVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RESOLVEVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RESOLVEVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RESOLVEVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_RESOLVEVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_DEPTHSTENCILVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_DEPTHSTENCILVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_DEPTHSTENCILVIEW_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_WGPU_EXPECT_DEPTHSTENCILVIEW_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_SWAPCHAIN_GL_EXPECT_FRAMEBUFFER_NOTSET);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_SWAPCHAIN_GL_EXPECT_FRAMEBUFFER_NOTSET");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEWS_CONTINUOUS);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEWS_CONTINUOUS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_TYPE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_TYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_IMAGE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_IMAGE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_IMAGE_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_IMAGE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SIZES);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SIZES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SAMPLECOUNT);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SAMPLECOUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SAMPLECOUNTS_EQUAL);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_COLORATTACHMENTVIEW_SAMPLECOUNTS_EQUAL");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_NO_COLORATTACHMENTVIEW);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_NO_COLORATTACHMENTVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_TYPE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_TYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_IMAGE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_IMAGE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_IMAGE_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_IMAGE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_SIZES);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_RESOLVEATTACHMENTVIEW_SIZES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEWS_CONTINUOUS);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEWS_CONTINUOUS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_TYPE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_TYPE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_IMAGE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_IMAGE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_IMAGE_VALID);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_IMAGE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_SIZES);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_SIZES");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_SAMPLECOUNT);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_DEPTHSTENCILATTACHMENTVIEW_SAMPLECOUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_BEGINPASS_ATTACHMENTS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_BEGINPASS_ATTACHMENTS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AVP_RENDERPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_AVP_RENDERPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ASR_RENDERPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_ASR_RENDERPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PIPELINE_VALID_ID);
    lua_setfield(L, -2, "VALIDATE_APIP_PIPELINE_VALID_ID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PIPELINE_EXISTS);
    lua_setfield(L, -2, "VALIDATE_APIP_PIPELINE_EXISTS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PIPELINE_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_PIPELINE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_APIP_PASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PIPELINE_SHADER_ALIVE);
    lua_setfield(L, -2, "VALIDATE_APIP_PIPELINE_SHADER_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_PIPELINE_SHADER_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_PIPELINE_SHADER_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_COMPUTEPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_APIP_COMPUTEPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_RENDERPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_APIP_RENDERPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_SWAPCHAIN_COLOR_COUNT);
    lua_setfield(L, -2, "VALIDATE_APIP_SWAPCHAIN_COLOR_COUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_SWAPCHAIN_COLOR_FORMAT);
    lua_setfield(L, -2, "VALIDATE_APIP_SWAPCHAIN_COLOR_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_SWAPCHAIN_DEPTH_FORMAT);
    lua_setfield(L, -2, "VALIDATE_APIP_SWAPCHAIN_DEPTH_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_SWAPCHAIN_SAMPLE_COUNT);
    lua_setfield(L, -2, "VALIDATE_APIP_SWAPCHAIN_SAMPLE_COUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_ATTACHMENTS_ALIVE);
    lua_setfield(L, -2, "VALIDATE_APIP_ATTACHMENTS_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_COLORATTACHMENTS_COUNT);
    lua_setfield(L, -2, "VALIDATE_APIP_COLORATTACHMENTS_COUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_COLORATTACHMENTS_VIEW_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_COLORATTACHMENTS_VIEW_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_COLORATTACHMENTS_IMAGE_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_COLORATTACHMENTS_IMAGE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_COLORATTACHMENTS_FORMAT);
    lua_setfield(L, -2, "VALIDATE_APIP_COLORATTACHMENTS_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_DEPTHSTENCILATTACHMENT_VIEW_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_DEPTHSTENCILATTACHMENT_VIEW_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_DEPTHSTENCILATTACHMENT_IMAGE_VALID);
    lua_setfield(L, -2, "VALIDATE_APIP_DEPTHSTENCILATTACHMENT_IMAGE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_DEPTHSTENCILATTACHMENT_FORMAT);
    lua_setfield(L, -2, "VALIDATE_APIP_DEPTHSTENCILATTACHMENT_FORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APIP_ATTACHMENT_SAMPLE_COUNT);
    lua_setfield(L, -2, "VALIDATE_APIP_ATTACHMENT_SAMPLE_COUNT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_PASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_ABND_PASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EMPTY_BINDINGS);
    lua_setfield(L, -2, "VALIDATE_ABND_EMPTY_BINDINGS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_NO_PIPELINE);
    lua_setfield(L, -2, "VALIDATE_ABND_NO_PIPELINE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_PIPELINE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_PIPELINE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_PIPELINE_VALID);
    lua_setfield(L, -2, "VALIDATE_ABND_PIPELINE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_PIPELINE_SHADER_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_PIPELINE_SHADER_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_PIPELINE_SHADER_VALID);
    lua_setfield(L, -2, "VALIDATE_ABND_PIPELINE_SHADER_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_COMPUTE_EXPECTED_NO_VBUFS);
    lua_setfield(L, -2, "VALIDATE_ABND_COMPUTE_EXPECTED_NO_VBUFS");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_COMPUTE_EXPECTED_NO_IBUF);
    lua_setfield(L, -2, "VALIDATE_ABND_COMPUTE_EXPECTED_NO_IBUF");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_VBUF);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_VBUF");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_VBUF_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_VBUF_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_VBUF_USAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_VBUF_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_VBUF_OVERFLOW);
    lua_setfield(L, -2, "VALIDATE_ABND_VBUF_OVERFLOW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_NO_IBUF);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_NO_IBUF");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_IBUF);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_IBUF");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_IBUF_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_IBUF_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_IBUF_USAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_IBUF_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_IBUF_OVERFLOW);
    lua_setfield(L, -2, "VALIDATE_ABND_IBUF_OVERFLOW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_VIEW_BINDING);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_VIEW_BINDING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_VIEW_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_VIEW_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECT_TEXVIEW);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECT_TEXVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECT_SBVIEW);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECT_SBVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECT_SIMGVIEW);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECT_SIMGVIEW");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXVIEW_IMAGETYPE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXVIEW_IMAGETYPE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXVIEW_EXPECTED_MULTISAMPLED_IMAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXVIEW_EXPECTED_MULTISAMPLED_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXVIEW_EXPECTED_NON_MULTISAMPLED_IMAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXVIEW_EXPECTED_NON_MULTISAMPLED_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXVIEW_EXPECTED_FILTERABLE_IMAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXVIEW_EXPECTED_FILTERABLE_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXVIEW_EXPECTED_DEPTH_IMAGE);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXVIEW_EXPECTED_DEPTH_IMAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SBVIEW_READWRITE_IMMUTABLE);
    lua_setfield(L, -2, "VALIDATE_ABND_SBVIEW_READWRITE_IMMUTABLE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SIMGVIEW_COMPUTE_PASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_ABND_SIMGVIEW_COMPUTE_PASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SIMGVIEW_IMAGETYPE_MISMATCH);
    lua_setfield(L, -2, "VALIDATE_ABND_SIMGVIEW_IMAGETYPE_MISMATCH");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SIMGVIEW_ACCESSFORMAT);
    lua_setfield(L, -2, "VALIDATE_ABND_SIMGVIEW_ACCESSFORMAT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_SAMPLER_BINDING);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_SAMPLER_BINDING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_UNEXPECTED_SAMPLER_COMPARE_NEVER);
    lua_setfield(L, -2, "VALIDATE_ABND_UNEXPECTED_SAMPLER_COMPARE_NEVER");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_SAMPLER_COMPARE_NEVER);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_SAMPLER_COMPARE_NEVER");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_EXPECTED_NONFILTERING_SAMPLER);
    lua_setfield(L, -2, "VALIDATE_ABND_EXPECTED_NONFILTERING_SAMPLER");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SAMPLER_ALIVE);
    lua_setfield(L, -2, "VALIDATE_ABND_SAMPLER_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_SAMPLER_VALID);
    lua_setfield(L, -2, "VALIDATE_ABND_SAMPLER_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXTURE_BINDING_VS_DEPTHSTENCIL_ATTACHMENT);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXTURE_BINDING_VS_DEPTHSTENCIL_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXTURE_BINDING_VS_COLOR_ATTACHMENT);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXTURE_BINDING_VS_COLOR_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXTURE_BINDING_VS_RESOLVE_ATTACHMENT);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXTURE_BINDING_VS_RESOLVE_ATTACHMENT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_ABND_TEXTURE_VS_STORAGEIMAGE_BINDING);
    lua_setfield(L, -2, "VALIDATE_ABND_TEXTURE_VS_STORAGEIMAGE_BINDING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_PASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_AU_PASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_NO_PIPELINE);
    lua_setfield(L, -2, "VALIDATE_AU_NO_PIPELINE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_PIPELINE_ALIVE);
    lua_setfield(L, -2, "VALIDATE_AU_PIPELINE_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_PIPELINE_VALID);
    lua_setfield(L, -2, "VALIDATE_AU_PIPELINE_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_PIPELINE_SHADER_ALIVE);
    lua_setfield(L, -2, "VALIDATE_AU_PIPELINE_SHADER_ALIVE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_PIPELINE_SHADER_VALID);
    lua_setfield(L, -2, "VALIDATE_AU_PIPELINE_SHADER_VALID");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_NO_UNIFORMBLOCK_AT_SLOT);
    lua_setfield(L, -2, "VALIDATE_AU_NO_UNIFORMBLOCK_AT_SLOT");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_AU_SIZE);
    lua_setfield(L, -2, "VALIDATE_AU_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_RENDERPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_DRAW_RENDERPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_BASEELEMENT_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_BASEELEMENT_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_NUMELEMENTS_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_NUMELEMENTS_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_NUMINSTANCES_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_NUMINSTANCES_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_RENDERPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_RENDERPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEELEMENT_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEELEMENT_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_NUMELEMENTS_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_NUMELEMENTS_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_NUMINSTANCES_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_NUMINSTANCES_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEINSTANCE_GE_ZERO);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEINSTANCE_GE_ZERO");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEVERTEX_VS_INDEXED);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEVERTEX_VS_INDEXED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEINSTANCE_VS_INSTANCED);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEINSTANCE_VS_INSTANCED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEVERTEX_NOT_SUPPORTED);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEVERTEX_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_EX_BASEINSTANCE_NOT_SUPPORTED);
    lua_setfield(L, -2, "VALIDATE_DRAW_EX_BASEINSTANCE_NOT_SUPPORTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DRAW_REQUIRED_BINDINGS_OR_UNIFORMS_MISSING);
    lua_setfield(L, -2, "VALIDATE_DRAW_REQUIRED_BINDINGS_OR_UNIFORMS_MISSING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DISPATCH_COMPUTEPASS_EXPECTED);
    lua_setfield(L, -2, "VALIDATE_DISPATCH_COMPUTEPASS_EXPECTED");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DISPATCH_NUMGROUPSX);
    lua_setfield(L, -2, "VALIDATE_DISPATCH_NUMGROUPSX");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DISPATCH_NUMGROUPSY);
    lua_setfield(L, -2, "VALIDATE_DISPATCH_NUMGROUPSY");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DISPATCH_NUMGROUPSZ);
    lua_setfield(L, -2, "VALIDATE_DISPATCH_NUMGROUPSZ");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_DISPATCH_REQUIRED_BINDINGS_OR_UNIFORMS_MISSING);
    lua_setfield(L, -2, "VALIDATE_DISPATCH_REQUIRED_BINDINGS_OR_UNIFORMS_MISSING");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDATEBUF_USAGE);
    lua_setfield(L, -2, "VALIDATE_UPDATEBUF_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDATEBUF_SIZE);
    lua_setfield(L, -2, "VALIDATE_UPDATEBUF_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDATEBUF_ONCE);
    lua_setfield(L, -2, "VALIDATE_UPDATEBUF_ONCE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDATEBUF_APPEND);
    lua_setfield(L, -2, "VALIDATE_UPDATEBUF_APPEND");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APPENDBUF_USAGE);
    lua_setfield(L, -2, "VALIDATE_APPENDBUF_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APPENDBUF_SIZE);
    lua_setfield(L, -2, "VALIDATE_APPENDBUF_SIZE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_APPENDBUF_UPDATE);
    lua_setfield(L, -2, "VALIDATE_APPENDBUF_UPDATE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDIMG_USAGE);
    lua_setfield(L, -2, "VALIDATE_UPDIMG_USAGE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATE_UPDIMG_ONCE);
    lua_setfield(L, -2, "VALIDATE_UPDIMG_ONCE");
    lua_pushinteger(L, SG_LOGITEM_VALIDATION_FAILED);
    lua_setfield(L, -2, "VALIDATION_FAILED");
    lua_setfield(L, -2, "LogItem");
}

static void register_consts_1(lua_State *L) {
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "INVALID_ID");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "NUM_INFLIGHT_FRAMES");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_COLOR_ATTACHMENTS");
    lua_pushinteger(L, 16);
    lua_setfield(L, -2, "MAX_UNIFORMBLOCK_MEMBERS");
    lua_pushinteger(L, 16);
    lua_setfield(L, -2, "MAX_VERTEX_ATTRIBUTES");
    lua_pushinteger(L, 16);
    lua_setfield(L, -2, "MAX_MIPMAPS");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_VERTEXBUFFER_BINDSLOTS");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_UNIFORMBLOCK_BINDSLOTS");
    lua_pushinteger(L, 32);
    lua_setfield(L, -2, "MAX_VIEW_BINDSLOTS");
    lua_pushinteger(L, 12);
    lua_setfield(L, -2, "MAX_SAMPLER_BINDSLOTS");
    lua_pushinteger(L, 32);
    lua_setfield(L, -2, "MAX_TEXTURE_SAMPLER_PAIRS");
    lua_pushinteger(L, 4);
    lua_setfield(L, -2, "MAX_PORTABLE_COLOR_ATTACHMENTS");
    lua_pushinteger(L, 16);
    lua_setfield(L, -2, "MAX_PORTABLE_TEXTURE_BINDINGS_PER_STAGE");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_PORTABLE_STORAGEBUFFER_BINDINGS_PER_STAGE");
    lua_pushinteger(L, 4);
    lua_setfield(L, -2, "MAX_PORTABLE_STORAGEIMAGE_BINDINGS_PER_STAGE");
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Buffer");
    lua_pushcfunction(L, l_sg_buffer__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_buffer__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Image");
    lua_pushcfunction(L, l_sg_image__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Sampler");
    lua_pushcfunction(L, l_sg_sampler__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_sampler__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Shader");
    lua_pushcfunction(L, l_sg_shader__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Pipeline");
    lua_pushcfunction(L, l_sg_pipeline__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pipeline__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.View");
    lua_pushcfunction(L, l_sg_view__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_view__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Range");
    lua_pushcfunction(L, l_sg_range__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_range__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Color");
    lua_pushcfunction(L, l_sg_color__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_color__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.PixelformatInfo");
    lua_pushcfunction(L, l_sg_pixelformat_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pixelformat_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Features");
    lua_pushcfunction(L, l_sg_features__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_features__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Limits");
    lua_pushcfunction(L, l_sg_limits__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_limits__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ColorAttachmentAction");
    lua_pushcfunction(L, l_sg_color_attachment_action__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_color_attachment_action__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.DepthAttachmentAction");
    lua_pushcfunction(L, l_sg_depth_attachment_action__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_depth_attachment_action__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.StencilAttachmentAction");
    lua_pushcfunction(L, l_sg_stencil_attachment_action__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_stencil_attachment_action__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.PassAction");
    lua_pushcfunction(L, l_sg_pass_action__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pass_action__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MetalSwapchain");
    lua_pushcfunction(L, l_sg_metal_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_metal_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11Swapchain");
    lua_pushcfunction(L, l_sg_d3d11_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuSwapchain");
    lua_pushcfunction(L, l_sg_wgpu_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VulkanSwapchain");
    lua_pushcfunction(L, l_sg_vulkan_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vulkan_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlSwapchain");
    lua_pushcfunction(L, l_sg_gl_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Swapchain");
    lua_pushcfunction(L, l_sg_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Attachments");
    lua_pushcfunction(L, l_sg_attachments__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_attachments__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Pass");
    lua_pushcfunction(L, l_sg_pass__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pass__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Bindings");
    lua_pushcfunction(L, l_sg_bindings__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_bindings__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BufferUsage");
    lua_pushcfunction(L, l_sg_buffer_usage__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_buffer_usage__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BufferDesc");
    lua_pushcfunction(L, l_sg_buffer_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_buffer_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageUsage");
    lua_pushcfunction(L, l_sg_image_usage__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image_usage__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageData");
    lua_pushcfunction(L, l_sg_image_data__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image_data__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageDesc");
    lua_pushcfunction(L, l_sg_image_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.SamplerDesc");
    lua_pushcfunction(L, l_sg_sampler_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_sampler_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderFunction");
    lua_pushcfunction(L, l_sg_shader_function__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_function__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderVertexAttr");
    lua_pushcfunction(L, l_sg_shader_vertex_attr__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_vertex_attr__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlslShaderUniform");
    lua_pushcfunction(L, l_sg_glsl_shader_uniform__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_glsl_shader_uniform__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderUniformBlock");
    lua_pushcfunction(L, l_sg_shader_uniform_block__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_uniform_block__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderTextureView");
    lua_pushcfunction(L, l_sg_shader_texture_view__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_texture_view__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderStorageBufferView");
    lua_pushcfunction(L, l_sg_shader_storage_buffer_view__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_storage_buffer_view__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderStorageImageView");
    lua_pushcfunction(L, l_sg_shader_storage_image_view__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_storage_image_view__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderView");
    lua_pushcfunction(L, l_sg_shader_view__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_view__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderSampler");
    lua_pushcfunction(L, l_sg_shader_sampler__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_sampler__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderTextureSamplerPair");
    lua_pushcfunction(L, l_sg_shader_texture_sampler_pair__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_texture_sampler_pair__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlShaderThreadsPerThreadgroup");
    lua_pushcfunction(L, l_sg_mtl_shader_threads_per_threadgroup__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_shader_threads_per_threadgroup__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderDesc");
    lua_pushcfunction(L, l_sg_shader_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VertexBufferLayoutState");
    lua_pushcfunction(L, l_sg_vertex_buffer_layout_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vertex_buffer_layout_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VertexAttrState");
    lua_pushcfunction(L, l_sg_vertex_attr_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vertex_attr_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VertexLayoutState");
    lua_pushcfunction(L, l_sg_vertex_layout_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vertex_layout_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.StencilFaceState");
    lua_pushcfunction(L, l_sg_stencil_face_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_stencil_face_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.StencilState");
    lua_pushcfunction(L, l_sg_stencil_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_stencil_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.DepthState");
    lua_pushcfunction(L, l_sg_depth_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_depth_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BlendState");
    lua_pushcfunction(L, l_sg_blend_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_blend_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ColorTargetState");
    lua_pushcfunction(L, l_sg_color_target_state__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_color_target_state__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.PipelineDesc");
    lua_pushcfunction(L, l_sg_pipeline_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pipeline_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BufferViewDesc");
    lua_pushcfunction(L, l_sg_buffer_view_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_buffer_view_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageViewDesc");
    lua_pushcfunction(L, l_sg_image_view_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image_view_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.TextureViewRange");
    lua_pushcfunction(L, l_sg_texture_view_range__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_texture_view_range__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.TextureViewDesc");
    lua_pushcfunction(L, l_sg_texture_view_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_texture_view_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ViewDesc");
    lua_pushcfunction(L, l_sg_view_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_view_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.TraceHooks");
    lua_pushcfunction(L, l_sg_trace_hooks__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_trace_hooks__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.SlotInfo");
    lua_pushcfunction(L, l_sg_slot_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_slot_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BufferInfo");
    lua_pushcfunction(L, l_sg_buffer_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_buffer_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageInfo");
    lua_pushcfunction(L, l_sg_image_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_image_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.SamplerInfo");
    lua_pushcfunction(L, l_sg_sampler_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_sampler_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ShaderInfo");
    lua_pushcfunction(L, l_sg_shader_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_shader_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.PipelineInfo");
    lua_pushcfunction(L, l_sg_pipeline_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_pipeline_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ViewInfo");
    lua_pushcfunction(L, l_sg_view_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_view_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsGl");
    lua_pushcfunction(L, l_sg_frame_stats_gl__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_gl__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11Pass");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_pass__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_pass__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11Pipeline");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_pipeline__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_pipeline__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11Bindings");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_bindings__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_bindings__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11Uniforms");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_uniforms__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_uniforms__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11Draw");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_draw__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11_draw__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsD3d11");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_d3d11__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsMetalIdpool");
    lua_pushcfunction(L, l_sg_frame_stats_metal_idpool__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_metal_idpool__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsMetalPipeline");
    lua_pushcfunction(L, l_sg_frame_stats_metal_pipeline__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_metal_pipeline__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsMetalBindings");
    lua_pushcfunction(L, l_sg_frame_stats_metal_bindings__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_metal_bindings__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsMetalUniforms");
    lua_pushcfunction(L, l_sg_frame_stats_metal_uniforms__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_metal_uniforms__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsMetal");
    lua_pushcfunction(L, l_sg_frame_stats_metal__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_metal__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsWgpuUniforms");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu_uniforms__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu_uniforms__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsWgpuBindings");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu_bindings__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu_bindings__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsWgpu");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_wgpu__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStatsVk");
    lua_pushcfunction(L, l_sg_frame_stats_vk__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats_vk__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameResourceStats");
    lua_pushcfunction(L, l_sg_frame_resource_stats__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_resource_stats__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.TotalResourceStats");
    lua_pushcfunction(L, l_sg_total_resource_stats__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_total_resource_stats__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.TotalStats");
    lua_pushcfunction(L, l_sg_total_stats__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_total_stats__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FrameStats");
    lua_pushcfunction(L, l_sg_frame_stats__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_frame_stats__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Stats");
    lua_pushcfunction(L, l_sg_stats__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_stats__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.EnvironmentDefaults");
    lua_pushcfunction(L, l_sg_environment_defaults__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_environment_defaults__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MetalEnvironment");
    lua_pushcfunction(L, l_sg_metal_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_metal_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11Environment");
    lua_pushcfunction(L, l_sg_d3d11_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuEnvironment");
    lua_pushcfunction(L, l_sg_wgpu_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VulkanEnvironment");
    lua_pushcfunction(L, l_sg_vulkan_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vulkan_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Environment");
    lua_pushcfunction(L, l_sg_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.CommitListener");
    lua_pushcfunction(L, l_sg_commit_listener__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_commit_listener__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Allocator");
    lua_pushcfunction(L, l_sg_allocator__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_allocator__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Logger");
    lua_pushcfunction(L, l_sg_logger__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_logger__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11Desc");
    lua_pushcfunction(L, l_sg_d3d11_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MetalDesc");
    lua_pushcfunction(L, l_sg_metal_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_metal_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuDesc");
    lua_pushcfunction(L, l_sg_wgpu_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VulkanDesc");
    lua_pushcfunction(L, l_sg_vulkan_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_vulkan_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Desc");
    lua_pushcfunction(L, l_sg_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11BufferInfo");
    lua_pushcfunction(L, l_sg_d3d11_buffer_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_buffer_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11ImageInfo");
    lua_pushcfunction(L, l_sg_d3d11_image_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_image_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11SamplerInfo");
    lua_pushcfunction(L, l_sg_d3d11_sampler_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_sampler_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11ShaderInfo");
    lua_pushcfunction(L, l_sg_d3d11_shader_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_shader_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11PipelineInfo");
    lua_pushcfunction(L, l_sg_d3d11_pipeline_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_pipeline_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11ViewInfo");
    lua_pushcfunction(L, l_sg_d3d11_view_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_d3d11_view_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlBufferInfo");
    lua_pushcfunction(L, l_sg_mtl_buffer_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_buffer_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlImageInfo");
    lua_pushcfunction(L, l_sg_mtl_image_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_image_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlSamplerInfo");
    lua_pushcfunction(L, l_sg_mtl_sampler_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_sampler_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlShaderInfo");
    lua_pushcfunction(L, l_sg_mtl_shader_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_shader_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MtlPipelineInfo");
    lua_pushcfunction(L, l_sg_mtl_pipeline_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_mtl_pipeline_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuBufferInfo");
    lua_pushcfunction(L, l_sg_wgpu_buffer_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_buffer_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuImageInfo");
    lua_pushcfunction(L, l_sg_wgpu_image_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_image_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuSamplerInfo");
    lua_pushcfunction(L, l_sg_wgpu_sampler_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_sampler_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuShaderInfo");
    lua_pushcfunction(L, l_sg_wgpu_shader_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_shader_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuPipelineInfo");
    lua_pushcfunction(L, l_sg_wgpu_pipeline_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_pipeline_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuViewInfo");
    lua_pushcfunction(L, l_sg_wgpu_view_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_wgpu_view_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlBufferInfo");
    lua_pushcfunction(L, l_sg_gl_buffer_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_buffer_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlImageInfo");
    lua_pushcfunction(L, l_sg_gl_image_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_image_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlSamplerInfo");
    lua_pushcfunction(L, l_sg_gl_sampler_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_sampler_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlShaderInfo");
    lua_pushcfunction(L, l_sg_gl_shader_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_shader_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlViewInfo");
    lua_pushcfunction(L, l_sg_gl_view_info__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sg_gl_view_info__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg gfx_funcs[] = {
    {"setup", l_sg_setup},
    {"shutdown", l_sg_shutdown},
    {"isvalid", l_sg_isvalid},
    {"reset_state_cache", l_sg_reset_state_cache},
    {"push_debug_group", l_sg_push_debug_group},
    {"pop_debug_group", l_sg_pop_debug_group},
    {"add_commit_listener", l_sg_add_commit_listener},
    {"remove_commit_listener", l_sg_remove_commit_listener},
    {"make_buffer", l_sg_make_buffer},
    {"make_image", l_sg_make_image},
    {"make_sampler", l_sg_make_sampler},
    {"make_shader", l_sg_make_shader},
    {"make_pipeline", l_sg_make_pipeline},
    {"make_view", l_sg_make_view},
    {"destroy_buffer", l_sg_destroy_buffer},
    {"destroy_image", l_sg_destroy_image},
    {"destroy_sampler", l_sg_destroy_sampler},
    {"destroy_shader", l_sg_destroy_shader},
    {"destroy_pipeline", l_sg_destroy_pipeline},
    {"destroy_view", l_sg_destroy_view},
    {"update_buffer", l_sg_update_buffer},
    {"update_image", l_sg_update_image},
    {"append_buffer", l_sg_append_buffer},
    {"query_buffer_overflow", l_sg_query_buffer_overflow},
    {"query_buffer_will_overflow", l_sg_query_buffer_will_overflow},
    {"begin_pass", l_sg_begin_pass},
    {"apply_viewport", l_sg_apply_viewport},
    {"apply_viewportf", l_sg_apply_viewportf},
    {"apply_scissor_rect", l_sg_apply_scissor_rect},
    {"apply_scissor_rectf", l_sg_apply_scissor_rectf},
    {"apply_pipeline", l_sg_apply_pipeline},
    {"apply_bindings", l_sg_apply_bindings},
    {"apply_uniforms", l_sg_apply_uniforms},
    {"draw", l_sg_draw},
    {"draw_ex", l_sg_draw_ex},
    {"dispatch", l_sg_dispatch},
    {"end_pass", l_sg_end_pass},
    {"commit", l_sg_commit},
    {"query_desc", l_sg_query_desc},
    {"query_backend", l_sg_query_backend},
    {"query_features", l_sg_query_features},
    {"query_limits", l_sg_query_limits},
    {"query_pixelformat", l_sg_query_pixelformat},
    {"query_row_pitch", l_sg_query_row_pitch},
    {"query_surface_pitch", l_sg_query_surface_pitch},
    {"query_buffer_state", l_sg_query_buffer_state},
    {"query_image_state", l_sg_query_image_state},
    {"query_sampler_state", l_sg_query_sampler_state},
    {"query_shader_state", l_sg_query_shader_state},
    {"query_pipeline_state", l_sg_query_pipeline_state},
    {"query_view_state", l_sg_query_view_state},
    {"query_buffer_info", l_sg_query_buffer_info},
    {"query_image_info", l_sg_query_image_info},
    {"query_sampler_info", l_sg_query_sampler_info},
    {"query_shader_info", l_sg_query_shader_info},
    {"query_pipeline_info", l_sg_query_pipeline_info},
    {"query_view_info", l_sg_query_view_info},
    {"query_buffer_desc", l_sg_query_buffer_desc},
    {"query_image_desc", l_sg_query_image_desc},
    {"query_sampler_desc", l_sg_query_sampler_desc},
    {"query_shader_desc", l_sg_query_shader_desc},
    {"query_pipeline_desc", l_sg_query_pipeline_desc},
    {"query_view_desc", l_sg_query_view_desc},
    {"query_buffer_defaults", l_sg_query_buffer_defaults},
    {"query_image_defaults", l_sg_query_image_defaults},
    {"query_sampler_defaults", l_sg_query_sampler_defaults},
    {"query_shader_defaults", l_sg_query_shader_defaults},
    {"query_pipeline_defaults", l_sg_query_pipeline_defaults},
    {"query_view_defaults", l_sg_query_view_defaults},
    {"query_buffer_size", l_sg_query_buffer_size},
    {"query_buffer_usage", l_sg_query_buffer_usage},
    {"query_image_type", l_sg_query_image_type},
    {"query_image_width", l_sg_query_image_width},
    {"query_image_height", l_sg_query_image_height},
    {"query_image_num_slices", l_sg_query_image_num_slices},
    {"query_image_num_mipmaps", l_sg_query_image_num_mipmaps},
    {"query_image_pixelformat", l_sg_query_image_pixelformat},
    {"query_image_usage", l_sg_query_image_usage},
    {"query_image_sample_count", l_sg_query_image_sample_count},
    {"query_view_type", l_sg_query_view_type},
    {"query_view_image", l_sg_query_view_image},
    {"query_view_buffer", l_sg_query_view_buffer},
    {"alloc_buffer", l_sg_alloc_buffer},
    {"alloc_image", l_sg_alloc_image},
    {"alloc_sampler", l_sg_alloc_sampler},
    {"alloc_shader", l_sg_alloc_shader},
    {"alloc_pipeline", l_sg_alloc_pipeline},
    {"alloc_view", l_sg_alloc_view},
    {"dealloc_buffer", l_sg_dealloc_buffer},
    {"dealloc_image", l_sg_dealloc_image},
    {"dealloc_sampler", l_sg_dealloc_sampler},
    {"dealloc_shader", l_sg_dealloc_shader},
    {"dealloc_pipeline", l_sg_dealloc_pipeline},
    {"dealloc_view", l_sg_dealloc_view},
    {"init_buffer", l_sg_init_buffer},
    {"init_image", l_sg_init_image},
    {"init_sampler", l_sg_init_sampler},
    {"init_shader", l_sg_init_shader},
    {"init_pipeline", l_sg_init_pipeline},
    {"init_view", l_sg_init_view},
    {"uninit_buffer", l_sg_uninit_buffer},
    {"uninit_image", l_sg_uninit_image},
    {"uninit_sampler", l_sg_uninit_sampler},
    {"uninit_shader", l_sg_uninit_shader},
    {"uninit_pipeline", l_sg_uninit_pipeline},
    {"uninit_view", l_sg_uninit_view},
    {"fail_buffer", l_sg_fail_buffer},
    {"fail_image", l_sg_fail_image},
    {"fail_sampler", l_sg_fail_sampler},
    {"fail_shader", l_sg_fail_shader},
    {"fail_pipeline", l_sg_fail_pipeline},
    {"fail_view", l_sg_fail_view},
    {"enable_stats", l_sg_enable_stats},
    {"disable_stats", l_sg_disable_stats},
    {"stats_enabled", l_sg_stats_enabled},
    {"query_stats", l_sg_query_stats},
    {"d3d11_device", l_sg_d3d11_device},
    {"d3d11_device_context", l_sg_d3d11_device_context},
    {"d3d11_query_buffer_info", l_sg_d3d11_query_buffer_info},
    {"d3d11_query_image_info", l_sg_d3d11_query_image_info},
    {"d3d11_query_sampler_info", l_sg_d3d11_query_sampler_info},
    {"d3d11_query_shader_info", l_sg_d3d11_query_shader_info},
    {"d3d11_query_pipeline_info", l_sg_d3d11_query_pipeline_info},
    {"d3d11_query_view_info", l_sg_d3d11_query_view_info},
    {"mtl_device", l_sg_mtl_device},
    {"mtl_render_command_encoder", l_sg_mtl_render_command_encoder},
    {"mtl_compute_command_encoder", l_sg_mtl_compute_command_encoder},
    {"mtl_query_buffer_info", l_sg_mtl_query_buffer_info},
    {"mtl_query_image_info", l_sg_mtl_query_image_info},
    {"mtl_query_sampler_info", l_sg_mtl_query_sampler_info},
    {"mtl_query_shader_info", l_sg_mtl_query_shader_info},
    {"mtl_query_pipeline_info", l_sg_mtl_query_pipeline_info},
    {"wgpu_device", l_sg_wgpu_device},
    {"wgpu_queue", l_sg_wgpu_queue},
    {"wgpu_command_encoder", l_sg_wgpu_command_encoder},
    {"wgpu_render_pass_encoder", l_sg_wgpu_render_pass_encoder},
    {"wgpu_compute_pass_encoder", l_sg_wgpu_compute_pass_encoder},
    {"wgpu_query_buffer_info", l_sg_wgpu_query_buffer_info},
    {"wgpu_query_image_info", l_sg_wgpu_query_image_info},
    {"wgpu_query_sampler_info", l_sg_wgpu_query_sampler_info},
    {"wgpu_query_shader_info", l_sg_wgpu_query_shader_info},
    {"wgpu_query_pipeline_info", l_sg_wgpu_query_pipeline_info},
    {"wgpu_query_view_info", l_sg_wgpu_query_view_info},
    {"gl_query_buffer_info", l_sg_gl_query_buffer_info},
    {"gl_query_image_info", l_sg_gl_query_image_info},
    {"gl_query_sampler_info", l_sg_gl_query_sampler_info},
    {"gl_query_shader_info", l_sg_gl_query_shader_info},
    {"gl_query_view_info", l_sg_gl_query_view_info},
    {"Buffer", l_sg_buffer_new},
    {"Image", l_sg_image_new},
    {"Sampler", l_sg_sampler_new},
    {"Shader", l_sg_shader_new},
    {"Pipeline", l_sg_pipeline_new},
    {"View", l_sg_view_new},
    {"Range", l_sg_range_new},
    {"Color", l_sg_color_new},
    {"PixelformatInfo", l_sg_pixelformat_info_new},
    {"Features", l_sg_features_new},
    {"Limits", l_sg_limits_new},
    {"ColorAttachmentAction", l_sg_color_attachment_action_new},
    {"DepthAttachmentAction", l_sg_depth_attachment_action_new},
    {"StencilAttachmentAction", l_sg_stencil_attachment_action_new},
    {"PassAction", l_sg_pass_action_new},
    {"MetalSwapchain", l_sg_metal_swapchain_new},
    {"D3d11Swapchain", l_sg_d3d11_swapchain_new},
    {"WgpuSwapchain", l_sg_wgpu_swapchain_new},
    {"VulkanSwapchain", l_sg_vulkan_swapchain_new},
    {"GlSwapchain", l_sg_gl_swapchain_new},
    {"Swapchain", l_sg_swapchain_new},
    {"Attachments", l_sg_attachments_new},
    {"Pass", l_sg_pass_new},
    {"Bindings", l_sg_bindings_new},
    {"BufferUsage", l_sg_buffer_usage_new},
    {"BufferDesc", l_sg_buffer_desc_new},
    {"ImageUsage", l_sg_image_usage_new},
    {"ImageData", l_sg_image_data_new},
    {"ImageDesc", l_sg_image_desc_new},
    {"SamplerDesc", l_sg_sampler_desc_new},
    {"ShaderFunction", l_sg_shader_function_new},
    {"ShaderVertexAttr", l_sg_shader_vertex_attr_new},
    {"GlslShaderUniform", l_sg_glsl_shader_uniform_new},
    {"ShaderUniformBlock", l_sg_shader_uniform_block_new},
    {"ShaderTextureView", l_sg_shader_texture_view_new},
    {"ShaderStorageBufferView", l_sg_shader_storage_buffer_view_new},
    {"ShaderStorageImageView", l_sg_shader_storage_image_view_new},
    {"ShaderView", l_sg_shader_view_new},
    {"ShaderSampler", l_sg_shader_sampler_new},
    {"ShaderTextureSamplerPair", l_sg_shader_texture_sampler_pair_new},
    {"MtlShaderThreadsPerThreadgroup", l_sg_mtl_shader_threads_per_threadgroup_new},
    {"ShaderDesc", l_sg_shader_desc_new},
    {"VertexBufferLayoutState", l_sg_vertex_buffer_layout_state_new},
    {"VertexAttrState", l_sg_vertex_attr_state_new},
    {"VertexLayoutState", l_sg_vertex_layout_state_new},
    {"StencilFaceState", l_sg_stencil_face_state_new},
    {"StencilState", l_sg_stencil_state_new},
    {"DepthState", l_sg_depth_state_new},
    {"BlendState", l_sg_blend_state_new},
    {"ColorTargetState", l_sg_color_target_state_new},
    {"PipelineDesc", l_sg_pipeline_desc_new},
    {"BufferViewDesc", l_sg_buffer_view_desc_new},
    {"ImageViewDesc", l_sg_image_view_desc_new},
    {"TextureViewRange", l_sg_texture_view_range_new},
    {"TextureViewDesc", l_sg_texture_view_desc_new},
    {"ViewDesc", l_sg_view_desc_new},
    {"TraceHooks", l_sg_trace_hooks_new},
    {"SlotInfo", l_sg_slot_info_new},
    {"BufferInfo", l_sg_buffer_info_new},
    {"ImageInfo", l_sg_image_info_new},
    {"SamplerInfo", l_sg_sampler_info_new},
    {"ShaderInfo", l_sg_shader_info_new},
    {"PipelineInfo", l_sg_pipeline_info_new},
    {"ViewInfo", l_sg_view_info_new},
    {"FrameStatsGl", l_sg_frame_stats_gl_new},
    {"FrameStatsD3d11Pass", l_sg_frame_stats_d3d11_pass_new},
    {"FrameStatsD3d11Pipeline", l_sg_frame_stats_d3d11_pipeline_new},
    {"FrameStatsD3d11Bindings", l_sg_frame_stats_d3d11_bindings_new},
    {"FrameStatsD3d11Uniforms", l_sg_frame_stats_d3d11_uniforms_new},
    {"FrameStatsD3d11Draw", l_sg_frame_stats_d3d11_draw_new},
    {"FrameStatsD3d11", l_sg_frame_stats_d3d11_new},
    {"FrameStatsMetalIdpool", l_sg_frame_stats_metal_idpool_new},
    {"FrameStatsMetalPipeline", l_sg_frame_stats_metal_pipeline_new},
    {"FrameStatsMetalBindings", l_sg_frame_stats_metal_bindings_new},
    {"FrameStatsMetalUniforms", l_sg_frame_stats_metal_uniforms_new},
    {"FrameStatsMetal", l_sg_frame_stats_metal_new},
    {"FrameStatsWgpuUniforms", l_sg_frame_stats_wgpu_uniforms_new},
    {"FrameStatsWgpuBindings", l_sg_frame_stats_wgpu_bindings_new},
    {"FrameStatsWgpu", l_sg_frame_stats_wgpu_new},
    {"FrameStatsVk", l_sg_frame_stats_vk_new},
    {"FrameResourceStats", l_sg_frame_resource_stats_new},
    {"TotalResourceStats", l_sg_total_resource_stats_new},
    {"TotalStats", l_sg_total_stats_new},
    {"FrameStats", l_sg_frame_stats_new},
    {"Stats", l_sg_stats_new},
    {"EnvironmentDefaults", l_sg_environment_defaults_new},
    {"MetalEnvironment", l_sg_metal_environment_new},
    {"D3d11Environment", l_sg_d3d11_environment_new},
    {"WgpuEnvironment", l_sg_wgpu_environment_new},
    {"VulkanEnvironment", l_sg_vulkan_environment_new},
    {"Environment", l_sg_environment_new},
    {"CommitListener", l_sg_commit_listener_new},
    {"Allocator", l_sg_allocator_new},
    {"Logger", l_sg_logger_new},
    {"D3d11Desc", l_sg_d3d11_desc_new},
    {"MetalDesc", l_sg_metal_desc_new},
    {"WgpuDesc", l_sg_wgpu_desc_new},
    {"VulkanDesc", l_sg_vulkan_desc_new},
    {"Desc", l_sg_desc_new},
    {"D3d11BufferInfo", l_sg_d3d11_buffer_info_new},
    {"D3d11ImageInfo", l_sg_d3d11_image_info_new},
    {"D3d11SamplerInfo", l_sg_d3d11_sampler_info_new},
    {"D3d11ShaderInfo", l_sg_d3d11_shader_info_new},
    {"D3d11PipelineInfo", l_sg_d3d11_pipeline_info_new},
    {"D3d11ViewInfo", l_sg_d3d11_view_info_new},
    {"MtlBufferInfo", l_sg_mtl_buffer_info_new},
    {"MtlImageInfo", l_sg_mtl_image_info_new},
    {"MtlSamplerInfo", l_sg_mtl_sampler_info_new},
    {"MtlShaderInfo", l_sg_mtl_shader_info_new},
    {"MtlPipelineInfo", l_sg_mtl_pipeline_info_new},
    {"WgpuBufferInfo", l_sg_wgpu_buffer_info_new},
    {"WgpuImageInfo", l_sg_wgpu_image_info_new},
    {"WgpuSamplerInfo", l_sg_wgpu_sampler_info_new},
    {"WgpuShaderInfo", l_sg_wgpu_shader_info_new},
    {"WgpuPipelineInfo", l_sg_wgpu_pipeline_info_new},
    {"WgpuViewInfo", l_sg_wgpu_view_info_new},
    {"GlBufferInfo", l_sg_gl_buffer_info_new},
    {"GlImageInfo", l_sg_gl_image_info_new},
    {"GlSamplerInfo", l_sg_gl_sampler_info_new},
    {"GlShaderInfo", l_sg_gl_shader_info_new},
    {"GlViewInfo", l_sg_gl_view_info_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_gfx(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, gfx_funcs);
    register_sg_backend(L);
    register_sg_pixel_format(L);
    register_sg_resource_state(L);
    register_sg_index_type(L);
    register_sg_image_type(L);
    register_sg_image_sample_type(L);
    register_sg_sampler_type(L);
    register_sg_primitive_type(L);
    register_sg_filter(L);
    register_sg_wrap(L);
    register_sg_border_color(L);
    register_sg_vertex_format(L);
    register_sg_vertex_step(L);
    register_sg_uniform_type(L);
    register_sg_uniform_layout(L);
    register_sg_cull_mode(L);
    register_sg_face_winding(L);
    register_sg_compare_func(L);
    register_sg_stencil_op(L);
    register_sg_blend_factor(L);
    register_sg_blend_op(L);
    register_sg_color_mask(L);
    register_sg_load_action(L);
    register_sg_store_action(L);
    register_sg_view_type(L);
    register_sg_shader_stage(L);
    register_sg_shader_attr_base_type(L);
    register_sg_log_item(L);
    register_consts_1(L);
    return 1;
}
