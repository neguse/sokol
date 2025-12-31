---@meta
-- LuaCATS type definitions for sokol.time
-- Auto-generated, do not edit

---@class time
local time = {}

function time.setup() end

---@return integer
function time.now() end

---@param new_ticks integer
---@param old_ticks integer
---@return integer
function time.diff(new_ticks, old_ticks) end

---@param start_ticks integer
---@return integer
function time.since(start_ticks) end

---@param last_time any
---@return integer
function time.laptime(last_time) end

---@param frame_ticks integer
---@return integer
function time.round_to_common_refresh_rate(frame_ticks) end

---@param ticks integer
---@return number
function time.sec(ticks) end

---@param ticks integer
---@return number
function time.ms(ticks) end

---@param ticks integer
---@return number
function time.us(ticks) end

---@param ticks integer
---@return number
function time.ns(ticks) end

return time