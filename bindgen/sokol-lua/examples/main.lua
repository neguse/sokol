-- Sokol Lua example
-- Rendering is done in C, Lua handles callbacks

function init()
    print("Lua: init called")
end

function frame()
    -- Called every frame, after clear but before end_pass
    -- Can use sokol.gl here for immediate mode rendering
end

function cleanup()
    print("Lua: cleanup called")
end

function event(ev)
    -- ev.type, ev.key_code, ev.mouse_x, ev.mouse_y
    if ev.type == 1 then  -- KEY_DOWN
        print("Key pressed:", ev.key_code)
    end
end
