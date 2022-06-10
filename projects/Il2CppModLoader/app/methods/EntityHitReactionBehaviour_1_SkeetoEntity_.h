#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_SkeetoEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_SkeetoEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHODINFO(0x04796B68, EntityHitReactionBehaviour_1_SkeetoEntity__CanInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_SkeetoEntity_ * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0477DDD8, EntityHitReactionBehaviour_1_SkeetoEntity__OnInitializeTask__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_SkeetoEntity_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHODINFO(0x04773600, EntityHitReactionBehaviour_1_SkeetoEntity__ApplyExternalKickbackForce__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_SkeetoEntity_ * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04773468, EntityHitReactionBehaviour_1_SkeetoEntity__IsDamageTypePreventingInterruption__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, (app::EntityHitReactionBehaviour_1_SkeetoEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DF38, EntityHitReactionBehaviour_1_SkeetoEntity___ctor__MethodInfo)
}
