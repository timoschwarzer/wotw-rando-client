#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinAliveCondition {
    IL2CPP_REGISTER_METHOD(0x00D840B0, bool, Validate, (app::SeinAliveCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAliveCondition * this_ptr))
}
