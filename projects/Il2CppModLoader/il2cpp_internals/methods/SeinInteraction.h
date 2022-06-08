#include <interception_macros.h>

namespace app::methods::SeinInteraction {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F5C0, bool, get_IsStatePerforming, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_SpriteMirrorLock, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F5D0, void, set_SpriteMirrorLock, (SeinInteraction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0100F690, SeinInteraction_ThrowKeystoneSettings__Array *, get_CurrentThrowKeystoneSet, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F710, SeinInteraction_ThrowKeystoneSettings *, get_CurrentThrowKeystoneSetting, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F760, bool, get_IsThrowingKeystone, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F7D0, bool, get_CanCancelCurrentThrow, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F940, SeinInteraction_KeystoneThrowMode__Enum, get_SuitableThrowMode, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100F960, bool, get_IsOnGround, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100FAE0, PlatformMovement *, get_PlatformMovement, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100FC30, MoonAnimator *, get_KuAnimator, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100FD30, void, OnAwake, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0100FED0, void, OnDestroy, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01010080, void, OnRestoreCheckpoint, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D9A0, SeinInteraction_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010101B0, void, OnEnter, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01010350, void, OnExit, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01010650, void, OnSetReferenceToSein, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01010730, bool, CanStartKeystoneThrow, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01010760, void, ThrowKeystoneAtDoor, (SeinInteraction * __this, Vector3 doorPosition, Action * onFinishThrow));
IL2CPP_REGISTER_METHOD(0x01010F70, int32_t, GetIndexForNextKeyThrowSetup, (SeinInteraction * __this, SeinInteraction_KeystoneThrowMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x01011060, void, ThrowKeystoneNow, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x04737238, SeinInteraction_ThrowKeystoneNow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01011780, void, FinishThrow, (SeinInteraction * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01011950, void, AbortKeystoneThrowing, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01011BD0, void, UpdateCharacterState, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01011EB0, ICharacterInteractable *, GetAvailableInteractable, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x010121A0, void, ShowInteractionHintMessage, (SeinInteraction * __this, ICharacterInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x010123A0, void, ListenForInteraction, (SeinInteraction * __this, ICharacterInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x010124B0, void, StartInteraction, (SeinInteraction * __this, ICharacterInteractable * interactable));
IL2CPP_REGISTER_METHODINFO(0x04795B78, SeinInteraction_StartInteraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01012850, void, OnEnterPickUpHoldableInteraction, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x010129D0, void, OnEnterNPCInteraction, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01012B40, void, UpdateInteraction, (SeinInteraction * __this, ICharacterInteractable * interactable));
IL2CPP_REGISTER_METHODINFO(0x0477C720, SeinInteraction_UpdateInteraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInteractionWithPickupHoldable, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01012C70, NPCEntity *, get_CurrentNpc, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01012D30, MoonAnimation *, get_ListenAnimation, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01012E50, void, UpdateInteractionWithNPC, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01013160, void, EndInteraction, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x047072D8, SeinInteraction_EndInteraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01013280, void, OnExitPickupHoldableInteraction, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00F93010, void, OnExitNPCInteraction, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x010132A0, void, UpdateThrowingKeystones, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01013490, bool, CanInteract, (SeinInteraction * __this, CharacterInteractableType__Enum interactableType));
IL2CPP_REGISTER_METHODINFO(0x0477ACD0, SeinInteraction_CanInteract__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01013780, void, PlayAnimation, (SeinInteraction * __this, MoonAnimation * animation, Func_1_Boolean_ * shouldKeepPlaying, Action * onStopedPlaying, int32_t priority));
IL2CPP_REGISTER_METHOD(0x01013820, void, StopAnimation, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x010138E0, void, OnModifyHorizontalPlatformMovementSettings, (SeinInteraction * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047903A8, SeinInteraction_OnModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010139E0, void, PlayListenAnim, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01013B70, void, PlayReceiveMapAnim, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00F8F640, bool, IsNpcInteractionPerforming, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x01013CF0, void, __ctor, (SeinInteraction * __this));
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _UpdateInteractionWithNPC_b__74_0, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x04718CE0, SeinInteraction__UpdateInteractionWithNPC_b__74_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _PlayListenAnim_b__83_0, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E210, SeinInteraction__PlayListenAnim_b__83_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _PlayReceiveMapAnim_b__84_0, (SeinInteraction * __this));
IL2CPP_REGISTER_METHODINFO(0x04752E78, SeinInteraction__PlayReceiveMapAnim_b__84_0__MethodInfo);
}
