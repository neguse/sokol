/* machine generated, do not edit */
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <string.h>

#include "sokol_audio.h"

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

static int l_saudio_logger_new(lua_State *L) {
    saudio_logger* ud = (saudio_logger*)lua_newuserdatauv(L, sizeof(saudio_logger), 0);
    memset(ud, 0, sizeof(saudio_logger));
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_saudio_logger_get_user_data(lua_State *L) {
    saudio_logger* self = (saudio_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_saudio_logger_set_user_data(lua_State *L) {
    saudio_logger* self = (saudio_logger*)luaL_checkudata(L, 1, "sokol.Logger");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_saudio_logger__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_saudio_logger_get_user_data(L);
    return 0;
}

static int l_saudio_logger__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_saudio_logger_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_saudio_allocator_new(lua_State *L) {
    saudio_allocator* ud = (saudio_allocator*)lua_newuserdatauv(L, sizeof(saudio_allocator), 0);
    memset(ud, 0, sizeof(saudio_allocator));
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_saudio_allocator_get_user_data(lua_State *L) {
    saudio_allocator* self = (saudio_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_saudio_allocator_set_user_data(lua_State *L) {
    saudio_allocator* self = (saudio_allocator*)luaL_checkudata(L, 1, "sokol.Allocator");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_saudio_allocator__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_saudio_allocator_get_user_data(L);
    return 0;
}

static int l_saudio_allocator__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "user_data") == 0) return l_saudio_allocator_set_user_data(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_saudio_n3ds_desc_new(lua_State *L) {
    saudio_n3ds_desc* ud = (saudio_n3ds_desc*)lua_newuserdatauv(L, sizeof(saudio_n3ds_desc), 0);
    memset(ud, 0, sizeof(saudio_n3ds_desc));
    luaL_setmetatable(L, "sokol.N3dsDesc");
    return 1;
}

static int l_saudio_n3ds_desc_get_queue_count(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    lua_pushinteger(L, (lua_Integer)self->queue_count);
    return 1;
}

static int l_saudio_n3ds_desc_set_queue_count(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    self->queue_count = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_n3ds_desc_get_interpolation_type(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    lua_pushinteger(L, (lua_Integer)self->interpolation_type);
    return 1;
}

static int l_saudio_n3ds_desc_set_interpolation_type(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    self->interpolation_type = (saudio_n3ds_ndspinterptype)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_n3ds_desc_get_channel_id(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    lua_pushinteger(L, (lua_Integer)self->channel_id);
    return 1;
}

static int l_saudio_n3ds_desc_set_channel_id(lua_State *L) {
    saudio_n3ds_desc* self = (saudio_n3ds_desc*)luaL_checkudata(L, 1, "sokol.N3dsDesc");
    self->channel_id = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_n3ds_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "queue_count") == 0) return l_saudio_n3ds_desc_get_queue_count(L);
    if (strcmp(key, "interpolation_type") == 0) return l_saudio_n3ds_desc_get_interpolation_type(L);
    if (strcmp(key, "channel_id") == 0) return l_saudio_n3ds_desc_get_channel_id(L);
    return 0;
}

static int l_saudio_n3ds_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "queue_count") == 0) return l_saudio_n3ds_desc_set_queue_count(L);
    if (strcmp(key, "interpolation_type") == 0) return l_saudio_n3ds_desc_set_interpolation_type(L);
    if (strcmp(key, "channel_id") == 0) return l_saudio_n3ds_desc_set_channel_id(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_saudio_desc_new(lua_State *L) {
    saudio_desc* ud = (saudio_desc*)lua_newuserdatauv(L, sizeof(saudio_desc), 0);
    memset(ud, 0, sizeof(saudio_desc));
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_saudio_desc_get_sample_rate(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->sample_rate);
    return 1;
}

static int l_saudio_desc_set_sample_rate(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->sample_rate = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_desc_get_num_channels(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->num_channels);
    return 1;
}

static int l_saudio_desc_set_num_channels(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->num_channels = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_desc_get_buffer_frames(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->buffer_frames);
    return 1;
}

static int l_saudio_desc_set_buffer_frames(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->buffer_frames = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_desc_get_packet_frames(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->packet_frames);
    return 1;
}

static int l_saudio_desc_set_packet_frames(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->packet_frames = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_desc_get_num_packets(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushinteger(L, (lua_Integer)self->num_packets);
    return 1;
}

static int l_saudio_desc_set_num_packets(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->num_packets = (int)luaL_checkinteger(L, 2);
    return 0;
}

static int l_saudio_desc_get_user_data(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    lua_pushlightuserdata(L, (void*)self->user_data);
    return 1;
}

static int l_saudio_desc_set_user_data(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    self->user_data = lua_touserdata(L, 2);
    return 0;
}

static int l_saudio_desc_get_n3ds(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_n3ds_desc* ud = (saudio_n3ds_desc*)lua_newuserdatauv(L, sizeof(saudio_n3ds_desc), 0);
    *ud = self->n3ds;
    luaL_setmetatable(L, "sokol.N3dsDesc");
    return 1;
}

static int l_saudio_desc_set_n3ds(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_n3ds_desc* val = (saudio_n3ds_desc*)luaL_checkudata(L, 2, "sokol.N3dsDesc");
    self->n3ds = *val;
    return 0;
}

static int l_saudio_desc_get_allocator(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_allocator* ud = (saudio_allocator*)lua_newuserdatauv(L, sizeof(saudio_allocator), 0);
    *ud = self->allocator;
    luaL_setmetatable(L, "sokol.Allocator");
    return 1;
}

static int l_saudio_desc_set_allocator(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_allocator* val = (saudio_allocator*)luaL_checkudata(L, 2, "sokol.Allocator");
    self->allocator = *val;
    return 0;
}

static int l_saudio_desc_get_logger(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_logger* ud = (saudio_logger*)lua_newuserdatauv(L, sizeof(saudio_logger), 0);
    *ud = self->logger;
    luaL_setmetatable(L, "sokol.Logger");
    return 1;
}

static int l_saudio_desc_set_logger(lua_State *L) {
    saudio_desc* self = (saudio_desc*)luaL_checkudata(L, 1, "sokol.Desc");
    saudio_logger* val = (saudio_logger*)luaL_checkudata(L, 2, "sokol.Logger");
    self->logger = *val;
    return 0;
}

static int l_saudio_desc__index(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sample_rate") == 0) return l_saudio_desc_get_sample_rate(L);
    if (strcmp(key, "num_channels") == 0) return l_saudio_desc_get_num_channels(L);
    if (strcmp(key, "buffer_frames") == 0) return l_saudio_desc_get_buffer_frames(L);
    if (strcmp(key, "packet_frames") == 0) return l_saudio_desc_get_packet_frames(L);
    if (strcmp(key, "num_packets") == 0) return l_saudio_desc_get_num_packets(L);
    if (strcmp(key, "user_data") == 0) return l_saudio_desc_get_user_data(L);
    if (strcmp(key, "n3ds") == 0) return l_saudio_desc_get_n3ds(L);
    if (strcmp(key, "allocator") == 0) return l_saudio_desc_get_allocator(L);
    if (strcmp(key, "logger") == 0) return l_saudio_desc_get_logger(L);
    return 0;
}

static int l_saudio_desc__newindex(lua_State *L) {
    const char* key = luaL_checkstring(L, 2);
    if (strcmp(key, "sample_rate") == 0) return l_saudio_desc_set_sample_rate(L);
    if (strcmp(key, "num_channels") == 0) return l_saudio_desc_set_num_channels(L);
    if (strcmp(key, "buffer_frames") == 0) return l_saudio_desc_set_buffer_frames(L);
    if (strcmp(key, "packet_frames") == 0) return l_saudio_desc_set_packet_frames(L);
    if (strcmp(key, "num_packets") == 0) return l_saudio_desc_set_num_packets(L);
    if (strcmp(key, "user_data") == 0) return l_saudio_desc_set_user_data(L);
    if (strcmp(key, "n3ds") == 0) return l_saudio_desc_set_n3ds(L);
    if (strcmp(key, "allocator") == 0) return l_saudio_desc_set_allocator(L);
    if (strcmp(key, "logger") == 0) return l_saudio_desc_set_logger(L);
    return luaL_error(L, "unknown field: %s", key);
}

static int l_saudio_shutdown(lua_State *L) {
    saudio_shutdown();
    return 0;
}

static int l_saudio_isvalid(lua_State *L) {
    bool result = saudio_isvalid();
    lua_pushboolean(L, result);
    return 1;
}

static int l_saudio_userdata(lua_State *L) {
    void * result = saudio_userdata();
    lua_pushlightuserdata(L, (void*)result);
    return 1;
}

static int l_saudio_query_desc(lua_State *L) {
    saudio_desc result = saudio_query_desc();
    saudio_desc* ud = (saudio_desc*)lua_newuserdatauv(L, sizeof(saudio_desc), 0);
    *ud = result;
    luaL_setmetatable(L, "sokol.Desc");
    return 1;
}

static int l_saudio_sample_rate(lua_State *L) {
    int result = saudio_sample_rate();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_saudio_buffer_frames(lua_State *L) {
    int result = saudio_buffer_frames();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_saudio_channels(lua_State *L) {
    int result = saudio_channels();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_saudio_suspended(lua_State *L) {
    bool result = saudio_suspended();
    lua_pushboolean(L, result);
    return 1;
}

static int l_saudio_expect(lua_State *L) {
    int result = saudio_expect();
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static int l_saudio_push(lua_State *L) {
    /* TODO: get const float * */ void* frames = NULL;
    int num_frames = (int)luaL_checkinteger(L, 2);
    int result = saudio_push(frames, num_frames);
    lua_pushinteger(L, (lua_Integer)result);
    return 1;
}

static void register_saudio_log_item(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, SAUDIO_LOGITEM_OK);
    lua_setfield(L, -2, "LOGITEM_OK");
    lua_pushinteger(L, SAUDIO_LOGITEM_MALLOC_FAILED);
    lua_setfield(L, -2, "LOGITEM_MALLOC_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_SND_PCM_OPEN_FAILED);
    lua_setfield(L, -2, "LOGITEM_ALSA_SND_PCM_OPEN_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_FLOAT_SAMPLES_NOT_SUPPORTED);
    lua_setfield(L, -2, "LOGITEM_ALSA_FLOAT_SAMPLES_NOT_SUPPORTED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_REQUESTED_BUFFER_SIZE_NOT_SUPPORTED);
    lua_setfield(L, -2, "LOGITEM_ALSA_REQUESTED_BUFFER_SIZE_NOT_SUPPORTED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_REQUESTED_CHANNEL_COUNT_NOT_SUPPORTED);
    lua_setfield(L, -2, "LOGITEM_ALSA_REQUESTED_CHANNEL_COUNT_NOT_SUPPORTED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_SND_PCM_HW_PARAMS_SET_RATE_NEAR_FAILED);
    lua_setfield(L, -2, "LOGITEM_ALSA_SND_PCM_HW_PARAMS_SET_RATE_NEAR_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_SND_PCM_HW_PARAMS_FAILED);
    lua_setfield(L, -2, "LOGITEM_ALSA_SND_PCM_HW_PARAMS_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_ALSA_PTHREAD_CREATE_FAILED);
    lua_setfield(L, -2, "LOGITEM_ALSA_PTHREAD_CREATE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_CREATE_EVENT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_CREATE_EVENT_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_CREATE_DEVICE_ENUMERATOR_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_CREATE_DEVICE_ENUMERATOR_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_GET_DEFAULT_AUDIO_ENDPOINT_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_GET_DEFAULT_AUDIO_ENDPOINT_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_DEVICE_ACTIVATE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_DEVICE_ACTIVATE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_AUDIO_CLIENT_INITIALIZE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_AUDIO_CLIENT_INITIALIZE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_AUDIO_CLIENT_GET_BUFFER_SIZE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_AUDIO_CLIENT_GET_BUFFER_SIZE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_AUDIO_CLIENT_GET_SERVICE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_AUDIO_CLIENT_GET_SERVICE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_AUDIO_CLIENT_SET_EVENT_HANDLE_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_AUDIO_CLIENT_SET_EVENT_HANDLE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_WASAPI_CREATE_THREAD_FAILED);
    lua_setfield(L, -2, "LOGITEM_WASAPI_CREATE_THREAD_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_AAUDIO_STREAMBUILDER_OPEN_STREAM_FAILED);
    lua_setfield(L, -2, "LOGITEM_AAUDIO_STREAMBUILDER_OPEN_STREAM_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_AAUDIO_PTHREAD_CREATE_FAILED);
    lua_setfield(L, -2, "LOGITEM_AAUDIO_PTHREAD_CREATE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_AAUDIO_RESTARTING_STREAM_AFTER_ERROR);
    lua_setfield(L, -2, "LOGITEM_AAUDIO_RESTARTING_STREAM_AFTER_ERROR");
    lua_pushinteger(L, SAUDIO_LOGITEM_USING_AAUDIO_BACKEND);
    lua_setfield(L, -2, "LOGITEM_USING_AAUDIO_BACKEND");
    lua_pushinteger(L, SAUDIO_LOGITEM_AAUDIO_CREATE_STREAMBUILDER_FAILED);
    lua_setfield(L, -2, "LOGITEM_AAUDIO_CREATE_STREAMBUILDER_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_COREAUDIO_NEW_OUTPUT_FAILED);
    lua_setfield(L, -2, "LOGITEM_COREAUDIO_NEW_OUTPUT_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_COREAUDIO_ALLOCATE_BUFFER_FAILED);
    lua_setfield(L, -2, "LOGITEM_COREAUDIO_ALLOCATE_BUFFER_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_COREAUDIO_START_FAILED);
    lua_setfield(L, -2, "LOGITEM_COREAUDIO_START_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_BACKEND_BUFFER_SIZE_ISNT_MULTIPLE_OF_PACKET_SIZE);
    lua_setfield(L, -2, "LOGITEM_BACKEND_BUFFER_SIZE_ISNT_MULTIPLE_OF_PACKET_SIZE");
    lua_pushinteger(L, SAUDIO_LOGITEM_VITA_SCEAUDIO_OPEN_FAILED);
    lua_setfield(L, -2, "LOGITEM_VITA_SCEAUDIO_OPEN_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_VITA_PTHREAD_CREATE_FAILED);
    lua_setfield(L, -2, "LOGITEM_VITA_PTHREAD_CREATE_FAILED");
    lua_pushinteger(L, SAUDIO_LOGITEM_N3DS_NDSP_OPEN_FAILED);
    lua_setfield(L, -2, "LOGITEM_N3DS_NDSP_OPEN_FAILED");
    lua_setfield(L, -2, "LogItem");
}

static void register_saudio_n3ds_ndspinterptype(lua_State *L) {
    lua_newtable(L);
    lua_pushinteger(L, 0);
    lua_setfield(L, -2, "DSP_INTERP_POLYPHASE");
    lua_pushinteger(L, 1);
    lua_setfield(L, -2, "DSP_INTERP_LINEAR");
    lua_pushinteger(L, 2);
    lua_setfield(L, -2, "DSP_INTERP_NONE");
    lua_setfield(L, -2, "N3dsNdspinterptype");
}

static void register_metatables(lua_State *L) {
    luaL_newmetatable(L, "sokol.Logger");
    lua_pushcfunction(L, l_saudio_logger__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_saudio_logger__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Allocator");
    lua_pushcfunction(L, l_saudio_allocator__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_saudio_allocator__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.N3dsDesc");
    lua_pushcfunction(L, l_saudio_n3ds_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_saudio_n3ds_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

    luaL_newmetatable(L, "sokol.Desc");
    lua_pushcfunction(L, l_saudio_desc__index);
    lua_setfield(L, -2, "__index");
    lua_pushcfunction(L, l_saudio_desc__newindex);
    lua_setfield(L, -2, "__newindex");
    lua_pop(L, 1);

}

static const luaL_Reg audio_funcs[] = {
    {"shutdown", l_saudio_shutdown},
    {"isvalid", l_saudio_isvalid},
    {"userdata", l_saudio_userdata},
    {"query_desc", l_saudio_query_desc},
    {"sample_rate", l_saudio_sample_rate},
    {"buffer_frames", l_saudio_buffer_frames},
    {"channels", l_saudio_channels},
    {"suspended", l_saudio_suspended},
    {"expect", l_saudio_expect},
    {"push", l_saudio_push},
    {"Logger", l_saudio_logger_new},
    {"Allocator", l_saudio_allocator_new},
    {"N3dsDesc", l_saudio_n3ds_desc_new},
    {"Desc", l_saudio_desc_new},
    {NULL, NULL}
};

SOKOL_LUA_API int luaopen_sokol_audio(lua_State *L) {
    register_metatables(L);
    luaL_newlib(L, audio_funcs);
    register_saudio_log_item(L);
    register_saudio_n3ds_ndspinterptype(L);
    return 1;
}
