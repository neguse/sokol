---@meta
-- LuaCATS type definitions for sokol.app
-- Auto-generated, do not edit

---@class app
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

---@enum app.EventType
app.EventType = {
    INVALID = 0,
    KEY_DOWN = 1,
    KEY_UP = 2,
    CHAR = 3,
    MOUSE_DOWN = 4,
    MOUSE_UP = 5,
    MOUSE_SCROLL = 6,
    MOUSE_MOVE = 7,
    MOUSE_ENTER = 8,
    MOUSE_LEAVE = 9,
    TOUCHES_BEGAN = 10,
    TOUCHES_MOVED = 11,
    TOUCHES_ENDED = 12,
    TOUCHES_CANCELLED = 13,
    RESIZED = 14,
    ICONIFIED = 15,
    RESTORED = 16,
    FOCUSED = 17,
    UNFOCUSED = 18,
    SUSPENDED = 19,
    RESUMED = 20,
    QUIT_REQUESTED = 21,
    CLIPBOARD_PASTED = 22,
    FILES_DROPPED = 23,
    NUM = 24,
}

---@enum app.Keycode
app.Keycode = {
    INVALID = 0,
    SPACE = 32,
    APOSTROPHE = 39,
    COMMA = 44,
    MINUS = 45,
    PERIOD = 46,
    SLASH = 47,
    ["0"] = 48,
    ["1"] = 49,
    ["2"] = 50,
    ["3"] = 51,
    ["4"] = 52,
    ["5"] = 53,
    ["6"] = 54,
    ["7"] = 55,
    ["8"] = 56,
    ["9"] = 57,
    SEMICOLON = 59,
    EQUAL = 61,
    A = 65,
    B = 66,
    C = 67,
    D = 68,
    E = 69,
    F = 70,
    G = 71,
    H = 72,
    I = 73,
    J = 74,
    K = 75,
    L = 76,
    M = 77,
    N = 78,
    O = 79,
    P = 80,
    Q = 81,
    R = 82,
    S = 83,
    T = 84,
    U = 85,
    V = 86,
    W = 87,
    X = 88,
    Y = 89,
    Z = 90,
    LEFT_BRACKET = 91,
    BACKSLASH = 92,
    RIGHT_BRACKET = 93,
    GRAVE_ACCENT = 96,
    WORLD_1 = 161,
    WORLD_2 = 162,
    ESCAPE = 256,
    ENTER = 257,
    TAB = 258,
    BACKSPACE = 259,
    INSERT = 260,
    DELETE = 261,
    RIGHT = 262,
    LEFT = 263,
    DOWN = 264,
    UP = 265,
    PAGE_UP = 266,
    PAGE_DOWN = 267,
    HOME = 268,
    END = 269,
    CAPS_LOCK = 280,
    SCROLL_LOCK = 281,
    NUM_LOCK = 282,
    PRINT_SCREEN = 283,
    PAUSE = 284,
    F1 = 290,
    F2 = 291,
    F3 = 292,
    F4 = 293,
    F5 = 294,
    F6 = 295,
    F7 = 296,
    F8 = 297,
    F9 = 298,
    F10 = 299,
    F11 = 300,
    F12 = 301,
    F13 = 302,
    F14 = 303,
    F15 = 304,
    F16 = 305,
    F17 = 306,
    F18 = 307,
    F19 = 308,
    F20 = 309,
    F21 = 310,
    F22 = 311,
    F23 = 312,
    F24 = 313,
    F25 = 314,
    KP_0 = 320,
    KP_1 = 321,
    KP_2 = 322,
    KP_3 = 323,
    KP_4 = 324,
    KP_5 = 325,
    KP_6 = 326,
    KP_7 = 327,
    KP_8 = 328,
    KP_9 = 329,
    KP_DECIMAL = 330,
    KP_DIVIDE = 331,
    KP_MULTIPLY = 332,
    KP_SUBTRACT = 333,
    KP_ADD = 334,
    KP_ENTER = 335,
    KP_EQUAL = 336,
    LEFT_SHIFT = 340,
    LEFT_CONTROL = 341,
    LEFT_ALT = 342,
    LEFT_SUPER = 343,
    RIGHT_SHIFT = 344,
    RIGHT_CONTROL = 345,
    RIGHT_ALT = 346,
    RIGHT_SUPER = 347,
    MENU = 348,
}

---@enum app.AndroidTooltype
app.AndroidTooltype = {
    UNKNOWN = 0,
    FINGER = 1,
    STYLUS = 2,
    MOUSE = 3,
}

---@enum app.Mousebutton
app.Mousebutton = {
    LEFT = 0,
    RIGHT = 1,
    MIDDLE = 2,
    INVALID = 256,
}

---@enum app.LogItem
app.LogItem = {
    OK = 0,
    MALLOC_FAILED = 1,
    MACOS_INVALID_NSOPENGL_PROFILE = 2,
    WIN32_LOAD_OPENGL32_DLL_FAILED = 3,
    WIN32_CREATE_HELPER_WINDOW_FAILED = 4,
    WIN32_HELPER_WINDOW_GETDC_FAILED = 5,
    WIN32_DUMMY_CONTEXT_SET_PIXELFORMAT_FAILED = 6,
    WIN32_CREATE_DUMMY_CONTEXT_FAILED = 7,
    WIN32_DUMMY_CONTEXT_MAKE_CURRENT_FAILED = 8,
    WIN32_GET_PIXELFORMAT_ATTRIB_FAILED = 9,
    WIN32_WGL_FIND_PIXELFORMAT_FAILED = 10,
    WIN32_WGL_DESCRIBE_PIXELFORMAT_FAILED = 11,
    WIN32_WGL_SET_PIXELFORMAT_FAILED = 12,
    WIN32_WGL_ARB_CREATE_CONTEXT_REQUIRED = 13,
    WIN32_WGL_ARB_CREATE_CONTEXT_PROFILE_REQUIRED = 14,
    WIN32_WGL_OPENGL_VERSION_NOT_SUPPORTED = 15,
    WIN32_WGL_OPENGL_PROFILE_NOT_SUPPORTED = 16,
    WIN32_WGL_INCOMPATIBLE_DEVICE_CONTEXT = 17,
    WIN32_WGL_CREATE_CONTEXT_ATTRIBS_FAILED_OTHER = 18,
    WIN32_D3D11_CREATE_DEVICE_AND_SWAPCHAIN_WITH_DEBUG_FAILED = 19,
    WIN32_D3D11_GET_IDXGIFACTORY_FAILED = 20,
    WIN32_D3D11_GET_IDXGIADAPTER_FAILED = 21,
    WIN32_D3D11_QUERY_INTERFACE_IDXGIDEVICE1_FAILED = 22,
    WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_LOCK = 23,
    WIN32_REGISTER_RAW_INPUT_DEVICES_FAILED_MOUSE_UNLOCK = 24,
    WIN32_GET_RAW_INPUT_DATA_FAILED = 25,
    WIN32_DESTROYICON_FOR_CURSOR_FAILED = 26,
    LINUX_GLX_LOAD_LIBGL_FAILED = 27,
    LINUX_GLX_LOAD_ENTRY_POINTS_FAILED = 28,
    LINUX_GLX_EXTENSION_NOT_FOUND = 29,
    LINUX_GLX_QUERY_VERSION_FAILED = 30,
    LINUX_GLX_VERSION_TOO_LOW = 31,
    LINUX_GLX_NO_GLXFBCONFIGS = 32,
    LINUX_GLX_NO_SUITABLE_GLXFBCONFIG = 33,
    LINUX_GLX_GET_VISUAL_FROM_FBCONFIG_FAILED = 34,
    LINUX_GLX_REQUIRED_EXTENSIONS_MISSING = 35,
    LINUX_GLX_CREATE_CONTEXT_FAILED = 36,
    LINUX_GLX_CREATE_WINDOW_FAILED = 37,
    LINUX_X11_CREATE_WINDOW_FAILED = 38,
    LINUX_EGL_BIND_OPENGL_API_FAILED = 39,
    LINUX_EGL_BIND_OPENGL_ES_API_FAILED = 40,
    LINUX_EGL_GET_DISPLAY_FAILED = 41,
    LINUX_EGL_INITIALIZE_FAILED = 42,
    LINUX_EGL_NO_CONFIGS = 43,
    LINUX_EGL_NO_NATIVE_VISUAL = 44,
    LINUX_EGL_GET_VISUAL_INFO_FAILED = 45,
    LINUX_EGL_CREATE_WINDOW_SURFACE_FAILED = 46,
    LINUX_EGL_CREATE_CONTEXT_FAILED = 47,
    LINUX_EGL_MAKE_CURRENT_FAILED = 48,
    LINUX_X11_OPEN_DISPLAY_FAILED = 49,
    LINUX_X11_QUERY_SYSTEM_DPI_FAILED = 50,
    LINUX_X11_DROPPED_FILE_URI_WRONG_SCHEME = 51,
    LINUX_X11_FAILED_TO_BECOME_OWNER_OF_CLIPBOARD = 52,
    ANDROID_UNSUPPORTED_INPUT_EVENT_INPUT_CB = 53,
    ANDROID_UNSUPPORTED_INPUT_EVENT_MAIN_CB = 54,
    ANDROID_READ_MSG_FAILED = 55,
    ANDROID_WRITE_MSG_FAILED = 56,
    ANDROID_MSG_CREATE = 57,
    ANDROID_MSG_RESUME = 58,
    ANDROID_MSG_PAUSE = 59,
    ANDROID_MSG_FOCUS = 60,
    ANDROID_MSG_NO_FOCUS = 61,
    ANDROID_MSG_SET_NATIVE_WINDOW = 62,
    ANDROID_MSG_SET_INPUT_QUEUE = 63,
    ANDROID_MSG_DESTROY = 64,
    ANDROID_UNKNOWN_MSG = 65,
    ANDROID_LOOP_THREAD_STARTED = 66,
    ANDROID_LOOP_THREAD_DONE = 67,
    ANDROID_NATIVE_ACTIVITY_ONSTART = 68,
    ANDROID_NATIVE_ACTIVITY_ONRESUME = 69,
    ANDROID_NATIVE_ACTIVITY_ONSAVEINSTANCESTATE = 70,
    ANDROID_NATIVE_ACTIVITY_ONWINDOWFOCUSCHANGED = 71,
    ANDROID_NATIVE_ACTIVITY_ONPAUSE = 72,
    ANDROID_NATIVE_ACTIVITY_ONSTOP = 73,
    ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWCREATED = 74,
    ANDROID_NATIVE_ACTIVITY_ONNATIVEWINDOWDESTROYED = 75,
    ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUECREATED = 76,
    ANDROID_NATIVE_ACTIVITY_ONINPUTQUEUEDESTROYED = 77,
    ANDROID_NATIVE_ACTIVITY_ONCONFIGURATIONCHANGED = 78,
    ANDROID_NATIVE_ACTIVITY_ONLOWMEMORY = 79,
    ANDROID_NATIVE_ACTIVITY_ONDESTROY = 80,
    ANDROID_NATIVE_ACTIVITY_DONE = 81,
    ANDROID_NATIVE_ACTIVITY_ONCREATE = 82,
    ANDROID_CREATE_THREAD_PIPE_FAILED = 83,
    ANDROID_NATIVE_ACTIVITY_CREATE_SUCCESS = 84,
    WGPU_DEVICE_LOST = 85,
    WGPU_DEVICE_LOG = 86,
    WGPU_DEVICE_UNCAPTURED_ERROR = 87,
    WGPU_SWAPCHAIN_CREATE_SURFACE_FAILED = 88,
    WGPU_SWAPCHAIN_SURFACE_GET_CAPABILITIES_FAILED = 89,
    WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_TEXTURE_FAILED = 90,
    WGPU_SWAPCHAIN_CREATE_DEPTH_STENCIL_VIEW_FAILED = 91,
    WGPU_SWAPCHAIN_CREATE_MSAA_TEXTURE_FAILED = 92,
    WGPU_SWAPCHAIN_CREATE_MSAA_VIEW_FAILED = 93,
    WGPU_SWAPCHAIN_GETCURRENTTEXTURE_FAILED = 94,
    WGPU_REQUEST_DEVICE_STATUS_ERROR = 95,
    WGPU_REQUEST_DEVICE_STATUS_UNKNOWN = 96,
    WGPU_REQUEST_ADAPTER_STATUS_UNAVAILABLE = 97,
    WGPU_REQUEST_ADAPTER_STATUS_ERROR = 98,
    WGPU_REQUEST_ADAPTER_STATUS_UNKNOWN = 99,
    WGPU_CREATE_INSTANCE_FAILED = 100,
    VULKAN_ALLOC_DEVICE_MEMORY_NO_SUITABLE_MEMORY_TYPE = 101,
    VULKAN_ALLOCATE_MEMORY_FAILED = 102,
    VULKAN_CREATE_INSTANCE_FAILED = 103,
    VULKAN_ENUMERATE_PHYSICAL_DEVICES_FAILED = 104,
    VULKAN_NO_PHYSICAL_DEVICES_FOUND = 105,
    VULKAN_NO_SUITABLE_PHYSICAL_DEVICE_FOUND = 106,
    VULKAN_CREATE_DEVICE_FAILED_EXTENSION_NOT_PRESENT = 107,
    VULKAN_CREATE_DEVICE_FAILED_FEATURE_NOT_PRESENT = 108,
    VULKAN_CREATE_DEVICE_FAILED_INITIALIZATION_FAILED = 109,
    VULKAN_CREATE_DEVICE_FAILED_OTHER = 110,
    VULKAN_CREATE_SURFACE_FAILED = 111,
    VULKAN_CREATE_SWAPCHAIN_FAILED = 112,
    VULKAN_SWAPCHAIN_CREATE_IMAGE_VIEW_FAILED = 113,
    VULKAN_SWAPCHAIN_CREATE_IMAGE_FAILED = 114,
    VULKAN_SWAPCHAIN_ALLOC_IMAGE_DEVICE_MEMORY_FAILED = 115,
    VULKAN_SWAPCHAIN_BIND_IMAGE_MEMORY_FAILED = 116,
    VULKAN_ACQUIRE_NEXT_IMAGE_FAILED = 117,
    VULKAN_QUEUE_PRESENT_FAILED = 118,
    IMAGE_DATA_SIZE_MISMATCH = 119,
    DROPPED_FILE_PATH_TOO_LONG = 120,
    CLIPBOARD_STRING_TOO_BIG = 121,
}

---@enum app.PixelFormat
app.PixelFormat = {
    DEFAULT = 0,
    NONE = 1,
    RGBA8 = 2,
    SRGB8A8 = 3,
    BGRA8 = 4,
    SBGRA8 = 5,
    DEPTH = 6,
    DEPTH_STENCIL = 7,
    _SA_PPPIXELFORMAT_FORCE_U32 = 2147483647,
}

---@enum app.Html5FetchError
app.Html5FetchError = {
    HTML5_FETCH_ERROR_NO_ERROR = 0,
    HTML5_FETCH_ERROR_BUFFER_TOO_SMALL = 1,
    HTML5_FETCH_ERROR_OTHER = 2,
}

---@enum app.MouseCursor
app.MouseCursor = {
    DEFAULT = 0,
    ARROW = 1,
    IBEAM = 2,
    CROSSHAIR = 3,
    POINTING_HAND = 4,
    RESIZE_EW = 5,
    RESIZE_NS = 6,
    RESIZE_NWSE = 7,
    RESIZE_NESW = 8,
    RESIZE_ALL = 9,
    NOT_ALLOWED = 10,
    CUSTOM_0 = 11,
    CUSTOM_1 = 12,
    CUSTOM_2 = 13,
    CUSTOM_3 = 14,
    CUSTOM_4 = 15,
    CUSTOM_5 = 16,
    CUSTOM_6 = 17,
    CUSTOM_7 = 18,
    CUSTOM_8 = 19,
    CUSTOM_9 = 20,
    CUSTOM_10 = 21,
    CUSTOM_11 = 22,
    CUSTOM_12 = 23,
    CUSTOM_13 = 24,
    CUSTOM_14 = 25,
    CUSTOM_15 = 26,
    NUM = 27,
}

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