#include <interception_macros.h>

namespace app::methods::SeinComboHandler {
IL2CPP_REGISTER_METHOD(0x002FBCA0, SeinComboHandler_StubbedComboMove *, get_MovementAbility, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, SeinComboHandler_StubbedComboMove *, get_AttackAbility, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_ShouldModifyGravity, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B6A0, void, set_ShouldModifyGravity, (SeinComboHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A5B6B0, bool, get_DamageDealtDuringLastMove, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B6C0, void, set_DamageDealtDuringLastMove, (SeinComboHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A5B6D0, bool, get_IsPerformingAComboMove, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B6D0, bool, get_IsStatePerforming, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B6E0, bool, IsPerformingAComboMoveSkipJump, (SeinComboHandler * __this, CharacterState * jump));
IL2CPP_REGISTER_METHOD(0x00A5B7D0, bool, IsPerformingAnAttackAbility, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B870, bool, IsPreformingUninterruptableAttack, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_SeinPlatformMovement, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5B980, Transform *, get_WeaponJoint, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsPerformingWeaponCombo, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x0071F210, Transform *, get_RootJoint, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00720150, Animator *, get_Animator, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5BA40, MeleeWeapon *, get_CurrentWeapon, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5BA50, IComboMove *, get_CurrentComboMove, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00756A30, IComboMove *, get_UpcomingComboMove, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPrint, (SeinComboHandler * __this, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x00A5BA60, void, OnSetReferenceToSein, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5BF10, void, OnDestroy, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5CBF0, void, Start, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5D830, void, LateUpdate, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5D940, void, ShakeCamera, (SeinComboHandler * __this, float strength));
IL2CPP_REGISTER_METHOD(0x00A5D9B0, void, EquipWeapon, (SeinComboHandler * __this, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x00A5DB90, void, UnequipWeapon, (SeinComboHandler * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x00A5DCC0, void, OnExit, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5DD60, void, UpdateCharacterState, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5DD80, void, UpdateRootMotion, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5E6B0, bool, CanBeInterruptedBy, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A5E770, void, UpdateComboMove, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5F0B0, void, ResetMovesGrounded, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5F250, void, UpdateCooldown, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x006A63B0, void, SetInputBuffer, (SeinComboHandler * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x006A63A0, ComboInput *, GetNextInput, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5F4E0, IComboMove *, FindComboMoveForInput, (SeinComboHandler * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x00A5F5D0, IComboMove *, FindInitialComboMoveForInput, (SeinComboHandler * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x00A5F7A0, bool, IsMoveOnCooldown, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A5F8B0, void, UpdateCooldownRules, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A5FE30, void, HitWater, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C900, SeinComboHandler_HitWater__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A5FE40, void, OnLand, (SeinComboHandler * __this, Vector3 normal, Collider * col));
IL2CPP_REGISTER_METHODINFO(0x0475A790, SeinComboHandler_OnLand__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A5FF50, IComboMove *, FindChainedComboMoveForInput, (SeinComboHandler * __this, ComboInput * input));
IL2CPP_REGISTER_METHOD(0x00A60000, bool, IsMoveConnectedToMove, (SeinComboHandler * __this, IComboMove * lastMove, IComboMove * newMove));
IL2CPP_REGISTER_METHOD(0x00A601A0, void, PerformComboMove, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A60580, void, ExitComboMove, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A606C0, void, BeginWeaponCombo, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A608C0, void, EndWeaponCombo, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A60AC0, void, BeginCombo, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A60CF0, void, EndCombo, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A60ED0, void, ModifyGravityPlatformMovementSettings, (SeinComboHandler * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04784C50, SeinComboHandler_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A60FD0, void, ModifyHorizontalPlatformMovementSettings, (SeinComboHandler * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0474A3C0, SeinComboHandler_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A610D0, void, OnAnimationEvent, (SeinComboHandler * __this, SeinController3D_EventId__Enum eventId));
IL2CPP_REGISTER_METHODINFO(0x047491B8, SeinComboHandler_OnAnimationEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A61170, void, OnOriTakeDamage, (SeinComboHandler * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x047722A0, SeinComboHandler_OnOriTakeDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A612A0, void, OnDamageResultReceived, (SeinComboHandler * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04719850, SeinComboHandler_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A61AF0, float, GetCooldown, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A61C00, void, UpdateTargetting, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A61D40, void, UpdateTargetHighlight, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A61FD0, void, UpdateClosestAttackables, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A62450, void, RegisterComboMoveUse, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A62750, void, ResetAllUsedMoves, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A62860, void, RegisterComboMove, (SeinComboHandler * __this, IComboMove * move, int32_t index));
IL2CPP_REGISTER_METHOD(0x00A62A80, void, RegisterComboMovesFromProvider, (SeinComboHandler * __this, IComboMoveProvider * provider));
IL2CPP_REGISTER_METHOD(0x00A62B70, void, RegisterComboMoveProvider, (SeinComboHandler * __this, IComboMoveProvider * provider));
IL2CPP_REGISTER_METHOD(0x00A62C80, void, SetSuspensionMask, (SeinComboHandler * __this, GameObject * gameObject, SuspendableMask__Enum mask));
IL2CPP_REGISTER_METHOD(0x00A62D80, void, RegisterComboMoveProvider, (SeinComboHandler * __this, IComboMoveProvider * provider, Type * beforeType));
IL2CPP_REGISTER_METHOD(0x00A63020, void, DeregisterComboMoveProvider, (SeinComboHandler * __this, IComboMoveProvider * provider));
IL2CPP_REGISTER_METHOD(0x00A63120, void, DeregisterComboMove, (SeinComboHandler * __this, IComboMove * move));
IL2CPP_REGISTER_METHOD(0x00A632A0, void, DeregisterComboMovesFromProvider, (SeinComboHandler * __this, IComboMoveProvider * provider));
IL2CPP_REGISTER_METHOD(0x00A63390, void, OnHoldablePickUp, (SeinComboHandler * __this, IHoldable * holdable));
IL2CPP_REGISTER_METHODINFO(0x04769B38, SeinComboHandler_OnHoldablePickUp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A634E0, void, __ctor, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHOD(0x00A64030, bool, _OnDamageResultReceived_b__114_0, (SeinComboHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04793A38, SeinComboHandler__OnDamageResultReceived_b__114_0__MethodInfo);
}
