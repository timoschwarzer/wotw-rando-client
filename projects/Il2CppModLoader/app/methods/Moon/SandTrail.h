#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::SandTrail {
    IL2CPP_REGISTER_METHOD(0x00EC1160, bool, get_UseMainTrail, (app::SandTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SandTrail * this_ptr))
}
