#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossBaseBehaviour {
IL2CPP_REGISTER_METHOD(0x00420EE0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C290, PetrifiedOwlBossLocomotion *, get_Locomotion, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C370, Vector3, get_TargetPosition, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C440, void, OnEntityInitialized, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C510, void, OnEnter, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049C650, BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049C6A0, void, OnExit, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049C7C0, void, InitializeCancellableController, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C7F0, bool, CanCancel, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C820, void, InitializeHitReactionController, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C850, bool, CanAccumulateHits, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C880, bool, CanHitReact, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanTakeDamage, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyData, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x0049C8B0, float, get_BehaviourUtility, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049C8D0, float, ComputeUtility, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocomotionFollowAllowed, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyRootMotion, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::Vector3 * velocity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyDesiredDamageDirectionMode, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::DamageDealer_DamageDirectionMode__Enum * mode));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyMaxLookAt, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::Vector2 * max_look_at));
IL2CPP_REGISTER_METHOD(0x0049CA00, void, RegisterStartDelegate, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::List_1_Moon_Timeline_EventTriggerAnimator_ * triggers, app::Action * del));
IL2CPP_REGISTER_METHOD(0x0049CB80, void, UnregisterStartDelegate, (app::PetrifiedOwlBossBaseBehaviour * this_ptr, app::List_1_Moon_Timeline_EventTriggerAnimator_ * triggers, app::Action * del));
IL2CPP_REGISTER_METHOD(0x0049CD00, void, __ctor, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_1, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_2, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_3, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_4, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_5, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_6, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_7, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_8, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_9, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_10, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_11, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_12, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_13, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_14, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_15, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_16, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, IMoonTypeResolver *, GetResolverForType_17, (app::PetrifiedOwlBossBaseBehaviour * this_ptr));
}
