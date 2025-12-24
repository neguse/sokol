/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_gfx.h"
#include "sokol_debugtext.h"

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

static int l_sdtx_logger_t_new(lua_State *L) {
    sdtx_logger_t* ud = (sdtx_logger_t*)lua_newuserdatauv(L, sizeof(sdtx_logger_t), 0);
    memset(ud, 0, sizeof(sdtx_logger_t));
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sdtx_logger_t_get_user_data(lua_State *L) {
    sdtx_logger_t* self = (sdtx_logger_t*)luaL_checkudata(L, 1, "sokol.Logger");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sdtx_logger_t_set_user_data(lua_State *L) {
    sdtx_logger_t* self = (sdtx_logger_t*)luaL_checkudata(L, 1, "sokol.Logger");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sdtx_logger_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sdtx_logger_t_get_user_data(L);
    return 0;
}

static int l_sdtx_logger_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sdtx_logger_t_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_context_new(lua_State *L) {
    sdtx_context* ud = (sdtx_context*)lua_newuserdatauv(L, sizeof(sdtx_context), 0);
    memset(ud, 0, sizeof(sdtx_context));
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sdtx_context_get_id(lua_State *L) {
    sdtx_context* self = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sdtx_context_set_id(lua_State *L) {
    sdtx_context* self = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sdtx_context_get_id(L);
    return 0;
}

static int l_sdtx_context__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sdtx_context_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_range_new(lua_State *L) {
    sdtx_range* ud = (sdtx_range*)lua_newuserdatauv(L, sizeof(sdtx_range), 0);
    memset(ud, 0, sizeof(sdtx_range));
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sdtx_range_get_ptr(lua_State *L) {
    sdtx_range* self = (sdtx_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushlightuserdata(L, (void*)self->ptr);
    return 1;
}

static int l_sdtx_range_set_ptr(lua_State *L) {
    sdtx_range* self = (sdtx_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->ptr = lua_touserdata(L, 2);
    return 0;
}

static int l_sdtx_range_get_size(lua_State *L) {
    sdtx_range* self = (sdtx_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sdtx_range_set_size(lua_State *L) {
    sdtx_range* self = (sdtx_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_range__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sdtx_range_get_ptr(L);
    if (strcmp(key, "size") == 0) return l_sdtx_range_get_size(L);
    return 0;
}

static int l_sdtx_range__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sdtx_range_set_ptr(L);
    if (strcmp(key, "size") == 0) return l_sdtx_range_set_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_font_desc_t_new(lua_State *L) {
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    memset(ud, 0, sizeof(sdtx_font_desc_t));
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_desc_t_get_data(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    sdtx_range* ud = (sdtx_range*)lua_newuserdatauv(L, sizeof(sdtx_range), 0);
    *ud = self->data;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sdtx_font_desc_t_set_data(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    sdtx_range* val = (sdtx_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->data = *val;
    return 0;
}

static int l_sdtx_font_desc_t_get_first_char(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    lua_pushinteger(L, (lua_Integer)self->first_char);
    return 1;
}

static int l_sdtx_font_desc_t_set_first_char(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    self->first_char = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_font_desc_t_get_last_char(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    lua_pushinteger(L, (lua_Integer)self->last_char);
    return 1;
}

static int l_sdtx_font_desc_t_set_last_char(lua_State *L) {
    sdtx_font_desc_t* self = (sdtx_font_desc_t*)luaL_checkudata(L, 1, "sokol.FontDesc");
    self->last_char = (uint8_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_font_desc_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "data") == 0) return l_sdtx_font_desc_t_get_data(L);
    if (strcmp(key, "first_char") == 0) return l_sdtx_font_desc_t_get_first_char(L);
    if (strcmp(key, "last_char") == 0) return l_sdtx_font_desc_t_get_last_char(L);
    return 0;
}

static int l_sdtx_font_desc_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "data") == 0) return l_sdtx_font_desc_t_set_data(L);
    if (strcmp(key, "first_char") == 0) return l_sdtx_font_desc_t_set_first_char(L);
    if (strcmp(key, "last_char") == 0) return l_sdtx_font_desc_t_set_last_char(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_context_desc_t_new(lua_State *L) {
    sdtx_context_desc_t* ud = (sdtx_context_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_context_desc_t), 0);
    memset(ud, 0, sizeof(sdtx_context_desc_t));
    luaL_setmetatable(L, "sokol.ContextDesc");
    return 1;
}

static int l_sdtx_context_desc_t_get_max_commands(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->max_commands);
    return 1;
}

static int l_sdtx_context_desc_t_set_max_commands(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->max_commands = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_char_buf_size(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->char_buf_size);
    return 1;
}

static int l_sdtx_context_desc_t_set_char_buf_size(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->char_buf_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_canvas_width(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushnumber(L, (lua_Number)self->canvas_width);
    return 1;
}

static int l_sdtx_context_desc_t_set_canvas_width(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->canvas_width = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_canvas_height(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushnumber(L, (lua_Number)self->canvas_height);
    return 1;
}

static int l_sdtx_context_desc_t_set_canvas_height(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->canvas_height = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_tab_width(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->tab_width);
    return 1;
}

static int l_sdtx_context_desc_t_set_tab_width(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->tab_width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_color_format(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sdtx_context_desc_t_set_color_format(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->color_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_depth_format(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sdtx_context_desc_t_set_depth_format(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->depth_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t_get_sample_count(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sdtx_context_desc_t_set_sample_count(lua_State *L) {
    sdtx_context_desc_t* self = (sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_context_desc_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_commands") == 0) return l_sdtx_context_desc_t_get_max_commands(L);
    if (strcmp(key, "char_buf_size") == 0) return l_sdtx_context_desc_t_get_char_buf_size(L);
    if (strcmp(key, "canvas_width") == 0) return l_sdtx_context_desc_t_get_canvas_width(L);
    if (strcmp(key, "canvas_height") == 0) return l_sdtx_context_desc_t_get_canvas_height(L);
    if (strcmp(key, "tab_width") == 0) return l_sdtx_context_desc_t_get_tab_width(L);
    if (strcmp(key, "color_format") == 0) return l_sdtx_context_desc_t_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sdtx_context_desc_t_get_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sdtx_context_desc_t_get_sample_count(L);
    return 0;
}

static int l_sdtx_context_desc_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_commands") == 0) return l_sdtx_context_desc_t_set_max_commands(L);
    if (strcmp(key, "char_buf_size") == 0) return l_sdtx_context_desc_t_set_char_buf_size(L);
    if (strcmp(key, "canvas_width") == 0) return l_sdtx_context_desc_t_set_canvas_width(L);
    if (strcmp(key, "canvas_height") == 0) return l_sdtx_context_desc_t_set_canvas_height(L);
    if (strcmp(key, "tab_width") == 0) return l_sdtx_context_desc_t_set_tab_width(L);
    if (strcmp(key, "color_format") == 0) return l_sdtx_context_desc_t_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sdtx_context_desc_t_set_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sdtx_context_desc_t_set_sample_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_allocator_t_new(lua_State *L) {
    sdtx_allocator_t* ud = (sdtx_allocator_t*)lua_newuserdatauv(L, sizeof(sdtx_allocator_t), 0);
    memset(ud, 0, sizeof(sdtx_allocator_t));
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sdtx_allocator_t_get_user_data(lua_State *L) {
    sdtx_allocator_t* self = (sdtx_allocator_t*)luaL_checkudata(L, 1, "sokol.Allocator");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sdtx_allocator_t_set_user_data(lua_State *L) {
    sdtx_allocator_t* self = (sdtx_allocator_t*)luaL_checkudata(L, 1, "sokol.Allocator");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sdtx_allocator_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sdtx_allocator_t_get_user_data(L);
    return 0;
}

static int l_sdtx_allocator_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sdtx_allocator_t_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_desc_t_new(lua_State *L) {
    sdtx_desc_t* ud = (sdtx_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_desc_t), 0);
    memset(ud, 0, sizeof(sdtx_desc_t));
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_sdtx_desc_t_get_context_pool_size(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->context_pool_size);
    return 1;
}

static int l_sdtx_desc_t_set_context_pool_size(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->context_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_desc_t_get_printf_buf_size(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->printf_buf_size);
    return 1;
}

static int l_sdtx_desc_t_set_printf_buf_size(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->printf_buf_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sdtx_desc_t_get_fonts(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    /* TODO: array field fonts */
    lua_pushnil(L);
    return 1;
}

static int l_sdtx_desc_t_set_fonts(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    /* TODO: array field fonts */
    return 0;
}

static int l_sdtx_desc_t_get_context(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_context_desc_t* ud = (sdtx_context_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_context_desc_t), 0);
    *ud = self->context;
    luaL_setmetatable(L, "sokol.ContextDesc");
    return 1;
}

static int l_sdtx_desc_t_set_context(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_context_desc_t* val = (sdtx_context_desc_t*)luaL_checkudata(L, 2, "sokol.ContextDesc");
    self->context = *val;
    return 0;
}

static int l_sdtx_desc_t_get_allocator(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_allocator_t* ud = (sdtx_allocator_t*)lua_newuserdatauv(L, sizeof(sdtx_allocator_t), 0);
    *ud = self->allocator;
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sdtx_desc_t_set_allocator(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_allocator_t* val = (sdtx_allocator_t*)luaL_checkudata(L, 2, "sokol.Allocator");
    self->allocator = *val;
    return 0;
}

static int l_sdtx_desc_t_get_logger(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_logger_t* ud = (sdtx_logger_t*)lua_newuserdatauv(L, sizeof(sdtx_logger_t), 0);
    *ud = self->logger;
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sdtx_desc_t_set_logger(lua_State *L) {
    sdtx_desc_t* self = (sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_logger_t* val = (sdtx_logger_t*)luaL_checkudata(L, 2, "sokol.Logger");
    self->logger = *val;
    return 0;
}

static int l_sdtx_desc_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "context_pool_size") == 0) return l_sdtx_desc_t_get_context_pool_size(L);
    if (strcmp(key, "printf_buf_size") == 0) return l_sdtx_desc_t_get_printf_buf_size(L);
    if (strcmp(key, "fonts") == 0) return l_sdtx_desc_t_get_fonts(L);
    if (strcmp(key, "context") == 0) return l_sdtx_desc_t_get_context(L);
    if (strcmp(key, "allocator") == 0) return l_sdtx_desc_t_get_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sdtx_desc_t_get_logger(L);
    return 0;
}

static int l_sdtx_desc_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "context_pool_size") == 0) return l_sdtx_desc_t_set_context_pool_size(L);
    if (strcmp(key, "printf_buf_size") == 0) return l_sdtx_desc_t_set_printf_buf_size(L);
    if (strcmp(key, "fonts") == 0) return l_sdtx_desc_t_set_fonts(L);
    if (strcmp(key, "context") == 0) return l_sdtx_desc_t_set_context(L);
    if (strcmp(key, "allocator") == 0) return l_sdtx_desc_t_set_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sdtx_desc_t_set_logger(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sdtx_setup(lua_State *L) {
    const sdtx_desc_t* desc = (const sdtx_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sdtx_setup(desc);
    return 0;
}

static int l_sdtx_shutdown(lua_State *L) {
    sdtx_shutdown();
    return 0;
}

static int l_sdtx_font_kc853(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_kc853();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_kc854(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_kc854();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_z1013(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_z1013();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_cpc(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_cpc();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_c64(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_c64();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_font_oric(lua_State *L) {
    sdtx_font_desc_t result = sdtx_font_oric();
    sdtx_font_desc_t* ud = (sdtx_font_desc_t*)lua_newuserdatauv(L, sizeof(sdtx_font_desc_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.FontDesc");
    return 1;
}

static int l_sdtx_make_context(lua_State *L) {
    const sdtx_context_desc_t* desc = (const sdtx_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    sdtx_context result = sdtx_make_context(desc);
    sdtx_context* ud = (sdtx_context*)lua_newuserdatauv(L, sizeof(sdtx_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sdtx_destroy_context(lua_State *L) {
    sdtx_context* ctx_ptr = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    sdtx_context ctx = *ctx_ptr;
    sdtx_destroy_context(ctx);
    return 0;
}

static int l_sdtx_set_context(lua_State *L) {
    sdtx_context* ctx_ptr = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    sdtx_context ctx = *ctx_ptr;
    sdtx_set_context(ctx);
    return 0;
}

static int l_sdtx_get_context(lua_State *L) {
    sdtx_context result = sdtx_get_context();
    sdtx_context* ud = (sdtx_context*)lua_newuserdatauv(L, sizeof(sdtx_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sdtx_default_context(lua_State *L) {
    sdtx_context result = sdtx_default_context();
    sdtx_context* ud = (sdtx_context*)lua_newuserdatauv(L, sizeof(sdtx_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sdtx_draw(lua_State *L) {
    sdtx_draw();
    return 0;
}

static int l_sdtx_context_draw(lua_State *L) {
    sdtx_context* ctx_ptr = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    sdtx_context ctx = *ctx_ptr;
    sdtx_context_draw(ctx);
    return 0;
}

static int l_sdtx_draw_layer(lua_State *L) {
    int layer_id = (int)luaL_checkinteger(L, 1);
    sdtx_draw_layer(layer_id);
    return 0;
}

static int l_sdtx_context_draw_layer(lua_State *L) {
    sdtx_context* ctx_ptr = (sdtx_context*)luaL_checkudata(L, 1, "sokol.Context");
    sdtx_context ctx = *ctx_ptr;
    int layer_id = (int)luaL_checkinteger(L, 2);
    sdtx_context_draw_layer(ctx, layer_id);
    return 0;
}

static int l_sdtx_layer(lua_State *L) {
    int layer_id = (int)luaL_checkinteger(L, 1);
    sdtx_layer(layer_id);
    return 0;
}

static int l_sdtx_font(lua_State *L) {
    int font_index = (int)luaL_checkinteger(L, 1);
    sdtx_font(font_index);
    return 0;
}

static int l_sdtx_canvas(lua_State *L) {
    float w = (float)luaL_checknumber(L, 1);
    float h = (float)luaL_checknumber(L, 2);
    sdtx_canvas(w, h);
    return 0;
}

static int l_sdtx_origin(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    sdtx_origin(x, y);
    return 0;
}

static int l_sdtx_home(lua_State *L) {
    sdtx_home();
    return 0;
}

static int l_sdtx_pos(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    sdtx_pos(x, y);
    return 0;
}

static int l_sdtx_pos_x(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    sdtx_pos_x(x);
    return 0;
}

static int l_sdtx_pos_y(lua_State *L) {
    float y = (float)luaL_checknumber(L, 1);
    sdtx_pos_y(y);
    return 0;
}

static int l_sdtx_move(lua_State *L) {
    float dx = (float)luaL_checknumber(L, 1);
    float dy = (float)luaL_checknumber(L, 2);
    sdtx_move(dx, dy);
    return 0;
}

static int l_sdtx_move_x(lua_State *L) {
    float dx = (float)luaL_checknumber(L, 1);
    sdtx_move_x(dx);
    return 0;
}

static int l_sdtx_move_y(lua_State *L) {
    float dy = (float)luaL_checknumber(L, 1);
    sdtx_move_y(dy);
    return 0;
}

static int l_sdtx_crlf(lua_State *L) {
    sdtx_crlf();
    return 0;
}

static int l_sdtx_color3b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    sdtx_color3b(r, g, b);
    return 0;
}

static int l_sdtx_color3f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    sdtx_color3f(r, g, b);
    return 0;
}

static int l_sdtx_color4b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 4);
    sdtx_color4b(r, g, b, a);
    return 0;
}

static int l_sdtx_color4f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    float a = (float)luaL_checknumber(L, 4);
    sdtx_color4f(r, g, b, a);
    return 0;
}

static int l_sdtx_color1i(lua_State *L) {
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 1);
    sdtx_color1i(rgba);
    return 0;
}

static int l_sdtx_putc(lua_State *L) {
    /* TODO: get char */ void* c = NULL;
    sdtx_putc(c);
    return 0;
}

static int l_sdtx_puts(lua_State *L) {
    const char* str = luaL_checkstring(L, 1);
    sdtx_puts(str);
    return 0;
}

static int l_sdtx_putr(lua_State *L) {
    const char* str = luaL_checkstring(L, 1);
    int len = (int)luaL_checkinteger(L, 2);
    sdtx_putr(str, len);
    return 0;
}

static int l_sdtx_get_cleared_fmt_buffer(lua_State *L) {
    sdtx_range result = sdtx_get_cleared_fmt_buffer();
    sdtx_range* ud = (sdtx_range*)lua_newuserdatauv(L, sizeof(sdtx_range), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static void register_sdtx_log_item_t(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SDTX_LOGITEM_OK);
    lua_setfield(L, -2, "LOGITEM_OK");
    lua_pushinteger(L, SDTX_LOGITEM_MALLOC_FAILED);
    lua_setfield(L, -2, "LOGITEM_MALLOC_FAILED");
    lua_pushinteger(L, SDTX_LOGITEM_ADD_COMMIT_LISTENER_FAILED);
    lua_setfield(L, -2, "LOGITEM_ADD_COMMIT_LISTENER_FAILED");
    lua_pushinteger(L, SDTX_LOGITEM_COMMAND_BUFFER_FULL);
    lua_setfield(L, -2, "LOGITEM_COMMAND_BUFFER_FULL");
    lua_pushinteger(L, SDTX_LOGITEM_CONTEXT_POOL_EXHAUSTED);
    lua_setfield(L, -2, "LOGITEM_CONTEXT_POOL_EXHAUSTED");
    lua_pushinteger(L, SDTX_LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT);
    lua_setfield(L, -2, "LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT");
    lua_setfield(L, -2, "LogItem");
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Logger");
    lua_pushcfunction(L, l_sdtx_logger_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_logger_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Context");
    lua_pushcfunction(L, l_sdtx_context__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_context__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Range");
    lua_pushcfunction(L, l_sdtx_range__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_range__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.FontDesc");
    lua_pushcfunction(L, l_sdtx_font_desc_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_font_desc_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ContextDesc");
    lua_pushcfunction(L, l_sdtx_context_desc_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_context_desc_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Allocator");
    lua_pushcfunction(L, l_sdtx_allocator_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_allocator_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Desc");
    lua_pushcfunction(L, l_sdtx_desc_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sdtx_desc_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg debugtext_funcs[] = {
    {"setup", l_sdtx_setup},
    {"shutdown", l_sdtx_shutdown},
    {"font_kc853", l_sdtx_font_kc853},
    {"font_kc854", l_sdtx_font_kc854},
    {"font_z1013", l_sdtx_font_z1013},
    {"font_cpc", l_sdtx_font_cpc},
    {"font_c64", l_sdtx_font_c64},
    {"font_oric", l_sdtx_font_oric},
    {"make_context", l_sdtx_make_context},
    {"destroy_context", l_sdtx_destroy_context},
    {"set_context", l_sdtx_set_context},
    {"get_context", l_sdtx_get_context},
    {"default_context", l_sdtx_default_context},
    {"draw", l_sdtx_draw},
    {"context_draw", l_sdtx_context_draw},
    {"draw_layer", l_sdtx_draw_layer},
    {"context_draw_layer", l_sdtx_context_draw_layer},
    {"layer", l_sdtx_layer},
    {"font", l_sdtx_font},
    {"canvas", l_sdtx_canvas},
    {"origin", l_sdtx_origin},
    {"home", l_sdtx_home},
    {"pos", l_sdtx_pos},
    {"pos_x", l_sdtx_pos_x},
    {"pos_y", l_sdtx_pos_y},
    {"move", l_sdtx_move},
    {"move_x", l_sdtx_move_x},
    {"move_y", l_sdtx_move_y},
    {"crlf", l_sdtx_crlf},
    {"color3b", l_sdtx_color3b},
    {"color3f", l_sdtx_color3f},
    {"color4b", l_sdtx_color4b},
    {"color4f", l_sdtx_color4f},
    {"color1i", l_sdtx_color1i},
    {"putc", l_sdtx_putc},
    {"puts", l_sdtx_puts},
    {"putr", l_sdtx_putr},
    {"get_cleared_fmt_buffer", l_sdtx_get_cleared_fmt_buffer},
    {"Logger", l_sdtx_logger_t_new},
    {"Context", l_sdtx_context_new},
    {"Range", l_sdtx_range_new},
    {"FontDesc", l_sdtx_font_desc_t_new},
    {"ContextDesc", l_sdtx_context_desc_t_new},
    {"Allocator", l_sdtx_allocator_t_new},
    {"Desc", l_sdtx_desc_t_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_debugtext(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, debugtext_funcs);
    register_sdtx_log_item_t(L);
    return 1;
}
