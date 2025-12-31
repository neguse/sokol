---@meta
-- EmmyLua type definitions for sokol.audio
-- Auto-generated, do not edit

---@alias audio.LogItem integer
---@alias audio.N3dsNdspinterptype integer

---@class audio
---@field LogItem table<string, audio.LogItem>
---@field N3dsNdspinterptype table<string, audio.N3dsNdspinterptype>
---@field Logger fun(t?: audio.Logger): audio.Logger
---@field Allocator fun(t?: audio.Allocator): audio.Allocator
---@field N3dsDesc fun(t?: audio.N3dsDesc): audio.N3dsDesc
---@field Desc fun(t?: audio.Desc): audio.Desc
local audio = {}
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