#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PushPullBlockJuggleAchievement {
    IL2CPP_REGISTER_METHOD(0x00E84170, void, Awake, (app::PushPullBlockJuggleAchievement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E84200, void, OnPushPullBlockBashed, (app::PushPullBlockJuggleAchievement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E84210, void, OnCollisionStay, (app::PushPullBlockJuggleAchievement * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PushPullBlockJuggleAchievement * this_ptr))
}
