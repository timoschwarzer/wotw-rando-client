#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinGrenadeAttack_ThrowInfo {
    IL2CPP_REGISTER_METHOD(0x014D90F0, bool, IsMovementRestricted, (app::SeinGrenadeAttack_ThrowInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinGrenadeAttack_ThrowInfo * this_ptr))
}
