#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BoolCondition {
    IL2CPP_REGISTER_METHOD(0x00D39E30, bool, Validate, (app::BoolCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BoolCondition * this_ptr))
}
