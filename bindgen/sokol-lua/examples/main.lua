-- Sokol Lua example
-- Now rendering is controlled from Lua!

local sokol = require("sokol")

local t = 0

function init()
    print("Lua: init called")
    print("Window size:", sokol.width(), "x", sokol.height())
end

function frame()
    t = t + 1.0 / 60.0

    -- Calculate rainbow colors
    local r = (math.sin(t) + 1.0) * 0.5
    local g = (math.sin(t + 2.0) + 1.0) * 0.5
    local b = (math.sin(t + 4.0) + 1.0) * 0.5

    -- Render!
    sokol.begin_pass(r, g, b, 1.0)
    -- Draw stuff here with sokol.gl if available
    sokol.end_pass()
    sokol.commit()
end

function cleanup()
    print("Lua: cleanup called")
end

function event(ev)
    -- ev.type: 1=KEY_DOWN, 2=KEY_UP, etc.
    if ev.type == 1 then
        print("Key pressed:", ev.key_code)
        if ev.key_code == 81 then  -- 'Q' key
            sokol.quit()
        end
    end
end
