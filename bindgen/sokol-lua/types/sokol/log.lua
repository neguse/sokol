---@meta
-- EmmyLua type definitions for sokol.log
-- Auto-generated, do not edit


---@class log
local log = {}
---@param tag string
---@param log_level integer
---@param log_item integer
---@param message string
---@param line_nr integer
---@param filename string
---@param user_data lightuserdata?
function log.func(tag, log_level, log_item, message, line_nr, filename, user_data) end

return log