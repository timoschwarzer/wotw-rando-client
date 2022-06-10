#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Rendering::Viewport {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor_1, (app::Viewport__Boxed * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x00120530, void, ctor_2, (app::Viewport__Boxed * this_ptr, app::Int2 size))
    IL2CPP_REGISTER_METHOD(0x00EBEBC0, app::Rect, op_Implicit, (app::Viewport viewport))
}
