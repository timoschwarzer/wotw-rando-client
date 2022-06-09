#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::RotationLimitHinge {
IL2CPP_REGISTER_METHOD(0x02A21810, void, OpenUserManual, (app::RotationLimitHinge * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A218D0, void, OpenScriptReference, (app::RotationLimitHinge * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21990, void, SupportGroup, (app::RotationLimitHinge * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21A50, void, ASThread, (app::RotationLimitHinge * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A21B10, Quaternion, LimitRotation, (app::RotationLimitHinge * this_ptr, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A21B60, Quaternion, LimitHinge, (app::RotationLimitHinge * this_ptr, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02A22030, void, __ctor, (app::RotationLimitHinge * this_ptr));
}
