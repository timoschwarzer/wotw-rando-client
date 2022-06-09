#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_FrogEntity_ {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x04740E50, EntityHitReactionBehaviour_1_FrogEntity__OnExecuteTask__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04771648, EntityHitReactionBehaviour_1_FrogEntity___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr, app::DamageType__Enum type));
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_FrogEntity_ * this_ptr, app::DamageWeight__Enum weight));
}
