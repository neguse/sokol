---@meta
-- LuaCATS type definitions for sokol.audio
-- Auto-generated, do not edit

---@class audio.Logger
---@field func? any
---@field user_data? lightuserdata?

---@class audio.Allocator
---@field alloc_fn? any
---@field free_fn? any
---@field user_data? lightuserdata?

---@class audio.N3dsDesc
---@field queue_count? integer
---@field interpolation_type? audio.N3dsNdspinterptype
---@field channel_id? integer

---@class audio.Desc
---@field sample_rate? integer
---@field num_channels? integer
---@field buffer_frames? integer
---@field packet_frames? integer
---@field num_packets? integer
---@field stream_cb? any
---@field stream_userdata_cb? any
---@field user_data? lightuserdata?
---@field n3ds? audio.N3dsDesc
---@field allocator? audio.Allocator
---@field logger? audio.Logger

---@class audio
---@field Logger fun(t?: audio.Logger): audio.Logger
---@field Allocator fun(t?: audio.Allocator): audio.Allocator
---@field N3dsDesc fun(t?: audio.N3dsDesc): audio.N3dsDesc
---@field Desc fun(t?: audio.Desc): audio.Desc
local audio = {}

---@enum audio.LogItem
audio.LogItem = {
    OK = 0,
    MALLOC_FAILED = 1,
    ALSA_SND_PCM_OPEN_FAILED = 2,
    ALSA_FLOAT_SAMPLES_NOT_SUPPORTED = 3,
    ALSA_REQUESTED_BUFFER_SIZE_NOT_SUPPORTED = 4,
    ALSA_REQUESTED_CHANNEL_COUNT_NOT_SUPPORTED = 5,
    ALSA_SND_PCM_HW_PARAMS_SET_RATE_NEAR_FAILED = 6,
    ALSA_SND_PCM_HW_PARAMS_FAILED = 7,
    ALSA_PTHREAD_CREATE_FAILED = 8,
    WASAPI_CREATE_EVENT_FAILED = 9,
    WASAPI_CREATE_DEVICE_ENUMERATOR_FAILED = 10,
    WASAPI_GET_DEFAULT_AUDIO_ENDPOINT_FAILED = 11,
    WASAPI_DEVICE_ACTIVATE_FAILED = 12,
    WASAPI_AUDIO_CLIENT_INITIALIZE_FAILED = 13,
    WASAPI_AUDIO_CLIENT_GET_BUFFER_SIZE_FAILED = 14,
    WASAPI_AUDIO_CLIENT_GET_SERVICE_FAILED = 15,
    WASAPI_AUDIO_CLIENT_SET_EVENT_HANDLE_FAILED = 16,
    WASAPI_CREATE_THREAD_FAILED = 17,
    AAUDIO_STREAMBUILDER_OPEN_STREAM_FAILED = 18,
    AAUDIO_PTHREAD_CREATE_FAILED = 19,
    AAUDIO_RESTARTING_STREAM_AFTER_ERROR = 20,
    USING_AAUDIO_BACKEND = 21,
    AAUDIO_CREATE_STREAMBUILDER_FAILED = 22,
    COREAUDIO_NEW_OUTPUT_FAILED = 23,
    COREAUDIO_ALLOCATE_BUFFER_FAILED = 24,
    COREAUDIO_START_FAILED = 25,
    BACKEND_BUFFER_SIZE_ISNT_MULTIPLE_OF_PACKET_SIZE = 26,
    VITA_SCEAUDIO_OPEN_FAILED = 27,
    VITA_PTHREAD_CREATE_FAILED = 28,
    N3DS_NDSP_OPEN_FAILED = 29,
}

---@enum audio.N3dsNdspinterptype
audio.N3dsNdspinterptype = {
    N3DS_DSP_INTERP_POLYPHASE = 0,
    N3DS_DSP_INTERP_LINEAR = 1,
    N3DS_DSP_INTERP_NONE = 2,
}

function audio.shutdown() end

---@return boolean
function audio.isvalid() end

---@return lightuserdata?
function audio.userdata() end

---@return audio.Desc
function audio.query_desc() end

---@return integer
function audio.sample_rate() end

---@return integer
function audio.buffer_frames() end

---@return integer
function audio.channels() end

---@return boolean
function audio.suspended() end

---@return integer
function audio.expect() end

---@param frames any
---@param num_frames integer
---@return integer
function audio.push(frames, num_frames) end

return audio