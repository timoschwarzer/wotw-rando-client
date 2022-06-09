#include <interception_macros.h>

namespace app::methods::Moon_Timeline::CameraSpeedAnimator {
    IL2CPP_REGISTER_METHOD(0x010CA270, void, OnStartPlayback, (app::CameraSpeedAnimator * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x010CA430, void, OnUpdateEntity, (app::CameraSpeedAnimator * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x010CA5A0, void, OnStopPlayback, (app::CameraSpeedAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010CA6A0, void, SynchronizeData, (app::CameraSpeedAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record));
    IL2CPP_REGISTER_METHOD(0x010CA710, void, SynchronizePad, (app::CameraSpeedAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record, app::TimelineEntity * entity, app::Constraint__Enum type));
    IL2CPP_REGISTER_METHOD(0x010CA8E0, void, __ctor, (app::CameraSpeedAnimator * this_ptr));
}
