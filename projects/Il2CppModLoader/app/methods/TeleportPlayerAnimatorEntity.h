#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TeleportPlayerAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00CE8CF0, void, OnStartPlayback, (app::TeleportPlayerAnimatorEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::TeleportPlayerAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE8EE0, void, ctor, (app::TeleportPlayerAnimatorEntity * this_ptr))
}
