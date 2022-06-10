#include <interception_macros.h>

namespace app::methods::CameraOffsetController_OffsetLayer {
    IL2CPP_REGISTER_METHOD(0x0169AE20, void, ctor_1, (app::CameraOffsetController_OffsetLayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169B080, void, ctor_2, (app::CameraOffsetController_OffsetLayer * this_ptr, app::Vector3 offset, bool use_offset_x, bool use_offset_y, bool use_offset_z, app::Vector3 rotation, bool use_rotation_x, bool use_rotation_y, bool use_rotation_z, app::Component_1 * owner))
    IL2CPP_REGISTER_METHOD(0x0169B330, bool, Equals, (app::CameraOffsetController_OffsetLayer * this_ptr, app::CameraOffsetController_OffsetLayer * x, app::CameraOffsetController_OffsetLayer * y))
    IL2CPP_REGISTER_METHOD(0x0169B400, int32_t, GetHashCode, (app::CameraOffsetController_OffsetLayer * this_ptr, app::CameraOffsetController_OffsetLayer * obj))
}
