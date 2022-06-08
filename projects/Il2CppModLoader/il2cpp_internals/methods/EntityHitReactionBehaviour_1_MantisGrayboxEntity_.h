#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_MantisGrayboxEntity_ {
IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this, Vector2 force, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHODINFO(0x047755E8, EntityHitReactionBehaviour_1_MantisGrayboxEntity__ApplyExternalKickbackForce__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHODINFO(0x04798630, EntityHitReactionBehaviour_1_MantisGrayboxEntity__CanInterrupt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0476E910, EntityHitReactionBehaviour_1_MantisGrayboxEntity__OnInitializeTask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04712270, EntityHitReactionBehaviour_1_MantisGrayboxEntity___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this, DamageType__Enum type));
IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (EntityHitReactionBehaviour_1_MantisGrayboxEntity_ * __this, DamageWeight__Enum weight));
}
