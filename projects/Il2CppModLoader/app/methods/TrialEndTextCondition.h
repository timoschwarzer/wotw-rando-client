#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TrialEndTextCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, (app::TrialEndTextCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TrialEndTextCondition * this_ptr))
}
