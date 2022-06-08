#include <interception_macros.h>

namespace app::methods::SpiritLeashInteractable {
IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_CanBeSustained, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Activated, (SpiritLeashInteractable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C41600, Vector3, get_Position, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritLeashed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, SpiritLeashMode__Enum, get_LeashInteractionMode, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritLeashCost, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_PositionOffset, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Transform *, get_HookTargetTransform, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00D5FD90, void, OnSpiritLeashed, (SpiritLeashInteractable * __this, Vector3 playerPosition, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x00D5FE60, void, Awake, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00D60040, void, OnEnable, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00D600E0, void, OnDisable, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00D60180, void, Serialize, (SpiritLeashInteractable * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FBB60, IDamageReciever__Array *, get_AffectedReceivers, (SpiritLeashInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00D601F0, void, __ctor, (SpiritLeashInteractable * __this));
}
