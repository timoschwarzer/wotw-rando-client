#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MeleeWeaponColliderStick_DebugCircle {
    IL2CPP_REGISTER_METHOD(0x009CCE50, void, ctor, (app::MeleeWeaponColliderStick_DebugCircle * this_ptr, app::Vector3 position, float radius))
    IL2CPP_REGISTER_METHOD(0x009CD200, void, SetAlpha, (app::MeleeWeaponColliderStick_DebugCircle * this_ptr, float alpha))
    IL2CPP_REGISTER_METHOD(0x009CD2E0, void, Enable, (app::MeleeWeaponColliderStick_DebugCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CD3C0, void, Disable, (app::MeleeWeaponColliderStick_DebugCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CD480, bool, EqualTo, (app::MeleeWeaponColliderStick_DebugCircle * this_ptr, app::MeleeWeaponColliderStick_DebugCircle * other))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
