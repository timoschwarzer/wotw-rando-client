#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BindAbilityButtonAction {
    IL2CPP_REGISTER_METHOD(0x00D2AFD0, void, Perform, (app::BindAbilityButtonAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHODINFO(0x047605C8, BindAbilityButtonAction_Perform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::BindAbilityButtonAction * this_ptr))
}
