#include <interception_macros.h>

namespace app::methods::Moon::LizardDodgeRollBehaviour {
    IL2CPP_REGISTER_METHOD(0x01104240, void, OnEnter, (app::LizardDodgeRollBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00754B80, void, Finished, (app::LizardDodgeRollBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794398, LizardDodgeRollBehaviour_Finished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecute, (app::LizardDodgeRollBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011045F0, void, OnExit, (app::LizardDodgeRollBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionRollBackModifier, (app::LizardDodgeRollBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::LizardDodgeRollBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01104640, bool, IsBlockingInterruption, (app::LizardDodgeRollBehaviour * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x01104680, void, ctor, (app::LizardDodgeRollBehaviour * this_ptr))
}
