#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MapStoneActivatedCondition {
    IL2CPP_REGISTER_METHOD(0x00A0AB60, bool, Validate, (app::MapStoneActivatedCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MapStoneActivatedCondition * this_ptr))
}
