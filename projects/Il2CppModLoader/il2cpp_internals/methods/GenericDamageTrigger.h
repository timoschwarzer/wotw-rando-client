#include <interception_macros.h>

namespace app::methods::GenericDamageTrigger {
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00654890, bool, IsDead, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x007E7A20, bool, CanBeHitByMelee, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x007E7A20, bool, CanBeHitByHammerHandle, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_HammerPriority, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_HammerPriority, (GenericDamageTrigger * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_HammerEnableAutoTarget, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_HammerEnableAutoTarget, (GenericDamageTrigger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E06D80, void, OnEnable, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06E40, void, OnDisable, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E06F00, bool, AllowedTypeCheck, (GenericDamageTrigger * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00E06F30, void, OnRecieveDamage, (GenericDamageTrigger * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FBB80, List_1_UnityEngine_GameObject_ *, get_AllTargets, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AllTargets, (GenericDamageTrigger * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (GenericDamageTrigger * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00E070B0, IUberState__Array *, get_AffectingUberStates, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E071E0, void, StopTransitions, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E072F0, void, Awake, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, IDamageReciever__Array *, get_AffectedReceivers, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00E074E0, void, __ctor, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (GenericDamageTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (GenericDamageTrigger * __this));
}
