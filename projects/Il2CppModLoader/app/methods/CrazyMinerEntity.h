#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CrazyMinerEntity {
    IL2CPP_REGISTER_METHOD(0x00DB7040, void, OnDied, (app::CrazyMinerEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00DB7080, void, ctor, (app::CrazyMinerEntity * this_ptr))
}
