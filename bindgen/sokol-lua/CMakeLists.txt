cmake_minimum_required(VERSION 3.10)
project(sokol-lua C)

# Lua
find_package(Lua REQUIRED)

# Options
option(SOKOL_LUA_BUILD_SHARED "Build as shared library" OFF)
option(SOKOL_LUA_BACKEND_GL "Use OpenGL backend" OFF)
option(SOKOL_LUA_BACKEND_GLES3 "Use OpenGL ES3 backend" OFF)
option(SOKOL_LUA_BACKEND_D3D11 "Use Direct3D 11 backend" OFF)
option(SOKOL_LUA_BACKEND_METAL "Use Metal backend" OFF)
option(SOKOL_LUA_BACKEND_WGPU "Use WebGPU backend" OFF)

# Sources
set(SOKOL_LUA_SOURCES
    src/sokol_log.c
    src/sokol_gfx.c
    src/sokol_app.c
    src/sokol_glue.c
    src/sokol_time.c
    src/sokol_audio.c
    src/sokol_gl.c
    src/sokol_debugtext.c
    src/sokol_shape.c
)

# Library type
if(SOKOL_LUA_BUILD_SHARED)
    add_library(sokol-lua SHARED ${SOKOL_LUA_SOURCES})
    target_compile_definitions(sokol-lua PRIVATE SOKOL_LUA_EXPORTS)
else()
    add_library(sokol-lua STATIC ${SOKOL_LUA_SOURCES})
endif()

# Include directories
target_include_directories(sokol-lua
    PUBLIC ${LUA_INCLUDE_DIR}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/c
)

# Link Lua
target_link_libraries(sokol-lua PUBLIC ${LUA_LIBRARIES})

# Sokol implementation defines
target_compile_definitions(sokol-lua PRIVATE SOKOL_IMPL)

# Backend selection
if(SOKOL_LUA_BACKEND_GL)
    target_compile_definitions(sokol-lua PRIVATE SOKOL_GLCORE)
elseif(SOKOL_LUA_BACKEND_GLES3)
    target_compile_definitions(sokol-lua PRIVATE SOKOL_GLES3)
elseif(SOKOL_LUA_BACKEND_D3D11)
    target_compile_definitions(sokol-lua PRIVATE SOKOL_D3D11)
elseif(SOKOL_LUA_BACKEND_METAL)
    target_compile_definitions(sokol-lua PRIVATE SOKOL_METAL)
elseif(SOKOL_LUA_BACKEND_WGPU)
    target_compile_definitions(sokol-lua PRIVATE SOKOL_WGPU)
else()
    # Auto-detect based on platform
    if(WIN32)
        target_compile_definitions(sokol-lua PRIVATE SOKOL_D3D11)
    elseif(APPLE)
        target_compile_definitions(sokol-lua PRIVATE SOKOL_METAL)
        set_target_properties(sokol-lua PROPERTIES
            COMPILE_FLAGS "-x objective-c"
        )
    else()
        target_compile_definitions(sokol-lua PRIVATE SOKOL_GLCORE)
    endif()
endif()

# Platform-specific libraries
if(WIN32)
    target_link_libraries(sokol-lua PUBLIC
        kernel32
        user32
        gdi32
        ole32
    )
    if(SOKOL_LUA_BACKEND_D3D11 OR NOT (SOKOL_LUA_BACKEND_GL OR SOKOL_LUA_BACKEND_GLES3 OR SOKOL_LUA_BACKEND_METAL OR SOKOL_LUA_BACKEND_WGPU))
        target_link_libraries(sokol-lua PUBLIC d3d11 dxgi)
    endif()
elseif(APPLE)
    find_library(COCOA_LIBRARY Cocoa REQUIRED)
    find_library(QUARTZCORE_LIBRARY QuartzCore REQUIRED)
    find_library(METAL_LIBRARY Metal REQUIRED)
    find_library(METALKIT_LIBRARY MetalKit REQUIRED)
    find_library(AUDIOTOOLBOX_LIBRARY AudioToolbox REQUIRED)
    target_link_libraries(sokol-lua PUBLIC
        ${COCOA_LIBRARY}
        ${QUARTZCORE_LIBRARY}
        ${METAL_LIBRARY}
        ${METALKIT_LIBRARY}
        ${AUDIOTOOLBOX_LIBRARY}
    )
elseif(UNIX)
    find_package(Threads REQUIRED)
    find_package(X11 REQUIRED)
    find_package(OpenGL REQUIRED)
    target_link_libraries(sokol-lua PUBLIC
        Threads::Threads
        ${X11_LIBRARIES}
        ${X11_Xi_LIB}
        ${X11_Xcursor_LIB}
        ${OPENGL_LIBRARIES}
        dl
        m
        asound
    )
endif()

# Install
install(TARGETS sokol-lua
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
install(DIRECTORY c/ DESTINATION include/sokol FILES_MATCHING PATTERN "*.h")
