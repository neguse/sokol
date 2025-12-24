-- Sokol Lua example: clear screen with changing color
local gfx = require("sokol.gfx")
local app = require("sokol.app")

local pass_action = nil
local t = 0

function init()
    pass_action = gfx.PassAction()
    -- set clear color (RGBA)
    pass_action.colors[0].load_action = gfx.LoadAction.CLEAR
    pass_action.colors[0].clear_value = { r = 1.0, g = 0.0, b = 0.0, a = 1.0 }
end

function frame()
    t = t + 1.0 / 60.0
    local r = (math.sin(t) + 1.0) * 0.5
    local g = (math.sin(t + 2.0) + 1.0) * 0.5
    local b = (math.sin(t + 4.0) + 1.0) * 0.5

    -- Note: pass_action field access would need more work
    -- For now just do a simple clear
    local pass = gfx.Pass()
    pass.action = pass_action
    pass.swapchain = app.swapchain()

    gfx.begin_pass(pass)
    gfx.end_pass()
    gfx.commit()
end

function cleanup()
    print("Cleanup!")
end

function event(ev)
    if ev.type == app.EventType.KEY_DOWN then
        print("Key pressed:", ev.key_code)
    end
end
