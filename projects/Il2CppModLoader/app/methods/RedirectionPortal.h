#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RedirectionPortal {
    IL2CPP_REGISTER_METHOD(0x008FBB30, void, OnCollisionEnter, (app::RedirectionPortal * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x008FBC90, void, OnTriggerEnter, (app::RedirectionPortal * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x008FBD20, void, OnTrigger, (app::RedirectionPortal * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RedirectionPortal * this_ptr))
}
