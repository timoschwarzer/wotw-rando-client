#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IsXboxSeriesSCondition {
    IL2CPP_REGISTER_METHOD(0x00649020, bool, Validate, (app::IsXboxSeriesSCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsXboxSeriesSCondition * this_ptr))
}
