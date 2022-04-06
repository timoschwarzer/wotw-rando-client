#include <macros.h>
#include <enums\actions.h>
#include <enums\buttons.h>

#include <vector>

namespace randomizer
{
    namespace input
    {
        using rando_input_callback = void(*)(Action action, bool pressed);

        // The methods below will only work for Action::OpenRandoWheel and higher.

        void add_on_pressed_callback(Action action, rando_input_callback callback);
        void add_on_released_callback(Action action, rando_input_callback callback);

        bool is_pressed(Action action);
    }
}

INJECT_C_DLLEXPORT bool action_pressed(Action action);
INJECT_C_DLLEXPORT bool action_released(Action action);
