#include <interception_macros.h>

namespace app::methods::Moon::MeleeAttackTimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x011135D0, Vector3, get_TargetPosition, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x011135F0, void, set_TargetPosition, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FD590, float, get_AnimationSpeed, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A479F0, void, set_AnimationSpeed, (app::MeleeAttackTimelineBehaviourNew * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01113610, void, OnEntityInitialized, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01114080, void, ProcessWallRecoil, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::Collider * collider, app::Vector3 overlap_center));
IL2CPP_REGISTER_METHODINFO(0x047079D0, MeleeAttackTimelineBehaviourNew_ProcessWallRecoil__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01114650, float, MinimumDist, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::Vector2 v, app::Vector2 w, app::Vector2 p));
IL2CPP_REGISTER_METHOD(0x01114870, void, OnEnter, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01114890, void, ExecuteAttack, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01114CE0, BehaviourStatus__Enum, OnExecute, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01114DB0, void, OnExit, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x011151E0, void, StartTimeline, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x011153D0, void, OnTimelineSequenceStopEvent, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x011153E0, void, OnWeaponStickCollision, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::Collider * collider, app::Vector3 overlap_center));
IL2CPP_REGISTER_METHODINFO(0x04768350, MeleeAttackTimelineBehaviourNew_OnWeaponStickCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DCB630, EffectSpawn, ProvideDamageEffect, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04724AA0, MeleeAttackTimelineBehaviourNew_ProvideDamageEffect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011159B0, Vector3, RootMotionModifier, (app::MeleeAttackTimelineBehaviourNew * this_ptr, app::Vector3 motion));
IL2CPP_REGISTER_METHOD(0x01115AE0, bool, ShouldBlockTree, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01115B00, void, OnDestroy, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01115C60, void, OnDisable, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01115DB0, void, OnDrawGizmosSelected, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01116090, void, __ctor, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01116320, void, _OnEntityInitialized_b__46_2, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04711E68, MeleeAttackTimelineBehaviourNew__OnEntityInitialized_b__46_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01116330, void, _OnEntityInitialized_b__46_3, (app::MeleeAttackTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04726808, MeleeAttackTimelineBehaviourNew__OnEntityInitialized_b__46_3__MethodInfo);
}
