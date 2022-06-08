#include <interception_macros.h>

namespace app::methods::Rock {
IL2CPP_REGISTER_METHOD(0x00E05C90, Vector3, get_Position, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00E05D20, bool, IsDead, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x013587B0, bool, CanBeBashed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x009886D0, void, OnEnterBash, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x013587C0, void, OnBashHighlight, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BashPriority, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x00EEC270, bool, get_IsSuspended, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01358890, void, set_IsSuspended, (Rock * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x013588A0, void, set_Mask, (Rock * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01358950, void, FixedUpdate, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01358A90, void, Awake, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01358CD0, void, OnDestroy, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01358D90, void, Start, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01358E80, void, OnCollisionEnter, (Rock * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01358E80, void, OnCollisionStay, (Rock * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01358E90, void, OnCollision, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, IDamageReciever__Array *, get_AffectedReceivers, (Rock * __this));
IL2CPP_REGISTER_METHOD(0x01359070, void, __ctor, (Rock * __this));
}
