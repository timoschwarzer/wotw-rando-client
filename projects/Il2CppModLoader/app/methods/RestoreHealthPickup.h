#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RestoreHealthPickup {
    IL2CPP_REGISTER_METHOD(0x0090CE90, void, OnCollectorCandidateTouch, (app::RestoreHealthPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x0090CFA0, void, ctor, (app::RestoreHealthPickup * this_ptr))
}
