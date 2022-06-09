#include <interception_macros.h>

namespace app::methods::Moon::MeleeAttackBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x0110EDE0, bool, get_Cancellable, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0110EDF0, void, set_Cancellable, (app::MeleeAttackBehaviourNew * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::DamageOwner *, get_DamageOwner, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0110EE00, void, set_DamageOwner, (app::MeleeAttackBehaviourNew * this_ptr, app::DamageOwner * value));
    IL2CPP_REGISTER_METHOD(0x0110EE10, float, get_ActualDamageAmount, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0110EE80, void, Awake, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0110EEB0, void, CacheSerializedComponents, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0110EF70, bool, IsBlockingInterruption, (app::MeleeAttackBehaviourNew * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
    IL2CPP_REGISTER_METHOD(0x0110EFA0, void, OnEntityInitialized, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01110200, void, CacheCancellableAnimators, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01110620, void, OnDestroy, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01110780, void, OnDisable, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011108D0, void, CancelableStart, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04752CB8, MeleeAttackBehaviourNew_CancelableStart__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x011108E0, void, CancelableEnd, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474B408, MeleeAttackBehaviourNew_CancelableEnd__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x011108F0, app::BehaviourStatus__Enum, OnExecute, (app::MeleeAttackBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01110B80, bool, ShouldCancel, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01110DE0, void, OnEnter, (app::MeleeAttackBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01111250, void, ProcessWallRecoil, (app::MeleeAttackBehaviourNew * this_ptr, app::Collider * collider, app::Vector3 overlap_center));
    IL2CPP_REGISTER_METHODINFO(0x0470FB40, MeleeAttackBehaviourNew_ProcessWallRecoil__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01111910, float, MinimumDist, (app::MeleeAttackBehaviourNew * this_ptr, app::Vector2 v, app::Vector2 w, app::Vector2 p));
    IL2CPP_REGISTER_METHOD(0x01111B30, void, OnExit, (app::MeleeAttackBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01112100, void, StartAttackTimeline, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01112430, void, OnTimelineSequenceStopEvent, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01112480, void, OnWeaponStickCollision, (app::MeleeAttackBehaviourNew * this_ptr, app::Collider * collider, app::Vector3 overlap_center, app::Vector3 direction, app::Vector3 damage_position));
    IL2CPP_REGISTER_METHOD(0x01112B30, app::EffectSpawn, ProvideDamageEffect, (app::MeleeAttackBehaviourNew * this_ptr, app::DamageResult result));
    IL2CPP_REGISTER_METHOD(0x01112BC0, app::Vector3, RootMotionModifier, (app::MeleeAttackBehaviourNew * this_ptr, app::Vector3 motion));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01112EB0, void, __ctor, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01113320, void, _OnEntityInitialized_b__60_4, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471D118, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01113330, void, _OnEntityInitialized_b__60_5, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475DA48, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01113320, void, _OnEntityInitialized_b__60_6, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04766D48, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01113330, void, _OnEntityInitialized_b__60_7, (app::MeleeAttackBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04770540, MeleeAttackBehaviourNew__OnEntityInitialized_b__60_7__MethodInfo);
}
