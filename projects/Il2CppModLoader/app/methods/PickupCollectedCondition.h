#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PickupCollectedCondition {
    IL2CPP_REGISTER_METHOD(0x011594A0, bool, Validate, (app::PickupCollectedCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PickupCollectedCondition * this_ptr))
}
