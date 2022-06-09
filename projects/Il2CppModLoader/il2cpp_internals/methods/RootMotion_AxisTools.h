#include <interception_macros.h>

namespace app::methods::RootMotion::AxisTools {
    IL2CPP_REGISTER_METHOD(0x021FB560, app::Vector3, ToVector3, (app::Axis__Enum axis));
    IL2CPP_REGISTER_METHOD(0x021FB670, app::Axis__Enum, ToAxis, (app::Vector3 v));
    IL2CPP_REGISTER_METHOD(0x021FB780, app::Axis__Enum, GetAxisToPoint, (app::Transform * t, app::Vector3 world_position));
    IL2CPP_REGISTER_METHOD(0x021FBA20, app::Axis__Enum, GetAxisToDirection, (app::Transform * t, app::Vector3 direction));
    IL2CPP_REGISTER_METHOD(0x021FBBB0, app::Vector3, GetAxisVectorToPoint, (app::Transform * t, app::Vector3 world_position));
    IL2CPP_REGISTER_METHOD(0x021FBD30, app::Vector3, GetAxisVectorToDirection, (app::Transform * t, app::Vector3 direction));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AxisTools * this_ptr));
}
