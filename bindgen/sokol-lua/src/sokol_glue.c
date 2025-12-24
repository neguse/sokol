/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_gfx.h"
#include "sokol_app.h"
#include "sokol_glue.h"

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

static int l_sglue_environment(lua_State *L) {
    sg_environment result = sglue_environment();
    sg_environment* ud = (sg_environment*)lua_newuserdatauv(L, sizeof(sg_environment), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgEnvironment");
    return 1;
}

static int l_sglue_swapchain(lua_State *L) {
    sg_swapchain result = sglue_swapchain();
    sg_swapchain* ud = (sg_swapchain*)lua_newuserdatauv(L, sizeof(sg_swapchain), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.SgSwapchain");
    return 1;
}

static void register_metatables(lua_State *L) {
}

static const luaL_Reg glue_funcs[] = {
    {"environment", l_sglue_environment},
    {"swapchain", l_sglue_swapchain},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_glue(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, glue_funcs);
    return 1;
}
