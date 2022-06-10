#include <interception_macros.h>

namespace app::methods::CameraScrollLockConstraint {
    IL2CPP_REGISTER_METHOD(0x016A30F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x016A3190, void, Awake, (app::CameraScrollLockConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A3240, app::Bounds, BoundsFromPoints, (app::Vector3__Array * pts))
    IL2CPP_REGISTER_METHOD(0x016A3330, bool, HasPassedThroughScrollLock, (app::CameraScrollLockConstraint * this_ptr, app::Vector3 old_position, app::Vector3 position, app::CameraScrollLock * * scroll_lock_passed_through))
    IL2CPP_REGISTER_METHOD(0x016A3600, app::Bounds, CalculateCameraBounds, (app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x016A3C70, app::Vector3, CalculateConstraintOffset, (app::CameraScrollLockConstraint * this_ptr, app::Vector3 position, float expand))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, get_VirtualTimelineTarget, (app::CameraScrollLockConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::CameraScrollLockConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A4B10, app::String *, get_NameDisplayedOnClip, (app::CameraScrollLockConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraScrollLockConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A4B90, void, cctor, ())
}
