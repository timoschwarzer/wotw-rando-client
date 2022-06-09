#include <interception_macros.h>

namespace app::methods::MeleeComboMoveSwordstaff {
    IL2CPP_REGISTER_METHOD(0x013A5D20, float, get_EffectiveDamage, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A5D30, app::String *, get_AnimationSpeedMultiplierParameterName, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A5DB0, void, Initialize, (app::MeleeComboMoveSwordstaff * this_ptr, app::SeinComboHandler * handler, app::MeleeWeapon * weapon));
    IL2CPP_REGISTER_METHOD(0x013A62E0, bool, CanExecute, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A6420, bool, get_MoveHasFinished, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A6430, app::AbilityType__Enum, get_ComboAbilityType, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A6440, void, ModifyGravityPlatformMovementSettings, (app::MeleeComboMoveSwordstaff * this_ptr, app::GravityPlatformMovementSettings * settings));
    IL2CPP_REGISTER_METHOD(0x013A6470, void, ModifyHorizontalPlatformMovementSettings, (app::MeleeComboMoveSwordstaff * this_ptr, app::HorizontalPlatformMovementSettings * settings));
    IL2CPP_REGISTER_METHOD(0x013A64C0, void, OnMoveWindowOpen, (app::MeleeComboMoveSwordstaff * this_ptr, app::MoveEventType__Enum event_type));
    IL2CPP_REGISTER_METHOD(0x013A65B0, void, OnMoveWindowClosed, (app::MeleeComboMoveSwordstaff * this_ptr, app::MoveEventType__Enum event_type));
    IL2CPP_REGISTER_METHOD(0x013A65E0, bool, HitGroundSinceLastUse, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A66E0, void, Boost, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04776EC0, MeleeComboMoveSwordstaff_Boost__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x013A6900, void, SpawnEffects, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476B510, MeleeComboMoveSwordstaff_SpawnEffects__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x013A6E50, void, OnAnimationEvent, (app::MeleeComboMoveSwordstaff * this_ptr, app::SeinController3D_EventId__Enum event_id));
    IL2CPP_REGISTER_METHOD(0x013A6FF0, void, ApplySettings, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04799528, MeleeComboMoveSwordstaff_ApplySettings__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x013A7290, void, EnterMove, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A7650, void, UpdateCollisionDetection, (app::MeleeComboMoveSwordstaff * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x013A7690, void, UpdateMove, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A7E50, void, ExitMove, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A8000, void, InterruptMove, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A83A0, void, OnAnimationFinished, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04749840, MeleeComboMoveSwordstaff_OnAnimationFinished__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x013A83B0, bool, KeepAnimationPlaying, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A83C0, void, OnCollision, (app::MeleeComboMoveSwordstaff * this_ptr, app::Collider * collider, app::Vector3 hit_direction, app::Vector3 damage_position));
    IL2CPP_REGISTER_METHOD(0x013A83F0, void, OnGroundCollision, (app::MeleeComboMoveSwordstaff * this_ptr, app::Vector2 point, app::Vector2 hit_normal, app::Vector3 surface_normal, app::SurfaceMaterialType__Enum surface_type, bool force_effect, bool charged));
    IL2CPP_REGISTER_METHOD(0x013A8670, app::Vector2, ComputeEffectiveKickback, (app::MeleeComboMoveSwordstaff * this_ptr, app::Vector3 enemy_position));
    IL2CPP_REGISTER_METHOD(0x013A8830, void, TryToDealDamage, (app::MeleeComboMoveSwordstaff * this_ptr, app::Collider * collider, app::Vector3 hit_direction));
    IL2CPP_REGISTER_METHOD(0x013A9530, app::EffectSpawn, DamageEffectProvider, (app::MeleeComboMoveSwordstaff * this_ptr, app::DamageResult damage_result));
    IL2CPP_REGISTER_METHODINFO(0x0474D2C8, MeleeComboMoveSwordstaff_DamageEffectProvider__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x013A95A0, app::IEnumerator *, DummyHitStop, (app::MeleeComboMoveSwordstaff * this_ptr, app::GameObject * to_suspend, float suspend_time));
    IL2CPP_REGISTER_METHOD(0x013A9710, void, BeginAttackSegment, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A9820, void, EndAttackSegment, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A9940, void, __ctor, (app::MeleeComboMoveSwordstaff * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013A9A60, void, _TryToDealDamage_b__84_0, (app::MeleeComboMoveSwordstaff * this_ptr, app::DamageResult damage_result));
    IL2CPP_REGISTER_METHODINFO(0x04716F28, MeleeComboMoveSwordstaff__TryToDealDamage_b__84_0__MethodInfo);
}
