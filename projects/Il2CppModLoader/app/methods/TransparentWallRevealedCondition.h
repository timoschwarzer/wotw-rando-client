#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TransparentWallRevealedCondition {
    IL2CPP_REGISTER_METHOD(0x00B0F080, void, Awake, (app::TransparentWallRevealedCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0F140, bool, Validate, (app::TransparentWallRevealedCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TransparentWallRevealedCondition * this_ptr))
}
