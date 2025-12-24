/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_log.h"

#ifndef SOKOL_LUA_API
#define SOKOL_LUA_API
#endif

static int l_slog_func(lua_State *L) {
    const char* tag = luaL_checkstring(L, 1);
    uint32_t log_level = (uint32_t)luaL_checkinteger(L, 2);
    uint32_t log_item = (uint32_t)luaL_checkinteger(L, 3);
    const char* message = luaL_checkstring(L, 4);
    uint32_t line_nr = (uint32_t)luaL_checkinteger(L, 5);
    const char* filename = luaL_checkstring(L, 6);
    void* user_data = lua_touserdata(L, 7);
    slog_func(tag, log_level, log_item, message, line_nr, filename, user_data);
    return 0;
}

static void register_metatables(lua_State *L) {
}

static const luaL_Reg log_funcs[] = {
    {"func", l_slog_func},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_log(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, log_funcs);
    return 1;
}
