#include <interception_macros.h>

namespace app::methods::SeinDrill {
    IL2CPP_REGISTER_METHOD(0x00417920, ComboMoveType__Enum, get_ComboMoveType, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity*, get_Gravity, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement*, get_PlatformMovement, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
    IL2CPP_REGISTER_METHOD(0x00AC9A70, SeinDrillPuppet*, get_Puppet, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AC9B30, void, Start, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AC9CD0, void, OnDestroy, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AC9FA0, void, OnSetReferenceToSein, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ACA270, bool, IsDrilling, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476C850, SeinDrill_IsDrilling__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00ACA280, void, ModifyGravityPlatformMovementSettings, (app::SeinDrill * this_ptr, app::GravityPlatformMovementSettings* settings));
    IL2CPP_REGISTER_METHODINFO(0x0473F0F8, SeinDrill_ModifyGravityPlatformMovementSettings__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00ACA2B0, float, AdaptSpeed, (app::SeinDrill * this_ptr, float speed));
    IL2CPP_REGISTER_METHOD(0x00ACA480, bool, IsInsideDashTimeWindow, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ACA610, DrillZone*, RayCastTest, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00ACA940, bool, IsCorrectDrillAngle, (app::SeinDrill * this_ptr, app::Vector2 velocity, app::Vector2 normal));
    IL2CPP_REGISTER_METHOD(0x00ACAA40, bool, TryDrillEntity, (app::SeinDrill * this_ptr, app::Vector2 velocity, app::Vector2 normal, app::GameObject* entity));
    IL2CPP_REGISTER_METHOD(0x00ACAB90, void, StartDrill, (app::SeinDrill * this_ptr, app::DrillZone* drill_zone));
    IL2CPP_REGISTER_METHOD(0x00ACAE50, void, StopDrill, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessRootMotion, (app::SeinDrill * this_ptr, app::Vector3 root_velocity));
    IL2CPP_REGISTER_METHODINFO(0x0471D5F8, SeinDrill_OnProcessRootMotion__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTakeDamage, (app::SeinDrill * this_ptr, app::Damage* damage));
    IL2CPP_REGISTER_METHODINFO(0x047479C8, SeinDrill_OnTakeDamage__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00ACAF00, void, OnDrillZoneReleaseEvent, (app::SeinDrill * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04757840, SeinDrill_OnDrillZoneReleaseEvent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00ACB100, void, __ctor, (app::SeinDrill * this_ptr));
} // namespace app::methods::SeinDrill
