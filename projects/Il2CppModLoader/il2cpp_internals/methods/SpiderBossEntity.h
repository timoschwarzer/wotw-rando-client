#include <interception_macros.h>

namespace app::methods::SpiderBossEntity {
IL2CPP_REGISTER_METHOD(0x0096C1B0, SpiderBossEntity_SpiderFightState__Enum, get_CurrentUberState, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C1E0, float, get_HealthToTransitionToBreakWall, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C220, float, get_HealthToTransitionToEscape, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C260, float, get_HealthToTransitionToDarkness, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C2A0, float, get_HealthToTransitionToEnd, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x005ACE90, List_1_SpiderBossBaseBehaviour_ *, get_ExecutingBehaviours, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00956A60, SpiderBossBaseBehaviour *, get_LastBehaviour, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C2E0, float, get_TimeSinceLastSpecialAttack, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x004A3B00, float, get_TimeSinceLastHitReact, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C2F0, float, get_DamageRequiredForStagger, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C370, bool, CanHitReact, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_TimescaleMultiplier, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C3B0, float, get_LookDirection, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C3E0, void, set_LookDirection, (SpiderBossEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x0096C490, Vector3, get_ClawAttackDirection, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_SpiderBossTimescaleMultiplier, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C590, bool, get_FacesOri, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_AcidAttackAllowed, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SpitAttackAllowed, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_ShakeLocation, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C7F0, bool, get_IsFighting, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C850, Vector3, get_EntityPosition, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSmushAttackSpawnShockwave, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C7C0, bool, get_BrokeArena1Wall, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C8E0, bool, get_ReachedArena2, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096C910, int32_t, get_NumberOfAllowedZonesInDirection, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDescentFromLaserSpawnShockwave, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CA40, float, get_UtilityFactorForBiteAttack, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CB80, GameObject *, get_TalonImpactEffectPrefab, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CB90, Transform *, get_FrontLeftLegGround2D, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CBA0, Transform *, get_FrontRightLegGround2D, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CBB0, Transform *, get_SmushPosition2D, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CBC0, SpiderBossLocomotion *, get_SpiderLocomotion, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CC80, Vector3, get_TargetPosition, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CDA0, float, get_DistanceToCharacterX, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CF50, float, get_DirectionToCharacterX, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D100, float, get_SpecialAttackUtilityMultiplier, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D180, void, OnCacheSerializedComponents, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D240, void, OnAwake, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D5F0, void, OnDestroy, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D6C0, void, InitializeBehaviours, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096D760, void, ResetEntity, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDied, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096DAA0, void, OnPostRestoreCheckpoint, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096DC30, void, CreateCheckpointWithFullStats, (SpiderBossEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0096DE70, void, CreateCheckpoint, (SpiderBossEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0096DFB0, void, OnEnable, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096E160, void, OnDisable, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096E210, bool, ShouldShowHealthBar, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04780360, SpiderBossEntity_ShouldShowHealthBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0096E250, void, Start, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096E540, void, OnFixedUpdate, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096ECE0, void, UpdateLaserAiming, (SpiderBossEntity * __this, float angle));
IL2CPP_REGISTER_METHOD(0x0096EFC0, void, UpdateLegPositionTransforms, (SpiderBossEntity * __this, Transform * legPosition, Transform * legPosition2D, Transform * legGroundPosition2D, Transform * KneePosition));
IL2CPP_REGISTER_METHOD(0x0096F480, void, OnHitReacted, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096F490, void, OnSpiderBaseBehaviourEntered, (SpiderBossEntity * __this, SpiderBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x0096F540, void, OnSpiderBaseBehaviourExited, (SpiderBossEntity * __this, SpiderBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x0096F770, float, TimeSinceLastSpecialBehavior, (SpiderBossEntity * __this, SpiderBossBaseBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x0096F880, SpiderBossLocationZone__Enum, GetCurrentZone, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096F8E0, SpiderBossLocationZone__Enum, GetCurrentZoneNoOverride, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096F980, SpiderBossLocationZone__Enum, GetLocationZoneForPosition, (SpiderBossEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0096FCC0, SpiderBossBehaviourZone__Enum, GetBehaviourZoneForTarget, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096FE60, SpiderBossBehaviourZone__Enum, GetBehaviourZoneForPosition, (SpiderBossEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0096FF30, List_1_SpiderBossBehaviourZone_ *, GetBehaviourZonesForPosition, (SpiderBossEntity * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00970140, CageStructureMetaDataGroup *, GetMetaGroup, (SpiderBossEntity * __this, SpiderBossLocationZone__Enum currentZone, float lookDirection));
IL2CPP_REGISTER_METHOD(0x009701F0, List_1_SpiderBossLocationZone_ *, GetAllowedZones, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x009703A0, void, OnDamageReceived, (SpiderBossEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00970C40, void, HandleDamageForHitReaction, (SpiderBossEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Spit, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00970CD0, void, EnableBottomDamageDealers, (SpiderBossEntity * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x00970D00, void, EnablePlatformColliders, (SpiderBossEntity * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x00970D30, void, TryTransitionToArena1ReachedPhase, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00970E50, void, OnEscapeCinematicEnded, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00970F20, void, ApplyCombatPhaseStartConditions, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00971140, void, ApplyCinematicBehaviourIfNeeded, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x009713C0, void, Apply, (SpiderBossEntity * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x009713E0, IUberState__Array *, get_AffectingUberStates, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00971470, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SpiderBossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00971630, void, __ctor, (SpiderBossEntity * __this));
}
