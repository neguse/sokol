---@meta
-- LuaCATS type definitions for sokol.shape
-- Auto-generated, do not edit

---@class shape.Range
---@field ptr? lightuserdata?
---@field size? integer

---@class shape.Mat4
---@field m? any

---@class shape.Vertex
---@field x? number
---@field y? number
---@field z? number
---@field normal? integer
---@field u? integer
---@field v? integer
---@field color? integer

---@class shape.ElementRange
---@field base_element? integer
---@field num_elements? integer

---@class shape.SizesItem
---@field num? integer
---@field size? integer

---@class shape.Sizes
---@field vertices? shape.SizesItem
---@field indices? shape.SizesItem

---@class shape.BufferItem
---@field buffer? shape.Range
---@field data_size? integer
---@field shape_offset? integer

---@class shape.Buffer
---@field valid? boolean
---@field vertices? shape.BufferItem
---@field indices? shape.BufferItem

---@class shape.Plane
---@field width? number
---@field depth? number
---@field tiles? integer
---@field color? integer
---@field random_colors? boolean
---@field merge? boolean
---@field transform? shape.Mat4

---@class shape.Box
---@field width? number
---@field height? number
---@field depth? number
---@field tiles? integer
---@field color? integer
---@field random_colors? boolean
---@field merge? boolean
---@field transform? shape.Mat4

---@class shape.Sphere
---@field radius? number
---@field slices? integer
---@field stacks? integer
---@field color? integer
---@field random_colors? boolean
---@field merge? boolean
---@field transform? shape.Mat4

---@class shape.Cylinder
---@field radius? number
---@field height? number
---@field slices? integer
---@field stacks? integer
---@field color? integer
---@field random_colors? boolean
---@field merge? boolean
---@field transform? shape.Mat4

---@class shape.Torus
---@field radius? number
---@field ring_radius? number
---@field sides? integer
---@field rings? integer
---@field color? integer
---@field random_colors? boolean
---@field merge? boolean
---@field transform? shape.Mat4

---@class shape
---@field Range fun(t?: shape.Range): shape.Range
---@field Mat4 fun(t?: shape.Mat4): shape.Mat4
---@field Vertex fun(t?: shape.Vertex): shape.Vertex
---@field ElementRange fun(t?: shape.ElementRange): shape.ElementRange
---@field SizesItem fun(t?: shape.SizesItem): shape.SizesItem
---@field Sizes fun(t?: shape.Sizes): shape.Sizes
---@field BufferItem fun(t?: shape.BufferItem): shape.BufferItem
---@field Buffer fun(t?: shape.Buffer): shape.Buffer
---@field Plane fun(t?: shape.Plane): shape.Plane
---@field Box fun(t?: shape.Box): shape.Box
---@field Sphere fun(t?: shape.Sphere): shape.Sphere
---@field Cylinder fun(t?: shape.Cylinder): shape.Cylinder
---@field Torus fun(t?: shape.Torus): shape.Torus
local shape = {}

---@param buf shape.Buffer
---@param params shape.Plane
---@return shape.Buffer
function shape.build_plane(buf, params) end

---@param buf shape.Buffer
---@param params shape.Box
---@return shape.Buffer
function shape.build_box(buf, params) end

---@param buf shape.Buffer
---@param params shape.Sphere
---@return shape.Buffer
function shape.build_sphere(buf, params) end

---@param buf shape.Buffer
---@param params shape.Cylinder
---@return shape.Buffer
function shape.build_cylinder(buf, params) end

---@param buf shape.Buffer
---@param params shape.Torus
---@return shape.Buffer
function shape.build_torus(buf, params) end

---@param tiles integer
---@return shape.Sizes
function shape.plane_sizes(tiles) end

---@param tiles integer
---@return shape.Sizes
function shape.box_sizes(tiles) end

---@param slices integer
---@param stacks integer
---@return shape.Sizes
function shape.sphere_sizes(slices, stacks) end

---@param slices integer
---@param stacks integer
---@return shape.Sizes
function shape.cylinder_sizes(slices, stacks) end

---@param sides integer
---@param rings integer
---@return shape.Sizes
function shape.torus_sizes(sides, rings) end

---@param buf shape.Buffer
---@return shape.ElementRange
function shape.element_range(buf) end

---@param buf shape.Buffer
---@return gfx.BufferDesc
function shape.vertex_buffer_desc(buf) end

---@param buf shape.Buffer
---@return gfx.BufferDesc
function shape.index_buffer_desc(buf) end

---@return gfx.VertexBufferLayoutState
function shape.vertex_buffer_layout_state() end

---@return gfx.VertexAttrState
function shape.position_vertex_attr_state() end

---@return gfx.VertexAttrState
function shape.normal_vertex_attr_state() end

---@return gfx.VertexAttrState
function shape.texcoord_vertex_attr_state() end

---@return gfx.VertexAttrState
function shape.color_vertex_attr_state() end

---@param r number
---@param g number
---@param b number
---@param a number
---@return integer
function shape.color_4f(r, g, b, a) end

---@param r number
---@param g number
---@param b number
---@return integer
function shape.color_3f(r, g, b) end

---@param r integer
---@param g integer
---@param b integer
---@param a integer
---@return integer
function shape.color_4b(r, g, b, a) end

---@param r integer
---@param g integer
---@param b integer
---@return integer
function shape.color_3b(r, g, b) end

---@param m any
---@return shape.Mat4
function shape.mat4(m) end

---@param m any
---@return shape.Mat4
function shape.mat4_transpose(m) end

return shape