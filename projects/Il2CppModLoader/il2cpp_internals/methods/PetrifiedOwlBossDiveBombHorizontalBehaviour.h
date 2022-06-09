#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossDiveBombHorizontalBehaviour {
IL2CPP_REGISTER_METHOD(0x00418200, StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049F2B0, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049F2C0, void, CopyData, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x0049F3D0, void, InitializeCancellableController, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049F440, void, OnEntityInitialized, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049F9B0, void, OnEnter, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FA60, BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FB60, void, OnExit, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0049FBA0, void, ModifyDesiredDamageDirectionMode, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr, app::DamageDealer_DamageDirectionMode__Enum * mode));
IL2CPP_REGISTER_METHOD(0x0049FBB0, Enum__Array *, GetEntries, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049FC50, Enum, Evaluate, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0049FCF0, void, __ctor, (app::PetrifiedOwlBossDiveBombHorizontalBehaviour * this_ptr));
}
