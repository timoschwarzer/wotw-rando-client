#include <interception_macros.h>

namespace app::methods::Moon::Timeline::virtualAnimators::CameraZoneVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ICameraInfluencer *, get_Influencer, (app::CameraZoneVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Influencer, (app::CameraZoneVirtualAnimator * this_ptr, app::ICameraInfluencer * value))
    IL2CPP_REGISTER_METHOD(0x00D1ED80, void, ctor_1, (app::CameraZoneVirtualAnimator * this_ptr, app::ICameraInfluencer * influencer, app::GameObject * target, app::String * custom_name))
    IL2CPP_REGISTER_METHOD(0x00D1EDC0, void, ctor_2, (app::CameraZoneVirtualAnimator * this_ptr, app::GameObject * target))
}
