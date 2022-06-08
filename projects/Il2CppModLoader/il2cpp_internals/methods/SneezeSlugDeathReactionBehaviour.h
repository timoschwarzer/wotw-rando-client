#include <interception_macros.h>

namespace app::methods::SneezeSlugDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00ED84E0, void, OnCacheSerializedComponents, (SneezeSlugDeathReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00ED85A0, void, OnInitializeTask, (SneezeSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB1FA0, void, StartTimeline, (SneezeSlugDeathReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00ED8860, void, StopTimeline, (SneezeSlugDeathReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00ED8A80, void, HandleCollision, (SneezeSlugDeathReactionBehaviour * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x0472A1A0, SneezeSlugDeathReactionBehaviour_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, SneezeSlugDeathReactionBehaviour_DeathState__Enum, GetNextOnHitGroundState, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED8B90, void, OnEnterTask, (SneezeSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED8FE0, BehaviourStatus__Enum, OnExecuteTask, (SneezeSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED9100, void, OnExitTask, (SneezeSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED9200, void, SetState, (SneezeSlugDeathReactionBehaviour * __this, SneezeSlugDeathReactionBehaviour_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00ED92E0, void, EnterState, (SneezeSlugDeathReactionBehaviour * __this, SneezeSlugDeathReactionBehaviour_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00ED9350, void, ExitState, (SneezeSlugDeathReactionBehaviour * __this, SneezeSlugDeathReactionBehaviour_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00ED93A0, void, UpdateState, (SneezeSlugDeathReactionBehaviour * __this, SneezeSlugDeathReactionBehaviour_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00ED96F0, void, EnterLaunch, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED98D0, void, EnterFall, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED9900, void, EnterLandAndExplode, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED9C70, void, EnterDrown, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA1B0, void, ExitLaunch, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA1C0, void, ExitFall, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA1D0, void, ExitLandAndExplode, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA1E0, void, ExitDrown, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA1F0, void, UpdateLaunch, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA340, void, UpdateFall, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA3A0, void, UpdateLandAndExplode, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA520, bool, InWater, (SneezeSlugDeathReactionBehaviour * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x00EDA710, void, UpdateDrown, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDA950, void, ExitBehaviour, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04724628, SneezeSlugDeathReactionBehaviour_ExitBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDAA10, Vector3, ProcessRootMotion, (SneezeSlugDeathReactionBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0470D048, SneezeSlugDeathReactionBehaviour_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDAA40, void, BlastAttack, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A030, SneezeSlugDeathReactionBehaviour_BlastAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDAC60, void, PlayShake, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDAD50, void, __ctor, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDAE10, void, _EnterLaunch_b__42_0, (SneezeSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04778448, SneezeSlugDeathReactionBehaviour__EnterLaunch_b__42_0__MethodInfo);
}
