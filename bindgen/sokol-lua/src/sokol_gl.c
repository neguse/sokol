/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_gfx.h"
#include "sokol_gl.h"

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

static int l_sgl_logger_t_new(lua_State *L) {
    sgl_logger_t* ud = (sgl_logger_t*)lua_newuserdatauv(L, sizeof(sgl_logger_t), 0);
    memset(ud, 0, sizeof(sgl_logger_t));
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sgl_logger_t_get_user_data(lua_State *L) {
    sgl_logger_t* self = (sgl_logger_t*)luaL_checkudata(L, 1, "sokol.Logger");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sgl_logger_t_set_user_data(lua_State *L) {
    sgl_logger_t* self = (sgl_logger_t*)luaL_checkudata(L, 1, "sokol.Logger");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sgl_logger_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sgl_logger_t_get_user_data(L);
    return 0;
}

static int l_sgl_logger_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sgl_logger_t_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_pipeline_new(lua_State *L) {
    sgl_pipeline* ud = (sgl_pipeline*)lua_newuserdatauv(L, sizeof(sgl_pipeline), 0);
    memset(ud, 0, sizeof(sgl_pipeline));
    luaL_setmetatable(L, "sokol.Pipeline");
    return 1;
}

static int l_sgl_pipeline_get_id(lua_State *L) {
    sgl_pipeline* self = (sgl_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sgl_pipeline_set_id(lua_State *L) {
    sgl_pipeline* self = (sgl_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_pipeline__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sgl_pipeline_get_id(L);
    return 0;
}

static int l_sgl_pipeline__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sgl_pipeline_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_context_new(lua_State *L) {
    sgl_context* ud = (sgl_context*)lua_newuserdatauv(L, sizeof(sgl_context), 0);
    memset(ud, 0, sizeof(sgl_context));
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sgl_context_get_id(lua_State *L) {
    sgl_context* self = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    lua_pushinteger(L, (lua_Integer)self->id);
    return 1;
}

static int l_sgl_context_set_id(lua_State *L) {
    sgl_context* self = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    self->id = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sgl_context_get_id(L);
    return 0;
}

static int l_sgl_context__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "id") == 0) return l_sgl_context_set_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_error_t_new(lua_State *L) {
    sgl_error_t* ud = (sgl_error_t*)lua_newuserdatauv(L, sizeof(sgl_error_t), 0);
    memset(ud, 0, sizeof(sgl_error_t));
    luaL_setmetatable(L, "sokol.Error");
    return 1;
}

static int l_sgl_error_t_get_any(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->any);
    return 1;
}

static int l_sgl_error_t_set_any(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->any = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_vertices_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->vertices_full);
    return 1;
}

static int l_sgl_error_t_set_vertices_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->vertices_full = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_uniforms_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->uniforms_full);
    return 1;
}

static int l_sgl_error_t_set_uniforms_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->uniforms_full = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_commands_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->commands_full);
    return 1;
}

static int l_sgl_error_t_set_commands_full(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->commands_full = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_stack_overflow(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->stack_overflow);
    return 1;
}

static int l_sgl_error_t_set_stack_overflow(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->stack_overflow = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_stack_underflow(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->stack_underflow);
    return 1;
}

static int l_sgl_error_t_set_stack_underflow(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->stack_underflow = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t_get_no_context(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    lua_pushboolean(L, self->no_context);
    return 1;
}

static int l_sgl_error_t_set_no_context(lua_State *L) {
    sgl_error_t* self = (sgl_error_t*)luaL_checkudata(L, 1, "sokol.Error");
    self->no_context = lua_toboolean(L, 2);
    return 0;
}

static int l_sgl_error_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "any") == 0) return l_sgl_error_t_get_any(L);
    if (strcmp(key, "vertices_full") == 0) return l_sgl_error_t_get_vertices_full(L);
    if (strcmp(key, "uniforms_full") == 0) return l_sgl_error_t_get_uniforms_full(L);
    if (strcmp(key, "commands_full") == 0) return l_sgl_error_t_get_commands_full(L);
    if (strcmp(key, "stack_overflow") == 0) return l_sgl_error_t_get_stack_overflow(L);
    if (strcmp(key, "stack_underflow") == 0) return l_sgl_error_t_get_stack_underflow(L);
    if (strcmp(key, "no_context") == 0) return l_sgl_error_t_get_no_context(L);
    return 0;
}

static int l_sgl_error_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "any") == 0) return l_sgl_error_t_set_any(L);
    if (strcmp(key, "vertices_full") == 0) return l_sgl_error_t_set_vertices_full(L);
    if (strcmp(key, "uniforms_full") == 0) return l_sgl_error_t_set_uniforms_full(L);
    if (strcmp(key, "commands_full") == 0) return l_sgl_error_t_set_commands_full(L);
    if (strcmp(key, "stack_overflow") == 0) return l_sgl_error_t_set_stack_overflow(L);
    if (strcmp(key, "stack_underflow") == 0) return l_sgl_error_t_set_stack_underflow(L);
    if (strcmp(key, "no_context") == 0) return l_sgl_error_t_set_no_context(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_context_desc_t_new(lua_State *L) {
    sgl_context_desc_t* ud = (sgl_context_desc_t*)lua_newuserdatauv(L, sizeof(sgl_context_desc_t), 0);
    memset(ud, 0, sizeof(sgl_context_desc_t));
    luaL_setmetatable(L, "sokol.ContextDesc");
    return 1;
}

static int l_sgl_context_desc_t_get_max_vertices(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->max_vertices);
    return 1;
}

static int l_sgl_context_desc_t_set_max_vertices(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->max_vertices = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context_desc_t_get_max_commands(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->max_commands);
    return 1;
}

static int l_sgl_context_desc_t_set_max_commands(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->max_commands = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context_desc_t_get_color_format(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sgl_context_desc_t_set_color_format(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->color_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context_desc_t_get_depth_format(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sgl_context_desc_t_set_depth_format(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->depth_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context_desc_t_get_sample_count(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sgl_context_desc_t_set_sample_count(lua_State *L) {
    sgl_context_desc_t* self = (sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_context_desc_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_vertices") == 0) return l_sgl_context_desc_t_get_max_vertices(L);
    if (strcmp(key, "max_commands") == 0) return l_sgl_context_desc_t_get_max_commands(L);
    if (strcmp(key, "color_format") == 0) return l_sgl_context_desc_t_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sgl_context_desc_t_get_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sgl_context_desc_t_get_sample_count(L);
    return 0;
}

static int l_sgl_context_desc_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_vertices") == 0) return l_sgl_context_desc_t_set_max_vertices(L);
    if (strcmp(key, "max_commands") == 0) return l_sgl_context_desc_t_set_max_commands(L);
    if (strcmp(key, "color_format") == 0) return l_sgl_context_desc_t_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sgl_context_desc_t_set_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sgl_context_desc_t_set_sample_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_allocator_t_new(lua_State *L) {
    sgl_allocator_t* ud = (sgl_allocator_t*)lua_newuserdatauv(L, sizeof(sgl_allocator_t), 0);
    memset(ud, 0, sizeof(sgl_allocator_t));
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sgl_allocator_t_get_user_data(lua_State *L) {
    sgl_allocator_t* self = (sgl_allocator_t*)luaL_checkudata(L, 1, "sokol.Allocator");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sgl_allocator_t_set_user_data(lua_State *L) {
    sgl_allocator_t* self = (sgl_allocator_t*)luaL_checkudata(L, 1, "sokol.Allocator");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sgl_allocator_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sgl_allocator_t_get_user_data(L);
    return 0;
}

static int l_sgl_allocator_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sgl_allocator_t_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_desc_t_new(lua_State *L) {
    sgl_desc_t* ud = (sgl_desc_t*)lua_newuserdatauv(L, sizeof(sgl_desc_t), 0);
    memset(ud, 0, sizeof(sgl_desc_t));
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_sgl_desc_t_get_max_vertices(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->max_vertices);
    return 1;
}

static int l_sgl_desc_t_set_max_vertices(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->max_vertices = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_max_commands(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->max_commands);
    return 1;
}

static int l_sgl_desc_t_set_max_commands(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->max_commands = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_context_pool_size(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->context_pool_size);
    return 1;
}

static int l_sgl_desc_t_set_context_pool_size(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->context_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_pipeline_pool_size(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->pipeline_pool_size);
    return 1;
}

static int l_sgl_desc_t_set_pipeline_pool_size(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->pipeline_pool_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_color_format(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sgl_desc_t_set_color_format(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->color_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_depth_format(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sgl_desc_t_set_depth_format(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->depth_format = (sg_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_sample_count(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sgl_desc_t_set_sample_count(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_face_winding(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->face_winding);
    return 1;
}

static int l_sgl_desc_t_set_face_winding(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    self->face_winding = (sg_face_winding)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sgl_desc_t_get_allocator(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sgl_allocator_t* ud = (sgl_allocator_t*)lua_newuserdatauv(L, sizeof(sgl_allocator_t), 0);
    *ud = self->allocator;
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sgl_desc_t_set_allocator(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sgl_allocator_t* val = (sgl_allocator_t*)luaL_checkudata(L, 2, "sokol.Allocator");
    self->allocator = *val;
    return 0;
}

static int l_sgl_desc_t_get_logger(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sgl_logger_t* ud = (sgl_logger_t*)lua_newuserdatauv(L, sizeof(sgl_logger_t), 0);
    *ud = self->logger;
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sgl_desc_t_set_logger(lua_State *L) {
    sgl_desc_t* self = (sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sgl_logger_t* val = (sgl_logger_t*)luaL_checkudata(L, 2, "sokol.Logger");
    self->logger = *val;
    return 0;
}

static int l_sgl_desc_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_vertices") == 0) return l_sgl_desc_t_get_max_vertices(L);
    if (strcmp(key, "max_commands") == 0) return l_sgl_desc_t_get_max_commands(L);
    if (strcmp(key, "context_pool_size") == 0) return l_sgl_desc_t_get_context_pool_size(L);
    if (strcmp(key, "pipeline_pool_size") == 0) return l_sgl_desc_t_get_pipeline_pool_size(L);
    if (strcmp(key, "color_format") == 0) return l_sgl_desc_t_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sgl_desc_t_get_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sgl_desc_t_get_sample_count(L);
    if (strcmp(key, "face_winding") == 0) return l_sgl_desc_t_get_face_winding(L);
    if (strcmp(key, "allocator") == 0) return l_sgl_desc_t_get_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sgl_desc_t_get_logger(L);
    return 0;
}

static int l_sgl_desc_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "max_vertices") == 0) return l_sgl_desc_t_set_max_vertices(L);
    if (strcmp(key, "max_commands") == 0) return l_sgl_desc_t_set_max_commands(L);
    if (strcmp(key, "context_pool_size") == 0) return l_sgl_desc_t_set_context_pool_size(L);
    if (strcmp(key, "pipeline_pool_size") == 0) return l_sgl_desc_t_set_pipeline_pool_size(L);
    if (strcmp(key, "color_format") == 0) return l_sgl_desc_t_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sgl_desc_t_set_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sgl_desc_t_set_sample_count(L);
    if (strcmp(key, "face_winding") == 0) return l_sgl_desc_t_set_face_winding(L);
    if (strcmp(key, "allocator") == 0) return l_sgl_desc_t_set_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sgl_desc_t_set_logger(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sgl_setup(lua_State *L) {
    const sgl_desc_t* desc = (const sgl_desc_t*)luaL_checkudata(L, 1, "sokol.Desc");
    sgl_setup(desc);
    return 0;
}

static int l_sgl_shutdown(lua_State *L) {
    sgl_shutdown();
    return 0;
}

static int l_sgl_rad(lua_State *L) {
    float deg = (float)luaL_checknumber(L, 1);
    float result = sgl_rad(deg);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sgl_deg(lua_State *L) {
    float rad = (float)luaL_checknumber(L, 1);
    float result = sgl_deg(rad);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sgl_error(lua_State *L) {
    sgl_error_t result = sgl_error();
    sgl_error_t* ud = (sgl_error_t*)lua_newuserdatauv(L, sizeof(sgl_error_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Error");
    return 1;
}

static int l_sgl_context_error(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    sgl_error_t result = sgl_context_error(ctx);
    sgl_error_t* ud = (sgl_error_t*)lua_newuserdatauv(L, sizeof(sgl_error_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Error");
    return 1;
}

static int l_sgl_make_context(lua_State *L) {
    const sgl_context_desc_t* desc = (const sgl_context_desc_t*)luaL_checkudata(L, 1, "sokol.ContextDesc");
    sgl_context result = sgl_make_context(desc);
    sgl_context* ud = (sgl_context*)lua_newuserdatauv(L, sizeof(sgl_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sgl_destroy_context(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    sgl_destroy_context(ctx);
    return 0;
}

static int l_sgl_set_context(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    sgl_set_context(ctx);
    return 0;
}

static int l_sgl_get_context(lua_State *L) {
    sgl_context result = sgl_get_context();
    sgl_context* ud = (sgl_context*)lua_newuserdatauv(L, sizeof(sgl_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sgl_default_context(lua_State *L) {
    sgl_context result = sgl_default_context();
    sgl_context* ud = (sgl_context*)lua_newuserdatauv(L, sizeof(sgl_context), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Context");
    return 1;
}

static int l_sgl_num_vertices(lua_State *L) {
    int result = sgl_num_vertices();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sgl_num_commands(lua_State *L) {
    int result = sgl_num_commands();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sgl_draw(lua_State *L) {
    sgl_draw();
    return 0;
}

static int l_sgl_context_draw(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    sgl_context_draw(ctx);
    return 0;
}

static int l_sgl_draw_layer(lua_State *L) {
    int layer_id = (int)luaL_checkinteger(L, 1);
    sgl_draw_layer(layer_id);
    return 0;
}

static int l_sgl_context_draw_layer(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    int layer_id = (int)luaL_checkinteger(L, 2);
    sgl_context_draw_layer(ctx, layer_id);
    return 0;
}

static int l_sgl_make_pipeline(lua_State *L) {
    const sg_pipeline_desc* desc = (const sg_pipeline_desc*)luaL_checkudata(L, 1, "sokol.SgPipelineDesc");
    sgl_pipeline result = sgl_make_pipeline(desc);
    sgl_pipeline* ud = (sgl_pipeline*)lua_newuserdatauv(L, sizeof(sgl_pipeline), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Pipeline");
    return 1;
}

static int l_sgl_context_make_pipeline(lua_State *L) {
    sgl_context* ctx_ptr = (sgl_context*)luaL_checkudata(L, 1, "sokol.Context");
    sgl_context ctx = *ctx_ptr;
    const sg_pipeline_desc* desc = (const sg_pipeline_desc*)luaL_checkudata(L, 2, "sokol.SgPipelineDesc");
    sgl_pipeline result = sgl_context_make_pipeline(ctx, desc);
    sgl_pipeline* ud = (sgl_pipeline*)lua_newuserdatauv(L, sizeof(sgl_pipeline), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Pipeline");
    return 1;
}

static int l_sgl_destroy_pipeline(lua_State *L) {
    sgl_pipeline* pip_ptr = (sgl_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sgl_pipeline pip = *pip_ptr;
    sgl_destroy_pipeline(pip);
    return 0;
}

static int l_sgl_defaults(lua_State *L) {
    sgl_defaults();
    return 0;
}

static int l_sgl_viewport(lua_State *L) {
    int x = (int)luaL_checkinteger(L, 1);
    int y = (int)luaL_checkinteger(L, 2);
    int w = (int)luaL_checkinteger(L, 3);
    int h = (int)luaL_checkinteger(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sgl_viewport(x, y, w, h, origin_top_left);
    return 0;
}

static int l_sgl_viewportf(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float w = (float)luaL_checknumber(L, 3);
    float h = (float)luaL_checknumber(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sgl_viewportf(x, y, w, h, origin_top_left);
    return 0;
}

static int l_sgl_scissor_rect(lua_State *L) {
    int x = (int)luaL_checkinteger(L, 1);
    int y = (int)luaL_checkinteger(L, 2);
    int w = (int)luaL_checkinteger(L, 3);
    int h = (int)luaL_checkinteger(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sgl_scissor_rect(x, y, w, h, origin_top_left);
    return 0;
}

static int l_sgl_scissor_rectf(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float w = (float)luaL_checknumber(L, 3);
    float h = (float)luaL_checknumber(L, 4);
    bool origin_top_left = lua_toboolean(L, 5);
    sgl_scissor_rectf(x, y, w, h, origin_top_left);
    return 0;
}

static int l_sgl_enable_texture(lua_State *L) {
    sgl_enable_texture();
    return 0;
}

static int l_sgl_disable_texture(lua_State *L) {
    sgl_disable_texture();
    return 0;
}

static int l_sgl_texture(lua_State *L) {
    sg_view* tex_view_ptr = (sg_view*)luaL_checkudata(L, 1, "sokol.SgView");
    sg_view tex_view = *tex_view_ptr;
    sg_sampler* smp_ptr = (sg_sampler*)luaL_checkudata(L, 2, "sokol.SgSampler");
    sg_sampler smp = *smp_ptr;
    sgl_texture(tex_view, smp);
    return 0;
}

static int l_sgl_layer(lua_State *L) {
    int layer_id = (int)luaL_checkinteger(L, 1);
    sgl_layer(layer_id);
    return 0;
}

static int l_sgl_load_default_pipeline(lua_State *L) {
    sgl_load_default_pipeline();
    return 0;
}

static int l_sgl_load_pipeline(lua_State *L) {
    sgl_pipeline* pip_ptr = (sgl_pipeline*)luaL_checkudata(L, 1, "sokol.Pipeline");
    sgl_pipeline pip = *pip_ptr;
    sgl_load_pipeline(pip);
    return 0;
}

static int l_sgl_push_pipeline(lua_State *L) {
    sgl_push_pipeline();
    return 0;
}

static int l_sgl_pop_pipeline(lua_State *L) {
    sgl_pop_pipeline();
    return 0;
}

static int l_sgl_matrix_mode_modelview(lua_State *L) {
    sgl_matrix_mode_modelview();
    return 0;
}

static int l_sgl_matrix_mode_projection(lua_State *L) {
    sgl_matrix_mode_projection();
    return 0;
}

static int l_sgl_matrix_mode_texture(lua_State *L) {
    sgl_matrix_mode_texture();
    return 0;
}

static int l_sgl_load_identity(lua_State *L) {
    sgl_load_identity();
    return 0;
}

static int l_sgl_load_matrix(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sgl_load_matrix(m);
    return 0;
}

static int l_sgl_load_transpose_matrix(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sgl_load_transpose_matrix(m);
    return 0;
}

static int l_sgl_mult_matrix(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sgl_mult_matrix(m);
    return 0;
}

static int l_sgl_mult_transpose_matrix(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sgl_mult_transpose_matrix(m);
    return 0;
}

static int l_sgl_rotate(lua_State *L) {
    float angle_rad = (float)luaL_checknumber(L, 1);
    float x = (float)luaL_checknumber(L, 2);
    float y = (float)luaL_checknumber(L, 3);
    float z = (float)luaL_checknumber(L, 4);
    sgl_rotate(angle_rad, x, y, z);
    return 0;
}

static int l_sgl_scale(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    sgl_scale(x, y, z);
    return 0;
}

static int l_sgl_translate(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    sgl_translate(x, y, z);
    return 0;
}

static int l_sgl_frustum(lua_State *L) {
    float l = (float)luaL_checknumber(L, 1);
    float r = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    float t = (float)luaL_checknumber(L, 4);
    float n = (float)luaL_checknumber(L, 5);
    float f = (float)luaL_checknumber(L, 6);
    sgl_frustum(l, r, b, t, n, f);
    return 0;
}

static int l_sgl_ortho(lua_State *L) {
    float l = (float)luaL_checknumber(L, 1);
    float r = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    float t = (float)luaL_checknumber(L, 4);
    float n = (float)luaL_checknumber(L, 5);
    float f = (float)luaL_checknumber(L, 6);
    sgl_ortho(l, r, b, t, n, f);
    return 0;
}

static int l_sgl_perspective(lua_State *L) {
    float fov_y = (float)luaL_checknumber(L, 1);
    float aspect = (float)luaL_checknumber(L, 2);
    float z_near = (float)luaL_checknumber(L, 3);
    float z_far = (float)luaL_checknumber(L, 4);
    sgl_perspective(fov_y, aspect, z_near, z_far);
    return 0;
}

static int l_sgl_lookat(lua_State *L) {
    float eye_x = (float)luaL_checknumber(L, 1);
    float eye_y = (float)luaL_checknumber(L, 2);
    float eye_z = (float)luaL_checknumber(L, 3);
    float center_x = (float)luaL_checknumber(L, 4);
    float center_y = (float)luaL_checknumber(L, 5);
    float center_z = (float)luaL_checknumber(L, 6);
    float up_x = (float)luaL_checknumber(L, 7);
    float up_y = (float)luaL_checknumber(L, 8);
    float up_z = (float)luaL_checknumber(L, 9);
    sgl_lookat(eye_x, eye_y, eye_z, center_x, center_y, center_z, up_x, up_y, up_z);
    return 0;
}

static int l_sgl_push_matrix(lua_State *L) {
    sgl_push_matrix();
    return 0;
}

static int l_sgl_pop_matrix(lua_State *L) {
    sgl_pop_matrix();
    return 0;
}

static int l_sgl_t2f(lua_State *L) {
    float u = (float)luaL_checknumber(L, 1);
    float v = (float)luaL_checknumber(L, 2);
    sgl_t2f(u, v);
    return 0;
}

static int l_sgl_c3f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    sgl_c3f(r, g, b);
    return 0;
}

static int l_sgl_c4f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    float a = (float)luaL_checknumber(L, 4);
    sgl_c4f(r, g, b, a);
    return 0;
}

static int l_sgl_c3b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    sgl_c3b(r, g, b);
    return 0;
}

static int l_sgl_c4b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 4);
    sgl_c4b(r, g, b, a);
    return 0;
}

static int l_sgl_c1i(lua_State *L) {
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 1);
    sgl_c1i(rgba);
    return 0;
}

static int l_sgl_point_size(lua_State *L) {
    float s = (float)luaL_checknumber(L, 1);
    sgl_point_size(s);
    return 0;
}

static int l_sgl_begin_points(lua_State *L) {
    sgl_begin_points();
    return 0;
}

static int l_sgl_begin_lines(lua_State *L) {
    sgl_begin_lines();
    return 0;
}

static int l_sgl_begin_line_strip(lua_State *L) {
    sgl_begin_line_strip();
    return 0;
}

static int l_sgl_begin_triangles(lua_State *L) {
    sgl_begin_triangles();
    return 0;
}

static int l_sgl_begin_triangle_strip(lua_State *L) {
    sgl_begin_triangle_strip();
    return 0;
}

static int l_sgl_begin_quads(lua_State *L) {
    sgl_begin_quads();
    return 0;
}

static int l_sgl_v2f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    sgl_v2f(x, y);
    return 0;
}

static int l_sgl_v3f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    sgl_v3f(x, y, z);
    return 0;
}

static int l_sgl_v2f_t2f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    sgl_v2f_t2f(x, y, u, v);
    return 0;
}

static int l_sgl_v3f_t2f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    sgl_v3f_t2f(x, y, z, u, v);
    return 0;
}

static int l_sgl_v2f_c3f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float r = (float)luaL_checknumber(L, 3);
    float g = (float)luaL_checknumber(L, 4);
    float b = (float)luaL_checknumber(L, 5);
    sgl_v2f_c3f(x, y, r, g, b);
    return 0;
}

static int l_sgl_v2f_c3b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 3);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 4);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 5);
    sgl_v2f_c3b(x, y, r, g, b);
    return 0;
}

static int l_sgl_v2f_c4f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float r = (float)luaL_checknumber(L, 3);
    float g = (float)luaL_checknumber(L, 4);
    float b = (float)luaL_checknumber(L, 5);
    float a = (float)luaL_checknumber(L, 6);
    sgl_v2f_c4f(x, y, r, g, b, a);
    return 0;
}

static int l_sgl_v2f_c4b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 3);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 4);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 5);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 6);
    sgl_v2f_c4b(x, y, r, g, b, a);
    return 0;
}

static int l_sgl_v2f_c1i(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 3);
    sgl_v2f_c1i(x, y, rgba);
    return 0;
}

static int l_sgl_v3f_c3f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float r = (float)luaL_checknumber(L, 4);
    float g = (float)luaL_checknumber(L, 5);
    float b = (float)luaL_checknumber(L, 6);
    sgl_v3f_c3f(x, y, z, r, g, b);
    return 0;
}

static int l_sgl_v3f_c3b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 4);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 5);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 6);
    sgl_v3f_c3b(x, y, z, r, g, b);
    return 0;
}

static int l_sgl_v3f_c4f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float r = (float)luaL_checknumber(L, 4);
    float g = (float)luaL_checknumber(L, 5);
    float b = (float)luaL_checknumber(L, 6);
    float a = (float)luaL_checknumber(L, 7);
    sgl_v3f_c4f(x, y, z, r, g, b, a);
    return 0;
}

static int l_sgl_v3f_c4b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 4);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 5);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 6);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 7);
    sgl_v3f_c4b(x, y, z, r, g, b, a);
    return 0;
}

static int l_sgl_v3f_c1i(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 4);
    sgl_v3f_c1i(x, y, z, rgba);
    return 0;
}

static int l_sgl_v2f_t2f_c3f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    float r = (float)luaL_checknumber(L, 5);
    float g = (float)luaL_checknumber(L, 6);
    float b = (float)luaL_checknumber(L, 7);
    sgl_v2f_t2f_c3f(x, y, u, v, r, g, b);
    return 0;
}

static int l_sgl_v2f_t2f_c3b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 5);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 6);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 7);
    sgl_v2f_t2f_c3b(x, y, u, v, r, g, b);
    return 0;
}

static int l_sgl_v2f_t2f_c4f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    float r = (float)luaL_checknumber(L, 5);
    float g = (float)luaL_checknumber(L, 6);
    float b = (float)luaL_checknumber(L, 7);
    float a = (float)luaL_checknumber(L, 8);
    sgl_v2f_t2f_c4f(x, y, u, v, r, g, b, a);
    return 0;
}

static int l_sgl_v2f_t2f_c4b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 5);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 6);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 7);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 8);
    sgl_v2f_t2f_c4b(x, y, u, v, r, g, b, a);
    return 0;
}

static int l_sgl_v2f_t2f_c1i(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float u = (float)luaL_checknumber(L, 3);
    float v = (float)luaL_checknumber(L, 4);
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 5);
    sgl_v2f_t2f_c1i(x, y, u, v, rgba);
    return 0;
}

static int l_sgl_v3f_t2f_c3f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    float r = (float)luaL_checknumber(L, 6);
    float g = (float)luaL_checknumber(L, 7);
    float b = (float)luaL_checknumber(L, 8);
    sgl_v3f_t2f_c3f(x, y, z, u, v, r, g, b);
    return 0;
}

static int l_sgl_v3f_t2f_c3b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 6);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 7);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 8);
    sgl_v3f_t2f_c3b(x, y, z, u, v, r, g, b);
    return 0;
}

static int l_sgl_v3f_t2f_c4f(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    float r = (float)luaL_checknumber(L, 6);
    float g = (float)luaL_checknumber(L, 7);
    float b = (float)luaL_checknumber(L, 8);
    float a = (float)luaL_checknumber(L, 9);
    sgl_v3f_t2f_c4f(x, y, z, u, v, r, g, b, a);
    return 0;
}

static int l_sgl_v3f_t2f_c4b(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    uint8_t r = (uint8_t)luaL_checkinteger(L, 6);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 7);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 8);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 9);
    sgl_v3f_t2f_c4b(x, y, z, u, v, r, g, b, a);
    return 0;
}

static int l_sgl_v3f_t2f_c1i(lua_State *L) {
    float x = (float)luaL_checknumber(L, 1);
    float y = (float)luaL_checknumber(L, 2);
    float z = (float)luaL_checknumber(L, 3);
    float u = (float)luaL_checknumber(L, 4);
    float v = (float)luaL_checknumber(L, 5);
    uint32_t rgba = (uint32_t)luaL_checkinteger(L, 6);
    sgl_v3f_t2f_c1i(x, y, z, u, v, rgba);
    return 0;
}

static int l_sgl_end(lua_State *L) {
    sgl_end();
    return 0;
}

static void register_sgl_log_item_t(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SGL_LOGITEM_OK);
    lua_setfield(L, -2, "LOGITEM_OK");
    lua_pushinteger(L, SGL_LOGITEM_MALLOC_FAILED);
    lua_setfield(L, -2, "LOGITEM_MALLOC_FAILED");
    lua_pushinteger(L, SGL_LOGITEM_MAKE_PIPELINE_FAILED);
    lua_setfield(L, -2, "LOGITEM_MAKE_PIPELINE_FAILED");
    lua_pushinteger(L, SGL_LOGITEM_PIPELINE_POOL_EXHAUSTED);
    lua_setfield(L, -2, "LOGITEM_PIPELINE_POOL_EXHAUSTED");
    lua_pushinteger(L, SGL_LOGITEM_ADD_COMMIT_LISTENER_FAILED);
    lua_setfield(L, -2, "LOGITEM_ADD_COMMIT_LISTENER_FAILED");
    lua_pushinteger(L, SGL_LOGITEM_CONTEXT_POOL_EXHAUSTED);
    lua_setfield(L, -2, "LOGITEM_CONTEXT_POOL_EXHAUSTED");
    lua_pushinteger(L, SGL_LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT);
    lua_setfield(L, -2, "LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT");
    lua_setfield(L, -2, "LogItem");
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Logger");
    lua_pushcfunction(L, l_sgl_logger_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_logger_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Pipeline");
    lua_pushcfunction(L, l_sgl_pipeline__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_pipeline__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Context");
    lua_pushcfunction(L, l_sgl_context__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_context__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Error");
    lua_pushcfunction(L, l_sgl_error_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_error_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ContextDesc");
    lua_pushcfunction(L, l_sgl_context_desc_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_context_desc_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Allocator");
    lua_pushcfunction(L, l_sgl_allocator_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_allocator_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Desc");
    lua_pushcfunction(L, l_sgl_desc_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sgl_desc_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg gl_funcs[] = {
    {"setup", l_sgl_setup},
    {"shutdown", l_sgl_shutdown},
    {"rad", l_sgl_rad},
    {"deg", l_sgl_deg},
    {"error", l_sgl_error},
    {"context_error", l_sgl_context_error},
    {"make_context", l_sgl_make_context},
    {"destroy_context", l_sgl_destroy_context},
    {"set_context", l_sgl_set_context},
    {"get_context", l_sgl_get_context},
    {"default_context", l_sgl_default_context},
    {"num_vertices", l_sgl_num_vertices},
    {"num_commands", l_sgl_num_commands},
    {"draw", l_sgl_draw},
    {"context_draw", l_sgl_context_draw},
    {"draw_layer", l_sgl_draw_layer},
    {"context_draw_layer", l_sgl_context_draw_layer},
    {"make_pipeline", l_sgl_make_pipeline},
    {"context_make_pipeline", l_sgl_context_make_pipeline},
    {"destroy_pipeline", l_sgl_destroy_pipeline},
    {"defaults", l_sgl_defaults},
    {"viewport", l_sgl_viewport},
    {"viewportf", l_sgl_viewportf},
    {"scissor_rect", l_sgl_scissor_rect},
    {"scissor_rectf", l_sgl_scissor_rectf},
    {"enable_texture", l_sgl_enable_texture},
    {"disable_texture", l_sgl_disable_texture},
    {"texture", l_sgl_texture},
    {"layer", l_sgl_layer},
    {"load_default_pipeline", l_sgl_load_default_pipeline},
    {"load_pipeline", l_sgl_load_pipeline},
    {"push_pipeline", l_sgl_push_pipeline},
    {"pop_pipeline", l_sgl_pop_pipeline},
    {"matrix_mode_modelview", l_sgl_matrix_mode_modelview},
    {"matrix_mode_projection", l_sgl_matrix_mode_projection},
    {"matrix_mode_texture", l_sgl_matrix_mode_texture},
    {"load_identity", l_sgl_load_identity},
    {"load_matrix", l_sgl_load_matrix},
    {"load_transpose_matrix", l_sgl_load_transpose_matrix},
    {"mult_matrix", l_sgl_mult_matrix},
    {"mult_transpose_matrix", l_sgl_mult_transpose_matrix},
    {"rotate", l_sgl_rotate},
    {"scale", l_sgl_scale},
    {"translate", l_sgl_translate},
    {"frustum", l_sgl_frustum},
    {"ortho", l_sgl_ortho},
    {"perspective", l_sgl_perspective},
    {"lookat", l_sgl_lookat},
    {"push_matrix", l_sgl_push_matrix},
    {"pop_matrix", l_sgl_pop_matrix},
    {"t2f", l_sgl_t2f},
    {"c3f", l_sgl_c3f},
    {"c4f", l_sgl_c4f},
    {"c3b", l_sgl_c3b},
    {"c4b", l_sgl_c4b},
    {"c1i", l_sgl_c1i},
    {"point_size", l_sgl_point_size},
    {"begin_points", l_sgl_begin_points},
    {"begin_lines", l_sgl_begin_lines},
    {"begin_line_strip", l_sgl_begin_line_strip},
    {"begin_triangles", l_sgl_begin_triangles},
    {"begin_triangle_strip", l_sgl_begin_triangle_strip},
    {"begin_quads", l_sgl_begin_quads},
    {"v2f", l_sgl_v2f},
    {"v3f", l_sgl_v3f},
    {"v2f_t2f", l_sgl_v2f_t2f},
    {"v3f_t2f", l_sgl_v3f_t2f},
    {"v2f_c3f", l_sgl_v2f_c3f},
    {"v2f_c3b", l_sgl_v2f_c3b},
    {"v2f_c4f", l_sgl_v2f_c4f},
    {"v2f_c4b", l_sgl_v2f_c4b},
    {"v2f_c1i", l_sgl_v2f_c1i},
    {"v3f_c3f", l_sgl_v3f_c3f},
    {"v3f_c3b", l_sgl_v3f_c3b},
    {"v3f_c4f", l_sgl_v3f_c4f},
    {"v3f_c4b", l_sgl_v3f_c4b},
    {"v3f_c1i", l_sgl_v3f_c1i},
    {"v2f_t2f_c3f", l_sgl_v2f_t2f_c3f},
    {"v2f_t2f_c3b", l_sgl_v2f_t2f_c3b},
    {"v2f_t2f_c4f", l_sgl_v2f_t2f_c4f},
    {"v2f_t2f_c4b", l_sgl_v2f_t2f_c4b},
    {"v2f_t2f_c1i", l_sgl_v2f_t2f_c1i},
    {"v3f_t2f_c3f", l_sgl_v3f_t2f_c3f},
    {"v3f_t2f_c3b", l_sgl_v3f_t2f_c3b},
    {"v3f_t2f_c4f", l_sgl_v3f_t2f_c4f},
    {"v3f_t2f_c4b", l_sgl_v3f_t2f_c4b},
    {"v3f_t2f_c1i", l_sgl_v3f_t2f_c1i},
    {"end", l_sgl_end},
    {"Logger", l_sgl_logger_t_new},
    {"Pipeline", l_sgl_pipeline_new},
    {"Context", l_sgl_context_new},
    {"Error", l_sgl_error_t_new},
    {"ContextDesc", l_sgl_context_desc_t_new},
    {"Allocator", l_sgl_allocator_t_new},
    {"Desc", l_sgl_desc_t_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_gl(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, gl_funcs);
    register_sgl_log_item_t(L);
    return 1;
}
