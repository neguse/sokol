---@meta
-- LuaCATS type definitions for sokol.debugtext
-- Auto-generated, do not edit

---@class debugtext
---@field Logger fun(t?: debugtext.Logger): debugtext.Logger
---@field Context fun(t?: debugtext.Context): debugtext.Context
---@field Range fun(t?: debugtext.Range): debugtext.Range
---@field FontDesc fun(t?: debugtext.FontDesc): debugtext.FontDesc
---@field ContextDesc fun(t?: debugtext.ContextDesc): debugtext.ContextDesc
---@field Allocator fun(t?: debugtext.Allocator): debugtext.Allocator
---@field Desc fun(t?: debugtext.Desc): debugtext.Desc
local debugtext = {}

---@enum debugtext.LogItem
debugtext.LogItem = {
    LOGITEM_OK = 0,
    LOGITEM_MALLOC_FAILED = 1,
    LOGITEM_ADD_COMMIT_LISTENER_FAILED = 2,
    LOGITEM_COMMAND_BUFFER_FULL = 3,
    LOGITEM_CONTEXT_POOL_EXHAUSTED = 4,
    LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT = 5,
}

---@class debugtext.Logger
---@field func? any
---@field user_data? lightuserdata?

---@class debugtext.Context
---@field id? integer

---@class debugtext.Range
---@field ptr? lightuserdata?
---@field size? integer

---@class debugtext.FontDesc
---@field data? debugtext.Range
---@field first_char? integer
---@field last_char? integer

---@class debugtext.ContextDesc
---@field max_commands? integer
---@field char_buf_size? integer
---@field canvas_width? number
---@field canvas_height? number
---@field tab_width? integer
---@field color_format? gfx.PixelFormat
---@field depth_format? gfx.PixelFormat
---@field sample_count? integer

---@class debugtext.Allocator
---@field alloc_fn? any
---@field free_fn? any
---@field user_data? lightuserdata?

---@class debugtext.Desc
---@field context_pool_size? integer
---@field printf_buf_size? integer
---@field fonts? debugtext.FontDesc[]
---@field context? debugtext.ContextDesc
---@field allocator? debugtext.Allocator
---@field logger? debugtext.Logger

---@param desc debugtext.Desc
function debugtext.setup(desc) end

function debugtext.shutdown() end

---@return debugtext.FontDesc
function debugtext.font_kc853() end

---@return debugtext.FontDesc
function debugtext.font_kc854() end

---@return debugtext.FontDesc
function debugtext.font_z1013() end

---@return debugtext.FontDesc
function debugtext.font_cpc() end

---@return debugtext.FontDesc
function debugtext.font_c64() end

---@return debugtext.FontDesc
function debugtext.font_oric() end

---@param desc debugtext.ContextDesc
---@return debugtext.Context
function debugtext.make_context(desc) end

---@param ctx debugtext.Context
function debugtext.destroy_context(ctx) end

---@param ctx debugtext.Context
function debugtext.set_context(ctx) end

---@return debugtext.Context
function debugtext.get_context() end

---@return debugtext.Context
function debugtext.default_context() end

function debugtext.draw() end

---@param ctx debugtext.Context
function debugtext.context_draw(ctx) end

---@param layer_id integer
function debugtext.draw_layer(layer_id) end

---@param ctx debugtext.Context
---@param layer_id integer
function debugtext.context_draw_layer(ctx, layer_id) end

---@param layer_id integer
function debugtext.layer(layer_id) end

---@param font_index integer
function debugtext.font(font_index) end

---@param w number
---@param h number
function debugtext.canvas(w, h) end

---@param x number
---@param y number
function debugtext.origin(x, y) end

function debugtext.home() end

---@param x number
---@param y number
function debugtext.pos(x, y) end

---@param x number
function debugtext.pos_x(x) end

---@param y number
function debugtext.pos_y(y) end

---@param dx number
---@param dy number
function debugtext.move(dx, dy) end

---@param dx number
function debugtext.move_x(dx) end

---@param dy number
function debugtext.move_y(dy) end

function debugtext.crlf() end

---@param r integer
---@param g integer
---@param b integer
function debugtext.color3b(r, g, b) end

---@param r number
---@param g number
---@param b number
function debugtext.color3f(r, g, b) end

---@param r integer
---@param g integer
---@param b integer
---@param a integer
function debugtext.color4b(r, g, b, a) end

---@param r number
---@param g number
---@param b number
---@param a number
function debugtext.color4f(r, g, b, a) end

---@param rgba integer
function debugtext.color1i(rgba) end

---@param c any
function debugtext.putc(c) end

---@param str string
function debugtext.puts(str) end

---@param str string
---@param len integer
function debugtext.putr(str, len) end

---@return debugtext.Range
function debugtext.get_cleared_fmt_buffer() end

return debugtext