cmake_minimum_required(VERSION 3.10)
project(sokol-lua C)

# Options
option(SOKOL_LUA_BUILD_SHARED "Build as shared library" OFF)
option(SOKOL_LUA_USE_SYSTEM_LUA "Use system Lua instead of bundled" OFF)
option(SOKOL_LUA_BACKEND_GL "Use OpenGL backend" OFF)
option(SOKOL_LUA_BACKEND_GLES3 "Use OpenGL ES3 backend" OFF)
option(SOKOL_LUA_BACKEND_D3D11 "Use Direct3D 11 backend" OFF)
option(SOKOL_LUA_BACKEND_METAL "Use Metal backend" OFF)
option(SOKOL_LUA_BACKEND_WGPU "Use WebGPU backend" OFF)

# Lua 5.5
if(SOKOL_LUA_USE_SYSTEM_LUA)
    find_package(Lua REQUIRED)
    set(LUA_TARGET ${LUA_LIBRARIES})
    set(LUA_INCLUDE ${LUA_INCLUDE_DIR})
else()
    # Bundled Lua 5.5
    set(LUA_SRC
        deps/lua/lapi.c
        deps/lua/lcode.c
        deps/lua/lctype.c
        deps/lua/ldebug.c
        deps/lua/ldo.c
        deps/lua/ldump.c
        deps/lua/lfunc.c
        deps/lua/lgc.c
        deps/lua/llex.c
        deps/lua/lmem.c
        deps/lua/lobject.c
        deps/lua/lopcodes.c
        deps/lua/lparser.c
        deps/lua/lstate.c
        deps/lua/lstring.c
        deps/lua/ltable.c
        deps/lua/ltm.c
        deps/lua/lundump.c
        deps/lua/lvm.c
        deps/lua/lzio.c
        deps/lua/lauxlib.c
        deps/lua/lbaselib.c
        deps/lua/lcorolib.c
        deps/lua/ldblib.c
        deps/lua/liolib.c
        deps/lua/lmathlib.c
        deps/lua/loadlib.c
        deps/lua/loslib.c
        deps/lua/lstrlib.c
        deps/lua/ltablib.c
        deps/lua/lutf8lib.c
        deps/lua/linit.c
    )
    add_library(lua55 STATIC ${LUA_SRC})
    target_include_directories(lua55 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/deps/lua)
    if(UNIX AND NOT APPLE)
        target_compile_definitions(lua55 PRIVATE LUA_USE_LINUX)
        target_link_libraries(lua55 PUBLIC dl m)
    elseif(APPLE)
        target_compile_definitions(lua55 PRIVATE LUA_USE_MACOSX)
    endif()
    set(LUA_TARGET lua55)
    set(LUA_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/deps/lua)
endif()

# Code generation
find_package(Python3 COMPONENTS Interpreter)
set(SOKOL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.." CACHE PATH "Path to sokol directory")
set(BINDGEN_DIR "${SOKOL_DIR}/bindgen" CACHE PATH "Path to sokol/bindgen directory")

set(SOKOL_LUA_GENERATED
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_log.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_gfx.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_app.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_glue.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_time.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_audio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_gl.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_debugtext.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sokol_shape.c
)

if(Python3_FOUND)
    add_custom_command(
        OUTPUT ${SOKOL_LUA_GENERATED}
        COMMAND ${CMAKE_COMMAND} -E env PYTHONUTF8=1
            ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/gen_lua.py
            --sokol ${SOKOL_DIR}
            --bindgen ${BINDGEN_DIR}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/gen_lua.py
        COMMENT "Generating Lua bindings..."
    )
endif()

# Sokol-Lua sources
set(SOKOL_LUA_SOURCES
    src/sokol_impl.c
    ${SOKOL_LUA_GENERATED}
)

# Library type
if(SOKOL_LUA_BUILD_SHARED)
    add_library(sokol-lua SHARED ${SOKOL_LUA_SOURCES})
    target_compile_definitions(sokol-lua PRIVATE SOKOL_LUA_EXPORTS)
else()
    add_library(sokol-lua STATIC ${SOKOL_LUA_SOURCES})
    # For static builds, define SOKOL_LUA_API as empty
    target_compile_definitions(sokol-lua PUBLIC SOKOL_LUA_API=)
endif()

# Include directories
target_include_directories(sokol-lua
    PUBLIC ${LUA_INCLUDE}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/c
)

# Link Lua
target_link_libraries(sokol-lua PUBLIC ${LUA_TARGET})

# Backend selection for sokol_impl.c
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

# Lua interpreter (optional)
option(SOKOL_LUA_BUILD_INTERPRETER "Build Lua interpreter" OFF)
if(SOKOL_LUA_BUILD_INTERPRETER AND NOT SOKOL_LUA_USE_SYSTEM_LUA)
    add_executable(lua deps/lua/lua.c)
    target_link_libraries(lua lua55)
    if(UNIX)
        target_link_libraries(lua readline)
    endif()
endif()

# Example
option(SOKOL_LUA_BUILD_EXAMPLE "Build example" OFF)
if(SOKOL_LUA_BUILD_EXAMPLE)
    add_executable(sokol-lua-example WIN32 examples/main.c)
    target_include_directories(sokol-lua-example PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/c
        ${CMAKE_CURRENT_SOURCE_DIR}/shaders
        ${LUA_INCLUDE}
    )
    target_link_libraries(sokol-lua-example sokol-lua)

    # Backend defines for example
    if(SOKOL_LUA_BACKEND_GL)
        target_compile_definitions(sokol-lua-example PRIVATE SOKOL_GLCORE)
    elseif(SOKOL_LUA_BACKEND_GLES3)
        target_compile_definitions(sokol-lua-example PRIVATE SOKOL_GLES3)
    elseif(SOKOL_LUA_BACKEND_D3D11)
        target_compile_definitions(sokol-lua-example PRIVATE SOKOL_D3D11)
    elseif(SOKOL_LUA_BACKEND_METAL)
        target_compile_definitions(sokol-lua-example PRIVATE SOKOL_METAL)
    elseif(SOKOL_LUA_BACKEND_WGPU)
        target_compile_definitions(sokol-lua-example PRIVATE SOKOL_WGPU)
    else()
        # Auto-detect
        if(WIN32)
            target_compile_definitions(sokol-lua-example PRIVATE SOKOL_D3D11)
        elseif(APPLE)
            target_compile_definitions(sokol-lua-example PRIVATE SOKOL_METAL)
        else()
            target_compile_definitions(sokol-lua-example PRIVATE SOKOL_GLCORE)
        endif()
    endif()

    # Copy lua scripts
    add_custom_command(TARGET sokol-lua-example POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/examples/main.lua
        $<TARGET_FILE_DIR:sokol-lua-example>/main.lua
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/examples/raytracer.lua
        $<TARGET_FILE_DIR:sokol-lua-example>/raytracer.lua
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/examples/util.lua
        $<TARGET_FILE_DIR:sokol-lua-example>/util.lua
    )
endif()

# Install
install(TARGETS sokol-lua
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
install(DIRECTORY c/ DESTINATION include/sokol FILES_MATCHING PATTERN "*.h")
install(DIRECTORY deps/lua/ DESTINATION include/lua FILES_MATCHING PATTERN "*.h")

