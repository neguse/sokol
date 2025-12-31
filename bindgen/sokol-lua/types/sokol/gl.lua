---@meta
-- LuaCATS type definitions for sokol.gl
-- Auto-generated, do not edit

---@class gl
---@field Logger fun(t?: gl.Logger): gl.Logger
---@field Pipeline fun(t?: gl.Pipeline): gl.Pipeline
---@field Context fun(t?: gl.Context): gl.Context
---@field Error fun(t?: gl.Error): gl.Error
---@field ContextDesc fun(t?: gl.ContextDesc): gl.ContextDesc
---@field Allocator fun(t?: gl.Allocator): gl.Allocator
---@field Desc fun(t?: gl.Desc): gl.Desc
local gl = {}

---@enum gl.LogItem
gl.LogItem = {
    LOGITEM_OK = 0,
    LOGITEM_MALLOC_FAILED = 1,
    LOGITEM_MAKE_PIPELINE_FAILED = 2,
    LOGITEM_PIPELINE_POOL_EXHAUSTED = 3,
    LOGITEM_ADD_COMMIT_LISTENER_FAILED = 4,
    LOGITEM_CONTEXT_POOL_EXHAUSTED = 5,
    LOGITEM_CANNOT_DESTROY_DEFAULT_CONTEXT = 6,
}

---@class gl.Logger
---@field func? any
---@field user_data? lightuserdata?

---@class gl.Pipeline
---@field id? integer

---@class gl.Context
---@field id? integer

---@class gl.Error
---@field any? boolean
---@field vertices_full? boolean
---@field uniforms_full? boolean
---@field commands_full? boolean
---@field stack_overflow? boolean
---@field stack_underflow? boolean
---@field no_context? boolean

---@class gl.ContextDesc
---@field max_vertices? integer
---@field max_commands? integer
---@field color_format? gfx.PixelFormat
---@field depth_format? gfx.PixelFormat
---@field sample_count? integer

---@class gl.Allocator
---@field alloc_fn? any
---@field free_fn? any
---@field user_data? lightuserdata?

---@class gl.Desc
---@field max_vertices? integer
---@field max_commands? integer
---@field context_pool_size? integer
---@field pipeline_pool_size? integer
---@field color_format? gfx.PixelFormat
---@field depth_format? gfx.PixelFormat
---@field sample_count? integer
---@field face_winding? gfx.FaceWinding
---@field allocator? gl.Allocator
---@field logger? gl.Logger

---@param desc gl.Desc
function gl.setup(desc) end

function gl.shutdown() end

---@param deg number
---@return number
function gl.rad(deg) end

---@param rad number
---@return number
function gl.deg(rad) end

---@return gl.Error
function gl.error() end

---@param ctx gl.Context
---@return gl.Error
function gl.context_error(ctx) end

---@param desc gl.ContextDesc
---@return gl.Context
function gl.make_context(desc) end

---@param ctx gl.Context
function gl.destroy_context(ctx) end

---@param ctx gl.Context
function gl.set_context(ctx) end

---@return gl.Context
function gl.get_context() end

---@return gl.Context
function gl.default_context() end

---@return integer
function gl.num_vertices() end

---@return integer
function gl.num_commands() end

function gl.draw() end

---@param ctx gl.Context
function gl.context_draw(ctx) end

---@param layer_id integer
function gl.draw_layer(layer_id) end

---@param ctx gl.Context
---@param layer_id integer
function gl.context_draw_layer(ctx, layer_id) end

---@param desc gfx.PipelineDesc
---@return gl.Pipeline
function gl.make_pipeline(desc) end

---@param ctx gl.Context
---@param desc gfx.PipelineDesc
---@return gl.Pipeline
function gl.context_make_pipeline(ctx, desc) end

---@param pip gl.Pipeline
function gl.destroy_pipeline(pip) end

function gl.defaults() end

---@param x integer
---@param y integer
---@param w integer
---@param h integer
---@param origin_top_left boolean
function gl.viewport(x, y, w, h, origin_top_left) end

---@param x number
---@param y number
---@param w number
---@param h number
---@param origin_top_left boolean
function gl.viewportf(x, y, w, h, origin_top_left) end

---@param x integer
---@param y integer
---@param w integer
---@param h integer
---@param origin_top_left boolean
function gl.scissor_rect(x, y, w, h, origin_top_left) end

---@param x number
---@param y number
---@param w number
---@param h number
---@param origin_top_left boolean
function gl.scissor_rectf(x, y, w, h, origin_top_left) end

function gl.enable_texture() end

function gl.disable_texture() end

---@param tex_view gfx.View
---@param smp gfx.Sampler
function gl.texture(tex_view, smp) end

---@param layer_id integer
function gl.layer(layer_id) end

function gl.load_default_pipeline() end

---@param pip gl.Pipeline
function gl.load_pipeline(pip) end

function gl.push_pipeline() end

function gl.pop_pipeline() end

function gl.matrix_mode_modelview() end

function gl.matrix_mode_projection() end

function gl.matrix_mode_texture() end

function gl.load_identity() end

---@param m any
function gl.load_matrix(m) end

---@param m any
function gl.load_transpose_matrix(m) end

---@param m any
function gl.mult_matrix(m) end

---@param m any
function gl.mult_transpose_matrix(m) end

---@param angle_rad number
---@param x number
---@param y number
---@param z number
function gl.rotate(angle_rad, x, y, z) end

---@param x number
---@param y number
---@param z number
function gl.scale(x, y, z) end

---@param x number
---@param y number
---@param z number
function gl.translate(x, y, z) end

---@param l number
---@param r number
---@param b number
---@param t number
---@param n number
---@param f number
function gl.frustum(l, r, b, t, n, f) end

---@param l number
---@param r number
---@param b number
---@param t number
---@param n number
---@param f number
function gl.ortho(l, r, b, t, n, f) end

---@param fov_y number
---@param aspect number
---@param z_near number
---@param z_far number
function gl.perspective(fov_y, aspect, z_near, z_far) end

---@param eye_x number
---@param eye_y number
---@param eye_z number
---@param center_x number
---@param center_y number
---@param center_z number
---@param up_x number
---@param up_y number
---@param up_z number
function gl.lookat(eye_x, eye_y, eye_z, center_x, center_y, center_z, up_x, up_y, up_z) end

function gl.push_matrix() end

function gl.pop_matrix() end

---@param u number
---@param v number
function gl.t2f(u, v) end

---@param r number
---@param g number
---@param b number
function gl.c3f(r, g, b) end

---@param r number
---@param g number
---@param b number
---@param a number
function gl.c4f(r, g, b, a) end

---@param r integer
---@param g integer
---@param b integer
function gl.c3b(r, g, b) end

---@param r integer
---@param g integer
---@param b integer
---@param a integer
function gl.c4b(r, g, b, a) end

---@param rgba integer
function gl.c1i(rgba) end

---@param s number
function gl.point_size(s) end

function gl.begin_points() end

function gl.begin_lines() end

function gl.begin_line_strip() end

function gl.begin_triangles() end

function gl.begin_triangle_strip() end

function gl.begin_quads() end

---@param x number
---@param y number
function gl.v2f(x, y) end

---@param x number
---@param y number
---@param z number
function gl.v3f(x, y, z) end

---@param x number
---@param y number
---@param u number
---@param v number
function gl.v2f_t2f(x, y, u, v) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
function gl.v3f_t2f(x, y, z, u, v) end

---@param x number
---@param y number
---@param r number
---@param g number
---@param b number
function gl.v2f_c3f(x, y, r, g, b) end

---@param x number
---@param y number
---@param r integer
---@param g integer
---@param b integer
function gl.v2f_c3b(x, y, r, g, b) end

---@param x number
---@param y number
---@param r number
---@param g number
---@param b number
---@param a number
function gl.v2f_c4f(x, y, r, g, b, a) end

---@param x number
---@param y number
---@param r integer
---@param g integer
---@param b integer
---@param a integer
function gl.v2f_c4b(x, y, r, g, b, a) end

---@param x number
---@param y number
---@param rgba integer
function gl.v2f_c1i(x, y, rgba) end

---@param x number
---@param y number
---@param z number
---@param r number
---@param g number
---@param b number
function gl.v3f_c3f(x, y, z, r, g, b) end

---@param x number
---@param y number
---@param z number
---@param r integer
---@param g integer
---@param b integer
function gl.v3f_c3b(x, y, z, r, g, b) end

---@param x number
---@param y number
---@param z number
---@param r number
---@param g number
---@param b number
---@param a number
function gl.v3f_c4f(x, y, z, r, g, b, a) end

---@param x number
---@param y number
---@param z number
---@param r integer
---@param g integer
---@param b integer
---@param a integer
function gl.v3f_c4b(x, y, z, r, g, b, a) end

---@param x number
---@param y number
---@param z number
---@param rgba integer
function gl.v3f_c1i(x, y, z, rgba) end

---@param x number
---@param y number
---@param u number
---@param v number
---@param r number
---@param g number
---@param b number
function gl.v2f_t2f_c3f(x, y, u, v, r, g, b) end

---@param x number
---@param y number
---@param u number
---@param v number
---@param r integer
---@param g integer
---@param b integer
function gl.v2f_t2f_c3b(x, y, u, v, r, g, b) end

---@param x number
---@param y number
---@param u number
---@param v number
---@param r number
---@param g number
---@param b number
---@param a number
function gl.v2f_t2f_c4f(x, y, u, v, r, g, b, a) end

---@param x number
---@param y number
---@param u number
---@param v number
---@param r integer
---@param g integer
---@param b integer
---@param a integer
function gl.v2f_t2f_c4b(x, y, u, v, r, g, b, a) end

---@param x number
---@param y number
---@param u number
---@param v number
---@param rgba integer
function gl.v2f_t2f_c1i(x, y, u, v, rgba) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
---@param r number
---@param g number
---@param b number
function gl.v3f_t2f_c3f(x, y, z, u, v, r, g, b) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
---@param r integer
---@param g integer
---@param b integer
function gl.v3f_t2f_c3b(x, y, z, u, v, r, g, b) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
---@param r number
---@param g number
---@param b number
---@param a number
function gl.v3f_t2f_c4f(x, y, z, u, v, r, g, b, a) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
---@param r integer
---@param g integer
---@param b integer
---@param a integer
function gl.v3f_t2f_c4b(x, y, z, u, v, r, g, b, a) end

---@param x number
---@param y number
---@param z number
---@param u number
---@param v number
---@param rgba integer
function gl.v3f_t2f_c1i(x, y, z, u, v, rgba) end

gl["end"] = function() end

return gl