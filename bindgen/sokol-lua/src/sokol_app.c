/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_app.h"

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

static int l_sapp_touchpoint_new(lua_State *L) {
    sapp_touchpoint* ud = (sapp_touchpoint*)lua_newuserdatauv(L, sizeof(sapp_touchpoint), 0);
    memset(ud, 0, sizeof(sapp_touchpoint));
    luaL_setmetatable(L, "sokol.Touchpoint");
    return 1;
}

static int l_sapp_touchpoint_get_identifier(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    lua_pushinteger(L, (lua_Integer)self->identifier);
    return 1;
}

static int l_sapp_touchpoint_set_identifier(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    self->identifier = (uintptr_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_touchpoint_get_pos_x(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    lua_pushnumber(L, (lua_Number)self->pos_x);
    return 1;
}

static int l_sapp_touchpoint_set_pos_x(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    self->pos_x = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_touchpoint_get_pos_y(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    lua_pushnumber(L, (lua_Number)self->pos_y);
    return 1;
}

static int l_sapp_touchpoint_set_pos_y(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    self->pos_y = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_touchpoint_get_android_tooltype(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    lua_pushinteger(L, (lua_Integer)self->android_tooltype);
    return 1;
}

static int l_sapp_touchpoint_set_android_tooltype(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    self->android_tooltype = (sapp_android_tooltype)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_touchpoint_get_changed(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    lua_pushboolean(L, self->changed);
    return 1;
}

static int l_sapp_touchpoint_set_changed(lua_State *L) {
    sapp_touchpoint* self = (sapp_touchpoint*)luaL_checkudata(L, 1, "sokol.Touchpoint");
    self->changed = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_touchpoint__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "identifier") == 0) return l_sapp_touchpoint_get_identifier(L);
    if (strcmp(key, "pos_x") == 0) return l_sapp_touchpoint_get_pos_x(L);
    if (strcmp(key, "pos_y") == 0) return l_sapp_touchpoint_get_pos_y(L);
    if (strcmp(key, "android_tooltype") == 0) return l_sapp_touchpoint_get_android_tooltype(L);
    if (strcmp(key, "changed") == 0) return l_sapp_touchpoint_get_changed(L);
    return 0;
}

static int l_sapp_touchpoint__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "identifier") == 0) return l_sapp_touchpoint_set_identifier(L);
    if (strcmp(key, "pos_x") == 0) return l_sapp_touchpoint_set_pos_x(L);
    if (strcmp(key, "pos_y") == 0) return l_sapp_touchpoint_set_pos_y(L);
    if (strcmp(key, "android_tooltype") == 0) return l_sapp_touchpoint_set_android_tooltype(L);
    if (strcmp(key, "changed") == 0) return l_sapp_touchpoint_set_changed(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_event_new(lua_State *L) {
    sapp_event* ud = (sapp_event*)lua_newuserdatauv(L, sizeof(sapp_event), 0);
    memset(ud, 0, sizeof(sapp_event));
    luaL_setmetatable(L, "sokol.Event");
    return 1;
}

static int l_sapp_event_get_frame_count(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->frame_count);
    return 1;
}

static int l_sapp_event_set_frame_count(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->frame_count = (uint64_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_type(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->type);
    return 1;
}

static int l_sapp_event_set_type(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->type = (sapp_event_type)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_key_code(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->key_code);
    return 1;
}

static int l_sapp_event_set_key_code(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->key_code = (sapp_keycode)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_char_code(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->char_code);
    return 1;
}

static int l_sapp_event_set_char_code(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->char_code = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_key_repeat(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushboolean(L, self->key_repeat);
    return 1;
}

static int l_sapp_event_set_key_repeat(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->key_repeat = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_event_get_modifiers(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->modifiers);
    return 1;
}

static int l_sapp_event_set_modifiers(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->modifiers = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_mouse_button(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->mouse_button);
    return 1;
}

static int l_sapp_event_set_mouse_button(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->mouse_button = (sapp_mousebutton)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_mouse_x(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->mouse_x);
    return 1;
}

static int l_sapp_event_set_mouse_x(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->mouse_x = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_mouse_y(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->mouse_y);
    return 1;
}

static int l_sapp_event_set_mouse_y(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->mouse_y = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_mouse_dx(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->mouse_dx);
    return 1;
}

static int l_sapp_event_set_mouse_dx(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->mouse_dx = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_mouse_dy(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->mouse_dy);
    return 1;
}

static int l_sapp_event_set_mouse_dy(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->mouse_dy = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_scroll_x(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->scroll_x);
    return 1;
}

static int l_sapp_event_set_scroll_x(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->scroll_x = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_scroll_y(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushnumber(L, (lua_Number)self->scroll_y);
    return 1;
}

static int l_sapp_event_set_scroll_y(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->scroll_y = (float)luaL_checknumber(L, 2);
    return 0;
}

static int l_sapp_event_get_num_touches(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->num_touches);
    return 1;
}

static int l_sapp_event_set_num_touches(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->num_touches = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_touches(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    /* TODO: array field touches */
    lua_pushnil(L);
    return 1;
}

static int l_sapp_event_set_touches(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    /* TODO: array field touches */
    return 0;
}

static int l_sapp_event_get_window_width(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->window_width);
    return 1;
}

static int l_sapp_event_set_window_width(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->window_width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_window_height(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->window_height);
    return 1;
}

static int l_sapp_event_set_window_height(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->window_height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_framebuffer_width(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->framebuffer_width);
    return 1;
}

static int l_sapp_event_set_framebuffer_width(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->framebuffer_width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event_get_framebuffer_height(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    lua_pushinteger(L, (lua_Integer)self->framebuffer_height);
    return 1;
}

static int l_sapp_event_set_framebuffer_height(lua_State *L) {
    sapp_event* self = (sapp_event*)luaL_checkudata(L, 1, "sokol.Event");
    self->framebuffer_height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_event__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "frame_count") == 0) return l_sapp_event_get_frame_count(L);
    if (strcmp(key, "type") == 0) return l_sapp_event_get_type(L);
    if (strcmp(key, "key_code") == 0) return l_sapp_event_get_key_code(L);
    if (strcmp(key, "char_code") == 0) return l_sapp_event_get_char_code(L);
    if (strcmp(key, "key_repeat") == 0) return l_sapp_event_get_key_repeat(L);
    if (strcmp(key, "modifiers") == 0) return l_sapp_event_get_modifiers(L);
    if (strcmp(key, "mouse_button") == 0) return l_sapp_event_get_mouse_button(L);
    if (strcmp(key, "mouse_x") == 0) return l_sapp_event_get_mouse_x(L);
    if (strcmp(key, "mouse_y") == 0) return l_sapp_event_get_mouse_y(L);
    if (strcmp(key, "mouse_dx") == 0) return l_sapp_event_get_mouse_dx(L);
    if (strcmp(key, "mouse_dy") == 0) return l_sapp_event_get_mouse_dy(L);
    if (strcmp(key, "scroll_x") == 0) return l_sapp_event_get_scroll_x(L);
    if (strcmp(key, "scroll_y") == 0) return l_sapp_event_get_scroll_y(L);
    if (strcmp(key, "num_touches") == 0) return l_sapp_event_get_num_touches(L);
    if (strcmp(key, "touches") == 0) return l_sapp_event_get_touches(L);
    if (strcmp(key, "window_width") == 0) return l_sapp_event_get_window_width(L);
    if (strcmp(key, "window_height") == 0) return l_sapp_event_get_window_height(L);
    if (strcmp(key, "framebuffer_width") == 0) return l_sapp_event_get_framebuffer_width(L);
    if (strcmp(key, "framebuffer_height") == 0) return l_sapp_event_get_framebuffer_height(L);
    return 0;
}

static int l_sapp_event__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "frame_count") == 0) return l_sapp_event_set_frame_count(L);
    if (strcmp(key, "type") == 0) return l_sapp_event_set_type(L);
    if (strcmp(key, "key_code") == 0) return l_sapp_event_set_key_code(L);
    if (strcmp(key, "char_code") == 0) return l_sapp_event_set_char_code(L);
    if (strcmp(key, "key_repeat") == 0) return l_sapp_event_set_key_repeat(L);
    if (strcmp(key, "modifiers") == 0) return l_sapp_event_set_modifiers(L);
    if (strcmp(key, "mouse_button") == 0) return l_sapp_event_set_mouse_button(L);
    if (strcmp(key, "mouse_x") == 0) return l_sapp_event_set_mouse_x(L);
    if (strcmp(key, "mouse_y") == 0) return l_sapp_event_set_mouse_y(L);
    if (strcmp(key, "mouse_dx") == 0) return l_sapp_event_set_mouse_dx(L);
    if (strcmp(key, "mouse_dy") == 0) return l_sapp_event_set_mouse_dy(L);
    if (strcmp(key, "scroll_x") == 0) return l_sapp_event_set_scroll_x(L);
    if (strcmp(key, "scroll_y") == 0) return l_sapp_event_set_scroll_y(L);
    if (strcmp(key, "num_touches") == 0) return l_sapp_event_set_num_touches(L);
    if (strcmp(key, "touches") == 0) return l_sapp_event_set_touches(L);
    if (strcmp(key, "window_width") == 0) return l_sapp_event_set_window_width(L);
    if (strcmp(key, "window_height") == 0) return l_sapp_event_set_window_height(L);
    if (strcmp(key, "framebuffer_width") == 0) return l_sapp_event_set_framebuffer_width(L);
    if (strcmp(key, "framebuffer_height") == 0) return l_sapp_event_set_framebuffer_height(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_range_new(lua_State *L) {
    sapp_range* ud = (sapp_range*)lua_newuserdatauv(L, sizeof(sapp_range), 0);
    memset(ud, 0, sizeof(sapp_range));
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sapp_range_get_ptr(lua_State *L) {
    sapp_range* self = (sapp_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushlightuserdata(L, (void*)self->ptr);
    return 1;
}

static int l_sapp_range_set_ptr(lua_State *L) {
    sapp_range* self = (sapp_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->ptr = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_range_get_size(lua_State *L) {
    sapp_range* self = (sapp_range*)luaL_checkudata(L, 1, "sokol.Range");
    lua_pushinteger(L, (lua_Integer)self->size);
    return 1;
}

static int l_sapp_range_set_size(lua_State *L) {
    sapp_range* self = (sapp_range*)luaL_checkudata(L, 1, "sokol.Range");
    self->size = (size_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_range__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sapp_range_get_ptr(L);
    if (strcmp(key, "size") == 0) return l_sapp_range_get_size(L);
    return 0;
}

static int l_sapp_range__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "ptr") == 0) return l_sapp_range_set_ptr(L);
    if (strcmp(key, "size") == 0) return l_sapp_range_set_size(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_image_desc_new(lua_State *L) {
    sapp_image_desc* ud = (sapp_image_desc*)lua_newuserdatauv(L, sizeof(sapp_image_desc), 0);
    memset(ud, 0, sizeof(sapp_image_desc));
    luaL_setmetatable(L, "sokol.ImageDesc");
    return 1;
}

static int l_sapp_image_desc_get_width(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->width);
    return 1;
}

static int l_sapp_image_desc_set_width(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_image_desc_get_height(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->height);
    return 1;
}

static int l_sapp_image_desc_set_height(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_image_desc_get_cursor_hotspot_x(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->cursor_hotspot_x);
    return 1;
}

static int l_sapp_image_desc_set_cursor_hotspot_x(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->cursor_hotspot_x = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_image_desc_get_cursor_hotspot_y(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    lua_pushinteger(L, (lua_Integer)self->cursor_hotspot_y);
    return 1;
}

static int l_sapp_image_desc_set_cursor_hotspot_y(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    self->cursor_hotspot_y = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_image_desc_get_pixels(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sapp_range* ud = (sapp_range*)lua_newuserdatauv(L, sizeof(sapp_range), 0);
    *ud = self->pixels;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sapp_image_desc_set_pixels(lua_State *L) {
    sapp_image_desc* self = (sapp_image_desc*)luaL_checkudata(L, 1, "sokol.ImageDesc");
    sapp_range* val = (sapp_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->pixels = *val;
    return 0;
}

static int l_sapp_image_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sapp_image_desc_get_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_image_desc_get_height(L);
    if (strcmp(key, "cursor_hotspot_x") == 0) return l_sapp_image_desc_get_cursor_hotspot_x(L);
    if (strcmp(key, "cursor_hotspot_y") == 0) return l_sapp_image_desc_get_cursor_hotspot_y(L);
    if (strcmp(key, "pixels") == 0) return l_sapp_image_desc_get_pixels(L);
    return 0;
}

static int l_sapp_image_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sapp_image_desc_set_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_image_desc_set_height(L);
    if (strcmp(key, "cursor_hotspot_x") == 0) return l_sapp_image_desc_set_cursor_hotspot_x(L);
    if (strcmp(key, "cursor_hotspot_y") == 0) return l_sapp_image_desc_set_cursor_hotspot_y(L);
    if (strcmp(key, "pixels") == 0) return l_sapp_image_desc_set_pixels(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_icon_desc_new(lua_State *L) {
    sapp_icon_desc* ud = (sapp_icon_desc*)lua_newuserdatauv(L, sizeof(sapp_icon_desc), 0);
    memset(ud, 0, sizeof(sapp_icon_desc));
    luaL_setmetatable(L, "sokol.IconDesc");
    return 1;
}

static int l_sapp_icon_desc_get_sokol_default(lua_State *L) {
    sapp_icon_desc* self = (sapp_icon_desc*)luaL_checkudata(L, 1, "sokol.IconDesc");
    lua_pushboolean(L, self->sokol_default);
    return 1;
}

static int l_sapp_icon_desc_set_sokol_default(lua_State *L) {
    sapp_icon_desc* self = (sapp_icon_desc*)luaL_checkudata(L, 1, "sokol.IconDesc");
    self->sokol_default = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_icon_desc_get_images(lua_State *L) {
    sapp_icon_desc* self = (sapp_icon_desc*)luaL_checkudata(L, 1, "sokol.IconDesc");
    /* TODO: array field images */
    lua_pushnil(L);
    return 1;
}

static int l_sapp_icon_desc_set_images(lua_State *L) {
    sapp_icon_desc* self = (sapp_icon_desc*)luaL_checkudata(L, 1, "sokol.IconDesc");
    /* TODO: array field images */
    return 0;
}

static int l_sapp_icon_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sokol_default") == 0) return l_sapp_icon_desc_get_sokol_default(L);
    if (strcmp(key, "images") == 0) return l_sapp_icon_desc_get_images(L);
    return 0;
}

static int l_sapp_icon_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sokol_default") == 0) return l_sapp_icon_desc_set_sokol_default(L);
    if (strcmp(key, "images") == 0) return l_sapp_icon_desc_set_images(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_allocator_new(lua_State *L) {
    sapp_allocator* ud = (sapp_allocator*)lua_newuserdatauv(L, sizeof(sapp_allocator), 0);
    memset(ud, 0, sizeof(sapp_allocator));
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sapp_allocator_get_user_data(lua_State *L) {
    sapp_allocator* self = (sapp_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sapp_allocator_set_user_data(lua_State *L) {
    sapp_allocator* self = (sapp_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_allocator__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_allocator_get_user_data(L);
    return 0;
}

static int l_sapp_allocator__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_allocator_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_environment_defaults_new(lua_State *L) {
    sapp_environment_defaults* ud = (sapp_environment_defaults*)lua_newuserdatauv(L, sizeof(sapp_environment_defaults), 0);
    memset(ud, 0, sizeof(sapp_environment_defaults));
    luaL_setmetatable(L, "sokol.EnvironmentDefaults");
    return 1;
}

static int l_sapp_environment_defaults_get_color_format(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sapp_environment_defaults_set_color_format(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->color_format = (sapp_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_environment_defaults_get_depth_format(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sapp_environment_defaults_set_depth_format(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->depth_format = (sapp_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_environment_defaults_get_sample_count(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sapp_environment_defaults_set_sample_count(lua_State *L) {
    sapp_environment_defaults* self = (sapp_environment_defaults*)luaL_checkudata(L, 1, "sokol.EnvironmentDefaults");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_environment_defaults__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "color_format") == 0) return l_sapp_environment_defaults_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sapp_environment_defaults_get_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_environment_defaults_get_sample_count(L);
    return 0;
}

static int l_sapp_environment_defaults__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "color_format") == 0) return l_sapp_environment_defaults_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sapp_environment_defaults_set_depth_format(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_environment_defaults_set_sample_count(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_metal_environment_new(lua_State *L) {
    sapp_metal_environment* ud = (sapp_metal_environment*)lua_newuserdatauv(L, sizeof(sapp_metal_environment), 0);
    memset(ud, 0, sizeof(sapp_metal_environment));
    luaL_setmetatable(L, "sokol.MetalEnvironment");
    return 1;
}

static int l_sapp_metal_environment_get_device(lua_State *L) {
    sapp_metal_environment* self = (sapp_metal_environment*)luaL_checkudata(L, 1, "sokol.MetalEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sapp_metal_environment_set_device(lua_State *L) {
    sapp_metal_environment* self = (sapp_metal_environment*)luaL_checkudata(L, 1, "sokol.MetalEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_metal_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_metal_environment_get_device(L);
    return 0;
}

static int l_sapp_metal_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_metal_environment_set_device(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_d3d11_environment_new(lua_State *L) {
    sapp_d3d11_environment* ud = (sapp_d3d11_environment*)lua_newuserdatauv(L, sizeof(sapp_d3d11_environment), 0);
    memset(ud, 0, sizeof(sapp_d3d11_environment));
    luaL_setmetatable(L, "sokol.D3d11Environment");
    return 1;
}

static int l_sapp_d3d11_environment_get_device(lua_State *L) {
    sapp_d3d11_environment* self = (sapp_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sapp_d3d11_environment_set_device(lua_State *L) {
    sapp_d3d11_environment* self = (sapp_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_d3d11_environment_get_device_context(lua_State *L) {
    sapp_d3d11_environment* self = (sapp_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    lua_pushlightuserdata(L, (void*)self->device_context);
    return 1;
}

static int l_sapp_d3d11_environment_set_device_context(lua_State *L) {
    sapp_d3d11_environment* self = (sapp_d3d11_environment*)luaL_checkudata(L, 1, "sokol.D3d11Environment");
    self->device_context = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_d3d11_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_d3d11_environment_get_device(L);
    if (strcmp(key, "device_context") == 0) return l_sapp_d3d11_environment_get_device_context(L);
    return 0;
}

static int l_sapp_d3d11_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_d3d11_environment_set_device(L);
    if (strcmp(key, "device_context") == 0) return l_sapp_d3d11_environment_set_device_context(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_wgpu_environment_new(lua_State *L) {
    sapp_wgpu_environment* ud = (sapp_wgpu_environment*)lua_newuserdatauv(L, sizeof(sapp_wgpu_environment), 0);
    memset(ud, 0, sizeof(sapp_wgpu_environment));
    luaL_setmetatable(L, "sokol.WgpuEnvironment");
    return 1;
}

static int l_sapp_wgpu_environment_get_device(lua_State *L) {
    sapp_wgpu_environment* self = (sapp_wgpu_environment*)luaL_checkudata(L, 1, "sokol.WgpuEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sapp_wgpu_environment_set_device(lua_State *L) {
    sapp_wgpu_environment* self = (sapp_wgpu_environment*)luaL_checkudata(L, 1, "sokol.WgpuEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_wgpu_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_wgpu_environment_get_device(L);
    return 0;
}

static int l_sapp_wgpu_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "device") == 0) return l_sapp_wgpu_environment_set_device(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_vulkan_environment_new(lua_State *L) {
    sapp_vulkan_environment* ud = (sapp_vulkan_environment*)lua_newuserdatauv(L, sizeof(sapp_vulkan_environment), 0);
    memset(ud, 0, sizeof(sapp_vulkan_environment));
    luaL_setmetatable(L, "sokol.VulkanEnvironment");
    return 1;
}

static int l_sapp_vulkan_environment_get_physical_device(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->physical_device);
    return 1;
}

static int l_sapp_vulkan_environment_set_physical_device(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->physical_device = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_environment_get_device(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->device);
    return 1;
}

static int l_sapp_vulkan_environment_set_device(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->device = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_environment_get_queue(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushlightuserdata(L, (void*)self->queue);
    return 1;
}

static int l_sapp_vulkan_environment_set_queue(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->queue = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_environment_get_queue_family_index(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    lua_pushinteger(L, (lua_Integer)self->queue_family_index);
    return 1;
}

static int l_sapp_vulkan_environment_set_queue_family_index(lua_State *L) {
    sapp_vulkan_environment* self = (sapp_vulkan_environment*)luaL_checkudata(L, 1, "sokol.VulkanEnvironment");
    self->queue_family_index = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_vulkan_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "physical_device") == 0) return l_sapp_vulkan_environment_get_physical_device(L);
    if (strcmp(key, "device") == 0) return l_sapp_vulkan_environment_get_device(L);
    if (strcmp(key, "queue") == 0) return l_sapp_vulkan_environment_get_queue(L);
    if (strcmp(key, "queue_family_index") == 0) return l_sapp_vulkan_environment_get_queue_family_index(L);
    return 0;
}

static int l_sapp_vulkan_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "physical_device") == 0) return l_sapp_vulkan_environment_set_physical_device(L);
    if (strcmp(key, "device") == 0) return l_sapp_vulkan_environment_set_device(L);
    if (strcmp(key, "queue") == 0) return l_sapp_vulkan_environment_set_queue(L);
    if (strcmp(key, "queue_family_index") == 0) return l_sapp_vulkan_environment_set_queue_family_index(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_environment_new(lua_State *L) {
    sapp_environment* ud = (sapp_environment*)lua_newuserdatauv(L, sizeof(sapp_environment), 0);
    memset(ud, 0, sizeof(sapp_environment));
    luaL_setmetatable(L, "sokol.Environment");
    return 1;
}

static int l_sapp_environment_get_defaults(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_environment_defaults* ud = (sapp_environment_defaults*)lua_newuserdatauv(L, sizeof(sapp_environment_defaults), 0);
    *ud = self->defaults;
    luaL_setmetatable(L, "sokol.EnvironmentDefaults");
    return 1;
}

static int l_sapp_environment_set_defaults(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_environment_defaults* val = (sapp_environment_defaults*)luaL_checkudata(L, 2, "sokol.EnvironmentDefaults");
    self->defaults = *val;
    return 0;
}

static int l_sapp_environment_get_metal(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_metal_environment* ud = (sapp_metal_environment*)lua_newuserdatauv(L, sizeof(sapp_metal_environment), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.MetalEnvironment");
    return 1;
}

static int l_sapp_environment_set_metal(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_metal_environment* val = (sapp_metal_environment*)luaL_checkudata(L, 2, "sokol.MetalEnvironment");
    self->metal = *val;
    return 0;
}

static int l_sapp_environment_get_d3d11(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_d3d11_environment* ud = (sapp_d3d11_environment*)lua_newuserdatauv(L, sizeof(sapp_d3d11_environment), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.D3d11Environment");
    return 1;
}

static int l_sapp_environment_set_d3d11(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_d3d11_environment* val = (sapp_d3d11_environment*)luaL_checkudata(L, 2, "sokol.D3d11Environment");
    self->d3d11 = *val;
    return 0;
}

static int l_sapp_environment_get_wgpu(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_wgpu_environment* ud = (sapp_wgpu_environment*)lua_newuserdatauv(L, sizeof(sapp_wgpu_environment), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.WgpuEnvironment");
    return 1;
}

static int l_sapp_environment_set_wgpu(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_wgpu_environment* val = (sapp_wgpu_environment*)luaL_checkudata(L, 2, "sokol.WgpuEnvironment");
    self->wgpu = *val;
    return 0;
}

static int l_sapp_environment_get_vulkan(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_vulkan_environment* ud = (sapp_vulkan_environment*)lua_newuserdatauv(L, sizeof(sapp_vulkan_environment), 0);
    *ud = self->vulkan;
    luaL_setmetatable(L, "sokol.VulkanEnvironment");
    return 1;
}

static int l_sapp_environment_set_vulkan(lua_State *L) {
    sapp_environment* self = (sapp_environment*)luaL_checkudata(L, 1, "sokol.Environment");
    sapp_vulkan_environment* val = (sapp_vulkan_environment*)luaL_checkudata(L, 2, "sokol.VulkanEnvironment");
    self->vulkan = *val;
    return 0;
}

static int l_sapp_environment__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "defaults") == 0) return l_sapp_environment_get_defaults(L);
    if (strcmp(key, "metal") == 0) return l_sapp_environment_get_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sapp_environment_get_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sapp_environment_get_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sapp_environment_get_vulkan(L);
    return 0;
}

static int l_sapp_environment__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "defaults") == 0) return l_sapp_environment_set_defaults(L);
    if (strcmp(key, "metal") == 0) return l_sapp_environment_set_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sapp_environment_set_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sapp_environment_set_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sapp_environment_set_vulkan(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_metal_swapchain_new(lua_State *L) {
    sapp_metal_swapchain* ud = (sapp_metal_swapchain*)lua_newuserdatauv(L, sizeof(sapp_metal_swapchain), 0);
    memset(ud, 0, sizeof(sapp_metal_swapchain));
    luaL_setmetatable(L, "sokol.MetalSwapchain");
    return 1;
}

static int l_sapp_metal_swapchain_get_current_drawable(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->current_drawable);
    return 1;
}

static int l_sapp_metal_swapchain_set_current_drawable(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->current_drawable = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_metal_swapchain_get_depth_stencil_texture(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_texture);
    return 1;
}

static int l_sapp_metal_swapchain_set_depth_stencil_texture(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->depth_stencil_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_metal_swapchain_get_msaa_color_texture(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    lua_pushlightuserdata(L, (void*)self->msaa_color_texture);
    return 1;
}

static int l_sapp_metal_swapchain_set_msaa_color_texture(lua_State *L) {
    sapp_metal_swapchain* self = (sapp_metal_swapchain*)luaL_checkudata(L, 1, "sokol.MetalSwapchain");
    self->msaa_color_texture = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_metal_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "current_drawable") == 0) return l_sapp_metal_swapchain_get_current_drawable(L);
    if (strcmp(key, "depth_stencil_texture") == 0) return l_sapp_metal_swapchain_get_depth_stencil_texture(L);
    if (strcmp(key, "msaa_color_texture") == 0) return l_sapp_metal_swapchain_get_msaa_color_texture(L);
    return 0;
}

static int l_sapp_metal_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "current_drawable") == 0) return l_sapp_metal_swapchain_set_current_drawable(L);
    if (strcmp(key, "depth_stencil_texture") == 0) return l_sapp_metal_swapchain_set_depth_stencil_texture(L);
    if (strcmp(key, "msaa_color_texture") == 0) return l_sapp_metal_swapchain_set_msaa_color_texture(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_d3d11_swapchain_new(lua_State *L) {
    sapp_d3d11_swapchain* ud = (sapp_d3d11_swapchain*)lua_newuserdatauv(L, sizeof(sapp_d3d11_swapchain), 0);
    memset(ud, 0, sizeof(sapp_d3d11_swapchain));
    luaL_setmetatable(L, "sokol.D3d11Swapchain");
    return 1;
}

static int l_sapp_d3d11_swapchain_get_render_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sapp_d3d11_swapchain_set_render_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_d3d11_swapchain_get_resolve_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sapp_d3d11_swapchain_set_resolve_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_d3d11_swapchain_get_depth_stencil_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sapp_d3d11_swapchain_set_depth_stencil_view(lua_State *L) {
    sapp_d3d11_swapchain* self = (sapp_d3d11_swapchain*)luaL_checkudata(L, 1, "sokol.D3d11Swapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_d3d11_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sapp_d3d11_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_d3d11_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_d3d11_swapchain_get_depth_stencil_view(L);
    return 0;
}

static int l_sapp_d3d11_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sapp_d3d11_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_d3d11_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_d3d11_swapchain_set_depth_stencil_view(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_wgpu_swapchain_new(lua_State *L) {
    sapp_wgpu_swapchain* ud = (sapp_wgpu_swapchain*)lua_newuserdatauv(L, sizeof(sapp_wgpu_swapchain), 0);
    memset(ud, 0, sizeof(sapp_wgpu_swapchain));
    luaL_setmetatable(L, "sokol.WgpuSwapchain");
    return 1;
}

static int l_sapp_wgpu_swapchain_get_render_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sapp_wgpu_swapchain_set_render_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_wgpu_swapchain_get_resolve_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sapp_wgpu_swapchain_set_resolve_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_wgpu_swapchain_get_depth_stencil_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sapp_wgpu_swapchain_set_depth_stencil_view(lua_State *L) {
    sapp_wgpu_swapchain* self = (sapp_wgpu_swapchain*)luaL_checkudata(L, 1, "sokol.WgpuSwapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_wgpu_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sapp_wgpu_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_wgpu_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_wgpu_swapchain_get_depth_stencil_view(L);
    return 0;
}

static int l_sapp_wgpu_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_view") == 0) return l_sapp_wgpu_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_wgpu_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_wgpu_swapchain_set_depth_stencil_view(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_vulkan_swapchain_new(lua_State *L) {
    sapp_vulkan_swapchain* ud = (sapp_vulkan_swapchain*)lua_newuserdatauv(L, sizeof(sapp_vulkan_swapchain), 0);
    memset(ud, 0, sizeof(sapp_vulkan_swapchain));
    luaL_setmetatable(L, "sokol.VulkanSwapchain");
    return 1;
}

static int l_sapp_vulkan_swapchain_get_render_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_image);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_render_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_render_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_view);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_render_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_resolve_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_image);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_resolve_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->resolve_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_resolve_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->resolve_view);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_resolve_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->resolve_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_depth_stencil_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_image);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_depth_stencil_image(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->depth_stencil_image = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_depth_stencil_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->depth_stencil_view);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_depth_stencil_view(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->depth_stencil_view = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_render_finished_semaphore(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->render_finished_semaphore);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_render_finished_semaphore(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->render_finished_semaphore = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain_get_present_complete_semaphore(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    lua_pushlightuserdata(L, (void*)self->present_complete_semaphore);
    return 1;
}

static int l_sapp_vulkan_swapchain_set_present_complete_semaphore(lua_State *L) {
    sapp_vulkan_swapchain* self = (sapp_vulkan_swapchain*)luaL_checkudata(L, 1, "sokol.VulkanSwapchain");
    self->present_complete_semaphore = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_vulkan_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_image") == 0) return l_sapp_vulkan_swapchain_get_render_image(L);
    if (strcmp(key, "render_view") == 0) return l_sapp_vulkan_swapchain_get_render_view(L);
    if (strcmp(key, "resolve_image") == 0) return l_sapp_vulkan_swapchain_get_resolve_image(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_vulkan_swapchain_get_resolve_view(L);
    if (strcmp(key, "depth_stencil_image") == 0) return l_sapp_vulkan_swapchain_get_depth_stencil_image(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_vulkan_swapchain_get_depth_stencil_view(L);
    if (strcmp(key, "render_finished_semaphore") == 0) return l_sapp_vulkan_swapchain_get_render_finished_semaphore(L);
    if (strcmp(key, "present_complete_semaphore") == 0) return l_sapp_vulkan_swapchain_get_present_complete_semaphore(L);
    return 0;
}

static int l_sapp_vulkan_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "render_image") == 0) return l_sapp_vulkan_swapchain_set_render_image(L);
    if (strcmp(key, "render_view") == 0) return l_sapp_vulkan_swapchain_set_render_view(L);
    if (strcmp(key, "resolve_image") == 0) return l_sapp_vulkan_swapchain_set_resolve_image(L);
    if (strcmp(key, "resolve_view") == 0) return l_sapp_vulkan_swapchain_set_resolve_view(L);
    if (strcmp(key, "depth_stencil_image") == 0) return l_sapp_vulkan_swapchain_set_depth_stencil_image(L);
    if (strcmp(key, "depth_stencil_view") == 0) return l_sapp_vulkan_swapchain_set_depth_stencil_view(L);
    if (strcmp(key, "render_finished_semaphore") == 0) return l_sapp_vulkan_swapchain_set_render_finished_semaphore(L);
    if (strcmp(key, "present_complete_semaphore") == 0) return l_sapp_vulkan_swapchain_set_present_complete_semaphore(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_gl_swapchain_new(lua_State *L) {
    sapp_gl_swapchain* ud = (sapp_gl_swapchain*)lua_newuserdatauv(L, sizeof(sapp_gl_swapchain), 0);
    memset(ud, 0, sizeof(sapp_gl_swapchain));
    luaL_setmetatable(L, "sokol.GlSwapchain");
    return 1;
}

static int l_sapp_gl_swapchain_get_framebuffer(lua_State *L) {
    sapp_gl_swapchain* self = (sapp_gl_swapchain*)luaL_checkudata(L, 1, "sokol.GlSwapchain");
    lua_pushinteger(L, (lua_Integer)self->framebuffer);
    return 1;
}

static int l_sapp_gl_swapchain_set_framebuffer(lua_State *L) {
    sapp_gl_swapchain* self = (sapp_gl_swapchain*)luaL_checkudata(L, 1, "sokol.GlSwapchain");
    self->framebuffer = (uint32_t)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_gl_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "framebuffer") == 0) return l_sapp_gl_swapchain_get_framebuffer(L);
    return 0;
}

static int l_sapp_gl_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "framebuffer") == 0) return l_sapp_gl_swapchain_set_framebuffer(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_swapchain_new(lua_State *L) {
    sapp_swapchain* ud = (sapp_swapchain*)lua_newuserdatauv(L, sizeof(sapp_swapchain), 0);
    memset(ud, 0, sizeof(sapp_swapchain));
    luaL_setmetatable(L, "sokol.Swapchain");
    return 1;
}

static int l_sapp_swapchain_get_width(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->width);
    return 1;
}

static int l_sapp_swapchain_set_width(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_swapchain_get_height(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->height);
    return 1;
}

static int l_sapp_swapchain_set_height(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_swapchain_get_sample_count(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sapp_swapchain_set_sample_count(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_swapchain_get_color_format(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->color_format);
    return 1;
}

static int l_sapp_swapchain_set_color_format(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->color_format = (sapp_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_swapchain_get_depth_format(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    lua_pushinteger(L, (lua_Integer)self->depth_format);
    return 1;
}

static int l_sapp_swapchain_set_depth_format(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    self->depth_format = (sapp_pixel_format)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_swapchain_get_metal(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_metal_swapchain* ud = (sapp_metal_swapchain*)lua_newuserdatauv(L, sizeof(sapp_metal_swapchain), 0);
    *ud = self->metal;
    luaL_setmetatable(L, "sokol.MetalSwapchain");
    return 1;
}

static int l_sapp_swapchain_set_metal(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_metal_swapchain* val = (sapp_metal_swapchain*)luaL_checkudata(L, 2, "sokol.MetalSwapchain");
    self->metal = *val;
    return 0;
}

static int l_sapp_swapchain_get_d3d11(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_d3d11_swapchain* ud = (sapp_d3d11_swapchain*)lua_newuserdatauv(L, sizeof(sapp_d3d11_swapchain), 0);
    *ud = self->d3d11;
    luaL_setmetatable(L, "sokol.D3d11Swapchain");
    return 1;
}

static int l_sapp_swapchain_set_d3d11(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_d3d11_swapchain* val = (sapp_d3d11_swapchain*)luaL_checkudata(L, 2, "sokol.D3d11Swapchain");
    self->d3d11 = *val;
    return 0;
}

static int l_sapp_swapchain_get_wgpu(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_wgpu_swapchain* ud = (sapp_wgpu_swapchain*)lua_newuserdatauv(L, sizeof(sapp_wgpu_swapchain), 0);
    *ud = self->wgpu;
    luaL_setmetatable(L, "sokol.WgpuSwapchain");
    return 1;
}

static int l_sapp_swapchain_set_wgpu(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_wgpu_swapchain* val = (sapp_wgpu_swapchain*)luaL_checkudata(L, 2, "sokol.WgpuSwapchain");
    self->wgpu = *val;
    return 0;
}

static int l_sapp_swapchain_get_vulkan(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_vulkan_swapchain* ud = (sapp_vulkan_swapchain*)lua_newuserdatauv(L, sizeof(sapp_vulkan_swapchain), 0);
    *ud = self->vulkan;
    luaL_setmetatable(L, "sokol.VulkanSwapchain");
    return 1;
}

static int l_sapp_swapchain_set_vulkan(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_vulkan_swapchain* val = (sapp_vulkan_swapchain*)luaL_checkudata(L, 2, "sokol.VulkanSwapchain");
    self->vulkan = *val;
    return 0;
}

static int l_sapp_swapchain_get_gl(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_gl_swapchain* ud = (sapp_gl_swapchain*)lua_newuserdatauv(L, sizeof(sapp_gl_swapchain), 0);
    *ud = self->gl;
    luaL_setmetatable(L, "sokol.GlSwapchain");
    return 1;
}

static int l_sapp_swapchain_set_gl(lua_State *L) {
    sapp_swapchain* self = (sapp_swapchain*)luaL_checkudata(L, 1, "sokol.Swapchain");
    sapp_gl_swapchain* val = (sapp_gl_swapchain*)luaL_checkudata(L, 2, "sokol.GlSwapchain");
    self->gl = *val;
    return 0;
}

static int l_sapp_swapchain__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sapp_swapchain_get_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_swapchain_get_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_swapchain_get_sample_count(L);
    if (strcmp(key, "color_format") == 0) return l_sapp_swapchain_get_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sapp_swapchain_get_depth_format(L);
    if (strcmp(key, "metal") == 0) return l_sapp_swapchain_get_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sapp_swapchain_get_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sapp_swapchain_get_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sapp_swapchain_get_vulkan(L);
    if (strcmp(key, "gl") == 0) return l_sapp_swapchain_get_gl(L);
    return 0;
}

static int l_sapp_swapchain__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "width") == 0) return l_sapp_swapchain_set_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_swapchain_set_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_swapchain_set_sample_count(L);
    if (strcmp(key, "color_format") == 0) return l_sapp_swapchain_set_color_format(L);
    if (strcmp(key, "depth_format") == 0) return l_sapp_swapchain_set_depth_format(L);
    if (strcmp(key, "metal") == 0) return l_sapp_swapchain_set_metal(L);
    if (strcmp(key, "d3d11") == 0) return l_sapp_swapchain_set_d3d11(L);
    if (strcmp(key, "wgpu") == 0) return l_sapp_swapchain_set_wgpu(L);
    if (strcmp(key, "vulkan") == 0) return l_sapp_swapchain_set_vulkan(L);
    if (strcmp(key, "gl") == 0) return l_sapp_swapchain_set_gl(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_logger_new(lua_State *L) {
    sapp_logger* ud = (sapp_logger*)lua_newuserdatauv(L, sizeof(sapp_logger), 0);
    memset(ud, 0, sizeof(sapp_logger));
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sapp_logger_get_user_data(lua_State *L) {
    sapp_logger* self = (sapp_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sapp_logger_set_user_data(lua_State *L) {
    sapp_logger* self = (sapp_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_logger__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_logger_get_user_data(L);
    return 0;
}

static int l_sapp_logger__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_logger_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_gl_desc_new(lua_State *L) {
    sapp_gl_desc* ud = (sapp_gl_desc*)lua_newuserdatauv(L, sizeof(sapp_gl_desc), 0);
    memset(ud, 0, sizeof(sapp_gl_desc));
    luaL_setmetatable(L, "sokol.GlDesc");
    return 1;
}

static int l_sapp_gl_desc_get_major_version(lua_State *L) {
    sapp_gl_desc* self = (sapp_gl_desc*)luaL_checkudata(L, 1, "sokol.GlDesc");
    lua_pushinteger(L, (lua_Integer)self->major_version);
    return 1;
}

static int l_sapp_gl_desc_set_major_version(lua_State *L) {
    sapp_gl_desc* self = (sapp_gl_desc*)luaL_checkudata(L, 1, "sokol.GlDesc");
    self->major_version = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_gl_desc_get_minor_version(lua_State *L) {
    sapp_gl_desc* self = (sapp_gl_desc*)luaL_checkudata(L, 1, "sokol.GlDesc");
    lua_pushinteger(L, (lua_Integer)self->minor_version);
    return 1;
}

static int l_sapp_gl_desc_set_minor_version(lua_State *L) {
    sapp_gl_desc* self = (sapp_gl_desc*)luaL_checkudata(L, 1, "sokol.GlDesc");
    self->minor_version = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_gl_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "major_version") == 0) return l_sapp_gl_desc_get_major_version(L);
    if (strcmp(key, "minor_version") == 0) return l_sapp_gl_desc_get_minor_version(L);
    return 0;
}

static int l_sapp_gl_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "major_version") == 0) return l_sapp_gl_desc_set_major_version(L);
    if (strcmp(key, "minor_version") == 0) return l_sapp_gl_desc_set_minor_version(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_win32_desc_new(lua_State *L) {
    sapp_win32_desc* ud = (sapp_win32_desc*)lua_newuserdatauv(L, sizeof(sapp_win32_desc), 0);
    memset(ud, 0, sizeof(sapp_win32_desc));
    luaL_setmetatable(L, "sokol.Win32Desc");
    return 1;
}

static int l_sapp_win32_desc_get_console_utf8(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    lua_pushboolean(L, self->console_utf8);
    return 1;
}

static int l_sapp_win32_desc_set_console_utf8(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    self->console_utf8 = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_win32_desc_get_console_create(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    lua_pushboolean(L, self->console_create);
    return 1;
}

static int l_sapp_win32_desc_set_console_create(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    self->console_create = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_win32_desc_get_console_attach(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    lua_pushboolean(L, self->console_attach);
    return 1;
}

static int l_sapp_win32_desc_set_console_attach(lua_State *L) {
    sapp_win32_desc* self = (sapp_win32_desc*)luaL_checkudata(L, 1, "sokol.Win32Desc");
    self->console_attach = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_win32_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "console_utf8") == 0) return l_sapp_win32_desc_get_console_utf8(L);
    if (strcmp(key, "console_create") == 0) return l_sapp_win32_desc_get_console_create(L);
    if (strcmp(key, "console_attach") == 0) return l_sapp_win32_desc_get_console_attach(L);
    return 0;
}

static int l_sapp_win32_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "console_utf8") == 0) return l_sapp_win32_desc_set_console_utf8(L);
    if (strcmp(key, "console_create") == 0) return l_sapp_win32_desc_set_console_create(L);
    if (strcmp(key, "console_attach") == 0) return l_sapp_win32_desc_set_console_attach(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_html5_desc_new(lua_State *L) {
    sapp_html5_desc* ud = (sapp_html5_desc*)lua_newuserdatauv(L, sizeof(sapp_html5_desc), 0);
    memset(ud, 0, sizeof(sapp_html5_desc));
    luaL_setmetatable(L, "sokol.Html5Desc");
    return 1;
}

static int l_sapp_html5_desc_get_canvas_selector(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushstring(L, self->canvas_selector);
    return 1;
}

static int l_sapp_html5_desc_set_canvas_selector(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->canvas_selector = luaL_checkstring(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_canvas_resize(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->canvas_resize);
    return 1;
}

static int l_sapp_html5_desc_set_canvas_resize(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->canvas_resize = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_preserve_drawing_buffer(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->preserve_drawing_buffer);
    return 1;
}

static int l_sapp_html5_desc_set_preserve_drawing_buffer(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->preserve_drawing_buffer = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_premultiplied_alpha(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->premultiplied_alpha);
    return 1;
}

static int l_sapp_html5_desc_set_premultiplied_alpha(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->premultiplied_alpha = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_ask_leave_site(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->ask_leave_site);
    return 1;
}

static int l_sapp_html5_desc_set_ask_leave_site(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->ask_leave_site = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_update_document_title(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->update_document_title);
    return 1;
}

static int l_sapp_html5_desc_set_update_document_title(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->update_document_title = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_bubble_mouse_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->bubble_mouse_events);
    return 1;
}

static int l_sapp_html5_desc_set_bubble_mouse_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->bubble_mouse_events = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_bubble_touch_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->bubble_touch_events);
    return 1;
}

static int l_sapp_html5_desc_set_bubble_touch_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->bubble_touch_events = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_bubble_wheel_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->bubble_wheel_events);
    return 1;
}

static int l_sapp_html5_desc_set_bubble_wheel_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->bubble_wheel_events = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_bubble_key_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->bubble_key_events);
    return 1;
}

static int l_sapp_html5_desc_set_bubble_key_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->bubble_key_events = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_bubble_char_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->bubble_char_events);
    return 1;
}

static int l_sapp_html5_desc_set_bubble_char_events(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->bubble_char_events = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_use_emsc_set_main_loop(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->use_emsc_set_main_loop);
    return 1;
}

static int l_sapp_html5_desc_set_use_emsc_set_main_loop(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->use_emsc_set_main_loop = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc_get_emsc_set_main_loop_simulate_infinite_loop(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    lua_pushboolean(L, self->emsc_set_main_loop_simulate_infinite_loop);
    return 1;
}

static int l_sapp_html5_desc_set_emsc_set_main_loop_simulate_infinite_loop(lua_State *L) {
    sapp_html5_desc* self = (sapp_html5_desc*)luaL_checkudata(L, 1, "sokol.Html5Desc");
    self->emsc_set_main_loop_simulate_infinite_loop = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "canvas_selector") == 0) return l_sapp_html5_desc_get_canvas_selector(L);
    if (strcmp(key, "canvas_resize") == 0) return l_sapp_html5_desc_get_canvas_resize(L);
    if (strcmp(key, "preserve_drawing_buffer") == 0) return l_sapp_html5_desc_get_preserve_drawing_buffer(L);
    if (strcmp(key, "premultiplied_alpha") == 0) return l_sapp_html5_desc_get_premultiplied_alpha(L);
    if (strcmp(key, "ask_leave_site") == 0) return l_sapp_html5_desc_get_ask_leave_site(L);
    if (strcmp(key, "update_document_title") == 0) return l_sapp_html5_desc_get_update_document_title(L);
    if (strcmp(key, "bubble_mouse_events") == 0) return l_sapp_html5_desc_get_bubble_mouse_events(L);
    if (strcmp(key, "bubble_touch_events") == 0) return l_sapp_html5_desc_get_bubble_touch_events(L);
    if (strcmp(key, "bubble_wheel_events") == 0) return l_sapp_html5_desc_get_bubble_wheel_events(L);
    if (strcmp(key, "bubble_key_events") == 0) return l_sapp_html5_desc_get_bubble_key_events(L);
    if (strcmp(key, "bubble_char_events") == 0) return l_sapp_html5_desc_get_bubble_char_events(L);
    if (strcmp(key, "use_emsc_set_main_loop") == 0) return l_sapp_html5_desc_get_use_emsc_set_main_loop(L);
    if (strcmp(key, "emsc_set_main_loop_simulate_infinite_loop") == 0) return l_sapp_html5_desc_get_emsc_set_main_loop_simulate_infinite_loop(L);
    return 0;
}

static int l_sapp_html5_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "canvas_selector") == 0) return l_sapp_html5_desc_set_canvas_selector(L);
    if (strcmp(key, "canvas_resize") == 0) return l_sapp_html5_desc_set_canvas_resize(L);
    if (strcmp(key, "preserve_drawing_buffer") == 0) return l_sapp_html5_desc_set_preserve_drawing_buffer(L);
    if (strcmp(key, "premultiplied_alpha") == 0) return l_sapp_html5_desc_set_premultiplied_alpha(L);
    if (strcmp(key, "ask_leave_site") == 0) return l_sapp_html5_desc_set_ask_leave_site(L);
    if (strcmp(key, "update_document_title") == 0) return l_sapp_html5_desc_set_update_document_title(L);
    if (strcmp(key, "bubble_mouse_events") == 0) return l_sapp_html5_desc_set_bubble_mouse_events(L);
    if (strcmp(key, "bubble_touch_events") == 0) return l_sapp_html5_desc_set_bubble_touch_events(L);
    if (strcmp(key, "bubble_wheel_events") == 0) return l_sapp_html5_desc_set_bubble_wheel_events(L);
    if (strcmp(key, "bubble_key_events") == 0) return l_sapp_html5_desc_set_bubble_key_events(L);
    if (strcmp(key, "bubble_char_events") == 0) return l_sapp_html5_desc_set_bubble_char_events(L);
    if (strcmp(key, "use_emsc_set_main_loop") == 0) return l_sapp_html5_desc_set_use_emsc_set_main_loop(L);
    if (strcmp(key, "emsc_set_main_loop_simulate_infinite_loop") == 0) return l_sapp_html5_desc_set_emsc_set_main_loop_simulate_infinite_loop(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_ios_desc_new(lua_State *L) {
    sapp_ios_desc* ud = (sapp_ios_desc*)lua_newuserdatauv(L, sizeof(sapp_ios_desc), 0);
    memset(ud, 0, sizeof(sapp_ios_desc));
    luaL_setmetatable(L, "sokol.IosDesc");
    return 1;
}

static int l_sapp_ios_desc_get_keyboard_resizes_canvas(lua_State *L) {
    sapp_ios_desc* self = (sapp_ios_desc*)luaL_checkudata(L, 1, "sokol.IosDesc");
    lua_pushboolean(L, self->keyboard_resizes_canvas);
    return 1;
}

static int l_sapp_ios_desc_set_keyboard_resizes_canvas(lua_State *L) {
    sapp_ios_desc* self = (sapp_ios_desc*)luaL_checkudata(L, 1, "sokol.IosDesc");
    self->keyboard_resizes_canvas = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_ios_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "keyboard_resizes_canvas") == 0) return l_sapp_ios_desc_get_keyboard_resizes_canvas(L);
    return 0;
}

static int l_sapp_ios_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "keyboard_resizes_canvas") == 0) return l_sapp_ios_desc_set_keyboard_resizes_canvas(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_desc_new(lua_State *L) {
    sapp_desc* ud = (sapp_desc*)lua_newuserdatauv(L, sizeof(sapp_desc), 0);
    memset(ud, 0, sizeof(sapp_desc));
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_sapp_desc_get_user_data(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sapp_desc_set_user_data(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_desc_get_width(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->width);
    return 1;
}

static int l_sapp_desc_set_width(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->width = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_height(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->height);
    return 1;
}

static int l_sapp_desc_set_height(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->height = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_sample_count(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->sample_count);
    return 1;
}

static int l_sapp_desc_set_sample_count(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->sample_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_swap_interval(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->swap_interval);
    return 1;
}

static int l_sapp_desc_set_swap_interval(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->swap_interval = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_high_dpi(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->high_dpi);
    return 1;
}

static int l_sapp_desc_set_high_dpi(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->high_dpi = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_desc_get_fullscreen(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->fullscreen);
    return 1;
}

static int l_sapp_desc_set_fullscreen(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->fullscreen = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_desc_get_alpha(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->alpha);
    return 1;
}

static int l_sapp_desc_set_alpha(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->alpha = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_desc_get_window_title(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushstring(L, self->window_title);
    return 1;
}

static int l_sapp_desc_set_window_title(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->window_title = luaL_checkstring(L, 2);
    return 0;
}

static int l_sapp_desc_get_enable_clipboard(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->enable_clipboard);
    return 1;
}

static int l_sapp_desc_set_enable_clipboard(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->enable_clipboard = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_desc_get_clipboard_size(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->clipboard_size);
    return 1;
}

static int l_sapp_desc_set_clipboard_size(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->clipboard_size = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_enable_dragndrop(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushboolean(L, self->enable_dragndrop);
    return 1;
}

static int l_sapp_desc_set_enable_dragndrop(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->enable_dragndrop = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_desc_get_max_dropped_files(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->max_dropped_files);
    return 1;
}

static int l_sapp_desc_set_max_dropped_files(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->max_dropped_files = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_max_dropped_file_path_length(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->max_dropped_file_path_length);
    return 1;
}

static int l_sapp_desc_set_max_dropped_file_path_length(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->max_dropped_file_path_length = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_desc_get_icon(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_icon_desc* ud = (sapp_icon_desc*)lua_newuserdatauv(L, sizeof(sapp_icon_desc), 0);
    *ud = self->icon;
    luaL_setmetatable(L, "sokol.IconDesc");
    return 1;
}

static int l_sapp_desc_set_icon(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_icon_desc* val = (sapp_icon_desc*)luaL_checkudata(L, 2, "sokol.IconDesc");
    self->icon = *val;
    return 0;
}

static int l_sapp_desc_get_allocator(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_allocator* ud = (sapp_allocator*)lua_newuserdatauv(L, sizeof(sapp_allocator), 0);
    *ud = self->allocator;
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_sapp_desc_set_allocator(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_allocator* val = (sapp_allocator*)luaL_checkudata(L, 2, "sokol.Allocator");
    self->allocator = *val;
    return 0;
}

static int l_sapp_desc_get_logger(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_logger* ud = (sapp_logger*)lua_newuserdatauv(L, sizeof(sapp_logger), 0);
    *ud = self->logger;
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_sapp_desc_set_logger(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_logger* val = (sapp_logger*)luaL_checkudata(L, 2, "sokol.Logger");
    self->logger = *val;
    return 0;
}

static int l_sapp_desc_get_gl(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_gl_desc* ud = (sapp_gl_desc*)lua_newuserdatauv(L, sizeof(sapp_gl_desc), 0);
    *ud = self->gl;
    luaL_setmetatable(L, "sokol.GlDesc");
    return 1;
}

static int l_sapp_desc_set_gl(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_gl_desc* val = (sapp_gl_desc*)luaL_checkudata(L, 2, "sokol.GlDesc");
    self->gl = *val;
    return 0;
}

static int l_sapp_desc_get_win32(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_win32_desc* ud = (sapp_win32_desc*)lua_newuserdatauv(L, sizeof(sapp_win32_desc), 0);
    *ud = self->win32;
    luaL_setmetatable(L, "sokol.Win32Desc");
    return 1;
}

static int l_sapp_desc_set_win32(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_win32_desc* val = (sapp_win32_desc*)luaL_checkudata(L, 2, "sokol.Win32Desc");
    self->win32 = *val;
    return 0;
}

static int l_sapp_desc_get_html5(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_html5_desc* ud = (sapp_html5_desc*)lua_newuserdatauv(L, sizeof(sapp_html5_desc), 0);
    *ud = self->html5;
    luaL_setmetatable(L, "sokol.Html5Desc");
    return 1;
}

static int l_sapp_desc_set_html5(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_html5_desc* val = (sapp_html5_desc*)luaL_checkudata(L, 2, "sokol.Html5Desc");
    self->html5 = *val;
    return 0;
}

static int l_sapp_desc_get_ios(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_ios_desc* ud = (sapp_ios_desc*)lua_newuserdatauv(L, sizeof(sapp_ios_desc), 0);
    *ud = self->ios;
    luaL_setmetatable(L, "sokol.IosDesc");
    return 1;
}

static int l_sapp_desc_set_ios(lua_State *L) {
    sapp_desc* self = (sapp_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    sapp_ios_desc* val = (sapp_ios_desc*)luaL_checkudata(L, 2, "sokol.IosDesc");
    self->ios = *val;
    return 0;
}

static int l_sapp_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_desc_get_user_data(L);
    if (strcmp(key, "width") == 0) return l_sapp_desc_get_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_desc_get_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_desc_get_sample_count(L);
    if (strcmp(key, "swap_interval") == 0) return l_sapp_desc_get_swap_interval(L);
    if (strcmp(key, "high_dpi") == 0) return l_sapp_desc_get_high_dpi(L);
    if (strcmp(key, "fullscreen") == 0) return l_sapp_desc_get_fullscreen(L);
    if (strcmp(key, "alpha") == 0) return l_sapp_desc_get_alpha(L);
    if (strcmp(key, "window_title") == 0) return l_sapp_desc_get_window_title(L);
    if (strcmp(key, "enable_clipboard") == 0) return l_sapp_desc_get_enable_clipboard(L);
    if (strcmp(key, "clipboard_size") == 0) return l_sapp_desc_get_clipboard_size(L);
    if (strcmp(key, "enable_dragndrop") == 0) return l_sapp_desc_get_enable_dragndrop(L);
    if (strcmp(key, "max_dropped_files") == 0) return l_sapp_desc_get_max_dropped_files(L);
    if (strcmp(key, "max_dropped_file_path_length") == 0) return l_sapp_desc_get_max_dropped_file_path_length(L);
    if (strcmp(key, "icon") == 0) return l_sapp_desc_get_icon(L);
    if (strcmp(key, "allocator") == 0) return l_sapp_desc_get_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sapp_desc_get_logger(L);
    if (strcmp(key, "gl") == 0) return l_sapp_desc_get_gl(L);
    if (strcmp(key, "win32") == 0) return l_sapp_desc_get_win32(L);
    if (strcmp(key, "html5") == 0) return l_sapp_desc_get_html5(L);
    if (strcmp(key, "ios") == 0) return l_sapp_desc_get_ios(L);
    return 0;
}

static int l_sapp_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_sapp_desc_set_user_data(L);
    if (strcmp(key, "width") == 0) return l_sapp_desc_set_width(L);
    if (strcmp(key, "height") == 0) return l_sapp_desc_set_height(L);
    if (strcmp(key, "sample_count") == 0) return l_sapp_desc_set_sample_count(L);
    if (strcmp(key, "swap_interval") == 0) return l_sapp_desc_set_swap_interval(L);
    if (strcmp(key, "high_dpi") == 0) return l_sapp_desc_set_high_dpi(L);
    if (strcmp(key, "fullscreen") == 0) return l_sapp_desc_set_fullscreen(L);
    if (strcmp(key, "alpha") == 0) return l_sapp_desc_set_alpha(L);
    if (strcmp(key, "window_title") == 0) return l_sapp_desc_set_window_title(L);
    if (strcmp(key, "enable_clipboard") == 0) return l_sapp_desc_set_enable_clipboard(L);
    if (strcmp(key, "clipboard_size") == 0) return l_sapp_desc_set_clipboard_size(L);
    if (strcmp(key, "enable_dragndrop") == 0) return l_sapp_desc_set_enable_dragndrop(L);
    if (strcmp(key, "max_dropped_files") == 0) return l_sapp_desc_set_max_dropped_files(L);
    if (strcmp(key, "max_dropped_file_path_length") == 0) return l_sapp_desc_set_max_dropped_file_path_length(L);
    if (strcmp(key, "icon") == 0) return l_sapp_desc_set_icon(L);
    if (strcmp(key, "allocator") == 0) return l_sapp_desc_set_allocator(L);
    if (strcmp(key, "logger") == 0) return l_sapp_desc_set_logger(L);
    if (strcmp(key, "gl") == 0) return l_sapp_desc_set_gl(L);
    if (strcmp(key, "win32") == 0) return l_sapp_desc_set_win32(L);
    if (strcmp(key, "html5") == 0) return l_sapp_desc_set_html5(L);
    if (strcmp(key, "ios") == 0) return l_sapp_desc_set_ios(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_html5_fetch_response_new(lua_State *L) {
    sapp_html5_fetch_response* ud = (sapp_html5_fetch_response*)lua_newuserdatauv(L, sizeof(sapp_html5_fetch_response), 0);
    memset(ud, 0, sizeof(sapp_html5_fetch_response));
    luaL_setmetatable(L, "sokol.Html5FetchResponse");
    return 1;
}

static int l_sapp_html5_fetch_response_get_succeeded(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    lua_pushboolean(L, self->succeeded);
    return 1;
}

static int l_sapp_html5_fetch_response_set_succeeded(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    self->succeeded = lua_toboolean(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_response_get_error_code(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    lua_pushinteger(L, (lua_Integer)self->error_code);
    return 1;
}

static int l_sapp_html5_fetch_response_set_error_code(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    self->error_code = (sapp_html5_fetch_error)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_response_get_file_index(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    lua_pushinteger(L, (lua_Integer)self->file_index);
    return 1;
}

static int l_sapp_html5_fetch_response_set_file_index(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    self->file_index = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_response_get_data(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    sapp_range* ud = (sapp_range*)lua_newuserdatauv(L, sizeof(sapp_range), 0);
    *ud = self->data;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sapp_html5_fetch_response_set_data(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    sapp_range* val = (sapp_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->data = *val;
    return 0;
}

static int l_sapp_html5_fetch_response_get_buffer(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    sapp_range* ud = (sapp_range*)lua_newuserdatauv(L, sizeof(sapp_range), 0);
    *ud = self->buffer;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sapp_html5_fetch_response_set_buffer(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    sapp_range* val = (sapp_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->buffer = *val;
    return 0;
}

static int l_sapp_html5_fetch_response_get_user_data(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sapp_html5_fetch_response_set_user_data(lua_State *L) {
    sapp_html5_fetch_response* self = (sapp_html5_fetch_response*)luaL_checkudata(L, 1, "sokol.Html5FetchResponse");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_response__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "succeeded") == 0) return l_sapp_html5_fetch_response_get_succeeded(L);
    if (strcmp(key, "error_code") == 0) return l_sapp_html5_fetch_response_get_error_code(L);
    if (strcmp(key, "file_index") == 0) return l_sapp_html5_fetch_response_get_file_index(L);
    if (strcmp(key, "data") == 0) return l_sapp_html5_fetch_response_get_data(L);
    if (strcmp(key, "buffer") == 0) return l_sapp_html5_fetch_response_get_buffer(L);
    if (strcmp(key, "user_data") == 0) return l_sapp_html5_fetch_response_get_user_data(L);
    return 0;
}

static int l_sapp_html5_fetch_response__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "succeeded") == 0) return l_sapp_html5_fetch_response_set_succeeded(L);
    if (strcmp(key, "error_code") == 0) return l_sapp_html5_fetch_response_set_error_code(L);
    if (strcmp(key, "file_index") == 0) return l_sapp_html5_fetch_response_set_file_index(L);
    if (strcmp(key, "data") == 0) return l_sapp_html5_fetch_response_set_data(L);
    if (strcmp(key, "buffer") == 0) return l_sapp_html5_fetch_response_set_buffer(L);
    if (strcmp(key, "user_data") == 0) return l_sapp_html5_fetch_response_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_html5_fetch_request_new(lua_State *L) {
    sapp_html5_fetch_request* ud = (sapp_html5_fetch_request*)lua_newuserdatauv(L, sizeof(sapp_html5_fetch_request), 0);
    memset(ud, 0, sizeof(sapp_html5_fetch_request));
    luaL_setmetatable(L, "sokol.Html5FetchRequest");
    return 1;
}

static int l_sapp_html5_fetch_request_get_dropped_file_index(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    lua_pushinteger(L, (lua_Integer)self->dropped_file_index);
    return 1;
}

static int l_sapp_html5_fetch_request_set_dropped_file_index(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    self->dropped_file_index = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_request_get_buffer(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    sapp_range* ud = (sapp_range*)lua_newuserdatauv(L, sizeof(sapp_range), 0);
    *ud = self->buffer;
    luaL_setmetatable(L, "sokol.Range");
    return 1;
}

static int l_sapp_html5_fetch_request_set_buffer(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    sapp_range* val = (sapp_range*)luaL_checkudata(L, 2, "sokol.Range");
    self->buffer = *val;
    return 0;
}

static int l_sapp_html5_fetch_request_get_user_data(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_sapp_html5_fetch_request_set_user_data(lua_State *L) {
    sapp_html5_fetch_request* self = (sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_sapp_html5_fetch_request__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "dropped_file_index") == 0) return l_sapp_html5_fetch_request_get_dropped_file_index(L);
    if (strcmp(key, "buffer") == 0) return l_sapp_html5_fetch_request_get_buffer(L);
    if (strcmp(key, "user_data") == 0) return l_sapp_html5_fetch_request_get_user_data(L);
    return 0;
}

static int l_sapp_html5_fetch_request__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "dropped_file_index") == 0) return l_sapp_html5_fetch_request_set_dropped_file_index(L);
    if (strcmp(key, "buffer") == 0) return l_sapp_html5_fetch_request_set_buffer(L);
    if (strcmp(key, "user_data") == 0) return l_sapp_html5_fetch_request_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_sapp_isvalid(lua_State *L) {
    bool result = sapp_isvalid();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_width(lua_State *L) {
    int result = sapp_width();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_widthf(lua_State *L) {
    float result = sapp_widthf();
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sapp_height(lua_State *L) {
    int result = sapp_height();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_heightf(lua_State *L) {
    float result = sapp_heightf();
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sapp_color_format(lua_State *L) {
    sapp_pixel_format result = sapp_color_format();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_depth_format(lua_State *L) {
    sapp_pixel_format result = sapp_depth_format();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_sample_count(lua_State *L) {
    int result = sapp_sample_count();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_high_dpi(lua_State *L) {
    bool result = sapp_high_dpi();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_dpi_scale(lua_State *L) {
    float result = sapp_dpi_scale();
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sapp_show_keyboard(lua_State *L) {
    bool show = lua_toboolean(L, 1);
    sapp_show_keyboard(show);
    return 0;
}

static int l_sapp_keyboard_shown(lua_State *L) {
    bool result = sapp_keyboard_shown();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_is_fullscreen(lua_State *L) {
    bool result = sapp_is_fullscreen();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_toggle_fullscreen(lua_State *L) {
    sapp_toggle_fullscreen();
    return 0;
}

static int l_sapp_show_mouse(lua_State *L) {
    bool show = lua_toboolean(L, 1);
    sapp_show_mouse(show);
    return 0;
}

static int l_sapp_mouse_shown(lua_State *L) {
    bool result = sapp_mouse_shown();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_lock_mouse(lua_State *L) {
    bool lock = lua_toboolean(L, 1);
    sapp_lock_mouse(lock);
    return 0;
}

static int l_sapp_mouse_locked(lua_State *L) {
    bool result = sapp_mouse_locked();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_set_mouse_cursor(lua_State *L) {
    sapp_mouse_cursor cursor = (sapp_mouse_cursor)luaL_checkinteger(L, 1);
    sapp_set_mouse_cursor(cursor);
    return 0;
}

static int l_sapp_get_mouse_cursor(lua_State *L) {
    sapp_mouse_cursor result = sapp_get_mouse_cursor();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_bind_mouse_cursor_image(lua_State *L) {
    sapp_mouse_cursor cursor = (sapp_mouse_cursor)luaL_checkinteger(L, 1);
    const sapp_image_desc* desc = (const sapp_image_desc*)luaL_checkudata(L, 2, "sokol.ImageDesc");
    sapp_mouse_cursor result = sapp_bind_mouse_cursor_image(cursor, desc);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_unbind_mouse_cursor_image(lua_State *L) {
    sapp_mouse_cursor cursor = (sapp_mouse_cursor)luaL_checkinteger(L, 1);
    sapp_unbind_mouse_cursor_image(cursor);
    return 0;
}

static int l_sapp_userdata(lua_State *L) {
    void * result = sapp_userdata();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_query_desc(lua_State *L) {
    sapp_desc result = sapp_query_desc();
    sapp_desc* ud = (sapp_desc*)lua_newuserdatauv(L, sizeof(sapp_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_sapp_request_quit(lua_State *L) {
    sapp_request_quit();
    return 0;
}

static int l_sapp_cancel_quit(lua_State *L) {
    sapp_cancel_quit();
    return 0;
}

static int l_sapp_quit(lua_State *L) {
    sapp_quit();
    return 0;
}

static int l_sapp_consume_event(lua_State *L) {
    sapp_consume_event();
    return 0;
}

static int l_sapp_frame_count(lua_State *L) {
    uint64_t result = sapp_frame_count();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_frame_duration(lua_State *L) {
    double result = sapp_frame_duration();
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_sapp_set_clipboard_string(lua_State *L) {
    const char* str = luaL_checkstring(L, 1);
    sapp_set_clipboard_string(str);
    return 0;
}

static int l_sapp_get_clipboard_string(lua_State *L) {
    const char * result = sapp_get_clipboard_string();
    lua_pushstring(L, result);
    return 1;
}

static int l_sapp_set_window_title(lua_State *L) {
    const char* str = luaL_checkstring(L, 1);
    sapp_set_window_title(str);
    return 0;
}

static int l_sapp_set_icon(lua_State *L) {
    const sapp_icon_desc* icon_desc = (const sapp_icon_desc*)luaL_checkudata(L, 1, "sokol.IconDesc");
    sapp_set_icon(icon_desc);
    return 0;
}

static int l_sapp_get_num_dropped_files(lua_State *L) {
    int result = sapp_get_num_dropped_files();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_get_dropped_file_path(lua_State *L) {
    int index = (int)luaL_checkinteger(L, 1);
    const char * result = sapp_get_dropped_file_path(index);
    lua_pushstring(L, result);
    return 1;
}

static int l_sapp_get_environment(lua_State *L) {
    sapp_environment result = sapp_get_environment();
    sapp_environment* ud = (sapp_environment*)lua_newuserdatauv(L, sizeof(sapp_environment), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Environment");
    return 1;
}

static int l_sapp_get_swapchain(lua_State *L) {
    sapp_swapchain result = sapp_get_swapchain();
    sapp_swapchain* ud = (sapp_swapchain*)lua_newuserdatauv(L, sizeof(sapp_swapchain), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Swapchain");
    return 1;
}

static int l_sapp_egl_get_display(lua_State *L) {
    const void * result = sapp_egl_get_display();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_egl_get_context(lua_State *L) {
    const void * result = sapp_egl_get_context();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_html5_ask_leave_site(lua_State *L) {
    bool ask = lua_toboolean(L, 1);
    sapp_html5_ask_leave_site(ask);
    return 0;
}

static int l_sapp_html5_get_dropped_file_size(lua_State *L) {
    int index = (int)luaL_checkinteger(L, 1);
    uint32_t result = sapp_html5_get_dropped_file_size(index);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_html5_fetch_dropped_file(lua_State *L) {
    const sapp_html5_fetch_request* request = (const sapp_html5_fetch_request*)luaL_checkudata(L, 1, "sokol.Html5FetchRequest");
    sapp_html5_fetch_dropped_file(request);
    return 0;
}

static int l_sapp_macos_get_window(lua_State *L) {
    const void * result = sapp_macos_get_window();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_ios_get_window(lua_State *L) {
    const void * result = sapp_ios_get_window();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_d3d11_get_swap_chain(lua_State *L) {
    const void * result = sapp_d3d11_get_swap_chain();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_win32_get_hwnd(lua_State *L) {
    const void * result = sapp_win32_get_hwnd();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_gl_get_major_version(lua_State *L) {
    int result = sapp_gl_get_major_version();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_gl_get_minor_version(lua_State *L) {
    int result = sapp_gl_get_minor_version();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_sapp_gl_is_gles(lua_State *L) {
    bool result = sapp_gl_is_gles();
    lua_pushboolean(L, result);
    return 1;
}

static int l_sapp_x11_get_window(lua_State *L) {
    const void * result = sapp_x11_get_window();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_x11_get_display(lua_State *L) {
    const void * result = sapp_x11_get_display();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_sapp_android_get_native_activity(lua_State *L) {
    const void * result = sapp_android_get_native_activity();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static void register_sapp_event_type(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SAPP_EVENTTYPE_INVALID);
    lua_setfield(L, -2, "EVENTTYPE_INVALID");
    lua_pushinteger(L, SAPP_EVENTTYPE_KEY_DOWN);
    lua_setfield(L, -2, "EVENTTYPE_KEY_DOWN");
    lua_pushinteger(L, SAPP_EVENTTYPE_KEY_UP);
    lua_setfield(L, -2, "EVENTTYPE_KEY_UP");
    lua_pushinteger(L, SAPP_EVENTTYPE_CHAR);
    lua_setfield(L, -2, "EVENTTYPE_CHAR");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_DOWN);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_DOWN");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_UP);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_UP");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_SCROLL);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_SCROLL");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_MOVE);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_MOVE");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_ENTER);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_ENTER");
    lua_pushinteger(L, SAPP_EVENTTYPE_MOUSE_LEAVE);
    lua_setfield(L, -2, "EVENTTYPE_MOUSE_LEAVE");
    lua_pushinteger(L, SAPP_EVENTTYPE_TOUCHES_BEGAN);
    lua_setfield(L, -2, "EVENTTYPE_TOUCHES_BEGAN");
    lua_pushinteger(L, SAPP_EVENTTYPE_TOUCHES_MOVED);
    lua_setfield(L, -2, "EVENTTYPE_TOUCHES_MOVED");
    lua_pushinteger(L, SAPP_EVENTTYPE_TOUCHES_ENDED);
    lua_setfield(L, -2, "EVENTTYPE_TOUCHES_ENDED");
    lua_pushinteger(L, SAPP_EVENTTYPE_TOUCHES_CANCELLED);
    lua_setfield(L, -2, "EVENTTYPE_TOUCHES_CANCELLED");
    lua_pushinteger(L, SAPP_EVENTTYPE_RESIZED);
    lua_setfield(L, -2, "EVENTTYPE_RESIZED");
    lua_pushinteger(L, SAPP_EVENTTYPE_ICONIFIED);
    lua_setfield(L, -2, "EVENTTYPE_ICONIFIED");
    lua_pushinteger(L, SAPP_EVENTTYPE_RESTORED);
    lua_setfield(L, -2, "EVENTTYPE_RESTORED");
    lua_pushinteger(L, SAPP_EVENTTYPE_FOCUSED);
    lua_setfield(L, -2, "EVENTTYPE_FOCUSED");
    lua_pushinteger(L, SAPP_EVENTTYPE_UNFOCUSED);
    lua_setfield(L, -2, "EVENTTYPE_UNFOCUSED");
    lua_pushinteger(L, SAPP_EVENTTYPE_SUSPENDED);
    lua_setfield(L, -2, "EVENTTYPE_SUSPENDED");
    lua_pushinteger(L, SAPP_EVENTTYPE_RESUMED);
    lua_setfield(L, -2, "EVENTTYPE_RESUMED");
    lua_pushinteger(L, SAPP_EVENTTYPE_QUIT_REQUESTED);
    lua_setfield(L, -2, "EVENTTYPE_QUIT_REQUESTED");
    lua_pushinteger(L, SAPP_EVENTTYPE_CLIPBOARD_PASTED);
    lua_setfield(L, -2, "EVENTTYPE_CLIPBOARD_PASTED");
    lua_pushinteger(L, SAPP_EVENTTYPE_FILES_DROPPED);
    lua_setfield(L, -2, "EVENTTYPE_FILES_DROPPED");
    lua_pushinteger(L, _SAPP_EVENTTYPE_NUM);
    lua_setfield(L, -2, "_SAPP_EVENTTYPE_NUM");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "_SAPP_EVENTTYPE_FORCE_U32");
    lua_setfield(L, -2, "EventType");
}

static void register_sapp_keycode(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "INVALID");
    lua_pushinteger(L, 32);
    lua_setfield(L, -2, "SPACE");
    lua_pushinteger(L, 39);
    lua_setfield(L, -2, "APOSTROPHE");
    lua_pushinteger(L, 44);
    lua_setfield(L, -2, "COMMA");
    lua_pushinteger(L, 45);
    lua_setfield(L, -2, "MINUS");
    lua_pushinteger(L, 46);
    lua_setfield(L, -2, "PERIOD");
    lua_pushinteger(L, 47);
    lua_setfield(L, -2, "SLASH");
    lua_pushinteger(L, 48);
    lua_setfield(L, -2, "0");
    lua_pushinteger(L, 49);
    lua_setfield(L, -2, "1");
    lua_pushinteger(L, 50);
    lua_setfield(L, -2, "2");
    lua_pushinteger(L, 51);
    lua_setfield(L, -2, "3");
    lua_pushinteger(L, 52);
    lua_setfield(L, -2, "4");
    lua_pushinteger(L, 53);
    lua_setfield(L, -2, "5");
    lua_pushinteger(L, 54);
    lua_setfield(L, -2, "6");
    lua_pushinteger(L, 55);
    lua_setfield(L, -2, "7");
    lua_pushinteger(L, 56);
    lua_setfield(L, -2, "8");
    lua_pushinteger(L, 57);
    lua_setfield(L, -2, "9");
    lua_pushinteger(L, 59);
    lua_setfield(L, -2, "SEMICOLON");
    lua_pushinteger(L, 61);
    lua_setfield(L, -2, "EQUAL");
    lua_pushinteger(L, 65);
    lua_setfield(L, -2, "A");
    lua_pushinteger(L, 66);
    lua_setfield(L, -2, "B");
    lua_pushinteger(L, 67);
    lua_setfield(L, -2, "C");
    lua_pushinteger(L, 68);
    lua_setfield(L, -2, "D");
    lua_pushinteger(L, 69);
    lua_setfield(L, -2, "E");
    lua_pushinteger(L, 70);
    lua_setfield(L, -2, "F");
    lua_pushinteger(L, 71);
    lua_setfield(L, -2, "G");
    lua_pushinteger(L, 72);
    lua_setfield(L, -2, "H");
    lua_pushinteger(L, 73);
    lua_setfield(L, -2, "I");
    lua_pushinteger(L, 74);
    lua_setfield(L, -2, "J");
    lua_pushinteger(L, 75);
    lua_setfield(L, -2, "K");
    lua_pushinteger(L, 76);
    lua_setfield(L, -2, "L");
    lua_pushinteger(L, 77);
    lua_setfield(L, -2, "M");
    lua_pushinteger(L, 78);
    lua_setfield(L, -2, "N");
    lua_pushinteger(L, 79);
    lua_setfield(L, -2, "O");
    lua_pushinteger(L, 80);
    lua_setfield(L, -2, "P");
    lua_pushinteger(L, 81);
    lua_setfield(L, -2, "Q");
    lua_pushinteger(L, 82);
    lua_setfield(L, -2, "R");
    lua_pushinteger(L, 83);
    lua_setfield(L, -2, "S");
    lua_pushinteger(L, 84);
    lua_setfield(L, -2, "T");
    lua_pushinteger(L, 85);
    lua_setfield(L, -2, "U");
    lua_pushinteger(L, 86);
    lua_setfield(L, -2, "V");
    lua_pushinteger(L, 87);
    lua_setfield(L, -2, "W");
    lua_pushinteger(L, 88);
    lua_setfield(L, -2, "X");
    lua_pushinteger(L, 89);
    lua_setfield(L, -2, "Y");
    lua_pushinteger(L, 90);
    lua_setfield(L, -2, "Z");
    lua_pushinteger(L, 91);
    lua_setfield(L, -2, "LEFT_BRACKET");
    lua_pushinteger(L, 92);
    lua_setfield(L, -2, "BACKSLASH");
    lua_pushinteger(L, 93);
    lua_setfield(L, -2, "RIGHT_BRACKET");
    lua_pushinteger(L, 96);
    lua_setfield(L, -2, "GRAVE_ACCENT");
    lua_pushinteger(L, 161);
    lua_setfield(L, -2, "WORLD_1");
    lua_pushinteger(L, 162);
    lua_setfield(L, -2, "WORLD_2");
    lua_pushinteger(L, 256);
    lua_setfield(L, -2, "ESCAPE");
    lua_pushinteger(L, 257);
    lua_setfield(L, -2, "ENTER");
    lua_pushinteger(L, 258);
    lua_setfield(L, -2, "TAB");
    lua_pushinteger(L, 259);
    lua_setfield(L, -2, "BACKSPACE");
    lua_pushinteger(L, 260);
    lua_setfield(L, -2, "INSERT");
    lua_pushinteger(L, 261);
    lua_setfield(L, -2, "DELETE");
    lua_pushinteger(L, 262);
    lua_setfield(L, -2, "RIGHT");
    lua_pushinteger(L, 263);
    lua_setfield(L, -2, "LEFT");
    lua_pushinteger(L, 264);
    lua_setfield(L, -2, "DOWN");
    lua_pushinteger(L, 265);
    lua_setfield(L, -2, "UP");
    lua_pushinteger(L, 266);
    lua_setfield(L, -2, "PAGE_UP");
    lua_pushinteger(L, 267);
    lua_setfield(L, -2, "PAGE_DOWN");
    lua_pushinteger(L, 268);
    lua_setfield(L, -2, "HOME");
    lua_pushinteger(L, 269);
    lua_setfield(L, -2, "END");
    lua_pushinteger(L, 280);
    lua_setfield(L, -2, "CAPS_LOCK");
    lua_pushinteger(L, 281);
    lua_setfield(L, -2, "SCROLL_LOCK");
    lua_pushinteger(L, 282);
    lua_setfield(L, -2, "NUM_LOCK");
    lua_pushinteger(L, 283);
    lua_setfield(L, -2, "PRINT_SCREEN");
    lua_pushinteger(L, 284);
    lua_setfield(L, -2, "PAUSE");
    lua_pushinteger(L, 290);
    lua_setfield(L, -2, "F1");
    lua_pushinteger(L, 291);
    lua_setfield(L, -2, "F2");
    lua_pushinteger(L, 292);
    lua_setfield(L, -2, "F3");
    lua_pushinteger(L, 293);
    lua_setfield(L, -2, "F4");
    lua_pushinteger(L, 294);
    lua_setfield(L, -2, "F5");
    lua_pushinteger(L, 295);
    lua_setfield(L, -2, "F6");
    lua_pushinteger(L, 296);
    lua_setfield(L, -2, "F7");
    lua_pushinteger(L, 297);
    lua_setfield(L, -2, "F8");
    lua_pushinteger(L, 298);
    lua_setfield(L, -2, "F9");
    lua_pushinteger(L, 299);
    lua_setfield(L, -2, "F10");
    lua_pushinteger(L, 300);
    lua_setfield(L, -2, "F11");
    lua_pushinteger(L, 301);
    lua_setfield(L, -2, "F12");
    lua_pushinteger(L, 302);
    lua_setfield(L, -2, "F13");
    lua_pushinteger(L, 303);
    lua_setfield(L, -2, "F14");
    lua_pushinteger(L, 304);
    lua_setfield(L, -2, "F15");
    lua_pushinteger(L, 305);
    lua_setfield(L, -2, "F16");
    lua_pushinteger(L, 306);
    lua_setfield(L, -2, "F17");
    lua_pushinteger(L, 307);
    lua_setfield(L, -2, "F18");
    lua_pushinteger(L, 308);
    lua_setfield(L, -2, "F19");
    lua_pushinteger(L, 309);
    lua_setfield(L, -2, "F20");
    lua_pushinteger(L, 310);
    lua_setfield(L, -2, "F21");
    lua_pushinteger(L, 311);
    lua_setfield(L, -2, "F22");
    lua_pushinteger(L, 312);
    lua_setfield(L, -2, "F23");
    lua_pushinteger(L, 313);
    lua_setfield(L, -2, "F24");
    lua_pushinteger(L, 314);
    lua_setfield(L, -2, "F25");
    lua_pushinteger(L, 320);
    lua_setfield(L, -2, "KP_0");
    lua_pushinteger(L, 321);
    lua_setfield(L, -2, "KP_1");
    lua_pushinteger(L, 322);
    lua_setfield(L, -2, "KP_2");
    lua_pushinteger(L, 323);
    lua_setfield(L, -2, "KP_3");
    lua_pushinteger(L, 324);
    lua_setfield(L, -2, "KP_4");
    lua_pushinteger(L, 325);
    lua_setfield(L, -2, "KP_5");
    lua_pushinteger(L, 326);
    lua_setfield(L, -2, "KP_6");
    lua_pushinteger(L, 327);
    lua_setfield(L, -2, "KP_7");
    lua_pushinteger(L, 328);
    lua_setfield(L, -2, "KP_8");
    lua_pushinteger(L, 329);
    lua_setfield(L, -2, "KP_9");
    lua_pushinteger(L, 330);
    lua_setfield(L, -2, "KP_DECIMAL");
    lua_pushinteger(L, 331);
    lua_setfield(L, -2, "KP_DIVIDE");
    lua_pushinteger(L, 332);
    lua_setfield(L, -2, "KP_MULTIPLY");
    lua_pushinteger(L, 333);
    lua_setfield(L, -2, "KP_SUBTRACT");
    lua_pushinteger(L, 334);
    lua_setfield(L, -2, "KP_ADD");
    lua_pushinteger(L, 335);
    lua_setfield(L, -2, "KP_ENTER");
    lua_pushinteger(L, 336);
    lua_setfield(L, -2, "KP_EQUAL");
    lua_pushinteger(L, 340);
    lua_setfield(L, -2, "LEFT_SHIFT");
    lua_pushinteger(L, 341);
    lua_setfield(L, -2, "LEFT_CONTROL");
    lua_pushinteger(L, 342);
    lua_setfield(L, -2, "LEFT_ALT");
    lua_pushinteger(L, 343);
    lua_setfield(L, -2, "LEFT_SUPER");
    lua_pushinteger(L, 344);
    lua_setfield(L, -2, "RIGHT_SHIFT");
    lua_pushinteger(L, 345);
    lua_setfield(L, -2, "RIGHT_CONTROL");
    lua_pushinteger(L, 346);
    lua_setfield(L, -2, "RIGHT_ALT");
    lua_pushinteger(L, 347);
    lua_setfield(L, -2, "RIGHT_SUPER");
    lua_pushinteger(L, 348);
    lua_setfield(L, -2, "MENU");
    lua_setfield(L, -2, "Keycode");
}

static void register_sapp_android_tooltype(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "ANDROIDTOOLTYPE_UNKNOWN");
    lua_pushinteger(L, 1);
    lua_setfield(L, -2, "ANDROIDTOOLTYPE_FINGER");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "ANDROIDTOOLTYPE_STYLUS");
    lua_pushinteger(L, 3);
    lua_setfield(L, -2, "ANDROIDTOOLTYPE_MOUSE");
    lua_setfield(L, -2, "AndroidTooltype");
}

static void register_sapp_mousebutton(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "LEFT");
    lua_pushinteger(L, 1);
    lua_setfield(L, -2, "RIGHT");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "MIDDLE");
    lua_pushinteger(L, 256);
    lua_setfield(L, -2, "INVALID");
    lua_setfield(L, -2, "Mousebutton");
}

static void register_sapp_log_item(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SAPP_LOGITEM_OK);
    lua_setfield(L, -2, "LOGITEM_OK");
    lua_pushinteger(L, SAPP_LOGITEM_MALLOC_FAILED);
    lua_setfield(L, -2, "LOGITEM_MALLOC_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_MACOS_INVALID_NSOPENGL_PROFILE);
    lua_setfield(L, -2, "LOGITEM_MACOS_INVALID_NSOPENGL_PROFILE");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_LOAD_OPENGL32_DLL_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_LOAD_OPENGL32_DLL_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_CREATE_HELPER_WINDOW_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_CREATE_HELPER_WINDOW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_HELPER_WINDOW_GETDC_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_HELPER_WINDOW_GETDC_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_DUMMY_CONTEXT_SET_PIXELFORMAT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_DUMMY_CONTEXT_SET_PIXELFORMAT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_CREATE_DUMMY_CONTEXT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_CREATE_DUMMY_CONTEXT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_DUMMY_CONTEXT_MAKE_CURRENT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_DUMMY_CONTEXT_MAKE_CURRENT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_GET_PIXELFORMAT_ATTRIB_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_GET_PIXELFORMAT_ATTRIB_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_FIND_PIXELFORMAT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_FIND_PIXELFORMAT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_DESCRIBE_PIXELFORMAT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_DESCRIBE_PIXELFORMAT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_SET_PIXELFORMAT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_SET_PIXELFORMAT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_ARB_CREATE_CONTEXT_REQUIRED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_ARB_CREATE_CONTEXT_REQUIRED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_ARB_CREATE_CONTEXT_PROFILE_REQUIRED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_ARB_CREATE_CONTEXT_PROFILE_REQUIRED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_OPENGL_VERSION_NOT_SUPPORTED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_OPENGL_VERSION_NOT_SUPPORTED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_OPENGL_PROFILE_NOT_SUPPORTED);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_OPENGL_PROFILE_NOT_SUPPORTED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_INCOMPATIBLE_DEVICE_CONTEXT);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_INCOMPATIBLE_DEVICE_CONTEXT");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_WGL_CREATE_CONTEXT_ATTRIBS_FAILED_OTHER);
    lua_setfield(L, -2, "LOGITEM_WIN32_WGL_CREATE_CONTEXT_ATTRIBS_FAILED_OTHER");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_D3D11_CREATE_DEVICE_AND_SWAPCHAIN_WITH_DEBUG_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_D3D11_CREATE_DEVICE_AND_SWAPCHAIN_WITH_DEBUG_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_D3D11_GET_IDXGIFACTORY_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_D3D11_GET_IDXGIFACTORY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_D3D11_GET_IDXGIADAPTER_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_D3D11_GET_IDXGIADAPTER_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_D3D11_QUERY_INTERFACE_IDXGIDEVICE1_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_D3D11_QUERY_INTERFACE_IDXGIDEVICE1_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_LOCK);
    lua_setfield(L, -2, "LOGITEM_WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_LOCK");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_UNLOCK);
    lua_setfield(L, -2, "LOGITEM_WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_UNLOCK");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_GET_RAW_INPUT_DATA_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_GET_RAW_INPUT_DATA_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WIN32_DESTROYICON_FOR_CURSOR_FAILED);
    lua_setfield(L, -2, "LOGITEM_WIN32_DESTROYICON_FOR_CURSOR_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_LOAD_LIBGL_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_LOAD_LIBGL_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_LOAD_ENTRY_POINTS_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_LOAD_ENTRY_POINTS_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_EXTENSION_NOT_FOUND);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_EXTENSION_NOT_FOUND");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_QUERY_VERSION_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_QUERY_VERSION_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_VERSION_TOO_LOW);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_VERSION_TOO_LOW");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_NO_GLXFBCONFIGS);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_NO_GLXFBCONFIGS");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_NO_SUITABLE_GLXFBCONFIG);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_NO_SUITABLE_GLXFBCONFIG");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_GET_VISUAL_FROM_FBCONFIG_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_GET_VISUAL_FROM_FBCONFIG_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_REQUIRED_EXTENSIONS_MISSING);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_REQUIRED_EXTENSIONS_MISSING");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_CREATE_CONTEXT_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_CREATE_CONTEXT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_GLX_CREATE_WINDOW_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_GLX_CREATE_WINDOW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_X11_CREATE_WINDOW_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_X11_CREATE_WINDOW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_BIND_OPENGL_API_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_BIND_OPENGL_API_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_BIND_OPENGL_ES_API_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_BIND_OPENGL_ES_API_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_GET_DISPLAY_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_GET_DISPLAY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_INITIALIZE_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_INITIALIZE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_NO_CONFIGS);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_NO_CONFIGS");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_NO_NATIVE_VISUAL);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_NO_NATIVE_VISUAL");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_GET_VISUAL_INFO_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_GET_VISUAL_INFO_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_CREATE_WINDOW_SURFACE_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_CREATE_WINDOW_SURFACE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_CREATE_CONTEXT_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_CREATE_CONTEXT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_EGL_MAKE_CURRENT_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_EGL_MAKE_CURRENT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_X11_OPEN_DISPLAY_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_X11_OPEN_DISPLAY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_X11_QUERY_SYSTEM_DPI_FAILED);
    lua_setfield(L, -2, "LOGITEM_LINUX_X11_QUERY_SYSTEM_DPI_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_X11_DROPPED_FILE_URI_WRONG_SCHEME);
    lua_setfield(L, -2, "LOGITEM_LINUX_X11_DROPPED_FILE_URI_WRONG_SCHEME");
    lua_pushinteger(L, SAPP_LOGITEM_LINUX_X11_FAILED_TO_BECOME_OWNER_OF_CLIPBOARD);
    lua_setfield(L, -2, "LOGITEM_LINUX_X11_FAILED_TO_BECOME_OWNER_OF_CLIPBOARD");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_UNSUPPORTED_INPUT_EVENT_INPUT_CB);
    lua_setfield(L, -2, "LOGITEM_ANDROID_UNSUPPORTED_INPUT_EVENT_INPUT_CB");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_UNSUPPORTED_INPUT_EVENT_MAIN_CB);
    lua_setfield(L, -2, "LOGITEM_ANDROID_UNSUPPORTED_INPUT_EVENT_MAIN_CB");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_READ_MSG_FAILED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_READ_MSG_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_WRITE_MSG_FAILED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_WRITE_MSG_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_CREATE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_CREATE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_RESUME);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_RESUME");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_PAUSE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_PAUSE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_FOCUS);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_FOCUS");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_NO_FOCUS);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_NO_FOCUS");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_SET_NATIVE_WINDOW);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_SET_NATIVE_WINDOW");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_SET_INPUT_QUEUE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_SET_INPUT_QUEUE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_MSG_DESTROY);
    lua_setfield(L, -2, "LOGITEM_ANDROID_MSG_DESTROY");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_UNKNOWN_MSG);
    lua_setfield(L, -2, "LOGITEM_ANDROID_UNKNOWN_MSG");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_LOOP_THREAD_STARTED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_LOOP_THREAD_STARTED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_LOOP_THREAD_DONE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_LOOP_THREAD_DONE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSTART);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSTART");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONRESUME);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONRESUME");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSAVEINSTANCESTATE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSAVEINSTANCESTATE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONWINDOWFOCUSCHANGED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONWINDOWFOCUSCHANGED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONPAUSE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONPAUSE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSTOP);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONSTOP");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWCREATED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWCREATED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWDESTROYED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWDESTROYED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUECREATED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUECREATED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUEDESTROYED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUEDESTROYED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONCONFIGURATIONCHANGED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONCONFIGURATIONCHANGED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONLOWMEMORY);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONLOWMEMORY");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONDESTROY);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONDESTROY");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_DONE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_DONE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_ONCREATE);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_ONCREATE");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_CREATE_THREAD_PIPE_FAILED);
    lua_setfield(L, -2, "LOGITEM_ANDROID_CREATE_THREAD_PIPE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_ANDROID_NATIVE_ACTIVITY_CREATE_SUCCESS);
    lua_setfield(L, -2, "LOGITEM_ANDROID_NATIVE_ACTIVITY_CREATE_SUCCESS");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_DEVICE_LOST);
    lua_setfield(L, -2, "LOGITEM_WGPU_DEVICE_LOST");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_DEVICE_LOG);
    lua_setfield(L, -2, "LOGITEM_WGPU_DEVICE_LOG");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_DEVICE_UNCAPTURED_ERROR);
    lua_setfield(L, -2, "LOGITEM_WGPU_DEVICE_UNCAPTURED_ERROR");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_CREATE_SURFACE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_CREATE_SURFACE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_SURFACE_GET_CAPABILITIES_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_SURFACE_GET_CAPABILITIES_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_TEXTURE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_TEXTURE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_VIEW_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_VIEW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_CREATE_MSAA_TEXTURE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_CREATE_MSAA_TEXTURE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_CREATE_MSAA_VIEW_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_CREATE_MSAA_VIEW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_SWAPCHAIN_GETCURRENTTEXTURE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_SWAPCHAIN_GETCURRENTTEXTURE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_REQUEST_DEVICE_STATUS_ERROR);
    lua_setfield(L, -2, "LOGITEM_WGPU_REQUEST_DEVICE_STATUS_ERROR");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_REQUEST_DEVICE_STATUS_UNKNOWN);
    lua_setfield(L, -2, "LOGITEM_WGPU_REQUEST_DEVICE_STATUS_UNKNOWN");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_UNAVAILABLE);
    lua_setfield(L, -2, "LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_UNAVAILABLE");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_ERROR);
    lua_setfield(L, -2, "LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_ERROR");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_UNKNOWN);
    lua_setfield(L, -2, "LOGITEM_WGPU_REQUEST_ADAPTER_STATUS_UNKNOWN");
    lua_pushinteger(L, SAPP_LOGITEM_WGPU_CREATE_INSTANCE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WGPU_CREATE_INSTANCE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_ALLOC_DEVICE_MEMORY_NO_SUITABLE_MEMORY_TYPE);
    lua_setfield(L, -2, "LOGITEM_VULKAN_ALLOC_DEVICE_MEMORY_NO_SUITABLE_MEMORY_TYPE");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_ALLOCATE_MEMORY_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_ALLOCATE_MEMORY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_INSTANCE_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_INSTANCE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_ENUMERATE_PHYSICAL_DEVICES_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_ENUMERATE_PHYSICAL_DEVICES_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_NO_PHYSICAL_DEVICES_FOUND);
    lua_setfield(L, -2, "LOGITEM_VULKAN_NO_PHYSICAL_DEVICES_FOUND");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_NO_SUITABLE_PHYSICAL_DEVICE_FOUND);
    lua_setfield(L, -2, "LOGITEM_VULKAN_NO_SUITABLE_PHYSICAL_DEVICE_FOUND");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_DEVICE_FAILED_EXTENSION_NOT_PRESENT);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_DEVICE_FAILED_EXTENSION_NOT_PRESENT");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_DEVICE_FAILED_FEATURE_NOT_PRESENT);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_DEVICE_FAILED_FEATURE_NOT_PRESENT");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_DEVICE_FAILED_INITIALIZATION_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_DEVICE_FAILED_INITIALIZATION_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_DEVICE_FAILED_OTHER);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_DEVICE_FAILED_OTHER");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_SURFACE_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_SURFACE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_CREATE_SWAPCHAIN_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_CREATE_SWAPCHAIN_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_SWAPCHAIN_CREATE_IMAGE_VIEW_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_SWAPCHAIN_CREATE_IMAGE_VIEW_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_SWAPCHAIN_CREATE_IMAGE_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_SWAPCHAIN_CREATE_IMAGE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_SWAPCHAIN_ALLOC_IMAGE_DEVICE_MEMORY_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_SWAPCHAIN_ALLOC_IMAGE_DEVICE_MEMORY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_SWAPCHAIN_BIND_IMAGE_MEMORY_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_SWAPCHAIN_BIND_IMAGE_MEMORY_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_ACQUIRE_NEXT_IMAGE_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_ACQUIRE_NEXT_IMAGE_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_VULKAN_QUEUE_PRESENT_FAILED);
    lua_setfield(L, -2, "LOGITEM_VULKAN_QUEUE_PRESENT_FAILED");
    lua_pushinteger(L, SAPP_LOGITEM_IMAGE_DATA_SIZE_MISMATCH);
    lua_setfield(L, -2, "LOGITEM_IMAGE_DATA_SIZE_MISMATCH");
    lua_pushinteger(L, SAPP_LOGITEM_DROPPED_FILE_PATH_TOO_LONG);
    lua_setfield(L, -2, "LOGITEM_DROPPED_FILE_PATH_TOO_LONG");
    lua_pushinteger(L, SAPP_LOGITEM_CLIPBOARD_STRING_TOO_BIG);
    lua_setfield(L, -2, "LOGITEM_CLIPBOARD_STRING_TOO_BIG");
    lua_setfield(L, -2, "LogItem");
}

static void register_sapp_pixel_format(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, _SAPP_PIXELFORMAT_DEFAULT);
    lua_setfield(L, -2, "_SAPP_PIXELFORMAT_DEFAULT");
    lua_pushinteger(L, SAPP_PIXELFORMAT_NONE);
    lua_setfield(L, -2, "PIXELFORMAT_NONE");
    lua_pushinteger(L, SAPP_PIXELFORMAT_RGBA8);
    lua_setfield(L, -2, "PIXELFORMAT_RGBA8");
    lua_pushinteger(L, SAPP_PIXELFORMAT_SRGB8A8);
    lua_setfield(L, -2, "PIXELFORMAT_SRGB8A8");
    lua_pushinteger(L, SAPP_PIXELFORMAT_BGRA8);
    lua_setfield(L, -2, "PIXELFORMAT_BGRA8");
    lua_pushinteger(L, SAPP_PIXELFORMAT_SBGRA8);
    lua_setfield(L, -2, "PIXELFORMAT_SBGRA8");
    lua_pushinteger(L, SAPP_PIXELFORMAT_DEPTH);
    lua_setfield(L, -2, "PIXELFORMAT_DEPTH");
    lua_pushinteger(L, SAPP_PIXELFORMAT_DEPTH_STENCIL);
    lua_setfield(L, -2, "PIXELFORMAT_DEPTH_STENCIL");
    lua_pushinteger(L, 2147483647);
    lua_setfield(L, -2, "_SA_PPPIXELFORMAT_FORCE_U32");
    lua_setfield(L, -2, "PixelFormat");
}

static void register_sapp_html5_fetch_error(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SAPP_HTML5_FETCH_ERROR_NO_ERROR);
    lua_setfield(L, -2, "FETCH_ERROR_NO_ERROR");
    lua_pushinteger(L, SAPP_HTML5_FETCH_ERROR_BUFFER_TOO_SMALL);
    lua_setfield(L, -2, "FETCH_ERROR_BUFFER_TOO_SMALL");
    lua_pushinteger(L, SAPP_HTML5_FETCH_ERROR_OTHER);
    lua_setfield(L, -2, "FETCH_ERROR_OTHER");
    lua_setfield(L, -2, "Html5FetchError");
}

static void register_sapp_mouse_cursor(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "MOUSECURSOR_DEFAULT");
    lua_pushinteger(L, SAPP_MOUSECURSOR_ARROW);
    lua_setfield(L, -2, "MOUSECURSOR_ARROW");
    lua_pushinteger(L, SAPP_MOUSECURSOR_IBEAM);
    lua_setfield(L, -2, "MOUSECURSOR_IBEAM");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CROSSHAIR);
    lua_setfield(L, -2, "MOUSECURSOR_CROSSHAIR");
    lua_pushinteger(L, SAPP_MOUSECURSOR_POINTING_HAND);
    lua_setfield(L, -2, "MOUSECURSOR_POINTING_HAND");
    lua_pushinteger(L, SAPP_MOUSECURSOR_RESIZE_EW);
    lua_setfield(L, -2, "MOUSECURSOR_RESIZE_EW");
    lua_pushinteger(L, SAPP_MOUSECURSOR_RESIZE_NS);
    lua_setfield(L, -2, "MOUSECURSOR_RESIZE_NS");
    lua_pushinteger(L, SAPP_MOUSECURSOR_RESIZE_NWSE);
    lua_setfield(L, -2, "MOUSECURSOR_RESIZE_NWSE");
    lua_pushinteger(L, SAPP_MOUSECURSOR_RESIZE_NESW);
    lua_setfield(L, -2, "MOUSECURSOR_RESIZE_NESW");
    lua_pushinteger(L, SAPP_MOUSECURSOR_RESIZE_ALL);
    lua_setfield(L, -2, "MOUSECURSOR_RESIZE_ALL");
    lua_pushinteger(L, SAPP_MOUSECURSOR_NOT_ALLOWED);
    lua_setfield(L, -2, "MOUSECURSOR_NOT_ALLOWED");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_0);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_0");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_1);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_1");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_2);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_2");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_3);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_3");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_4);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_4");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_5);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_5");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_6);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_6");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_7);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_7");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_8);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_8");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_9);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_9");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_10);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_10");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_11);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_11");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_12);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_12");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_13);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_13");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_14);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_14");
    lua_pushinteger(L, SAPP_MOUSECURSOR_CUSTOM_15);
    lua_setfield(L, -2, "MOUSECURSOR_CUSTOM_15");
    lua_pushinteger(L, _SAPP_MOUSECURSOR_NUM);
    lua_setfield(L, -2, "_SAPP_MOUSECURSOR_NUM");
    lua_setfield(L, -2, "MouseCursor");
}

static void register_consts(lua_State *L) {
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_TOUCHPOINTS");
    lua_pushinteger(L, 3);
    lua_setfield(L, -2, "MAX_MOUSEBUTTONS");
    lua_pushinteger(L, 512);
    lua_setfield(L, -2, "MAX_KEYCODES");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MAX_ICONIMAGES");
}

static void register_consts(lua_State *L) {
    lua_pushinteger(L, 1);
    lua_setfield(L, -2, "MODIFIER_SHIFT");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "MODIFIER_CTRL");
    lua_pushinteger(L, 4);
    lua_setfield(L, -2, "MODIFIER_ALT");
    lua_pushinteger(L, 8);
    lua_setfield(L, -2, "MODIFIER_SUPER");
    lua_pushinteger(L, 256);
    lua_setfield(L, -2, "MODIFIER_LMB");
    lua_pushinteger(L, 512);
    lua_setfield(L, -2, "MODIFIER_RMB");
    lua_pushinteger(L, 1024);
    lua_setfield(L, -2, "MODIFIER_MMB");
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Touchpoint");
    lua_pushcfunction(L, l_sapp_touchpoint__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_touchpoint__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Event");
    lua_pushcfunction(L, l_sapp_event__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_event__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Range");
    lua_pushcfunction(L, l_sapp_range__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_range__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.ImageDesc");
    lua_pushcfunction(L, l_sapp_image_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_image_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.IconDesc");
    lua_pushcfunction(L, l_sapp_icon_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_icon_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Allocator");
    lua_pushcfunction(L, l_sapp_allocator__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_allocator__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.EnvironmentDefaults");
    lua_pushcfunction(L, l_sapp_environment_defaults__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_environment_defaults__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MetalEnvironment");
    lua_pushcfunction(L, l_sapp_metal_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_metal_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11Environment");
    lua_pushcfunction(L, l_sapp_d3d11_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_d3d11_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuEnvironment");
    lua_pushcfunction(L, l_sapp_wgpu_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_wgpu_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VulkanEnvironment");
    lua_pushcfunction(L, l_sapp_vulkan_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_vulkan_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Environment");
    lua_pushcfunction(L, l_sapp_environment__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_environment__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.MetalSwapchain");
    lua_pushcfunction(L, l_sapp_metal_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_metal_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.D3d11Swapchain");
    lua_pushcfunction(L, l_sapp_d3d11_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_d3d11_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.WgpuSwapchain");
    lua_pushcfunction(L, l_sapp_wgpu_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_wgpu_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.VulkanSwapchain");
    lua_pushcfunction(L, l_sapp_vulkan_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_vulkan_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlSwapchain");
    lua_pushcfunction(L, l_sapp_gl_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_gl_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Swapchain");
    lua_pushcfunction(L, l_sapp_swapchain__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_swapchain__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Logger");
    lua_pushcfunction(L, l_sapp_logger__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_logger__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.GlDesc");
    lua_pushcfunction(L, l_sapp_gl_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_gl_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Win32Desc");
    lua_pushcfunction(L, l_sapp_win32_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_win32_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Html5Desc");
    lua_pushcfunction(L, l_sapp_html5_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_html5_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.IosDesc");
    lua_pushcfunction(L, l_sapp_ios_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_ios_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Desc");
    lua_pushcfunction(L, l_sapp_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Html5FetchResponse");
    lua_pushcfunction(L, l_sapp_html5_fetch_response__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_html5_fetch_response__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Html5FetchRequest");
    lua_pushcfunction(L, l_sapp_html5_fetch_request__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_sapp_html5_fetch_request__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg app_funcs[] = {
    {"isvalid", l_sapp_isvalid},
    {"width", l_sapp_width},
    {"widthf", l_sapp_widthf},
    {"height", l_sapp_height},
    {"heightf", l_sapp_heightf},
    {"color_format", l_sapp_color_format},
    {"depth_format", l_sapp_depth_format},
    {"sample_count", l_sapp_sample_count},
    {"high_dpi", l_sapp_high_dpi},
    {"dpi_scale", l_sapp_dpi_scale},
    {"show_keyboard", l_sapp_show_keyboard},
    {"keyboard_shown", l_sapp_keyboard_shown},
    {"is_fullscreen", l_sapp_is_fullscreen},
    {"toggle_fullscreen", l_sapp_toggle_fullscreen},
    {"show_mouse", l_sapp_show_mouse},
    {"mouse_shown", l_sapp_mouse_shown},
    {"lock_mouse", l_sapp_lock_mouse},
    {"mouse_locked", l_sapp_mouse_locked},
    {"set_mouse_cursor", l_sapp_set_mouse_cursor},
    {"get_mouse_cursor", l_sapp_get_mouse_cursor},
    {"bind_mouse_cursor_image", l_sapp_bind_mouse_cursor_image},
    {"unbind_mouse_cursor_image", l_sapp_unbind_mouse_cursor_image},
    {"userdata", l_sapp_userdata},
    {"query_desc", l_sapp_query_desc},
    {"request_quit", l_sapp_request_quit},
    {"cancel_quit", l_sapp_cancel_quit},
    {"quit", l_sapp_quit},
    {"consume_event", l_sapp_consume_event},
    {"frame_count", l_sapp_frame_count},
    {"frame_duration", l_sapp_frame_duration},
    {"set_clipboard_string", l_sapp_set_clipboard_string},
    {"get_clipboard_string", l_sapp_get_clipboard_string},
    {"set_window_title", l_sapp_set_window_title},
    {"set_icon", l_sapp_set_icon},
    {"get_num_dropped_files", l_sapp_get_num_dropped_files},
    {"get_dropped_file_path", l_sapp_get_dropped_file_path},
    {"get_environment", l_sapp_get_environment},
    {"get_swapchain", l_sapp_get_swapchain},
    {"egl_get_display", l_sapp_egl_get_display},
    {"egl_get_context", l_sapp_egl_get_context},
    {"html5_ask_leave_site", l_sapp_html5_ask_leave_site},
    {"html5_get_dropped_file_size", l_sapp_html5_get_dropped_file_size},
    {"html5_fetch_dropped_file", l_sapp_html5_fetch_dropped_file},
    {"macos_get_window", l_sapp_macos_get_window},
    {"ios_get_window", l_sapp_ios_get_window},
    {"d3d11_get_swap_chain", l_sapp_d3d11_get_swap_chain},
    {"win32_get_hwnd", l_sapp_win32_get_hwnd},
    {"gl_get_major_version", l_sapp_gl_get_major_version},
    {"gl_get_minor_version", l_sapp_gl_get_minor_version},
    {"gl_is_gles", l_sapp_gl_is_gles},
    {"x11_get_window", l_sapp_x11_get_window},
    {"x11_get_display", l_sapp_x11_get_display},
    {"android_get_native_activity", l_sapp_android_get_native_activity},
    {"Touchpoint", l_sapp_touchpoint_new},
    {"Event", l_sapp_event_new},
    {"Range", l_sapp_range_new},
    {"ImageDesc", l_sapp_image_desc_new},
    {"IconDesc", l_sapp_icon_desc_new},
    {"Allocator", l_sapp_allocator_new},
    {"EnvironmentDefaults", l_sapp_environment_defaults_new},
    {"MetalEnvironment", l_sapp_metal_environment_new},
    {"D3d11Environment", l_sapp_d3d11_environment_new},
    {"WgpuEnvironment", l_sapp_wgpu_environment_new},
    {"VulkanEnvironment", l_sapp_vulkan_environment_new},
    {"Environment", l_sapp_environment_new},
    {"MetalSwapchain", l_sapp_metal_swapchain_new},
    {"D3d11Swapchain", l_sapp_d3d11_swapchain_new},
    {"WgpuSwapchain", l_sapp_wgpu_swapchain_new},
    {"VulkanSwapchain", l_sapp_vulkan_swapchain_new},
    {"GlSwapchain", l_sapp_gl_swapchain_new},
    {"Swapchain", l_sapp_swapchain_new},
    {"Logger", l_sapp_logger_new},
    {"GlDesc", l_sapp_gl_desc_new},
    {"Win32Desc", l_sapp_win32_desc_new},
    {"Html5Desc", l_sapp_html5_desc_new},
    {"IosDesc", l_sapp_ios_desc_new},
    {"Desc", l_sapp_desc_new},
    {"Html5FetchResponse", l_sapp_html5_fetch_response_new},
    {"Html5FetchRequest", l_sapp_html5_fetch_request_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_app(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, app_funcs);
    register_sapp_event_type(L);
    register_sapp_keycode(L);
    register_sapp_android_tooltype(L);
    register_sapp_mousebutton(L);
    register_sapp_log_item(L);
    register_sapp_pixel_format(L);
    register_sapp_html5_fetch_error(L);
    register_sapp_mouse_cursor(L);
    register_consts(L);
    register_consts(L);
    return 1;
}
