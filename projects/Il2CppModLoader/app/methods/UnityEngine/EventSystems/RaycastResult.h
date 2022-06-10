#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::RaycastResult {
    IL2CPP_REGISTER_METHOD(0x001D9820, app::GameObject *, get_gameObject, (app::RaycastResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_gameObject, (app::RaycastResult__Boxed * this_ptr, app::GameObject * value))
    IL2CPP_REGISTER_METHOD(0x001D9830, bool, get_isValid, (app::RaycastResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9840, void, Clear, (app::RaycastResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9970, app::String *, ToString, (app::RaycastResult__Boxed * this_ptr))
}
