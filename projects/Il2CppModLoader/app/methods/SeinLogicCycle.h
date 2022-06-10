#include <interception_macros.h>

namespace app::methods::SeinLogicCycle {
    IL2CPP_REGISTER_METHOD(0x00894F40, app::SeinLogicCycle_StateFlags__Enum, GetFlags, (app::SeinLogicCycle * this_ptr, app::SeinLogicCycle_StateFlags__Enum test_flags))
    IL2CPP_REGISTER_METHOD(0x00896560, bool, IsCharacterStateBlockedBy, (app::SeinLogicCycle * this_ptr, app::SeinLogicCycle_StateFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x00896640, bool, get_IsTouchingDamageColliders, ())
    IL2CPP_REGISTER_METHOD(0x00896B60, bool, get_IsAllowedNonZeroZPosition, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896C50, app::SeinCharacter *, get_Sein, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, get_AllowInvincibility, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, get_AllowAirNoDeceleration, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D00, bool, get_ApplyFrictionToSpeed, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritFlameTargetting, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D20, bool, get_AllowCrushDetector, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, get_AllowSpriteRotater, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, get_AllowDamageReciever, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D60, bool, get_AllowJumpSustain, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, get_AllowUpwardsDeceleration, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, get_AllowForceController, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896D80, bool, get_AllowGravity, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896DF0, bool, get_AllowGravityToGround, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896E10, bool, get_AllowSpellAbility, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, get_AllowSwimming, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896E30, bool, get_AllowDigging, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00896EB0, bool, get_AllowDashNew, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008972D0, bool, get_AllowGetAbility, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008972F0, bool, get_AllowLaunch, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897350, bool, get_AllowPickUpSequence, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowPinned, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLeached, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897430, bool, get_AllowRide, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897450, bool, get_AllowGrenade, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008974C0, bool, get_AllowSpiritLeash, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritSlash, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHeavySpiritSlash, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897630, bool, DisableWhenHurt, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008976D0, bool, get_AllowBow, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008977D0, bool, get_AllowHammer, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008977F0, bool, get_AllowMelee, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008978B0, bool, get_AllowCombo, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008978D0, bool, get_AllowGrabRope, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897BF0, bool, get_AllowGrabSurface, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897D80, bool, get_AllowInstantStop, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897DA0, bool, get_AllowLeftRightMovement, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00897DC0, bool, get_AllowBash, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898290, bool, get_AllowLooking, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898350, bool, get_AllowLever, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898370, bool, get_AllowInteraction, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898430, bool, get_AllowFootsteps, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowStandardSpiritFlame, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008984B0, bool, get_AllowChargeFlame, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008986B0, bool, get_AllowWallSlide, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008986D0, bool, get_AllowCarry, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008986F0, bool, get_AllowHolding, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898710, bool, get_AllowFall, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898730, bool, get_AllowGrabBlock, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898750, bool, get_AllowIdle, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898770, bool, get_AllowRun, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898790, bool, get_AllowCrouching, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898850, bool, get_AllowWallGrabbing, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008988E0, bool, get_AllowJumping, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008989A0, bool, get_AllowDoubleJump, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898AF0, bool, get_AllowGliding, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898B80, bool, get_AllowFeatherFlap, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898C50, bool, get_AllowWallJump, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898D60, bool, get_AllowChargeJumpCharging, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00898D90, bool, get_AllowChargeJump, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowWallChargeJump, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008990F0, bool, get_AllowStandingOnEdge, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899110, bool, get_AllowPushAgainstWall, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899130, bool, get_AllowEdgeClamber, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowFireburstSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowFirewhirlSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLockOnSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowTimeWarpSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowShieldSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowEnergyWallSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowInvisibilitySpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowTrapSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowWarpSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLightSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowMindControlSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowMirageSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899150, bool, get_AllowStickyMineSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowTeleportSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008991A0, bool, get_AllowChakramSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008992B0, bool, get_AllowGoldenSeinSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008992D0, bool, get_AllowSpiritSpearSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLightSpearSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLifeAbsorbSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008993C0, bool, get_AllowMeditateSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899580, bool, get_AllowGlowSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowChargeShotSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritShardsSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritSentrySpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowPowerslideSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowEarthShatterSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowJumpShotSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowRoundupLeashSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowBurrowSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowPowerOfFriendshipSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowLightningSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritFlareSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowEntanglingRootsSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowMarkOfTheWildsSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008995C0, bool, get_AllowHomingMissileSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowSpiritCrescentSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowMineSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008996E0, bool, get_AllowTurretSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008997F0, bool, get_AllowBlazeSpell, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008998F0, bool, AllowSpell, (app::SeinLogicCycle * this_ptr, app::AbilityType__Enum spell))
    IL2CPP_REGISTER_METHOD(0x008999D0, void, ResetMovementAbilities, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899CB0, bool, get_AllowCinematicToGameplay, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_CharacterState_ *, GetStates, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00899D90, void, RegisterCharacterState, (app::SeinLogicCycle * this_ptr, app::CharacterState * state))
    IL2CPP_REGISTER_METHOD(0x0089A2D0, void, UnregisterCharacterState, (app::SeinLogicCycle * this_ptr, app::CharacterState * state))
    IL2CPP_REGISTER_METHOD(0x0089A490, void, RegisterExecutionOrder, (app::SeinLogicCycle * this_ptr, app::Type * type, int32_t order))
    IL2CPP_REGISTER_METHOD(0x0089A5B0, void, RegisterDefaultExecutionOrder, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089AD20, void, RegisterIsAllowedDelegate, (app::SeinLogicCycle * this_ptr, app::Type * type, app::SeinLogicCycle_IsAllowedDelegate * is_allowed))
    IL2CPP_REGISTER_METHOD(0x0089AE40, void, RegisterIsAllowedDelegates, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F170, bool, ValidateExclusiveActiveStateType, (app::SeinLogicCycle * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0089F2F0, void, RegisterExclusiveActiveStateType, (app::SeinLogicCycle * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0089F530, void, RegisterExclusiveActiveStateTypes, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F690, void, Awake, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F760, void, OnDestroy, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F800, void, OnDisable, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F810, void, CacheCharacterStateFlags, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F840, void, CacheRestrictZoneMask, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F800, void, ClearRestrictZoneMask, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F8E0, void, CacheTouchingDamageColliders, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F980, void, ReleaseCharacterStateFlags, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089F990, void, ResetCharacterStates, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089FAF0, void, CacheBindings, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0089FD40, bool, IsEquipped, (app::SeinLogicCycle * this_ptr, app::AbilityType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0089FD80, void, OnUpdate, (app::SeinLogicCycle * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008A01B0, void, UpdateState, (app::SeinLogicCycle * this_ptr, app::List_1_CharacterState_ * states_list))
    IL2CPP_REGISTER_METHOD(0x008A0310, void, SetStatesActive, (app::SeinLogicCycle * this_ptr, int32_t starting_index))
    IL2CPP_REGISTER_METHOD(0x008A05B0, void, SetStateActive, (app::SeinLogicCycle * this_ptr, app::CharacterState * state, bool active))
    IL2CPP_REGISTER_METHOD(0x008A0680, bool, UpdateCharacterState, (app::SeinLogicCycle * this_ptr, app::CharacterState * state))
    IL2CPP_REGISTER_METHOD(0x008A0800, void, OnGUI, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A0CA0, int32_t, get_ExecutionOrder, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A0CB0, void, ctor, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A1370, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00896D20, bool, _RegisterIsAllowedDelegates_b__237_0, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047472C0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, _RegisterIsAllowedDelegates_b__237_1, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732B80, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D80, bool, _RegisterIsAllowedDelegates_b__237_2, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F678, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896DF0, bool, _RegisterIsAllowedDelegates_b__237_3, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478DB68, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00897D80, bool, _RegisterIsAllowedDelegates_b__237_4, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736480, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00897DA0, bool, _RegisterIsAllowedDelegates_b__237_5, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787708, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008986D0, bool, _RegisterIsAllowedDelegates_b__237_6, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767568, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008986F0, bool, _RegisterIsAllowedDelegates_b__237_7, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735AD8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898730, bool, _RegisterIsAllowedDelegates_b__237_8, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747D88, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008990F0, bool, _RegisterIsAllowedDelegates_b__237_14, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B3B0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1440, bool, _RegisterIsAllowedDelegates_b__237_15, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FDE0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A14D0, bool, _RegisterIsAllowedDelegates_b__237_16, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756508, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1590, bool, _RegisterIsAllowedDelegates_b__237_17, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776C50, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898C50, bool, _RegisterIsAllowedDelegates_b__237_18, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B2E0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00899130, bool, _RegisterIsAllowedDelegates_b__237_19, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D140, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008989A0, bool, _RegisterIsAllowedDelegates_b__237_20, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791CB0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A15A0, bool, _RegisterIsAllowedDelegates_b__237_21, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047781E8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008988E0, bool, _RegisterIsAllowedDelegates_b__237_22, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735BF0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_22__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898710, bool, _RegisterIsAllowedDelegates_b__237_23, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784A00, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_23__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00899110, bool, _RegisterIsAllowedDelegates_b__237_24, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746BC8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_24__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, _RegisterIsAllowedDelegates_b__237_25, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732378, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_25__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D00, bool, _RegisterIsAllowedDelegates_b__237_26, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C0F8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_26__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A15B0, bool, _RegisterIsAllowedDelegates_b__237_27, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795DC0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_27__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, _RegisterIsAllowedDelegates_b__237_28, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D690, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_28__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898770, bool, _RegisterIsAllowedDelegates_b__237_29, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472ADB0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_29__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898750, bool, _RegisterIsAllowedDelegates_b__237_30, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CD08, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_30__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A15C0, bool, _RegisterIsAllowedDelegates_b__237_31, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D838, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_31__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A15D0, bool, _RegisterIsAllowedDelegates_b__237_32, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786730, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898430, bool, _RegisterIsAllowedDelegates_b__237_33, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476CAD8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_33__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898350, bool, _RegisterIsAllowedDelegates_b__237_34, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A638, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_34__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D60, bool, _RegisterIsAllowedDelegates_b__237_35, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735738, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_35__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, _RegisterIsAllowedDelegates_b__237_36, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047654E8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_36__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896D40, bool, _RegisterIsAllowedDelegates_b__237_37, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BB10, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_37__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008986B0, bool, _RegisterIsAllowedDelegates_b__237_38, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EC30, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_38__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, _RegisterIsAllowedDelegates_b__237_39, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769C90, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_39__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00896CE0, bool, _RegisterIsAllowedDelegates_b__237_40, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A730, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_40__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1660, bool, _RegisterIsAllowedDelegates_b__237_43, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790178, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_43__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A16D0, bool, _RegisterIsAllowedDelegates_b__237_44, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745940, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_44__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A16E0, bool, _RegisterIsAllowedDelegates_b__237_47, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CC08, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_47__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A16F0, bool, _RegisterIsAllowedDelegates_b__237_48, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C1B0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_48__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008991A0, bool, _RegisterIsAllowedDelegates_b__237_49, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047745E8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_49__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008992B0, bool, _RegisterIsAllowedDelegates_b__237_50, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D570, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_50__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008992D0, bool, _RegisterIsAllowedDelegates_b__237_51, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784E68, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_51__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1700, bool, _RegisterIsAllowedDelegates_b__237_52, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733CB0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_52__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00899580, bool, _RegisterIsAllowedDelegates_b__237_53, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BAC8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_53__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008997F0, bool, _RegisterIsAllowedDelegates_b__237_54, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CE48, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_54__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008996E0, bool, _RegisterIsAllowedDelegates_b__237_55, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047493E8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_55__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _RegisterIsAllowedDelegates_b__237_56, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707BB0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_56__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _RegisterIsAllowedDelegates_b__237_57, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047302D8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_57__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00897430, bool, _RegisterIsAllowedDelegates_b__237_58, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047940F0, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_58__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1710, bool, _RegisterIsAllowedDelegates_b__237_59, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047375A8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_59__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1720, bool, _RegisterIsAllowedDelegates_b__237_60, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736AC8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_60__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008978B0, bool, _RegisterIsAllowedDelegates_b__237_61, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CD10, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_61__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00898370, bool, _RegisterIsAllowedDelegates_b__237_62, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756700, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_62__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1730, bool, _RegisterIsAllowedDelegates_b__237_63, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711990, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_63__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1740, bool, _RegisterIsAllowedDelegates_b__237_64, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047399D8, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_64__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A1750, bool, _RegisterIsAllowedDelegates_b__237_65, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A068, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_65__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00899CB0, bool, _RegisterIsAllowedDelegates_b__237_66, (app::SeinLogicCycle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BC50, SeinLogicCycle__RegisterIsAllowedDelegates_b__237_66__MethodInfo)
}
