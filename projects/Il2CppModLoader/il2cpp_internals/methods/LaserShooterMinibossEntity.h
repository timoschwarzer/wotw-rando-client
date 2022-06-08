#include <interception_macros.h>

namespace app::methods::LaserShooterMinibossEntity {
IL2CPP_REGISTER_METHOD(0x00F189C0, LaserShieldRotationController *, get_ShieldController, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F189D0, LaserShooterMinibossPathMover *, get_PathMover, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F189E0, int32_t, get_CurrentBeamCount, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F189F0, void, set_CurrentBeamCount, (LaserShooterMinibossEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F18A00, Vector3, get_AccumulatedForce, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18A20, void, set_AccumulatedForce, (LaserShooterMinibossEntity * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18A40, bool, get_ShouldApplySpawnPopFix, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18AE0, float, get_PercentageOfShieldDestroyed, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18C50, int32_t, get_DesiredPhase, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18C60, bool, get_IsOriAlive, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18D60, float, get_RandomValue, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x0096CB80, LaserShooterMinibossPath *, get_Paths, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18E60, void, set_Paths, (LaserShooterMinibossEntity * __this, LaserShooterMinibossPath * value));
IL2CPP_REGISTER_METHOD(0x00F18E70, List_1_LaserShooterRockSpawnPoint_ *, get_RockSpawnPositions, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18E80, void, set_RockSpawnPositions, (LaserShooterMinibossEntity * __this, List_1_LaserShooterRockSpawnPoint_ * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldShowHealthBar, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04762F70, LaserShooterMinibossEntity_ShouldShowHealthBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F18E90, void, OnAwake, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F18F70, void, OnFixedUpdate, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F19210, void, UpdateCanGlowHit, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F19260, void, OnEnable, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F195C0, void, OnDisable, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F19670, void, OnDied, (LaserShooterMinibossEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00F19860, void, ResetEntity, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F199E0, void, OnCacheSerializedComponents, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F19AE0, void, UnserializedInitialization, (LaserShooterMinibossEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F19DE0, void, ResolveDamage, (LaserShooterMinibossEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00F19E70, void, SetBeamCount, (LaserShooterMinibossEntity * __this, int32_t beamCount));
IL2CPP_REGISTER_METHOD(0x00F1A2A0, void, SetBeamsActive, (LaserShooterMinibossEntity * __this, bool active));
IL2CPP_REGISTER_METHOD(0x00F1A3E0, void, SetShieldOpening, (LaserShooterMinibossEntity * __this, float strength));
IL2CPP_REGISTER_METHOD(0x00F1A410, void, ProcessInnerForces, (LaserShooterMinibossEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F1A6C0, Vector3, GetSelfSpringOffset, (LaserShooterMinibossEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F1A9D0, Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ *, SpawnFollowingEffect, (GameObject * prefab, Transform * followTarget));
IL2CPP_REGISTER_METHOD(0x00F1ADF0, void, __ctor, (LaserShooterMinibossEntity * __this));
}
