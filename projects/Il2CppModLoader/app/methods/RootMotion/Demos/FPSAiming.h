#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::FPSAiming {
    IL2CPP_REGISTER_METHOD(0x0221B3C0, void, Start, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8950, void, FixedUpdate, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221B7B0, void, LateUpdate, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221B9D0, void, Aiming, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221BD20, void, LookDownTheSight, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221D700, void, RotateCharacter, (app::FPSAiming * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221DBB0, void, ctor, (app::FPSAiming * this_ptr))
}
