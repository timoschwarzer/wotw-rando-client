#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ServerBoxCollider {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerBoxCollider * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00AB9A70, app::Object *, CreateData, (app::ServerBoxCollider * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00AB9EA0, app::Component_1 *, ApplyData, (app::ServerBoxCollider * this_ptr, app::GameObject * * gameobj))
}
