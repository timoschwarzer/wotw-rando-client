#include <interception_macros.h>

namespace app::methods::SeinController {
IL2CPP_REGISTER_METHOD(0x006DB840, bool, get_IsPlayingAnimation, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DB860, void, set_IsPlayingAnimation, (SeinController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DB880, bool, get_InputLocked, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DB8C0, bool, get_CanMove, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DB910, bool, get_FaceLeft, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DB990, void, set_FaceLeft, (SeinController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB80, Transform *, get_Transform, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DBA20, bool, IsPerforming, (SeinController * __this, CharacterState * characterState));
IL2CPP_REGISTER_METHOD(0x006DBAE0, bool, get_IsAimingBow, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DBC20, bool, get_IsBowAttacking, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DBD60, bool, get_IsInsideSoulFlame, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DBD90, bool, get_IsHolding, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DBEF0, bool, get_IsSpiritLeashing, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (SeinController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC060, void, set_Mask, (SeinController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Component_1__Array *, get_Suspendables, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC110, bool, get_IsRopeGrabbing, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC1E0, bool, get_IsSurfaceGrabbing, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC2B0, bool, get_IsInvisible, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetReferenceToSein, (SeinController * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x006DC3E0, bool, get_IsInRangeToGrabBlock, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC510, bool, get_IsInRangeToGrabLever, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC6D0, bool, get_IsSwimming, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC760, bool, get_IsLeashGrabbing, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC7E0, bool, get_IsDigging, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DC860, bool, get_IsInAir, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DCAF0, void, ProvideComponents, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DCBD0, void, Awake, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DD010, void, OnDestroy, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DD250, void, OnGoThroughPortal, (SeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x047789D8, SeinController_OnGoThroughPortal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006DD2A0, void, Start, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DD840, bool, RayTest, (SeinController * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x006DD930, bool, RayTest, (SeinController * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x006DDA30, bool, RayTest, (SeinController * __this, Vector3 target, Vector2 startOffset, Vector2 endOffset, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x006DDDD0, bool, RayTest, (SeinController * __this, GameObject * target, Vector2 startOffset, Vector2 endOffset, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x006DDE10, bool, RayTest, (SeinController * __this, GameObject * target, float startOffset, float endOffset, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x006DDE40, bool, RayTest, (SeinController * __this, GameObject * target, float startOffset, float endOffset, LayerMask testMask, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x006DE110, bool, RayTest, (SeinController * __this, GameObject * target, Vector2 startOffset, Vector2 endOffset, LayerMask testMask, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x006DE630, bool, RayTest, (SeinController * __this, Vector3 position, Vector3 delta, RaycastHit * hitInfo));
IL2CPP_REGISTER_METHOD(0x006DE7E0, RaycastCommand, GetRayTestCommand, (SeinController * __this, GameObject * target, Vector2 startOffset, Vector2 endOffset));
IL2CPP_REGISTER_METHOD(0x006DEB50, bool, ParseRayTestCommandResult, (SeinController * __this, GameObject * target, Rigidbody * targetRigidbody, RaycastHit hitInfo));
IL2CPP_REGISTER_METHOD(0x006DED20, void, StopAnimation, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DED40, void, PlayAnimation, (SeinController * __this, MoonAnimation * animation));
IL2CPP_REGISTER_METHOD(0x006DED60, void, FixedUpdate, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DEDE0, void, HandleOffscreenIssue, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DF120, void, UpdateOriActiveState, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x006DF3A0, void, Serialize, (SeinController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006DF3D0, void, OnRecieveDamage, (SeinController * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, ICanActivatePressurePlate_OnPressed, (SeinController * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x006DF410, void, ICanActivatePressurePlate_OnReleased, (SeinController * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x006DF420, void, __ctor, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (SeinController * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (SeinController * __this));
}
