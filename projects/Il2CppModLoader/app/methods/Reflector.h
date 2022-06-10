#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Reflector {
    IL2CPP_REGISTER_METHOD(0x008FC8E0, void, OnTriggerEnter, (app::Reflector * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x008FC8E0, void, OnTriggerStay, (app::Reflector * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x008FC970, void, OnCollisionEnter, (app::Reflector * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x008FC970, void, OnCollisionStay, (app::Reflector * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x008FC9B0, void, OnCollision, (app::Reflector * this_ptr, app::GameObject * colliding_game_object))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStick, (app::Reflector * this_ptr, app::SpiritFlameProjectile * spirit_flame_projectile))
    IL2CPP_REGISTER_METHOD(0x008FCE70, void, ctor, (app::Reflector * this_ptr))
}
