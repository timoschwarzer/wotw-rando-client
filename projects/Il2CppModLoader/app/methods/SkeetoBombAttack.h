#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SkeetoBombAttack {
    IL2CPP_REGISTER_METHOD(0x0074D8F0, app::SkeetoLocomotion *, get_Locomotion, (app::SkeetoBombAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074D9D0, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoBombAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0074DC00, void, ctor, (app::SkeetoBombAttack * this_ptr))
}
