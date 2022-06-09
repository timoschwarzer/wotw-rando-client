#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight1DiveLaserBehaviour {
IL2CPP_REGISTER_METHOD(0x00660430, StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x005B0220, PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x01765B10, void, CopyData, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x01765C10, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x01765CA0, void, OnEntityInitialized, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x017660F0, void, OnEnter, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01766290, BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01766390, void, OnExit, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x017663D0, Enum__Array *, GetEntries, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x01766470, Enum, Evaluate, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x01766510, void, __ctor, (app::PetrifiedOwlBossFight1DiveLaserBehaviour * this_ptr));
}
