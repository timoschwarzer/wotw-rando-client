#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IsRunningAutomationCondition {
    IL2CPP_REGISTER_METHOD(0x00647660, bool, Validate, (app::IsRunningAutomationCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsRunningAutomationCondition * this_ptr))
}
