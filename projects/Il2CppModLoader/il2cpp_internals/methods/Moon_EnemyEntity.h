#include <interception_macros.h>

namespace app::methods::Moon::EnemyEntity {
IL2CPP_REGISTER_METHOD(0x0120D000, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0120D0A0, void, ResetLogSettingStatics, ());
IL2CPP_REGISTER_METHOD(0x00696560, EnemyEntity_SpawnPopFixState__Enum, get_PopFixState, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00696570, void, set_PopFixState, (EnemyEntity * __this, EnemyEntity_SpawnPopFixState__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UsesHealthbar, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldApplySpawnPopFix, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D140, void, GetRepelForceParams_EditorOnly, (EnemyEntity * __this, bool * shouldApplyRepelForce, float * repelRange, float * maxRepelForce, float * samePositionError));
IL2CPP_REGISTER_METHOD(0x0120D170, void, SetRepelForceParams_EditorOnly, (EnemyEntity * __this, bool shouldApplyRepelForce, float repelRange, float maxRepelForce, float samePositionError));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFlyingEnemy, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_UseDeathLoopTimeLimit, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D1A0, EntityWeightData_EntityWeight__Enum, get_Weight, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x007A4A50, DamageOwner *, get_DamageOwner, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanAttackTokenBeStolen, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoResetSpotOriBool, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D1B0, Type *, get_EnemyType, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D270, int32_t, get_IndexInGroup, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D450, bool, get_IsPlayerInputLocked, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D500, bool, TryGetSuspendWhenOutOfFrustrumWithCondition, (EnemyEntity * __this, SuspendWhenOutOfFrustrumWithCondition * * frustrumSuspendComponent));
IL2CPP_REGISTER_METHOD(0x0120D600, void, OnUpdate, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120D8B0, void, OnCacheSerializedComponents, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120DAC0, void, DropAttackToken, (EnemyEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047962F0, EnemyEntity_DropAttackToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0120DC90, void, OnDied, (EnemyEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x0120DFB0, void, SpawnOrbs, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120E180, void, OnAttackTokenStolen, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120E1A0, void, ResetEntity, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120E610, void, OnDestroy, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120EC00, void, Start, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120ECD0, void, OnAwake, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120F3B0, void, OnEnable, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120F420, void, OnDisable, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120F520, void, InstantKill, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x0120F880, void, OnDamageResultReceived, (EnemyEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0474A290, EnemyEntity_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012104A0, void, MoonCleanup, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x012104D0, void, ResetDeathLoopTimeLimitState, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x012104E0, void, UpdateDeathLoopTimeLimit, (EnemyEntity * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x012105C0, void, ResetMinHealthLimitState, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x012105D0, void, UpdateMinHealthLimit, (EnemyEntity * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x012106F0, bool, TryGetPlatformMovement, (EnemyEntity * __this, CharacterPlatformMovement * * platformMovement));
IL2CPP_REGISTER_METHOD(0x01210760, void, ApplyRepellForce, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x01210C80, Vector3, ModifyKickbackForce, (EnemyEntity * __this, Vector3 force, Damage * damage, bool applyDeathModification));
IL2CPP_REGISTER_METHOD(0x01211350, void, __ctor, (EnemyEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
