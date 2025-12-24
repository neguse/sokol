/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_gfx.h"
#include "sokol_shape.h"

#ifndef SOKOL_LUA_API
#define SOKOL_LUA_API
#endif

static int l_sshape_range_new(lua_State *L) {
    sshape_range* ud = (sshape_range*)lua_newuserdatauv(L, sizeof(sshape_range), 0);
    memset(ud, 0, sizeof(sshape_range));
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sshape_range_get_ptr(lua_State *L) {
    sshape_range* self = (sshape_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushlightuserdata(L, (void*)self->ptr);
    return 1;
}

static int l_sshape_range_set_ptr(lua_State *L) {
    sshape_range* self = (sshape_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->ptr = lua_touserdata(L, 2);
    return 0;
}

static int l_sshape_range_get_size(lua_State *L) {
    sshape_range* self = (sshape_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sshape_range_set_size(lua_State *L) {
    sshape_range* self = (sshape_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_range__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sshape_range_get_ptr(L);
    if (strcmp(key, "size") == 0) return l_sshape_range_get_size(L);
    return 0;
}

static int l_sshape_range__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sshape_range_set_ptr(L);
    if (strcmp(key, "size") == 0) return l_sshape_range_set_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_mat4_t_new(lua_State *L) {
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    memset(ud, 0, sizeof(sshape_mat4_t));
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_mat4_t_get_m(lua_State *L) {
    sshape_mat4_t* self = (sshape_mat4_t*)luaL_checkudata(L, 1, "sokol.Mat4");
    /* TODO: array field m */
    lua_pushnil(L);
    return 1;
}

static int l_sshape_mat4_t_set_m(lua_State *L) {
    sshape_mat4_t* self = (sshape_mat4_t*)luaL_checkudata(L, 1, "sokol.Mat4");
    /* TODO: array field m */
    return 0;
}

static int l_sshape_mat4_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "m") == 0) return l_sshape_mat4_t_get_m(L);
    return 0;
}

static int l_sshape_mat4_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "m") == 0) return l_sshape_mat4_t_set_m(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_vertex_t_new(lua_State *L) {
    sshape_vertex_t* ud = (sshape_vertex_t*)lua_newuserdatauv(L, sizeof(sshape_vertex_t), 0);
    memset(ud, 0, sizeof(sshape_vertex_t));
    luaL_setmetatable(L, "sokol.Vertex");
    return 1;
}

static int l_sshape_vertex_t_get_x(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushnumber(L, (lua_Number)self->x);
    return 1;
}

static int l_sshape_vertex_t_set_x(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->x = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_y(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushnumber(L, (lua_Number)self->y);
    return 1;
}

static int l_sshape_vertex_t_set_y(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->y = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_z(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushnumber(L, (lua_Number)self->z);
    return 1;
}

static int l_sshape_vertex_t_set_z(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->z = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_normal(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushinteger(L, (lua_Integer)self->normal);
    return 1;
}

static int l_sshape_vertex_t_set_normal(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->normal = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_u(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushinteger(L, (lua_Integer)self->u);
    return 1;
}

static int l_sshape_vertex_t_set_u(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->u = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_v(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushinteger(L, (lua_Integer)self->v);
    return 1;
}

static int l_sshape_vertex_t_set_v(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->v = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_vertex_t_get_color(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_vertex_t_set_color(lua_State *L) {
    sshape_vertex_t* self = (sshape_vertex_t*)luaL_checkudata(L, 1, "sokol.Vertex");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_vertex_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "x") == 0) return l_sshape_vertex_t_get_x(L);
    if (strcmp(key, "y") == 0) return l_sshape_vertex_t_get_y(L);
    if (strcmp(key, "z") == 0) return l_sshape_vertex_t_get_z(L);
    if (strcmp(key, "normal") == 0) return l_sshape_vertex_t_get_normal(L);
    if (strcmp(key, "u") == 0) return l_sshape_vertex_t_get_u(L);
    if (strcmp(key, "v") == 0) return l_sshape_vertex_t_get_v(L);
    if (strcmp(key, "color") == 0) return l_sshape_vertex_t_get_color(L);
    return 0;
}

static int l_sshape_vertex_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "x") == 0) return l_sshape_vertex_t_set_x(L);
    if (strcmp(key, "y") == 0) return l_sshape_vertex_t_set_y(L);
    if (strcmp(key, "z") == 0) return l_sshape_vertex_t_set_z(L);
    if (strcmp(key, "normal") == 0) return l_sshape_vertex_t_set_normal(L);
    if (strcmp(key, "u") == 0) return l_sshape_vertex_t_set_u(L);
    if (strcmp(key, "v") == 0) return l_sshape_vertex_t_set_v(L);
    if (strcmp(key, "color") == 0) return l_sshape_vertex_t_set_color(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_element_range_t_new(lua_State *L) {
    sshape_element_range_t* ud = (sshape_element_range_t*)lua_newuserdatauv(L, sizeof(sshape_element_range_t), 0);
    memset(ud, 0, sizeof(sshape_element_range_t));
    luaL_setmetatable(L, "sokol.ElementRange");
    return 1;
}

static int l_sshape_element_range_t_get_base_element(lua_State *L) {
    sshape_element_range_t* self = (sshape_element_range_t*)luaL_checkudata(L, 1, "sokol.ElementRange");
    lua_pushinteger(L, (lua_Integer)self->base_element);
    return 1;
}

static int l_sshape_element_range_t_set_base_element(lua_State *L) {
    sshape_element_range_t* self = (sshape_element_range_t*)luaL_checkudata(L, 1, "sokol.ElementRange");
    self->base_element = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_element_range_t_get_num_elements(lua_State *L) {
    sshape_element_range_t* self = (sshape_element_range_t*)luaL_checkudata(L, 1, "sokol.ElementRange");
    lua_pushinteger(L, (lua_Integer)self->num_elements);
    return 1;
}

static int l_sshape_element_range_t_set_num_elements(lua_State *L) {
    sshape_element_range_t* self = (sshape_element_range_t*)luaL_checkudata(L, 1, "sokol.ElementRange");
    self->num_elements = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_element_range_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base_element") == 0) return l_sshape_element_range_t_get_base_element(L);
    if (strcmp(key, "num_elements") == 0) return l_sshape_element_range_t_get_num_elements(L);
    return 0;
}

static int l_sshape_element_range_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "base_element") == 0) return l_sshape_element_range_t_set_base_element(L);
    if (strcmp(key, "num_elements") == 0) return l_sshape_element_range_t_set_num_elements(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_sizes_item_t_new(lua_State *L) {
    sshape_sizes_item_t* ud = (sshape_sizes_item_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_item_t), 0);
    memset(ud, 0, sizeof(sshape_sizes_item_t));
    luaL_setmetatable(L, "sokol.SizesItem");
    return 1;
}

static int l_sshape_sizes_item_t_get_num(lua_State *L) {
    sshape_sizes_item_t* self = (sshape_sizes_item_t*)luaL_checkudata(L, 1, "sokol.SizesItem");
    lua_pushinteger(L, (lua_Integer)self->num);
    return 1;
}

static int l_sshape_sizes_item_t_set_num(lua_State *L) {
    sshape_sizes_item_t* self = (sshape_sizes_item_t*)luaL_checkudata(L, 1, "sokol.SizesItem");
    self->num = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_sizes_item_t_get_size(lua_State *L) {
    sshape_sizes_item_t* self = (sshape_sizes_item_t*)luaL_checkudata(L, 1, "sokol.SizesItem");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sshape_sizes_item_t_set_size(lua_State *L) {
    sshape_sizes_item_t* self = (sshape_sizes_item_t*)luaL_checkudata(L, 1, "sokol.SizesItem");
    self->size = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_sizes_item_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num") == 0) return l_sshape_sizes_item_t_get_num(L);
    if (strcmp(key, "size") == 0) return l_sshape_sizes_item_t_get_size(L);
    return 0;
}

static int l_sshape_sizes_item_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "num") == 0) return l_sshape_sizes_item_t_set_num(L);
    if (strcmp(key, "size") == 0) return l_sshape_sizes_item_t_set_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_sizes_t_new(lua_State *L) {
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    memset(ud, 0, sizeof(sshape_sizes_t));
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_sizes_t_get_vertices(lua_State *L) {
    sshape_sizes_t* self = (sshape_sizes_t*)luaL_checkudata(L, 1, "sokol.Sizes");
    sshape_sizes_item_t* ud = (sshape_sizes_item_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_item_t), 0);
    *ud = self->vertices;
    luaL_setmetatable(L, "sokol.SizesItem");
    return 1;
}

static int l_sshape_sizes_t_set_vertices(lua_State *L) {
    sshape_sizes_t* self = (sshape_sizes_t*)luaL_checkudata(L, 1, "sokol.Sizes");
    sshape_sizes_item_t* val = (sshape_sizes_item_t*)luaL_checkudata(L, 2, "sokol.SizesItem");
    self->vertices = *val;
    return 0;
}

static int l_sshape_sizes_t_get_indices(lua_State *L) {
    sshape_sizes_t* self = (sshape_sizes_t*)luaL_checkudata(L, 1, "sokol.Sizes");
    sshape_sizes_item_t* ud = (sshape_sizes_item_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_item_t), 0);
    *ud = self->indices;
    luaL_setmetatable(L, "sokol.SizesItem");
    return 1;
}

static int l_sshape_sizes_t_set_indices(lua_State *L) {
    sshape_sizes_t* self = (sshape_sizes_t*)luaL_checkudata(L, 1, "sokol.Sizes");
    sshape_sizes_item_t* val = (sshape_sizes_item_t*)luaL_checkudata(L, 2, "sokol.SizesItem");
    self->indices = *val;
    return 0;
}

static int l_sshape_sizes_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertices") == 0) return l_sshape_sizes_t_get_vertices(L);
    if (strcmp(key, "indices") == 0) return l_sshape_sizes_t_get_indices(L);
    return 0;
}

static int l_sshape_sizes_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "vertices") == 0) return l_sshape_sizes_t_set_vertices(L);
    if (strcmp(key, "indices") == 0) return l_sshape_sizes_t_set_indices(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_buffer_item_t_new(lua_State *L) {
    sshape_buffer_item_t* ud = (sshape_buffer_item_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_item_t), 0);
    memset(ud, 0, sizeof(sshape_buffer_item_t));
    luaL_setmetatable(L, "sokol.BufferItem");
    return 1;
}

static int l_sshape_buffer_item_t_get_buffer(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    sshape_range* ud = (sshape_range*)lua_newuserdatauv(L, sizeof(sshape_range), 0);
    *ud = self->buffer;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sshape_buffer_item_t_set_buffer(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    sshape_range* val = (sshape_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->buffer = *val;
    return 0;
}

static int l_sshape_buffer_item_t_get_data_size(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    lua_pushinteger(L, (lua_Integer)self->data_size);
    return 1;
}

static int l_sshape_buffer_item_t_set_data_size(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    self->data_size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_buffer_item_t_get_shape_offset(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    lua_pushinteger(L, (lua_Integer)self->shape_offset);
    return 1;
}

static int l_sshape_buffer_item_t_set_shape_offset(lua_State *L) {
    sshape_buffer_item_t* self = (sshape_buffer_item_t*)luaL_checkudata(L, 1, "sokol.BufferItem");
    self->shape_offset = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_buffer_item_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer") == 0) return l_sshape_buffer_item_t_get_buffer(L);
    if (strcmp(key, "data_size") == 0) return l_sshape_buffer_item_t_get_data_size(L);
    if (strcmp(key, "shape_offset") == 0) return l_sshape_buffer_item_t_get_shape_offset(L);
    return 0;
}

static int l_sshape_buffer_item_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "buffer") == 0) return l_sshape_buffer_item_t_set_buffer(L);
    if (strcmp(key, "data_size") == 0) return l_sshape_buffer_item_t_set_data_size(L);
    if (strcmp(key, "shape_offset") == 0) return l_sshape_buffer_item_t_set_shape_offset(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_buffer_t_new(lua_State *L) {
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    memset(ud, 0, sizeof(sshape_buffer_t));
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_buffer_t_get_valid(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    lua_pushboolean(L, self->valid);
    return 1;
}

static int l_sshape_buffer_t_set_valid(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    self->valid = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_buffer_t_get_vertices(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sshape_buffer_item_t* ud = (sshape_buffer_item_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_item_t), 0);
    *ud = self->vertices;
    luaL_setmetatable(L, "sokol.BufferItem");
    return 1;
}

static int l_sshape_buffer_t_set_vertices(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sshape_buffer_item_t* val = (sshape_buffer_item_t*)luaL_checkudata(L, 2, "sokol.BufferItem");
    self->vertices = *val;
    return 0;
}

static int l_sshape_buffer_t_get_indices(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sshape_buffer_item_t* ud = (sshape_buffer_item_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_item_t), 0);
    *ud = self->indices;
    luaL_setmetatable(L, "sokol.BufferItem");
    return 1;
}

static int l_sshape_buffer_t_set_indices(lua_State *L) {
    sshape_buffer_t* self = (sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sshape_buffer_item_t* val = (sshape_buffer_item_t*)luaL_checkudata(L, 2, "sokol.BufferItem");
    self->indices = *val;
    return 0;
}

static int l_sshape_buffer_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "valid") == 0) return l_sshape_buffer_t_get_valid(L);
    if (strcmp(key, "vertices") == 0) return l_sshape_buffer_t_get_vertices(L);
    if (strcmp(key, "indices") == 0) return l_sshape_buffer_t_get_indices(L);
    return 0;
}

static int l_sshape_buffer_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "valid") == 0) return l_sshape_buffer_t_set_valid(L);
    if (strcmp(key, "vertices") == 0) return l_sshape_buffer_t_set_vertices(L);
    if (strcmp(key, "indices") == 0) return l_sshape_buffer_t_set_indices(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_plane_t_new(lua_State *L) {
    sshape_plane_t* ud = (sshape_plane_t*)lua_newuserdatauv(L, sizeof(sshape_plane_t), 0);
    memset(ud, 0, sizeof(sshape_plane_t));
    luaL_setmetatable(L, "sokol.Plane");
    return 1;
}

static int l_sshape_plane_t_get_width(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushnumber(L, (lua_Number)self->width);
    return 1;
}

static int l_sshape_plane_t_set_width(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->width = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_depth(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushnumber(L, (lua_Number)self->depth);
    return 1;
}

static int l_sshape_plane_t_set_depth(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->depth = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_tiles(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushinteger(L, (lua_Integer)self->tiles);
    return 1;
}

static int l_sshape_plane_t_set_tiles(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->tiles = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_color(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_plane_t_set_color(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_random_colors(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushboolean(L, self->random_colors);
    return 1;
}

static int l_sshape_plane_t_set_random_colors(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->random_colors = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_merge(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    lua_pushboolean(L, self->merge);
    return 1;
}

static int l_sshape_plane_t_set_merge(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    self->merge = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_plane_t_get_transform(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = self->transform;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_plane_t_set_transform(lua_State *L) {
    sshape_plane_t* self = (sshape_plane_t*)luaL_checkudata(L, 1, "sokol.Plane");
    sshape_mat4_t* val = (sshape_mat4_t*)luaL_checkudata(L, 2, "sokol.Mat4");
    self->transform = *val;
    return 0;
}

static int l_sshape_plane_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sshape_plane_t_get_width(L);
    if (strcmp(key, "depth") == 0) return l_sshape_plane_t_get_depth(L);
    if (strcmp(key, "tiles") == 0) return l_sshape_plane_t_get_tiles(L);
    if (strcmp(key, "color") == 0) return l_sshape_plane_t_get_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_plane_t_get_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_plane_t_get_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_plane_t_get_transform(L);
    return 0;
}

static int l_sshape_plane_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sshape_plane_t_set_width(L);
    if (strcmp(key, "depth") == 0) return l_sshape_plane_t_set_depth(L);
    if (strcmp(key, "tiles") == 0) return l_sshape_plane_t_set_tiles(L);
    if (strcmp(key, "color") == 0) return l_sshape_plane_t_set_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_plane_t_set_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_plane_t_set_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_plane_t_set_transform(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_box_t_new(lua_State *L) {
    sshape_box_t* ud = (sshape_box_t*)lua_newuserdatauv(L, sizeof(sshape_box_t), 0);
    memset(ud, 0, sizeof(sshape_box_t));
    luaL_setmetatable(L, "sokol.Box");
    return 1;
}

static int l_sshape_box_t_get_width(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushnumber(L, (lua_Number)self->width);
    return 1;
}

static int l_sshape_box_t_set_width(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->width = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_box_t_get_height(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushnumber(L, (lua_Number)self->height);
    return 1;
}

static int l_sshape_box_t_set_height(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->height = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_box_t_get_depth(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushnumber(L, (lua_Number)self->depth);
    return 1;
}

static int l_sshape_box_t_set_depth(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->depth = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_box_t_get_tiles(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushinteger(L, (lua_Integer)self->tiles);
    return 1;
}

static int l_sshape_box_t_set_tiles(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->tiles = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_box_t_get_color(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_box_t_set_color(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_box_t_get_random_colors(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushboolean(L, self->random_colors);
    return 1;
}

static int l_sshape_box_t_set_random_colors(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->random_colors = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_box_t_get_merge(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    lua_pushboolean(L, self->merge);
    return 1;
}

static int l_sshape_box_t_set_merge(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    self->merge = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_box_t_get_transform(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = self->transform;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_box_t_set_transform(lua_State *L) {
    sshape_box_t* self = (sshape_box_t*)luaL_checkudata(L, 1, "sokol.Box");
    sshape_mat4_t* val = (sshape_mat4_t*)luaL_checkudata(L, 2, "sokol.Mat4");
    self->transform = *val;
    return 0;
}

static int l_sshape_box_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sshape_box_t_get_width(L);
    if (strcmp(key, "height") == 0) return l_sshape_box_t_get_height(L);
    if (strcmp(key, "depth") == 0) return l_sshape_box_t_get_depth(L);
    if (strcmp(key, "tiles") == 0) return l_sshape_box_t_get_tiles(L);
    if (strcmp(key, "color") == 0) return l_sshape_box_t_get_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_box_t_get_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_box_t_get_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_box_t_get_transform(L);
    return 0;
}

static int l_sshape_box_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sshape_box_t_set_width(L);
    if (strcmp(key, "height") == 0) return l_sshape_box_t_set_height(L);
    if (strcmp(key, "depth") == 0) return l_sshape_box_t_set_depth(L);
    if (strcmp(key, "tiles") == 0) return l_sshape_box_t_set_tiles(L);
    if (strcmp(key, "color") == 0) return l_sshape_box_t_set_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_box_t_set_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_box_t_set_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_box_t_set_transform(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_sphere_t_new(lua_State *L) {
    sshape_sphere_t* ud = (sshape_sphere_t*)lua_newuserdatauv(L, sizeof(sshape_sphere_t), 0);
    memset(ud, 0, sizeof(sshape_sphere_t));
    luaL_setmetatable(L, "sokol.Sphere");
    return 1;
}

static int l_sshape_sphere_t_get_radius(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushnumber(L, (lua_Number)self->radius);
    return 1;
}

static int l_sshape_sphere_t_set_radius(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->radius = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_slices(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushinteger(L, (lua_Integer)self->slices);
    return 1;
}

static int l_sshape_sphere_t_set_slices(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->slices = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_stacks(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushinteger(L, (lua_Integer)self->stacks);
    return 1;
}

static int l_sshape_sphere_t_set_stacks(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->stacks = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_color(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_sphere_t_set_color(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_random_colors(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushboolean(L, self->random_colors);
    return 1;
}

static int l_sshape_sphere_t_set_random_colors(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->random_colors = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_merge(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    lua_pushboolean(L, self->merge);
    return 1;
}

static int l_sshape_sphere_t_set_merge(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    self->merge = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_sphere_t_get_transform(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = self->transform;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_sphere_t_set_transform(lua_State *L) {
    sshape_sphere_t* self = (sshape_sphere_t*)luaL_checkudata(L, 1, "sokol.Sphere");
    sshape_mat4_t* val = (sshape_mat4_t*)luaL_checkudata(L, 2, "sokol.Mat4");
    self->transform = *val;
    return 0;
}

static int l_sshape_sphere_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_sphere_t_get_radius(L);
    if (strcmp(key, "slices") == 0) return l_sshape_sphere_t_get_slices(L);
    if (strcmp(key, "stacks") == 0) return l_sshape_sphere_t_get_stacks(L);
    if (strcmp(key, "color") == 0) return l_sshape_sphere_t_get_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_sphere_t_get_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_sphere_t_get_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_sphere_t_get_transform(L);
    return 0;
}

static int l_sshape_sphere_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_sphere_t_set_radius(L);
    if (strcmp(key, "slices") == 0) return l_sshape_sphere_t_set_slices(L);
    if (strcmp(key, "stacks") == 0) return l_sshape_sphere_t_set_stacks(L);
    if (strcmp(key, "color") == 0) return l_sshape_sphere_t_set_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_sphere_t_set_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_sphere_t_set_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_sphere_t_set_transform(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_cylinder_t_new(lua_State *L) {
    sshape_cylinder_t* ud = (sshape_cylinder_t*)lua_newuserdatauv(L, sizeof(sshape_cylinder_t), 0);
    memset(ud, 0, sizeof(sshape_cylinder_t));
    luaL_setmetatable(L, "sokol.Cylinder");
    return 1;
}

static int l_sshape_cylinder_t_get_radius(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushnumber(L, (lua_Number)self->radius);
    return 1;
}

static int l_sshape_cylinder_t_set_radius(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->radius = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_height(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushnumber(L, (lua_Number)self->height);
    return 1;
}

static int l_sshape_cylinder_t_set_height(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->height = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_slices(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushinteger(L, (lua_Integer)self->slices);
    return 1;
}

static int l_sshape_cylinder_t_set_slices(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->slices = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_stacks(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushinteger(L, (lua_Integer)self->stacks);
    return 1;
}

static int l_sshape_cylinder_t_set_stacks(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->stacks = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_color(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_cylinder_t_set_color(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_random_colors(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushboolean(L, self->random_colors);
    return 1;
}

static int l_sshape_cylinder_t_set_random_colors(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->random_colors = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_merge(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    lua_pushboolean(L, self->merge);
    return 1;
}

static int l_sshape_cylinder_t_set_merge(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    self->merge = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_cylinder_t_get_transform(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = self->transform;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_cylinder_t_set_transform(lua_State *L) {
    sshape_cylinder_t* self = (sshape_cylinder_t*)luaL_checkudata(L, 1, "sokol.Cylinder");
    sshape_mat4_t* val = (sshape_mat4_t*)luaL_checkudata(L, 2, "sokol.Mat4");
    self->transform = *val;
    return 0;
}

static int l_sshape_cylinder_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_cylinder_t_get_radius(L);
    if (strcmp(key, "height") == 0) return l_sshape_cylinder_t_get_height(L);
    if (strcmp(key, "slices") == 0) return l_sshape_cylinder_t_get_slices(L);
    if (strcmp(key, "stacks") == 0) return l_sshape_cylinder_t_get_stacks(L);
    if (strcmp(key, "color") == 0) return l_sshape_cylinder_t_get_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_cylinder_t_get_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_cylinder_t_get_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_cylinder_t_get_transform(L);
    return 0;
}

static int l_sshape_cylinder_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_cylinder_t_set_radius(L);
    if (strcmp(key, "height") == 0) return l_sshape_cylinder_t_set_height(L);
    if (strcmp(key, "slices") == 0) return l_sshape_cylinder_t_set_slices(L);
    if (strcmp(key, "stacks") == 0) return l_sshape_cylinder_t_set_stacks(L);
    if (strcmp(key, "color") == 0) return l_sshape_cylinder_t_set_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_cylinder_t_set_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_cylinder_t_set_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_cylinder_t_set_transform(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_torus_t_new(lua_State *L) {
    sshape_torus_t* ud = (sshape_torus_t*)lua_newuserdatauv(L, sizeof(sshape_torus_t), 0);
    memset(ud, 0, sizeof(sshape_torus_t));
    luaL_setmetatable(L, "sokol.Torus");
    return 1;
}

static int l_sshape_torus_t_get_radius(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushnumber(L, (lua_Number)self->radius);
    return 1;
}

static int l_sshape_torus_t_set_radius(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->radius = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_ring_radius(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushnumber(L, (lua_Number)self->ring_radius);
    return 1;
}

static int l_sshape_torus_t_set_ring_radius(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->ring_radius = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_sides(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushinteger(L, (lua_Integer)self->sides);
    return 1;
}

static int l_sshape_torus_t_set_sides(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->sides = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_rings(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushinteger(L, (lua_Integer)self->rings);
    return 1;
}

static int l_sshape_torus_t_set_rings(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->rings = (uint16_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_color(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushinteger(L, (lua_Integer)self->color);
    return 1;
}

static int l_sshape_torus_t_set_color(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->color = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_random_colors(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushboolean(L, self->random_colors);
    return 1;
}

static int l_sshape_torus_t_set_random_colors(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->random_colors = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_merge(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    lua_pushboolean(L, self->merge);
    return 1;
}

static int l_sshape_torus_t_set_merge(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    self->merge = lua_toboolean(L, 2);
    return 0;
}

static int l_sshape_torus_t_get_transform(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = self->transform;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_torus_t_set_transform(lua_State *L) {
    sshape_torus_t* self = (sshape_torus_t*)luaL_checkudata(L, 1, "sokol.Torus");
    sshape_mat4_t* val = (sshape_mat4_t*)luaL_checkudata(L, 2, "sokol.Mat4");
    self->transform = *val;
    return 0;
}

static int l_sshape_torus_t__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_torus_t_get_radius(L);
    if (strcmp(key, "ring_radius") == 0) return l_sshape_torus_t_get_ring_radius(L);
    if (strcmp(key, "sides") == 0) return l_sshape_torus_t_get_sides(L);
    if (strcmp(key, "rings") == 0) return l_sshape_torus_t_get_rings(L);
    if (strcmp(key, "color") == 0) return l_sshape_torus_t_get_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_torus_t_get_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_torus_t_get_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_torus_t_get_transform(L);
    return 0;
}

static int l_sshape_torus_t__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "radius") == 0) return l_sshape_torus_t_set_radius(L);
    if (strcmp(key, "ring_radius") == 0) return l_sshape_torus_t_set_ring_radius(L);
    if (strcmp(key, "sides") == 0) return l_sshape_torus_t_set_sides(L);
    if (strcmp(key, "rings") == 0) return l_sshape_torus_t_set_rings(L);
    if (strcmp(key, "color") == 0) return l_sshape_torus_t_set_color(L);
    if (strcmp(key, "random_colors") == 0) return l_sshape_torus_t_set_random_colors(L);
    if (strcmp(key, "merge") == 0) return l_sshape_torus_t_set_merge(L);
    if (strcmp(key, "transform") == 0) return l_sshape_torus_t_set_transform(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sshape_build_plane(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    const sshape_plane_t* params = (const sshape_plane_t*)luaL_checkudata(L, 2, "sokol.Plane");
    sshape_buffer_t result = sshape_build_plane(buf, params);
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_build_box(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    const sshape_box_t* params = (const sshape_box_t*)luaL_checkudata(L, 2, "sokol.Box");
    sshape_buffer_t result = sshape_build_box(buf, params);
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_build_sphere(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    const sshape_sphere_t* params = (const sshape_sphere_t*)luaL_checkudata(L, 2, "sokol.Sphere");
    sshape_buffer_t result = sshape_build_sphere(buf, params);
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_build_cylinder(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    const sshape_cylinder_t* params = (const sshape_cylinder_t*)luaL_checkudata(L, 2, "sokol.Cylinder");
    sshape_buffer_t result = sshape_build_cylinder(buf, params);
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_build_torus(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    const sshape_torus_t* params = (const sshape_torus_t*)luaL_checkudata(L, 2, "sokol.Torus");
    sshape_buffer_t result = sshape_build_torus(buf, params);
    sshape_buffer_t* ud = (sshape_buffer_t*)lua_newuserdatauv(L, sizeof(sshape_buffer_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Buffer");
    return 1;
}

static int l_sshape_plane_sizes(lua_State *L) {
    uint32_t tiles = (uint32_t)luaL_checkinteger(L, 1);
    sshape_sizes_t result = sshape_plane_sizes(tiles);
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_box_sizes(lua_State *L) {
    uint32_t tiles = (uint32_t)luaL_checkinteger(L, 1);
    sshape_sizes_t result = sshape_box_sizes(tiles);
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_sphere_sizes(lua_State *L) {
    uint32_t slices = (uint32_t)luaL_checkinteger(L, 1);
    uint32_t stacks = (uint32_t)luaL_checkinteger(L, 2);
    sshape_sizes_t result = sshape_sphere_sizes(slices, stacks);
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_cylinder_sizes(lua_State *L) {
    uint32_t slices = (uint32_t)luaL_checkinteger(L, 1);
    uint32_t stacks = (uint32_t)luaL_checkinteger(L, 2);
    sshape_sizes_t result = sshape_cylinder_sizes(slices, stacks);
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_torus_sizes(lua_State *L) {
    uint32_t sides = (uint32_t)luaL_checkinteger(L, 1);
    uint32_t rings = (uint32_t)luaL_checkinteger(L, 2);
    sshape_sizes_t result = sshape_torus_sizes(sides, rings);
    sshape_sizes_t* ud = (sshape_sizes_t*)lua_newuserdatauv(L, sizeof(sshape_sizes_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Sizes");
    return 1;
}

static int l_sshape_element_range(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sshape_element_range_t result = sshape_element_range(buf);
    sshape_element_range_t* ud = (sshape_element_range_t*)lua_newuserdatauv(L, sizeof(sshape_element_range_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.ElementRange");
    return 1;
}

static int l_sshape_vertex_buffer_desc(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer_desc result = sshape_vertex_buffer_desc(buf);
    sg_buffer_desc* ud = (sg_buffer_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgBufferDesc");
    return 1;
}

static int l_sshape_index_buffer_desc(lua_State *L) {
    const sshape_buffer_t* buf = (const sshape_buffer_t*)luaL_checkudata(L, 1, "sokol.Buffer");
    sg_buffer_desc result = sshape_index_buffer_desc(buf);
    sg_buffer_desc* ud = (sg_buffer_desc*)lua_newuserdatauv(L, sizeof(sg_buffer_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgBufferDesc");
    return 1;
}

static int l_sshape_vertex_buffer_layout_state(lua_State *L) {
    sg_vertex_buffer_layout_state result = sshape_vertex_buffer_layout_state();
    sg_vertex_buffer_layout_state* ud = (sg_vertex_buffer_layout_state*)lua_newuserdatauv(L, sizeof(sg_vertex_buffer_layout_state), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgVertexBufferLayoutState");
    return 1;
}

static int l_sshape_position_vertex_attr_state(lua_State *L) {
    sg_vertex_attr_state result = sshape_position_vertex_attr_state();
    sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgVertexAttrState");
    return 1;
}

static int l_sshape_normal_vertex_attr_state(lua_State *L) {
    sg_vertex_attr_state result = sshape_normal_vertex_attr_state();
    sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgVertexAttrState");
    return 1;
}

static int l_sshape_texcoord_vertex_attr_state(lua_State *L) {
    sg_vertex_attr_state result = sshape_texcoord_vertex_attr_state();
    sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgVertexAttrState");
    return 1;
}

static int l_sshape_color_vertex_attr_state(lua_State *L) {
    sg_vertex_attr_state result = sshape_color_vertex_attr_state();
    sg_vertex_attr_state* ud = (sg_vertex_attr_state*)lua_newuserdatauv(L, sizeof(sg_vertex_attr_state), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgVertexAttrState");
    return 1;
}

static int l_sshape_color_4f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    float a = (float)luaL_checknumber(L, 4);
    uint32_t result = sshape_color_4f(r, g, b, a);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sshape_color_3f(lua_State *L) {
    float r = (float)luaL_checknumber(L, 1);
    float g = (float)luaL_checknumber(L, 2);
    float b = (float)luaL_checknumber(L, 3);
    uint32_t result = sshape_color_3f(r, g, b);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sshape_color_4b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    uint8_t a = (uint8_t)luaL_checkinteger(L, 4);
    uint32_t result = sshape_color_4b(r, g, b, a);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sshape_color_3b(lua_State *L) {
    uint8_t r = (uint8_t)luaL_checkinteger(L, 1);
    uint8_t g = (uint8_t)luaL_checkinteger(L, 2);
    uint8_t b = (uint8_t)luaL_checkinteger(L, 3);
    uint32_t result = sshape_color_3b(r, g, b);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sshape_mat4(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sshape_mat4_t result = sshape_mat4(m);
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static int l_sshape_mat4_transpose(lua_State *L) {
    /* TODO: get const float * */ void* m = NULL;
    sshape_mat4_t result = sshape_mat4_transpose(m);
    sshape_mat4_t* ud = (sshape_mat4_t*)lua_newuserdatauv(L, sizeof(sshape_mat4_t), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Mat4");
    return 1;
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Range");
    lua_pushcfunction(L, l_sshape_range__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_range__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Mat4");
    lua_pushcfunction(L, l_sshape_mat4_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_mat4_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Vertex");
    lua_pushcfunction(L, l_sshape_vertex_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_vertex_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ElementRange");
    lua_pushcfunction(L, l_sshape_element_range_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_element_range_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.SizesItem");
    lua_pushcfunction(L, l_sshape_sizes_item_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_sizes_item_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Sizes");
    lua_pushcfunction(L, l_sshape_sizes_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_sizes_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.BufferItem");
    lua_pushcfunction(L, l_sshape_buffer_item_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_buffer_item_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Buffer");
    lua_pushcfunction(L, l_sshape_buffer_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_buffer_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Plane");
    lua_pushcfunction(L, l_sshape_plane_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_plane_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Box");
    lua_pushcfunction(L, l_sshape_box_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_box_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Sphere");
    lua_pushcfunction(L, l_sshape_sphere_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_sphere_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Cylinder");
    lua_pushcfunction(L, l_sshape_cylinder_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_cylinder_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Torus");
    lua_pushcfunction(L, l_sshape_torus_t__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sshape_torus_t__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg shape_funcs[] = {
    {"build_plane", l_sshape_build_plane},
    {"build_box", l_sshape_build_box},
    {"build_sphere", l_sshape_build_sphere},
    {"build_cylinder", l_sshape_build_cylinder},
    {"build_torus", l_sshape_build_torus},
    {"plane_sizes", l_sshape_plane_sizes},
    {"box_sizes", l_sshape_box_sizes},
    {"sphere_sizes", l_sshape_sphere_sizes},
    {"cylinder_sizes", l_sshape_cylinder_sizes},
    {"torus_sizes", l_sshape_torus_sizes},
    {"element_range", l_sshape_element_range},
    {"vertex_buffer_desc", l_sshape_vertex_buffer_desc},
    {"index_buffer_desc", l_sshape_index_buffer_desc},
    {"vertex_buffer_layout_state", l_sshape_vertex_buffer_layout_state},
    {"position_vertex_attr_state", l_sshape_position_vertex_attr_state},
    {"normal_vertex_attr_state", l_sshape_normal_vertex_attr_state},
    {"texcoord_vertex_attr_state", l_sshape_texcoord_vertex_attr_state},
    {"color_vertex_attr_state", l_sshape_color_vertex_attr_state},
    {"color_4f", l_sshape_color_4f},
    {"color_3f", l_sshape_color_3f},
    {"color_4b", l_sshape_color_4b},
    {"color_3b", l_sshape_color_3b},
    {"mat4", l_sshape_mat4},
    {"mat4_transpose", l_sshape_mat4_transpose},
    {"Range", l_sshape_range_new},
    {"Mat4", l_sshape_mat4_t_new},
    {"Vertex", l_sshape_vertex_t_new},
    {"ElementRange", l_sshape_element_range_t_new},
    {"SizesItem", l_sshape_sizes_item_t_new},
    {"Sizes", l_sshape_sizes_t_new},
    {"BufferItem", l_sshape_buffer_item_t_new},
    {"Buffer", l_sshape_buffer_t_new},
    {"Plane", l_sshape_plane_t_new},
    {"Box", l_sshape_box_t_new},
    {"Sphere", l_sshape_sphere_t_new},
    {"Cylinder", l_sshape_cylinder_t_new},
    {"Torus", l_sshape_torus_t_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_shape(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, shape_funcs);
    return 1;
}
