/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_time.h"

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

static int l_stm_setup(lua_State *L) {
    stm_setup();
    return 0;
}

static int l_stm_now(lua_State *L) {
    uint64_t result = stm_now();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_stm_diff(lua_State *L) {
    uint64_t new_ticks = (uint64_t)luaL_checkinteger(L, 1);
    uint64_t old_ticks = (uint64_t)luaL_checkinteger(L, 2);
    uint64_t result = stm_diff(new_ticks, old_ticks);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_stm_since(lua_State *L) {
    uint64_t start_ticks = (uint64_t)luaL_checkinteger(L, 1);
    uint64_t result = stm_since(start_ticks);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_stm_laptime(lua_State *L) {
    /* TODO: get uint64_t * */ void* last_time = NULL;
    uint64_t result = stm_laptime(last_time);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_stm_round_to_common_refresh_rate(lua_State *L) {
    uint64_t frame_ticks = (uint64_t)luaL_checkinteger(L, 1);
    uint64_t result = stm_round_to_common_refresh_rate(frame_ticks);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_stm_sec(lua_State *L) {
    uint64_t ticks = (uint64_t)luaL_checkinteger(L, 1);
    double result = stm_sec(ticks);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_stm_ms(lua_State *L) {
    uint64_t ticks = (uint64_t)luaL_checkinteger(L, 1);
    double result = stm_ms(ticks);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_stm_us(lua_State *L) {
    uint64_t ticks = (uint64_t)luaL_checkinteger(L, 1);
    double result = stm_us(ticks);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static int l_stm_ns(lua_State *L) {
    uint64_t ticks = (uint64_t)luaL_checkinteger(L, 1);
    double result = stm_ns(ticks);
    lua_pushnumber(L, (lua_Number)result);
    return 1;
}

static void register_metatables(lua_State *L) {
}

static const luaL_Reg time_funcs[] = {
    {"setup", l_stm_setup},
    {"now", l_stm_now},
    {"diff", l_stm_diff},
    {"since", l_stm_since},
    {"laptime", l_stm_laptime},
    {"round_to_common_refresh_rate", l_stm_round_to_common_refresh_rate},
    {"sec", l_stm_sec},
    {"ms", l_stm_ms},
    {"us", l_stm_us},
    {"ns", l_stm_ns},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_time(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, time_funcs);
    return 1;
}
