---@meta
-- EmmyLua type definitions for sokol.app
-- Auto-generated, do not edit

---@alias app.EventType integer
---@alias app.Keycode integer
---@alias app.AndroidTooltype integer
---@alias app.Mousebutton integer
---@alias app.LogItem integer
---@alias app.PixelFormat integer
---@alias app.Html5FetchError integer
---@alias app.MouseCursor integer

---@class app
---@field EventType table<string, app.EventType>
---@field Keycode table<string, app.Keycode>
---@field AndroidTooltype table<string, app.AndroidTooltype>
---@field Mousebutton table<string, app.Mousebutton>
---@field LogItem table<string, app.LogItem>
---@field PixelFormat table<string, app.PixelFormat>
---@field Html5FetchError table<string, app.Html5FetchError>
---@field MouseCursor table<string, app.MouseCursor>
---@field Touchpoint fun(t?: app.Touchpoint): app.Touchpoint
---@field Event fun(t?: app.Event): app.Event
---@field Range fun(t?: app.Range): app.Range
---@field ImageDesc fun(t?: app.ImageDesc): app.ImageDesc
---@field IconDesc fun(t?: app.IconDesc): app.IconDesc
---@field Allocator fun(t?: app.Allocator): app.Allocator
---@field EnvironmentDefaults fun(t?: app.EnvironmentDefaults): app.EnvironmentDefaults
---@field MetalEnvironment fun(t?: app.MetalEnvironment): app.MetalEnvironment
---@field D3d11Environment fun(t?: app.D3d11Environment): app.D3d11Environment
---@field WgpuEnvironment fun(t?: app.WgpuEnvironment): app.WgpuEnvironment
---@field VulkanEnvironment fun(t?: app.VulkanEnvironment): app.VulkanEnvironment
---@field Environment fun(t?: app.Environment): app.Environment
---@field MetalSwapchain fun(t?: app.MetalSwapchain): app.MetalSwapchain
---@field D3d11Swapchain fun(t?: app.D3d11Swapchain): app.D3d11Swapchain
---@field WgpuSwapchain fun(t?: app.WgpuSwapchain): app.WgpuSwapchain
---@field VulkanSwapchain fun(t?: app.VulkanSwapchain): app.VulkanSwapchain
---@field GlSwapchain fun(t?: app.GlSwapchain): app.GlSwapchain
---@field Swapchain fun(t?: app.Swapchain): app.Swapchain
---@field Logger fun(t?: app.Logger): app.Logger
---@field GlDesc fun(t?: app.GlDesc): app.GlDesc
---@field Win32Desc fun(t?: app.Win32Desc): app.Win32Desc
---@field Html5Desc fun(t?: app.Html5Desc): app.Html5Desc
---@field IosDesc fun(t?: app.IosDesc): app.IosDesc
---@field Desc fun(t?: app.Desc): app.Desc
---@field Html5FetchResponse fun(t?: app.Html5FetchResponse): app.Html5FetchResponse
---@field Html5FetchRequest fun(t?: app.Html5FetchRequest): app.Html5FetchRequest
local app = {}
---@class app.Touchpoint
---@field identifier? integer
---@field pos_x? number
---@field pos_y? number
---@field android_tooltype? app.AndroidTooltype
---@field changed? boolean

---@class app.Event
---@field frame_count? integer
---@field type? app.EventType
---@field key_code? app.Keycode
---@field char_code? integer
---@field key_repeat? boolean
---@field modifiers? integer
---@field mouse_button? app.Mousebutton
---@field mouse_x? number
---@field mouse_y? number
---@field mouse_dx? number
---@field mouse_dy? number
---@field scroll_x? number
---@field scroll_y? number
---@field num_touches? integer
---@field touches? app.Touchpoint[]
---@field window_width? integer
---@field window_height? integer
---@field framebuffer_width? integer
---@field framebuffer_height? integer

---@class app.Range
---@field ptr? lightuserdata?
---@field size? integer

---@class app.ImageDesc
---@field width? integer
---@field height? integer
---@field cursor_hotspot_x? integer
---@field cursor_hotspot_y? integer
---@field pixels? app.Range

---@class app.IconDesc
---@field sokol_default? boolean
---@field images? app.ImageDesc[]

---@class app.Allocator
---@field alloc_fn? any
---@field free_fn? any
---@field user_data? lightuserdata?

---@class app.EnvironmentDefaults
---@field color_format? app.PixelFormat
---@field depth_format? app.PixelFormat
---@field sample_count? integer

---@class app.MetalEnvironment
---@field device? lightuserdata?

---@class app.D3d11Environment
---@field device? lightuserdata?
---@field device_context? lightuserdata?

---@class app.WgpuEnvironment
---@field device? lightuserdata?

---@class app.VulkanEnvironment
---@field physical_device? lightuserdata?
---@field device? lightuserdata?
---@field queue? lightuserdata?
---@field queue_family_index? integer

---@class app.Environment
---@field defaults? app.EnvironmentDefaults
---@field metal? app.MetalEnvironment
---@field d3d11? app.D3d11Environment
---@field wgpu? app.WgpuEnvironment
---@field vulkan? app.VulkanEnvironment

---@class app.MetalSwapchain
---@field current_drawable? lightuserdata?
---@field depth_stencil_texture? lightuserdata?
---@field msaa_color_texture? lightuserdata?

---@class app.D3d11Swapchain
---@field render_view? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_view? lightuserdata?

---@class app.WgpuSwapchain
---@field render_view? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_view? lightuserdata?

---@class app.VulkanSwapchain
---@field render_image? lightuserdata?
---@field render_view? lightuserdata?
---@field resolve_image? lightuserdata?
---@field resolve_view? lightuserdata?
---@field depth_stencil_image? lightuserdata?
---@field depth_stencil_view? lightuserdata?
---@field render_finished_semaphore? lightuserdata?
---@field present_complete_semaphore? lightuserdata?

---@class app.GlSwapchain
---@field framebuffer? integer

---@class app.Swapchain
---@field width? integer
---@field height? integer
---@field sample_count? integer
---@field color_format? app.PixelFormat
---@field depth_format? app.PixelFormat
---@field metal? app.MetalSwapchain
---@field d3d11? app.D3d11Swapchain
---@field wgpu? app.WgpuSwapchain
---@field vulkan? app.VulkanSwapchain
---@field gl? app.GlSwapchain

---@class app.Logger
---@field func? any
---@field user_data? lightuserdata?

---@class app.GlDesc
---@field major_version? integer
---@field minor_version? integer

---@class app.Win32Desc
---@field console_utf8? boolean
---@field console_create? boolean
---@field console_attach? boolean

---@class app.Html5Desc
---@field canvas_selector? string
---@field canvas_resize? boolean
---@field preserve_drawing_buffer? boolean
---@field premultiplied_alpha? boolean
---@field ask_leave_site? boolean
---@field update_document_title? boolean
---@field bubble_mouse_events? boolean
---@field bubble_touch_events? boolean
---@field bubble_wheel_events? boolean
---@field bubble_key_events? boolean
---@field bubble_char_events? boolean
---@field use_emsc_set_main_loop? boolean
---@field emsc_set_main_loop_simulate_infinite_loop? boolean

---@class app.IosDesc
---@field keyboard_resizes_canvas? boolean

---@class app.Desc
---@field init_cb? any
---@field frame_cb? any
---@field cleanup_cb? any
---@field event_cb? any
---@field user_data? lightuserdata?
---@field init_userdata_cb? any
---@field frame_userdata_cb? any
---@field cleanup_userdata_cb? any
---@field event_userdata_cb? any
---@field width? integer
---@field height? integer
---@field sample_count? integer
---@field swap_interval? integer
---@field high_dpi? boolean
---@field fullscreen? boolean
---@field alpha? boolean
---@field window_title? string
---@field enable_clipboard? boolean
---@field clipboard_size? integer
---@field enable_dragndrop? boolean
---@field max_dropped_files? integer
---@field max_dropped_file_path_length? integer
---@field icon? app.IconDesc
---@field allocator? app.Allocator
---@field logger? app.Logger
---@field gl? app.GlDesc
---@field win32? app.Win32Desc
---@field html5? app.Html5Desc
---@field ios? app.IosDesc

---@class app.Html5FetchResponse
---@field succeeded? boolean
---@field error_code? app.Html5FetchError
---@field file_index? integer
---@field data? app.Range
---@field buffer? app.Range
---@field user_data? lightuserdata?

---@class app.Html5FetchRequest
---@field dropped_file_index? integer
---@field callback? any
---@field buffer? app.Range
---@field user_data? lightuserdata?

---@return boolean
function app.isvalid() end

---@return integer
function app.width() end

---@return number
function app.widthf() end

---@return integer
function app.height() end

---@return number
function app.heightf() end

---@return app.PixelFormat
function app.color_format() end

---@return app.PixelFormat
function app.depth_format() end

---@return integer
function app.sample_count() end

---@return boolean
function app.high_dpi() end

---@return number
function app.dpi_scale() end

---@param show boolean
function app.show_keyboard(show) end

---@return boolean
function app.keyboard_shown() end

---@return boolean
function app.is_fullscreen() end

function app.toggle_fullscreen() end

---@param show boolean
function app.show_mouse(show) end

---@return boolean
function app.mouse_shown() end

---@param lock boolean
function app.lock_mouse(lock) end

---@return boolean
function app.mouse_locked() end

---@param cursor app.MouseCursor
function app.set_mouse_cursor(cursor) end

---@return app.MouseCursor
function app.get_mouse_cursor() end

---@param cursor app.MouseCursor
---@param desc app.ImageDesc
---@return app.MouseCursor
function app.bind_mouse_cursor_image(cursor, desc) end

---@param cursor app.MouseCursor
function app.unbind_mouse_cursor_image(cursor) end

---@return lightuserdata?
function app.userdata() end

---@return app.Desc
function app.query_desc() end

function app.request_quit() end

function app.cancel_quit() end

function app.quit() end

function app.consume_event() end

---@return integer
function app.frame_count() end

---@return number
function app.frame_duration() end

---@param str string
function app.set_clipboard_string(str) end

---@return string
function app.get_clipboard_string() end

---@param str string
function app.set_window_title(str) end

---@param icon_desc app.IconDesc
function app.set_icon(icon_desc) end

---@return integer
function app.get_num_dropped_files() end

---@param index integer
---@return string
function app.get_dropped_file_path(index) end

---@return app.Environment
function app.get_environment() end

---@return app.Swapchain
function app.get_swapchain() end

---@return lightuserdata?
function app.egl_get_display() end

---@return lightuserdata?
function app.egl_get_context() end

---@param ask boolean
function app.html5_ask_leave_site(ask) end

---@param index integer
---@return integer
function app.html5_get_dropped_file_size(index) end

---@param request app.Html5FetchRequest
function app.html5_fetch_dropped_file(request) end

---@return lightuserdata?
function app.macos_get_window() end

---@return lightuserdata?
function app.ios_get_window() end

---@return lightuserdata?
function app.d3d11_get_swap_chain() end

---@return lightuserdata?
function app.win32_get_hwnd() end

---@return integer
function app.gl_get_major_version() end

---@return integer
function app.gl_get_minor_version() end

---@return boolean
function app.gl_is_gles() end

---@return lightuserdata?
function app.x11_get_window() end

---@return lightuserdata?
function app.x11_get_display() end

---@return lightuserdata?
function app.android_get_native_activity() end

return app