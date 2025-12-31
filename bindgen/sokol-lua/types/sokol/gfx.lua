---@meta
-- EmmyLua type definitions for sokol.gfx
-- Auto-generated, do not edit

---@alias gfx.Backend integer
---@alias gfx.PixelFormat integer
---@alias gfx.ResourceState integer
---@alias gfx.IndexType integer
---@alias gfx.ImageType integer
---@alias gfx.ImageSampleType integer
---@alias gfx.SamplerType integer
---@alias gfx.PrimitiveType integer
---@alias gfx.Filter integer
---@alias gfx.Wrap integer
---@alias gfx.BorderColor integer
---@alias gfx.VertexFormat integer
---@alias gfx.VertexStep integer
---@alias gfx.UniformType integer
---@alias gfx.UniformLayout integer
---@alias gfx.CullMode integer
---@alias gfx.FaceWinding integer
---@alias gfx.CompareFunc integer
---@alias gfx.StencilOp integer
---@alias gfx.BlendFactor integer
---@alias gfx.BlendOp integer
---@alias gfx.ColorMask integer
---@alias gfx.LoadAction integer
---@alias gfx.StoreAction integer
---@alias gfx.ViewType integer
---@alias gfx.ShaderStage integer
---@alias gfx.ShaderAttrBaseType integer
---@alias gfx.LogItem integer

---@class gfx
---@field Backend table<string, gfx.Backend>
---@field PixelFormat table<string, gfx.PixelFormat>
---@field ResourceState table<string, gfx.ResourceState>
---@field IndexType table<string, gfx.IndexType>
---@field ImageType table<string, gfx.ImageType>
---@field ImageSampleType table<string, gfx.ImageSampleType>
---@field SamplerType table<string, gfx.SamplerType>
---@field PrimitiveType table<string, gfx.PrimitiveType>
---@field Filter table<string, gfx.Filter>
---@field Wrap table<string, gfx.Wrap>
---@field BorderColor table<string, gfx.BorderColor>
---@field VertexFormat table<string, gfx.VertexFormat>
---@field VertexStep table<string, gfx.VertexStep>
---@field UniformType table<string, gfx.UniformType>
---@field UniformLayout table<string, gfx.UniformLayout>
---@field CullMode table<string, gfx.CullMode>
---@field FaceWinding table<string, gfx.FaceWinding>
---@field CompareFunc table<string, gfx.CompareFunc>
---@field StencilOp table<string, gfx.StencilOp>
---@field BlendFactor table<string, gfx.BlendFactor>
---@field BlendOp table<string, gfx.BlendOp>
---@field ColorMask table<string, gfx.ColorMask>
---@field LoadAction table<string, gfx.LoadAction>
---@field StoreAction table<string, gfx.StoreAction>
---@field ViewType table<string, gfx.ViewType>
---@field ShaderStage table<string, gfx.ShaderStage>
---@field ShaderAttrBaseType table<string, gfx.ShaderAttrBaseType>
---@field LogItem table<string, gfx.LogItem>
---@field Buffer fun(t?: gfx.Buffer): gfx.Buffer
---@field Image fun(t?: gfx.Image): gfx.Image
---@field Sampler fun(t?: gfx.Sampler): gfx.Sampler
---@field Shader fun(t?: gfx.Shader): gfx.Shader
---@field Pipeline fun(t?: gfx.Pipeline): gfx.Pipeline
---@field View fun(t?: gfx.View): gfx.View
---@field Range fun(t?: gfx.Range): gfx.Range
---@field Color fun(t?: gfx.Color): gfx.Color
---@field PixelformatInfo fun(t?: gfx.PixelformatInfo): gfx.PixelformatInfo
---@field Features fun(t?: gfx.Features): gfx.Features
---@field Limits fun(t?: gfx.Limits): gfx.Limits
---@field ColorAttachmentAction fun(t?: gfx.ColorAttachmentAction): gfx.ColorAttachmentAction
---@field DepthAttachmentAction fun(t?: gfx.DepthAttachmentAction): gfx.DepthAttachmentAction
---@field StencilAttachmentAction fun(t?: gfx.StencilAttachmentAction): gfx.StencilAttachmentAction
---@field PassAction fun(t?: gfx.PassAction): gfx.PassAction
---@field MetalSwapchain fun(t?: gfx.MetalSwapchain): gfx.MetalSwapchain
---@field D3d11Swapchain fun(t?: gfx.D3d11Swapchain): gfx.D3d11Swapchain
---@field WgpuSwapchain fun(t?: gfx.WgpuSwapchain): gfx.WgpuSwapchain
---@field VulkanSwapchain fun(t?: gfx.VulkanSwapchain): gfx.VulkanSwapchain
---@field GlSwapchain fun(t?: gfx.GlSwapchain): gfx.GlSwapchain
---@field Swapchain fun(t?: gfx.Swapchain): gfx.Swapchain
---@field Attachments fun(t?: gfx.Attachments): gfx.Attachments
---@field Pass fun(t?: gfx.Pass): gfx.Pass
---@field Bindings fun(t?: gfx.Bindings): gfx.Bindings
---@field BufferUsage fun(t?: gfx.BufferUsage): gfx.BufferUsage
---@field BufferDesc fun(t?: gfx.BufferDesc): gfx.BufferDesc
---@field ImageUsage fun(t?: gfx.ImageUsage): gfx.ImageUsage
---@field ImageData fun(t?: gfx.ImageData): gfx.ImageData
---@field ImageDesc fun(t?: gfx.ImageDesc): gfx.ImageDesc
---@field SamplerDesc fun(t?: gfx.SamplerDesc): gfx.SamplerDesc
---@field ShaderFunction fun(t?: gfx.ShaderFunction): gfx.ShaderFunction
---@field ShaderVertexAttr fun(t?: gfx.ShaderVertexAttr): gfx.ShaderVertexAttr
---@field GlslShaderUniform fun(t?: gfx.GlslShaderUniform): gfx.GlslShaderUniform
---@field ShaderUniformBlock fun(t?: gfx.ShaderUniformBlock): gfx.ShaderUniformBlock
---@field ShaderTextureView fun(t?: gfx.ShaderTextureView): gfx.ShaderTextureView
---@field ShaderStorageBufferView fun(t?: gfx.ShaderStorageBufferView): gfx.ShaderStorageBufferView
---@field ShaderStorageImageView fun(t?: gfx.ShaderStorageImageView): gfx.ShaderStorageImageView
---@field ShaderView fun(t?: gfx.ShaderView): gfx.ShaderView
---@field ShaderSampler fun(t?: gfx.ShaderSampler): gfx.ShaderSampler
---@field ShaderTextureSamplerPair fun(t?: gfx.ShaderTextureSamplerPair): gfx.ShaderTextureSamplerPair
---@field MtlShaderThreadsPerThreadgroup fun(t?: gfx.MtlShaderThreadsPerThreadgroup): gfx.MtlShaderThreadsPerThreadgroup
---@field ShaderDesc fun(t?: gfx.ShaderDesc): gfx.ShaderDesc
---@field VertexBufferLayoutState fun(t?: gfx.VertexBufferLayoutState): gfx.VertexBufferLayoutState
---@field VertexAttrState fun(t?: gfx.VertexAttrState): gfx.VertexAttrState
---@field VertexLayoutState fun(t?: gfx.VertexLayoutState): gfx.VertexLayoutState
---@field StencilFaceState fun(t?: gfx.StencilFaceState): gfx.StencilFaceState
---@field StencilState fun(t?: gfx.StencilState): gfx.StencilState
---@field DepthState fun(t?: gfx.DepthState): gfx.DepthState
---@field BlendState fun(t?: gfx.BlendState): gfx.BlendState
---@field ColorTargetState fun(t?: gfx.ColorTargetState): gfx.ColorTargetState
---@field PipelineDesc fun(t?: gfx.PipelineDesc): gfx.PipelineDesc
---@field BufferViewDesc fun(t?: gfx.BufferViewDesc): gfx.BufferViewDesc
---@field ImageViewDesc fun(t?: gfx.ImageViewDesc): gfx.ImageViewDesc
---@field TextureViewRange fun(t?: gfx.TextureViewRange): gfx.TextureViewRange
---@field TextureViewDesc fun(t?: gfx.TextureViewDesc): gfx.TextureViewDesc
---@field ViewDesc fun(t?: gfx.ViewDesc): gfx.ViewDesc
---@field TraceHooks fun(t?: gfx.TraceHooks): gfx.TraceHooks
---@field SlotInfo fun(t?: gfx.SlotInfo): gfx.SlotInfo
---@field BufferInfo fun(t?: gfx.BufferInfo): gfx.BufferInfo
---@field ImageInfo fun(t?: gfx.ImageInfo): gfx.ImageInfo
---@field SamplerInfo fun(t?: gfx.SamplerInfo): gfx.SamplerInfo
---@field ShaderInfo fun(t?: gfx.ShaderInfo): gfx.ShaderInfo
---@field PipelineInfo fun(t?: gfx.PipelineInfo): gfx.PipelineInfo
---@field ViewInfo fun(t?: gfx.ViewInfo): gfx.ViewInfo
---@field FrameStatsGl fun(t?: gfx.FrameStatsGl): gfx.FrameStatsGl
---@field FrameStatsD3d11Pass fun(t?: gfx.FrameStatsD3d11Pass): gfx.FrameStatsD3d11Pass
---@field FrameStatsD3d11Pipeline fun(t?: gfx.FrameStatsD3d11Pipeline): gfx.FrameStatsD3d11Pipeline
---@field FrameStatsD3d11Bindings fun(t?: gfx.FrameStatsD3d11Bindings): gfx.FrameStatsD3d11Bindings
---@field FrameStatsD3d11Uniforms fun(t?: gfx.FrameStatsD3d11Uniforms): gfx.FrameStatsD3d11Uniforms
---@field FrameStatsD3d11Draw fun(t?: gfx.FrameStatsD3d11Draw): gfx.FrameStatsD3d11Draw
---@field FrameStatsD3d11 fun(t?: gfx.FrameStatsD3d11): gfx.FrameStatsD3d11
---@field FrameStatsMetalIdpool fun(t?: gfx.FrameStatsMetalIdpool): gfx.FrameStatsMetalIdpool
---@field FrameStatsMetalPipeline fun(t?: gfx.FrameStatsMetalPipeline): gfx.FrameStatsMetalPipeline
---@field FrameStatsMetalBindings fun(t?: gfx.FrameStatsMetalBindings): gfx.FrameStatsMetalBindings
---@field FrameStatsMetalUniforms fun(t?: gfx.FrameStatsMetalUniforms): gfx.FrameStatsMetalUniforms
---@field FrameStatsMetal fun(t?: gfx.FrameStatsMetal): gfx.FrameStatsMetal
---@field FrameStatsWgpuUniforms fun(t?: gfx.FrameStatsWgpuUniforms): gfx.FrameStatsWgpuUniforms
---@field FrameStatsWgpuBindings fun(t?: gfx.FrameStatsWgpuBindings): gfx.FrameStatsWgpuBindings
---@field FrameStatsWgpu fun(t?: gfx.FrameStatsWgpu): gfx.FrameStatsWgpu
---@field FrameStatsVk fun(t?: gfx.FrameStatsVk): gfx.FrameStatsVk
---@field FrameResourceStats fun(t?: gfx.FrameResourceStats): gfx.FrameResourceStats
---@field TotalResourceStats fun(t?: gfx.TotalResourceStats): gfx.TotalResourceStats
---@field TotalStats fun(t?: gfx.TotalStats): gfx.TotalStats
---@field FrameStats fun(t?: gfx.FrameStats): gfx.FrameStats
---@field Stats fun(t?: gfx.Stats): gfx.Stats
---@field EnvironmentDefaults fun(t?: gfx.EnvironmentDefaults): gfx.EnvironmentDefaults
---@field MetalEnvironment fun(t?: gfx.MetalEnvironment): gfx.MetalEnvironment
---@field D3d11Environment fun(t?: gfx.D3d11Environment): gfx.D3d11Environment
---@field WgpuEnvironment fun(t?: gfx.WgpuEnvironment): gfx.WgpuEnvironment
---@field VulkanEnvironment fun(t?: gfx.VulkanEnvironment): gfx.VulkanEnvironment
---@field Environment fun(t?: gfx.Environment): gfx.Environment
---@field CommitListener fun(t?: gfx.CommitListener): gfx.CommitListener
---@field Allocator fun(t?: gfx.Allocator): gfx.Allocator
---@field Logger fun(t?: gfx.Logger): gfx.Logger
---@field D3d11Desc fun(t?: gfx.D3d11Desc): gfx.D3d11Desc
---@field MetalDesc fun(t?: gfx.MetalDesc): gfx.MetalDesc
---@field WgpuDesc fun(t?: gfx.WgpuDesc): gfx.WgpuDesc
---@field VulkanDesc fun(t?: gfx.VulkanDesc): gfx.VulkanDesc
---@field Desc fun(t?: gfx.Desc): gfx.Desc
---@field D3d11BufferInfo fun(t?: gfx.D3d11BufferInfo): gfx.D3d11BufferInfo
---@field D3d11ImageInfo fun(t?: gfx.D3d11ImageInfo): gfx.D3d11ImageInfo
---@field D3d11SamplerInfo fun(t?: gfx.D3d11SamplerInfo): gfx.D3d11SamplerInfo
---@field D3d11ShaderInfo fun(t?: gfx.D3d11ShaderInfo): gfx.D3d11ShaderInfo
---@field D3d11PipelineInfo fun(t?: gfx.D3d11PipelineInfo): gfx.D3d11PipelineInfo
---@field D3d11ViewInfo fun(t?: gfx.D3d11ViewInfo): gfx.D3d11ViewInfo
---@field MtlBufferInfo fun(t?: gfx.MtlBufferInfo): gfx.MtlBufferInfo
---@field MtlImageInfo fun(t?: gfx.MtlImageInfo): gfx.MtlImageInfo
---@field MtlSamplerInfo fun(t?: gfx.MtlSamplerInfo): gfx.MtlSamplerInfo
---@field MtlShaderInfo fun(t?: gfx.MtlShaderInfo): gfx.MtlShaderInfo
---@field MtlPipelineInfo fun(t?: gfx.MtlPipelineInfo): gfx.MtlPipelineInfo
---@field WgpuBufferInfo fun(t?: gfx.WgpuBufferInfo): gfx.WgpuBufferInfo
---@field WgpuImageInfo fun(t?: gfx.WgpuImageInfo): gfx.WgpuImageInfo
---@field WgpuSamplerInfo fun(t?: gfx.WgpuSamplerInfo): gfx.WgpuSamplerInfo
---@field WgpuShaderInfo fun(t?: gfx.WgpuShaderInfo): gfx.WgpuShaderInfo
---@field WgpuPipelineInfo fun(t?: gfx.WgpuPipelineInfo): gfx.WgpuPipelineInfo
---@field WgpuViewInfo fun(t?: gfx.WgpuViewInfo): gfx.WgpuViewInfo
---@field GlBufferInfo fun(t?: gfx.GlBufferInfo): gfx.GlBufferInfo
---@field GlImageInfo fun(t?: gfx.GlImageInfo): gfx.GlImageInfo
---@field GlSamplerInfo fun(t?: gfx.GlSamplerInfo): gfx.GlSamplerInfo
---@field GlShaderInfo fun(t?: gfx.GlShaderInfo): gfx.GlShaderInfo
---@field GlViewInfo fun(t?: gfx.GlViewInfo): gfx.GlViewInfo
local gfx = {}
---@class gfx.Buffer
---@field id? integer

---@class gfx.Image
---@field id? integer

---@class gfx.Sampler
---@field id? integer

---@class gfx.Shader
---@field id? integer

---@class gfx.Pipeline
---@field id? integer

---@class gfx.View
---@field id? integer

---@class gfx.Range
---@field ptr? lightuserdata?
---@field size? integer

---@class gfx.Color
---@field r? number
---@field g? number
---@field b? number
---@field a? number

---@class gfx.PixelformatInfo
---@field sample? boolean
---@field filter? boolean
---@field render? boolean
---@field blend? boolean
---@field msaa? boolean
---@field depth? boolean
---@field compressed? boolean
---@field read? boolean
---@field write? boolean
---@field bytes_per_pixel? integer

---@class gfx.Features
---@field origin_top_left? boolean
---@field image_clamp_to_border? boolean
---@field mrt_independent_blend_state? boolean
---@field mrt_independent_write_mask? boolean
---@field compute? boolean
---@field msaa_texture_bindings? boolean
---@field separate_buffer_types? boolean
---@field draw_base_vertex? boolean
---@field draw_base_instance? boolean
---@field gl_texture_views? boolean

---@class gfx.Limits
---@field max_image_size_2d? integer
---@field max_image_size_cube? integer
---@field max_image_size_3d? integer
---@field max_image_size_array? integer
---@field max_image_array_layers? integer
---@field max_vertex_attrs? integer
---@field max_color_attachments? integer
---@field max_texture_bindings_per_stage? integer
---@field max_storage_buffer_bindings_per_stage? integer
---@field max_storage_image_bindings_per_stage? integer
---@field gl_max_vertex_uniform_components? integer
---@field gl_max_combined_texture_image_units? integer
---@field d3d11_max_unordered_access_views? integer
---@field vk_min_uniform_buffer_offset_alignment? integer

---@class gfx.ColorAttachmentAction
---@field load_action? gfx.LoadAction
---@field store_action? gfx.StoreAction
---@field clear_value? gfx.Color

---@class gfx.DepthAttachmentAction
---@field load_action? gfx.LoadAction
---@field store_action? gfx.StoreAction
---@field clear_value? number

---@class gfx.StencilAttachmentAction
---@field load_action? gfx.LoadAction
---@field store_action? gfx.StoreAction
---@field clear_value? integer

---@class gfx.PassAction
---@field colors? gfx.ColorAttachmentAction[]
---@field depth? gfx.DepthAttachmentAction
---@field stencil? gfx.StencilAttachmentAction

---@class gfx.MetalSwapchain
---@field current_drawable? lightuserdata?
---@field depth_stencil_texture? lightuserdata?
---@field msaa_color_texture? lightuserdata?

---@class gfx.D3d11Swapchain
---@field render_view? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_view? lightuserdata?

---@class gfx.WgpuSwapchain
---@field render_view? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_view? lightuserdata?

---@class gfx.VulkanSwapchain
---@field render_image? lightuserdata?
---@field render_view? lightuserdata?
---@field resolve_image? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_image? lightuserdata?
---@field depth_stencil_view? lightuserdata?
---@field render_finished_semaphore? lightuserdata?
---@field present_complete_semaphore? lightuserdata?

---@class gfx.GlSwapchain
---@field framebuffer? integer

---@class gfx.Swapchain
---@field width? integer
---@field height? integer
---@field sample_count? integer
---@field color_format? gfx.PixelFormat
---@field depth_format? gfx.PixelFormat
---@field metal? gfx.MetalSwapchain
---@field d3d11? gfx.D3d11Swapchain
---@field wgpu? gfx.WgpuSwapchain
---@field vulkan? gfx.VulkanSwapchain
---@field gl? gfx.GlSwapchain

---@class gfx.Attachments
---@field colors? gfx.View[]
---@field resolves? gfx.View[]
---@field depth_stencil? gfx.View

---@class gfx.Pass
---@field _start_canary? integer
---@field compute? boolean
---@field action? gfx.PassAction
---@field attachments? gfx.Attachments
---@field swapchain? gfx.Swapchain
---@field label? string
---@field _end_canary? integer

---@class gfx.Bindings
---@field _start_canary? integer
---@field vertex_buffers? gfx.Buffer[]
---@field vertex_buffer_offsets? integer[]
---@field index_buffer? gfx.Buffer
---@field index_buffer_offset? integer
---@field views? gfx.View[]
---@field samplers? gfx.Sampler[]
---@field _end_canary? integer

---@class gfx.BufferUsage
---@field vertex_buffer? boolean
---@field index_buffer? boolean
---@field storage_buffer? boolean
---@field immutable? boolean
---@field dynamic_update? boolean
---@field stream_update? boolean

---@class gfx.BufferDesc
---@field _start_canary? integer
---@field size? integer
---@field usage? gfx.BufferUsage
---@field data? gfx.Range|string
---@field label? string
---@field gl_buffers? integer[]
---@field mtl_buffers? lightuserdata?[]
---@field d3d11_buffer? lightuserdata?
---@field wgpu_buffer? lightuserdata?
---@field _end_canary? integer

---@class gfx.ImageUsage
---@field storage_image? boolean
---@field color_attachment? boolean
---@field resolve_attachment? boolean
---@field depth_stencil_attachment? boolean
---@field immutable? boolean
---@field dynamic_update? boolean
---@field stream_update? boolean

---@class gfx.ImageData
---@field mip_levels? gfx.Range[]

---@class gfx.ImageDesc
---@field _start_canary? integer
---@field type? gfx.ImageType
---@field usage? gfx.ImageUsage
---@field width? integer
---@field height? integer
---@field num_slices? integer
---@field num_mipmaps? integer
---@field pixel_format? gfx.PixelFormat
---@field sample_count? integer
---@field data? gfx.ImageData
---@field label? string
---@field gl_textures? integer[]
---@field gl_texture_target? integer
---@field mtl_textures? lightuserdata?[]
---@field d3d11_texture? lightuserdata?
---@field wgpu_texture? lightuserdata?
---@field _end_canary? integer

---@class gfx.SamplerDesc
---@field _start_canary? integer
---@field min_filter? gfx.Filter
---@field mag_filter? gfx.Filter
---@field mipmap_filter? gfx.Filter
---@field wrap_u? gfx.Wrap
---@field wrap_v? gfx.Wrap
---@field wrap_w? gfx.Wrap
---@field min_lod? number
---@field max_lod? number
---@field border_color? gfx.BorderColor
---@field compare? gfx.CompareFunc
---@field max_anisotropy? integer
---@field label? string
---@field gl_sampler? integer
---@field mtl_sampler? lightuserdata?
---@field d3d11_sampler? lightuserdata?
---@field wgpu_sampler? lightuserdata?
---@field _end_canary? integer

---@class gfx.ShaderFunction
---@field source? string
---@field bytecode? gfx.Range|string
---@field entry? string
---@field d3d11_target? string
---@field d3d11_filepath? string

---@class gfx.ShaderVertexAttr
---@field base_type? gfx.ShaderAttrBaseType
---@field glsl_name? string
---@field hlsl_sem_name? string
---@field hlsl_sem_index? integer

---@class gfx.GlslShaderUniform
---@field type? gfx.UniformType
---@field array_count? integer
---@field glsl_name? string

---@class gfx.ShaderUniformBlock
---@field stage? gfx.ShaderStage
---@field size? integer
---@field hlsl_register_b_n? integer
---@field msl_buffer_n? integer
---@field wgsl_group0_binding_n? integer
---@field spirv_set0_binding_n? integer
---@field layout? gfx.UniformLayout
---@field glsl_uniforms? gfx.GlslShaderUniform[]

---@class gfx.ShaderTextureView
---@field stage? gfx.ShaderStage
---@field image_type? gfx.ImageType
---@field sample_type? gfx.ImageSampleType
---@field multisampled? boolean
---@field hlsl_register_t_n? integer
---@field msl_texture_n? integer
---@field wgsl_group1_binding_n? integer
---@field spirv_set1_binding_n? integer

---@class gfx.ShaderStorageBufferView
---@field stage? gfx.ShaderStage
---@field readonly? boolean
---@field hlsl_register_t_n? integer
---@field hlsl_register_u_n? integer
---@field msl_buffer_n? integer
---@field wgsl_group1_binding_n? integer
---@field spirv_set1_binding_n? integer
---@field glsl_binding_n? integer

---@class gfx.ShaderStorageImageView
---@field stage? gfx.ShaderStage
---@field image_type? gfx.ImageType
---@field access_format? gfx.PixelFormat
---@field writeonly? boolean
---@field hlsl_register_u_n? integer
---@field msl_texture_n? integer
---@field wgsl_group1_binding_n? integer
---@field spirv_set1_binding_n? integer
---@field glsl_binding_n? integer

---@class gfx.ShaderView
---@field texture? gfx.ShaderTextureView
---@field storage_buffer? gfx.ShaderStorageBufferView
---@field storage_image? gfx.ShaderStorageImageView

---@class gfx.ShaderSampler
---@field stage? gfx.ShaderStage
---@field sampler_type? gfx.SamplerType
---@field hlsl_register_s_n? integer
---@field msl_sampler_n? integer
---@field wgsl_group1_binding_n? integer
---@field spirv_set1_binding_n? integer

---@class gfx.ShaderTextureSamplerPair
---@field stage? gfx.ShaderStage
---@field view_slot? integer
---@field sampler_slot? integer
---@field glsl_name? string

---@class gfx.MtlShaderThreadsPerThreadgroup
---@field x? integer
---@field y? integer
---@field z? integer

---@class gfx.ShaderDesc
---@field _start_canary? integer
---@field vertex_func? gfx.ShaderFunction
---@field fragment_func? gfx.ShaderFunction
---@field compute_func? gfx.ShaderFunction
---@field attrs? gfx.ShaderVertexAttr[]
---@field uniform_blocks? gfx.ShaderUniformBlock[]
---@field views? gfx.ShaderView[]
---@field samplers? gfx.ShaderSampler[]
---@field texture_sampler_pairs? gfx.ShaderTextureSamplerPair[]
---@field mtl_threads_per_threadgroup? gfx.MtlShaderThreadsPerThreadgroup
---@field label? string
---@field _end_canary? integer

---@class gfx.VertexBufferLayoutState
---@field stride? integer
---@field step_func? gfx.VertexStep
---@field step_rate? integer

---@class gfx.VertexAttrState
---@field buffer_index? integer
---@field offset? integer
---@field format? gfx.VertexFormat

---@class gfx.VertexLayoutState
---@field buffers? gfx.VertexBufferLayoutState[]
---@field attrs? gfx.VertexAttrState[]

---@class gfx.StencilFaceState
---@field compare? gfx.CompareFunc
---@field fail_op? gfx.StencilOp
---@field depth_fail_op? gfx.StencilOp
---@field pass_op? gfx.StencilOp

---@class gfx.StencilState
---@field enabled? boolean
---@field front? gfx.StencilFaceState
---@field back? gfx.StencilFaceState
---@field read_mask? integer
---@field write_mask? integer
---@field ref? integer

---@class gfx.DepthState
---@field pixel_format? gfx.PixelFormat
---@field compare? gfx.CompareFunc
---@field write_enabled? boolean
---@field bias? number
---@field bias_slope_scale? number
---@field bias_clamp? number

---@class gfx.BlendState
---@field enabled? boolean
---@field src_factor_rgb? gfx.BlendFactor
---@field dst_factor_rgb? gfx.BlendFactor
---@field op_rgb? gfx.BlendOp
---@field src_factor_alpha? gfx.BlendFactor
---@field dst_factor_alpha? gfx.BlendFactor
---@field op_alpha? gfx.BlendOp

---@class gfx.ColorTargetState
---@field pixel_format? gfx.PixelFormat
---@field write_mask? gfx.ColorMask
---@field blend? gfx.BlendState

---@class gfx.PipelineDesc
---@field _start_canary? integer
---@field compute? boolean
---@field shader? gfx.Shader
---@field layout? gfx.VertexLayoutState
---@field depth? gfx.DepthState
---@field stencil? gfx.StencilState
---@field color_count? integer
---@field colors? gfx.ColorTargetState[]
---@field primitive_type? gfx.PrimitiveType
---@field index_type? gfx.IndexType
---@field cull_mode? gfx.CullMode
---@field face_winding? gfx.FaceWinding
---@field sample_count? integer
---@field blend_color? gfx.Color
---@field alpha_to_coverage_enabled? boolean
---@field label? string
---@field _end_canary? integer

---@class gfx.BufferViewDesc
---@field buffer? gfx.Buffer
---@field offset? integer

---@class gfx.ImageViewDesc
---@field image? gfx.Image
---@field mip_level? integer
---@field slice? integer

---@class gfx.TextureViewRange
---@field base? integer
---@field count? integer

---@class gfx.TextureViewDesc
---@field image? gfx.Image
---@field mip_levels? gfx.TextureViewRange
---@field slices? gfx.TextureViewRange

---@class gfx.ViewDesc
---@field _start_canary? integer
---@field texture? gfx.TextureViewDesc
---@field storage_buffer? gfx.BufferViewDesc
---@field storage_image? gfx.ImageViewDesc
---@field color_attachment? gfx.ImageViewDesc
---@field resolve_attachment? gfx.ImageViewDesc
---@field depth_stencil_attachment? gfx.ImageViewDesc
---@field label? string
---@field _end_canary? integer

---@class gfx.TraceHooks
---@field user_data? lightuserdata?
---@field reset_state_cache? any
---@field make_buffer? any
---@field make_image? any
---@field make_sampler? any
---@field make_shader? any
---@field make_pipeline? any
---@field make_view? any
---@field destroy_buffer? any
---@field destroy_image? any
---@field destroy_sampler? any
---@field destroy_shader? any
---@field destroy_pipeline? any
---@field destroy_view? any
---@field update_buffer? any
---@field update_image? any
---@field append_buffer? any
---@field begin_pass? any
---@field apply_viewport? any
---@field apply_scissor_rect? any
---@field apply_pipeline? any
---@field apply_bindings? any
---@field apply_uniforms? any
---@field draw? any
---@field draw_ex? any
---@field dispatch? any
---@field end_pass? any
---@field commit? any
---@field alloc_buffer? any
---@field alloc_image? any
---@field alloc_sampler? any
---@field alloc_shader? any
---@field alloc_pipeline? any
---@field alloc_view? any
---@field dealloc_buffer? any
---@field dealloc_image? any
---@field dealloc_sampler? any
---@field dealloc_shader? any
---@field dealloc_pipeline? any
---@field dealloc_view? any
---@field init_buffer? any
---@field init_image? any
---@field init_sampler? any
---@field init_shader? any
---@field init_pipeline? any
---@field init_view? any
---@field uninit_buffer? any
---@field uninit_image? any
---@field uninit_sampler? any
---@field uninit_shader? any
---@field uninit_pipeline? any
---@field uninit_view? any
---@field fail_buffer? any
---@field fail_image? any
---@field fail_sampler? any
---@field fail_shader? any
---@field fail_pipeline? any
---@field fail_view? any
---@field push_debug_group? any
---@field pop_debug_group? any

---@class gfx.SlotInfo
---@field state? gfx.ResourceState
---@field res_id? integer
---@field uninit_count? integer

---@class gfx.BufferInfo
---@field slot? gfx.SlotInfo
---@field update_frame_index? integer
---@field append_frame_index? integer
---@field append_pos? integer
---@field append_overflow? boolean
---@field num_slots? integer
---@field active_slot? integer

---@class gfx.ImageInfo
---@field slot? gfx.SlotInfo
---@field upd_frame_index? integer
---@field num_slots? integer
---@field active_slot? integer

---@class gfx.SamplerInfo
---@field slot? gfx.SlotInfo

---@class gfx.ShaderInfo
---@field slot? gfx.SlotInfo

---@class gfx.PipelineInfo
---@field slot? gfx.SlotInfo

---@class gfx.ViewInfo
---@field slot? gfx.SlotInfo

---@class gfx.FrameStatsGl
---@field num_bind_buffer? integer
---@field num_active_texture? integer
---@field num_bind_texture? integer
---@field num_bind_sampler? integer
---@field num_bind_image_texture? integer
---@field num_use_program? integer
---@field num_render_state? integer
---@field num_vertex_attrib_pointer? integer
---@field num_vertex_attrib_divisor? integer
---@field num_enable_vertex_attrib_array? integer
---@field num_disable_vertex_attrib_array? integer
---@field num_uniform? integer
---@field num_memory_barriers? integer

---@class gfx.FrameStatsD3d11Pass
---@field num_om_set_render_targets? integer
---@field num_clear_render_target_view? integer
---@field num_clear_depth_stencil_view? integer
---@field num_resolve_subresource? integer

---@class gfx.FrameStatsD3d11Pipeline
---@field num_rs_set_state? integer
---@field num_om_set_depth_stencil_state? integer
---@field num_om_set_blend_state? integer
---@field num_ia_set_primitive_topology? integer
---@field num_ia_set_input_layout? integer
---@field num_vs_set_shader? integer
---@field num_vs_set_constant_buffers? integer
---@field num_ps_set_shader? integer
---@field num_ps_set_constant_buffers? integer
---@field num_cs_set_shader? integer
---@field num_cs_set_constant_buffers? integer

---@class gfx.FrameStatsD3d11Bindings
---@field num_ia_set_vertex_buffers? integer
---@field num_ia_set_index_buffer? integer
---@field num_vs_set_shader_resources? integer
---@field num_vs_set_samplers? integer
---@field num_ps_set_shader_resources? integer
---@field num_ps_set_samplers? integer
---@field num_cs_set_shader_resources? integer
---@field num_cs_set_samplers? integer
---@field num_cs_set_unordered_access_views? integer

---@class gfx.FrameStatsD3d11Uniforms
---@field num_update_subresource? integer

---@class gfx.FrameStatsD3d11Draw
---@field num_draw_indexed_instanced? integer
---@field num_draw_indexed? integer
---@field num_draw_instanced? integer
---@field num_draw? integer

---@class gfx.FrameStatsD3d11
---@field pass? gfx.FrameStatsD3d11Pass
---@field pipeline? gfx.FrameStatsD3d11Pipeline
---@field bindings? gfx.FrameStatsD3d11Bindings
---@field uniforms? gfx.FrameStatsD3d11Uniforms
---@field draw? gfx.FrameStatsD3d11Draw
---@field num_map? integer
---@field num_unmap? integer

---@class gfx.FrameStatsMetalIdpool
---@field num_added? integer
---@field num_released? integer
---@field num_garbage_collected? integer

---@class gfx.FrameStatsMetalPipeline
---@field num_set_blend_color? integer
---@field num_set_cull_mode? integer
---@field num_set_front_facing_winding? integer
---@field num_set_stencil_reference_value? integer
---@field num_set_depth_bias? integer
---@field num_set_render_pipeline_state? integer
---@field num_set_depth_stencil_state? integer

---@class gfx.FrameStatsMetalBindings
---@field num_set_vertex_buffer? integer
---@field num_set_vertex_buffer_offset? integer
---@field num_skip_redundant_vertex_buffer? integer
---@field num_set_vertex_texture? integer
---@field num_skip_redundant_vertex_texture? integer
---@field num_set_vertex_sampler_state? integer
---@field num_skip_redundant_vertex_sampler_state? integer
---@field num_set_fragment_buffer? integer
---@field num_set_fragment_buffer_offset? integer
---@field num_skip_redundant_fragment_buffer? integer
---@field num_set_fragment_texture? integer
---@field num_skip_redundant_fragment_texture? integer
---@field num_set_fragment_sampler_state? integer
---@field num_skip_redundant_fragment_sampler_state? integer
---@field num_set_compute_buffer? integer
---@field num_set_compute_buffer_offset? integer
---@field num_skip_redundant_compute_buffer? integer
---@field num_set_compute_texture? integer
---@field num_skip_redundant_compute_texture? integer
---@field num_set_compute_sampler_state? integer
---@field num_skip_redundant_compute_sampler_state? integer

---@class gfx.FrameStatsMetalUniforms
---@field num_set_vertex_buffer_offset? integer
---@field num_set_fragment_buffer_offset? integer
---@field num_set_compute_buffer_offset? integer

---@class gfx.FrameStatsMetal
---@field idpool? gfx.FrameStatsMetalIdpool
---@field pipeline? gfx.FrameStatsMetalPipeline
---@field bindings? gfx.FrameStatsMetalBindings
---@field uniforms? gfx.FrameStatsMetalUniforms

---@class gfx.FrameStatsWgpuUniforms
---@field num_set_bindgroup? integer
---@field size_write_buffer? integer

---@class gfx.FrameStatsWgpuBindings
---@field num_set_vertex_buffer? integer
---@field num_skip_redundant_vertex_buffer? integer
---@field num_set_index_buffer? integer
---@field num_skip_redundant_index_buffer? integer
---@field num_create_bindgroup? integer
---@field num_discard_bindgroup? integer
---@field num_set_bindgroup? integer
---@field num_skip_redundant_bindgroup? integer
---@field num_bindgroup_cache_hits? integer
---@field num_bindgroup_cache_misses? integer
---@field num_bindgroup_cache_collisions? integer
---@field num_bindgroup_cache_invalidates? integer
---@field num_bindgroup_cache_hash_vs_key_mismatch? integer

---@class gfx.FrameStatsWgpu
---@field uniforms? gfx.FrameStatsWgpuUniforms
---@field bindings? gfx.FrameStatsWgpuBindings

---@class gfx.FrameStatsVk
---@field num_cmd_pipeline_barrier? integer
---@field num_allocate_memory? integer
---@field num_free_memory? integer
---@field size_allocate_memory? integer
---@field num_delete_queue_added? integer
---@field num_delete_queue_collected? integer
---@field num_cmd_copy_buffer? integer
---@field num_cmd_copy_buffer_to_image? integer
---@field num_cmd_set_descriptor_buffer_offsets? integer
---@field size_descriptor_buffer_writes? integer

---@class gfx.FrameResourceStats
---@field allocated? integer
---@field deallocated? integer
---@field inited? integer
---@field uninited? integer

---@class gfx.TotalResourceStats
---@field alive? integer
---@field free? integer
---@field allocated? integer
---@field deallocated? integer
---@field inited? integer
---@field uninited? integer

---@class gfx.TotalStats
---@field buffers? gfx.TotalResourceStats
---@field images? gfx.TotalResourceStats
---@field samplers? gfx.TotalResourceStats
---@field views? gfx.TotalResourceStats
---@field shaders? gfx.TotalResourceStats
---@field pipelines? gfx.TotalResourceStats

---@class gfx.FrameStats
---@field frame_index? integer
---@field num_passes? integer
---@field num_apply_viewport? integer
---@field num_apply_scissor_rect? integer
---@field num_apply_pipeline? integer
---@field num_apply_bindings? integer
---@field num_apply_uniforms? integer
---@field num_draw? integer
---@field num_draw_ex? integer
---@field num_dispatch? integer
---@field num_update_buffer? integer
---@field num_append_buffer? integer
---@field num_update_image? integer
---@field size_apply_uniforms? integer
---@field size_update_buffer? integer
---@field size_append_buffer? integer
---@field size_update_image? integer
---@field buffers? gfx.FrameResourceStats
---@field images? gfx.FrameResourceStats
---@field samplers? gfx.FrameResourceStats
---@field views? gfx.FrameResourceStats
---@field shaders? gfx.FrameResourceStats
---@field pipelines? gfx.FrameResourceStats
---@field gl? gfx.FrameStatsGl
---@field d3d11? gfx.FrameStatsD3d11
---@field metal? gfx.FrameStatsMetal
---@field wgpu? gfx.FrameStatsWgpu
---@field vk? gfx.FrameStatsVk

---@class gfx.Stats
---@field prev_frame? gfx.FrameStats
---@field cur_frame? gfx.FrameStats
---@field total? gfx.TotalStats

---@class gfx.EnvironmentDefaults
---@field color_format? gfx.PixelFormat
---@field depth_format? gfx.PixelFormat
---@field sample_count? integer

---@class gfx.MetalEnvironment
---@field device? lightuserdata?

---@class gfx.D3d11Environment
---@field device? lightuserdata?
---@field device_context? lightuserdata?

---@class gfx.WgpuEnvironment
---@field device? lightuserdata?

---@class gfx.VulkanEnvironment
---@field physical_device? lightuserdata?
---@field device? lightuserdata?
---@field queue? lightuserdata?
---@field queue_family_index? integer

---@class gfx.Environment
---@field defaults? gfx.EnvironmentDefaults
---@field metal? gfx.MetalEnvironment
---@field d3d11? gfx.D3d11Environment
---@field wgpu? gfx.WgpuEnvironment
---@field vulkan? gfx.VulkanEnvironment

---@class gfx.CommitListener
---@field func? any
---@field user_data? lightuserdata?

---@class gfx.Allocator
---@field alloc_fn? any
---@field free_fn? any
---@field user_data? lightuserdata?

---@class gfx.Logger
---@field func? any
---@field user_data? lightuserdata?

---@class gfx.D3d11Desc
---@field shader_debugging? boolean

---@class gfx.MetalDesc
---@field force_managed_storage_mode? boolean
---@field use_command_buffer_with_retained_references? boolean

---@class gfx.WgpuDesc
---@field disable_bindgroups_cache? boolean
---@field bindgroups_cache_size? integer

---@class gfx.VulkanDesc
---@field copy_staging_buffer_size? integer
---@field stream_staging_buffer_size? integer
---@field descriptor_buffer_size? integer

---@class gfx.Desc
---@field _start_canary? integer
---@field buffer_pool_size? integer
---@field image_pool_size? integer
---@field sampler_pool_size? integer
---@field shader_pool_size? integer
---@field pipeline_pool_size? integer
---@field view_pool_size? integer
---@field uniform_buffer_size? integer
---@field max_commit_listeners? integer
---@field disable_validation? boolean
---@field enforce_portable_limits? boolean
---@field d3d11? gfx.D3d11Desc
---@field metal? gfx.MetalDesc
---@field wgpu? gfx.WgpuDesc
---@field vulkan? gfx.VulkanDesc
---@field allocator? gfx.Allocator
---@field logger? gfx.Logger
---@field environment? gfx.Environment
---@field _end_canary? integer

---@class gfx.D3d11BufferInfo
---@field buf? lightuserdata?

---@class gfx.D3d11ImageInfo
---@field tex2d? lightuserdata?
---@field tex3d? lightuserdata?
---@field res? lightuserdata?

---@class gfx.D3d11SamplerInfo
---@field smp? lightuserdata?

---@class gfx.D3d11ShaderInfo
---@field cbufs? lightuserdata?[]
---@field vs? lightuserdata?
---@field fs? lightuserdata?

---@class gfx.D3d11PipelineInfo
---@field il? lightuserdata?
---@field rs? lightuserdata?
---@field dss? lightuserdata?
---@field bs? lightuserdata?

---@class gfx.D3d11ViewInfo
---@field srv? lightuserdata?
---@field uav? lightuserdata?
---@field rtv? lightuserdata?
---@field dsv? lightuserdata?

---@class gfx.MtlBufferInfo
---@field buf? lightuserdata?[]
---@field active_slot? integer

---@class gfx.MtlImageInfo
---@field tex? lightuserdata?[]
---@field active_slot? integer

---@class gfx.MtlSamplerInfo
---@field smp? lightuserdata?

---@class gfx.MtlShaderInfo
---@field vertex_lib? lightuserdata?
---@field fragment_lib? lightuserdata?
---@field vertex_func? lightuserdata?
---@field fragment_func? lightuserdata?

---@class gfx.MtlPipelineInfo
---@field rps? lightuserdata?
---@field dss? lightuserdata?

---@class gfx.WgpuBufferInfo
---@field buf? lightuserdata?

---@class gfx.WgpuImageInfo
---@field tex? lightuserdata?

---@class gfx.WgpuSamplerInfo
---@field smp? lightuserdata?

---@class gfx.WgpuShaderInfo
---@field vs_mod? lightuserdata?
---@field fs_mod? lightuserdata?
---@field bgl? lightuserdata?

---@class gfx.WgpuPipelineInfo
---@field render_pipeline? lightuserdata?
---@field compute_pipeline? lightuserdata?

---@class gfx.WgpuViewInfo
---@field view? lightuserdata?

---@class gfx.GlBufferInfo
---@field buf? integer[]
---@field active_slot? integer

---@class gfx.GlImageInfo
---@field tex? integer[]
---@field tex_target? integer
---@field active_slot? integer

---@class gfx.GlSamplerInfo
---@field smp? integer

---@class gfx.GlShaderInfo
---@field prog? integer

---@class gfx.GlViewInfo
---@field tex_view? integer[]
---@field msaa_render_buffer? integer
---@field msaa_resolve_frame_buffer? integer

---@param desc gfx.Desc
function gfx.setup(desc) end

function gfx.shutdown() end

---@return boolean
function gfx.isvalid() end

function gfx.reset_state_cache() end

---@param name string
function gfx.push_debug_group(name) end

function gfx.pop_debug_group() end

---@param listener gfx.CommitListener
---@return boolean
function gfx.add_commit_listener(listener) end

---@param listener gfx.CommitListener
---@return boolean
function gfx.remove_commit_listener(listener) end

---@param desc gfx.BufferDesc
---@return gfx.Buffer
function gfx.make_buffer(desc) end

---@param desc gfx.ImageDesc
---@return gfx.Image
function gfx.make_image(desc) end

---@param desc gfx.SamplerDesc
---@return gfx.Sampler
function gfx.make_sampler(desc) end

---@param desc gfx.ShaderDesc
---@return gfx.Shader
function gfx.make_shader(desc) end

---@param desc gfx.PipelineDesc
---@return gfx.Pipeline
function gfx.make_pipeline(desc) end

---@param desc gfx.ViewDesc
---@return gfx.View
function gfx.make_view(desc) end

---@param buf gfx.Buffer
function gfx.destroy_buffer(buf) end

---@param img gfx.Image
function gfx.destroy_image(img) end

---@param smp gfx.Sampler
function gfx.destroy_sampler(smp) end

---@param shd gfx.Shader
function gfx.destroy_shader(shd) end

---@param pip gfx.Pipeline
function gfx.destroy_pipeline(pip) end

---@param view gfx.View
function gfx.destroy_view(view) end

---@param buf gfx.Buffer
---@param data gfx.Range
function gfx.update_buffer(buf, data) end

---@param img gfx.Image
---@param data gfx.ImageData
function gfx.update_image(img, data) end

---@param buf gfx.Buffer
---@param data gfx.Range
---@return integer
function gfx.append_buffer(buf, data) end

---@param buf gfx.Buffer
---@return boolean
function gfx.query_buffer_overflow(buf) end

---@param buf gfx.Buffer
---@param size integer
---@return boolean
function gfx.query_buffer_will_overflow(buf, size) end

---@param pass gfx.Pass
function gfx.begin_pass(pass) end

---@param x integer
---@param y integer
---@param width integer
---@param height integer
---@param origin_top_left boolean
function gfx.apply_viewport(x, y, width, height, origin_top_left) end

---@param x number
---@param y number
---@param width number
---@param height number
---@param origin_top_left boolean
function gfx.apply_viewportf(x, y, width, height, origin_top_left) end

---@param x integer
---@param y integer
---@param width integer
---@param height integer
---@param origin_top_left boolean
function gfx.apply_scissor_rect(x, y, width, height, origin_top_left) end

---@param x number
---@param y number
---@param width number
---@param height number
---@param origin_top_left boolean
function gfx.apply_scissor_rectf(x, y, width, height, origin_top_left) end

---@param pip gfx.Pipeline
function gfx.apply_pipeline(pip) end

---@param bindings gfx.Bindings
function gfx.apply_bindings(bindings) end

---@param ub_slot integer
---@param data gfx.Range
function gfx.apply_uniforms(ub_slot, data) end

---@param base_element integer
---@param num_elements integer
---@param num_instances integer
function gfx.draw(base_element, num_elements, num_instances) end

---@param base_element integer
---@param num_elements integer
---@param num_instances integer
---@param base_vertex integer
---@param base_instance integer
function gfx.draw_ex(base_element, num_elements, num_instances, base_vertex, base_instance) end

---@param num_groups_x integer
---@param num_groups_y integer
---@param num_groups_z integer
function gfx.dispatch(num_groups_x, num_groups_y, num_groups_z) end

function gfx.end_pass() end

function gfx.commit() end

---@return gfx.Desc
function gfx.query_desc() end

---@return gfx.Backend
function gfx.query_backend() end

---@return gfx.Features
function gfx.query_features() end

---@return gfx.Limits
function gfx.query_limits() end

---@param fmt gfx.PixelFormat
---@return gfx.PixelformatInfo
function gfx.query_pixelformat(fmt) end

---@param fmt gfx.PixelFormat
---@param width integer
---@param row_align_bytes integer
---@return integer
function gfx.query_row_pitch(fmt, width, row_align_bytes) end

---@param fmt gfx.PixelFormat
---@param width integer
---@param height integer
---@param row_align_bytes integer
---@return integer
function gfx.query_surface_pitch(fmt, width, height, row_align_bytes) end

---@param buf gfx.Buffer
---@return gfx.ResourceState
function gfx.query_buffer_state(buf) end

---@param img gfx.Image
---@return gfx.ResourceState
function gfx.query_image_state(img) end

---@param smp gfx.Sampler
---@return gfx.ResourceState
function gfx.query_sampler_state(smp) end

---@param shd gfx.Shader
---@return gfx.ResourceState
function gfx.query_shader_state(shd) end

---@param pip gfx.Pipeline
---@return gfx.ResourceState
function gfx.query_pipeline_state(pip) end

---@param view gfx.View
---@return gfx.ResourceState
function gfx.query_view_state(view) end

---@param buf gfx.Buffer
---@return gfx.BufferInfo
function gfx.query_buffer_info(buf) end

---@param img gfx.Image
---@return gfx.ImageInfo
function gfx.query_image_info(img) end

---@param smp gfx.Sampler
---@return gfx.SamplerInfo
function gfx.query_sampler_info(smp) end

---@param shd gfx.Shader
---@return gfx.ShaderInfo
function gfx.query_shader_info(shd) end

---@param pip gfx.Pipeline
---@return gfx.PipelineInfo
function gfx.query_pipeline_info(pip) end

---@param view gfx.View
---@return gfx.ViewInfo
function gfx.query_view_info(view) end

---@param buf gfx.Buffer
---@return gfx.BufferDesc
function gfx.query_buffer_desc(buf) end

---@param img gfx.Image
---@return gfx.ImageDesc
function gfx.query_image_desc(img) end

---@param smp gfx.Sampler
---@return gfx.SamplerDesc
function gfx.query_sampler_desc(smp) end

---@param shd gfx.Shader
---@return gfx.ShaderDesc
function gfx.query_shader_desc(shd) end

---@param pip gfx.Pipeline
---@return gfx.PipelineDesc
function gfx.query_pipeline_desc(pip) end

---@param view gfx.View
---@return gfx.ViewDesc
function gfx.query_view_desc(view) end

---@param desc gfx.BufferDesc
---@return gfx.BufferDesc
function gfx.query_buffer_defaults(desc) end

---@param desc gfx.ImageDesc
---@return gfx.ImageDesc
function gfx.query_image_defaults(desc) end

---@param desc gfx.SamplerDesc
---@return gfx.SamplerDesc
function gfx.query_sampler_defaults(desc) end

---@param desc gfx.ShaderDesc
---@return gfx.ShaderDesc
function gfx.query_shader_defaults(desc) end

---@param desc gfx.PipelineDesc
---@return gfx.PipelineDesc
function gfx.query_pipeline_defaults(desc) end

---@param desc gfx.ViewDesc
---@return gfx.ViewDesc
function gfx.query_view_defaults(desc) end

---@param buf gfx.Buffer
---@return integer
function gfx.query_buffer_size(buf) end

---@param buf gfx.Buffer
---@return gfx.BufferUsage
function gfx.query_buffer_usage(buf) end

---@param img gfx.Image
---@return gfx.ImageType
function gfx.query_image_type(img) end

---@param img gfx.Image
---@return integer
function gfx.query_image_width(img) end

---@param img gfx.Image
---@return integer
function gfx.query_image_height(img) end

---@param img gfx.Image
---@return integer
function gfx.query_image_num_slices(img) end

---@param img gfx.Image
---@return integer
function gfx.query_image_num_mipmaps(img) end

---@param img gfx.Image
---@return gfx.PixelFormat
function gfx.query_image_pixelformat(img) end

---@param img gfx.Image
---@return gfx.ImageUsage
function gfx.query_image_usage(img) end

---@param img gfx.Image
---@return integer
function gfx.query_image_sample_count(img) end

---@param view gfx.View
---@return gfx.ViewType
function gfx.query_view_type(view) end

---@param view gfx.View
---@return gfx.Image
function gfx.query_view_image(view) end

---@param view gfx.View
---@return gfx.Buffer
function gfx.query_view_buffer(view) end

---@return gfx.Buffer
function gfx.alloc_buffer() end

---@return gfx.Image
function gfx.alloc_image() end

---@return gfx.Sampler
function gfx.alloc_sampler() end

---@return gfx.Shader
function gfx.alloc_shader() end

---@return gfx.Pipeline
function gfx.alloc_pipeline() end

---@return gfx.View
function gfx.alloc_view() end

---@param buf gfx.Buffer
function gfx.dealloc_buffer(buf) end

---@param img gfx.Image
function gfx.dealloc_image(img) end

---@param smp gfx.Sampler
function gfx.dealloc_sampler(smp) end

---@param shd gfx.Shader
function gfx.dealloc_shader(shd) end

---@param pip gfx.Pipeline
function gfx.dealloc_pipeline(pip) end

---@param view gfx.View
function gfx.dealloc_view(view) end

---@param buf gfx.Buffer
---@param desc gfx.BufferDesc
function gfx.init_buffer(buf, desc) end

---@param img gfx.Image
---@param desc gfx.ImageDesc
function gfx.init_image(img, desc) end

---@param smg gfx.Sampler
---@param desc gfx.SamplerDesc
function gfx.init_sampler(smg, desc) end

---@param shd gfx.Shader
---@param desc gfx.ShaderDesc
function gfx.init_shader(shd, desc) end

---@param pip gfx.Pipeline
---@param desc gfx.PipelineDesc
function gfx.init_pipeline(pip, desc) end

---@param view gfx.View
---@param desc gfx.ViewDesc
function gfx.init_view(view, desc) end

---@param buf gfx.Buffer
function gfx.uninit_buffer(buf) end

---@param img gfx.Image
function gfx.uninit_image(img) end

---@param smp gfx.Sampler
function gfx.uninit_sampler(smp) end

---@param shd gfx.Shader
function gfx.uninit_shader(shd) end

---@param pip gfx.Pipeline
function gfx.uninit_pipeline(pip) end

---@param view gfx.View
function gfx.uninit_view(view) end

---@param buf gfx.Buffer
function gfx.fail_buffer(buf) end

---@param img gfx.Image
function gfx.fail_image(img) end

---@param smp gfx.Sampler
function gfx.fail_sampler(smp) end

---@param shd gfx.Shader
function gfx.fail_shader(shd) end

---@param pip gfx.Pipeline
function gfx.fail_pipeline(pip) end

---@param view gfx.View
function gfx.fail_view(view) end

function gfx.enable_stats() end

function gfx.disable_stats() end

---@return boolean
function gfx.stats_enabled() end

---@return gfx.Stats
function gfx.query_stats() end

---@return lightuserdata?
function gfx.d3d11_device() end

---@return lightuserdata?
function gfx.d3d11_device_context() end

---@param buf gfx.Buffer
---@return gfx.D3d11BufferInfo
function gfx.d3d11_query_buffer_info(buf) end

---@param img gfx.Image
---@return gfx.D3d11ImageInfo
function gfx.d3d11_query_image_info(img) end

---@param smp gfx.Sampler
---@return gfx.D3d11SamplerInfo
function gfx.d3d11_query_sampler_info(smp) end

---@param shd gfx.Shader
---@return gfx.D3d11ShaderInfo
function gfx.d3d11_query_shader_info(shd) end

---@param pip gfx.Pipeline
---@return gfx.D3d11PipelineInfo
function gfx.d3d11_query_pipeline_info(pip) end

---@param view gfx.View
---@return gfx.D3d11ViewInfo
function gfx.d3d11_query_view_info(view) end

---@return lightuserdata?
function gfx.mtl_device() end

---@return lightuserdata?
function gfx.mtl_render_command_encoder() end

---@return lightuserdata?
function gfx.mtl_compute_command_encoder() end

---@param buf gfx.Buffer
---@return gfx.MtlBufferInfo
function gfx.mtl_query_buffer_info(buf) end

---@param img gfx.Image
---@return gfx.MtlImageInfo
function gfx.mtl_query_image_info(img) end

---@param smp gfx.Sampler
---@return gfx.MtlSamplerInfo
function gfx.mtl_query_sampler_info(smp) end

---@param shd gfx.Shader
---@return gfx.MtlShaderInfo
function gfx.mtl_query_shader_info(shd) end

---@param pip gfx.Pipeline
---@return gfx.MtlPipelineInfo
function gfx.mtl_query_pipeline_info(pip) end

---@return lightuserdata?
function gfx.wgpu_device() end

---@return lightuserdata?
function gfx.wgpu_queue() end

---@return lightuserdata?
function gfx.wgpu_command_encoder() end

---@return lightuserdata?
function gfx.wgpu_render_pass_encoder() end

---@return lightuserdata?
function gfx.wgpu_compute_pass_encoder() end

---@param buf gfx.Buffer
---@return gfx.WgpuBufferInfo
function gfx.wgpu_query_buffer_info(buf) end

---@param img gfx.Image
---@return gfx.WgpuImageInfo
function gfx.wgpu_query_image_info(img) end

---@param smp gfx.Sampler
---@return gfx.WgpuSamplerInfo
function gfx.wgpu_query_sampler_info(smp) end

---@param shd gfx.Shader
---@return gfx.WgpuShaderInfo
function gfx.wgpu_query_shader_info(shd) end

---@param pip gfx.Pipeline
---@return gfx.WgpuPipelineInfo
function gfx.wgpu_query_pipeline_info(pip) end

---@param view gfx.View
---@return gfx.WgpuViewInfo
function gfx.wgpu_query_view_info(view) end

---@param buf gfx.Buffer
---@return gfx.GlBufferInfo
function gfx.gl_query_buffer_info(buf) end

---@param img gfx.Image
---@return gfx.GlImageInfo
function gfx.gl_query_image_info(img) end

---@param smp gfx.Sampler
---@return gfx.GlSamplerInfo
function gfx.gl_query_sampler_info(smp) end

---@param shd gfx.Shader
---@return gfx.GlShaderInfo
function gfx.gl_query_shader_info(shd) end

---@param view gfx.View
---@return gfx.GlViewInfo
function gfx.gl_query_view_info(view) end

return gfx