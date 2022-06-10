#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::LookAtIK {
    IL2CPP_REGISTER_METHOD(0x02A17CD0, void, OpenUserManual, (app::LookAtIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17D90, void, OpenScriptReference, (app::LookAtIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17E50, void, SupportGroup, (app::LookAtIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17F10, void, ASThread, (app::LookAtIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver *, GetIKSolver, (app::LookAtIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17FD0, void, ctor, (app::LookAtIK * this_ptr))
}
