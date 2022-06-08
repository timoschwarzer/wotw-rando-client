#include <interception_macros.h>

namespace app::methods::Moon::MeleeAttackBehaviourNew {
IL2CPP_REGISTER_METHOD(0x0110EDE0, bool, get_Cancellable, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0110EDF0, void, set_Cancellable, (MeleeAttackBehaviourNew * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00813FA0, DamageOwner *, get_DamageOwner, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0110EE00, void, set_DamageOwner, (MeleeAttackBehaviourNew * __this, DamageOwner * value));
IL2CPP_REGISTER_METHOD(0x0110EE10, float, get_ActualDamageAmount, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0110EE80, void, Awake, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0110EEB0, void, CacheSerializedComponents, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0110EF70, bool, IsBlockingInterruption, (MeleeAttackBehaviourNew * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x0110EFA0, void, OnEntityInitialized, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01110200, void, CacheCancellableAnimators, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01110620, void, OnDestroy, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01110780, void, OnDisable, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011108D0, void, CancelableStart, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04752CB8, MeleeAttackBehaviourNew_CancelableStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011108E0, void, CancelableEnd, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B408, MeleeAttackBehaviourNew_CancelableEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011108F0, BehaviourStatus__Enum, OnExecute, (MeleeAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01110B80, bool, ShouldCancel, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01110DE0, void, OnEnter, (MeleeAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01111250, void, ProcessWallRecoil, (MeleeAttackBehaviourNew * __this, Collider * collider, Vector3 overlapCenter));
IL2CPP_REGISTER_METHODINFO(0x0470FB40, MeleeAttackBehaviourNew_ProcessWallRecoil__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01111910, float, MinimumDist, (MeleeAttackBehaviourNew * __this, Vector2 v, Vector2 w, Vector2 p));
IL2CPP_REGISTER_METHOD(0x01111B30, void, OnExit, (MeleeAttackBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01112100, void, StartAttackTimeline, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01112430, void, OnTimelineSequenceStopEvent, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01112480, void, OnWeaponStickCollision, (MeleeAttackBehaviourNew * __this, Collider * collider, Vector3 overlapCenter, Vector3 direction, Vector3 damagePosition));
IL2CPP_REGISTER_METHOD(0x01112B30, EffectSpawn, ProvideDamageEffect, (MeleeAttackBehaviourNew * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x01112BC0, Vector3, RootMotionModifier, (MeleeAttackBehaviourNew * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01112EB0, void, __ctor, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01113320, void, _OnEntityInitialized_b__60_4, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D118, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01113330, void, _OnEntityInitialized_b__60_5, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x0475DA48, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01113320, void, _OnEntityInitialized_b__60_6, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04766D48, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01113330, void, _OnEntityInitialized_b__60_7, (MeleeAttackBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04770540, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_7__MethodInfo);
}
