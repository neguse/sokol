/* Sokol-Lua example: runs a Lua script with sokol bindings */
#define SOKOL_IMPL
#include "sokol_app.h"
#include "sokol_gfx.h"
#include "sokol_glue.h"
#include "sokol_log.h"

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

/* declare luaopen functions */
extern int luaopen_sokol_gfx(lua_State *L);
extern int luaopen_sokol_app(lua_State *L);
extern int luaopen_sokol_glue(lua_State *L);
extern int luaopen_sokol_log(lua_State *L);
extern int luaopen_sokol_time(lua_State *L);

static lua_State *L = NULL;

static void call_lua(const char *func) {
    lua_getglobal(L, func);
    if (lua_isfunction(L, -1)) {
        if (lua_pcall(L, 0, 0, 0) != LUA_OK) {
            fprintf(stderr, "Lua error in %s: %s\n", func, lua_tostring(L, -1));
            lua_pop(L, 1);
        }
    } else {
        lua_pop(L, 1);
    }
}

static void init(void) {
    sg_setup(&(sg_desc){
        .environment = sglue_environment(),
        .logger.func = slog_func,
    });
    call_lua("init");
}

static void frame(void) {
    call_lua("frame");
}

static void cleanup(void) {
    call_lua("cleanup");
    sg_shutdown();
    lua_close(L);
}

static void event(const sapp_event *ev) {
    lua_getglobal(L, "event");
    if (lua_isfunction(L, -1)) {
        /* push event as table */
        lua_newtable(L);
        lua_pushinteger(L, ev->type);
        lua_setfield(L, -2, "type");
        lua_pushinteger(L, ev->key_code);
        lua_setfield(L, -2, "key_code");
        lua_pushnumber(L, ev->mouse_x);
        lua_setfield(L, -2, "mouse_x");
        lua_pushnumber(L, ev->mouse_y);
        lua_setfield(L, -2, "mouse_y");

        if (lua_pcall(L, 1, 0, 0) != LUA_OK) {
            fprintf(stderr, "Lua error in event: %s\n", lua_tostring(L, -1));
            lua_pop(L, 1);
        }
    } else {
        lua_pop(L, 1);
    }
}

sapp_desc sokol_main(int argc, char* argv[]) {
    /* Initialize Lua */
    L = luaL_newstate();
    luaL_openlibs(L);

    /* Register sokol modules */
    luaL_requiref(L, "sokol.gfx", luaopen_sokol_gfx, 0);
    lua_pop(L, 1);
    luaL_requiref(L, "sokol.app", luaopen_sokol_app, 0);
    lua_pop(L, 1);
    luaL_requiref(L, "sokol.glue", luaopen_sokol_glue, 0);
    lua_pop(L, 1);
    luaL_requiref(L, "sokol.log", luaopen_sokol_log, 0);
    lua_pop(L, 1);
    luaL_requiref(L, "sokol.time", luaopen_sokol_time, 0);
    lua_pop(L, 1);

    /* Load script */
    const char *script = (argc > 1) ? argv[1] : "main.lua";
    if (luaL_dofile(L, script) != LUA_OK) {
        fprintf(stderr, "Failed to load %s: %s\n", script, lua_tostring(L, -1));
    }

    return (sapp_desc){
        .init_cb = init,
        .frame_cb = frame,
        .cleanup_cb = cleanup,
        .event_cb = event,
        .width = 800,
        .height = 600,
        .window_title = "Sokol Lua",
        .logger.func = slog_func,
    };
}
