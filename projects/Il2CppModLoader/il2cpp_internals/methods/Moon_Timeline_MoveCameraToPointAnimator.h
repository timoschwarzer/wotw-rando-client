#include <interception_macros.h>

namespace app::methods::Moon_Timeline::MoveCameraToPointAnimator {
IL2CPP_REGISTER_METHOD(0x00776550, GameObject *, get_ExternalTarget, (app::MoveCameraToPointAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::MoveCameraToPointAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00776600, void, OnStartPlayback, (app::MoveCameraToPointAnimator * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::MoveCameraToPointAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (app::MoveCameraToPointAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00776A40, void, OnDrawGizmosSelected, (app::MoveCameraToPointAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00776E50, void, SynchronizeData, (app::MoveCameraToPointAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00776FB0, void, __ctor, (app::MoveCameraToPointAnimator * this_ptr));
}
