#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CanChangeDifficultyCondition {
    IL2CPP_REGISTER_METHOD(0x00B21F40, bool, Validate, (app::CanChangeDifficultyCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanChangeDifficultyCondition * this_ptr))
}
