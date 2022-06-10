#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinInteraction {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F5C0, bool, get_IsStatePerforming, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_SpriteMirrorLock, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F5D0, void, set_SpriteMirrorLock, (app::SeinInteraction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0100F690, app::SeinInteraction_ThrowKeystoneSettings__Array *, get_CurrentThrowKeystoneSet, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F710, app::SeinInteraction_ThrowKeystoneSettings *, get_CurrentThrowKeystoneSetting, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F760, bool, get_IsThrowingKeystone, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F7D0, bool, get_CanCancelCurrentThrow, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F940, app::SeinInteraction_KeystoneThrowMode__Enum, get_SuitableThrowMode, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100F960, bool, get_IsOnGround, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100FAE0, app::PlatformMovement *, get_PlatformMovement, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100FC30, app::MoonAnimator *, get_KuAnimator, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100FD30, void, OnAwake, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100FED0, void, OnDestroy, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01010080, void, OnRestoreCheckpoint, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D9A0, SeinInteraction_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010101B0, void, OnEnter, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01010350, void, OnExit, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01010650, void, OnSetReferenceToSein, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01010730, bool, CanStartKeystoneThrow, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01010760, void, ThrowKeystoneAtDoor, (app::SeinInteraction * this_ptr, app::Vector3 door_position, app::Action * on_finish_throw))
    IL2CPP_REGISTER_METHOD(0x01010F70, int32_t, GetIndexForNextKeyThrowSetup, (app::SeinInteraction * this_ptr, app::SeinInteraction_KeystoneThrowMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x01011060, void, ThrowKeystoneNow, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737238, SeinInteraction_ThrowKeystoneNow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01011780, void, FinishThrow, (app::SeinInteraction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01011950, void, AbortKeystoneThrowing, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01011BD0, void, UpdateCharacterState, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01011EB0, app::ICharacterInteractable *, GetAvailableInteractable, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010121A0, void, ShowInteractionHintMessage, (app::SeinInteraction * this_ptr, app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x010123A0, void, ListenForInteraction, (app::SeinInteraction * this_ptr, app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x010124B0, void, StartInteraction, (app::SeinInteraction * this_ptr, app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHODINFO(0x04795B78, SeinInteraction_StartInteraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01012850, void, OnEnterPickUpHoldableInteraction, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010129D0, void, OnEnterNPCInteraction, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01012B40, void, UpdateInteraction, (app::SeinInteraction * this_ptr, app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHODINFO(0x0477C720, SeinInteraction_UpdateInteraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInteractionWithPickupHoldable, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01012C70, app::NPCEntity *, get_CurrentNpc, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01012D30, app::MoonAnimation *, get_ListenAnimation, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01012E50, void, UpdateInteractionWithNPC, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01013160, void, EndInteraction, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047072D8, SeinInteraction_EndInteraction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01013280, void, OnExitPickupHoldableInteraction, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F93010, void, OnExitNPCInteraction, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010132A0, void, UpdateThrowingKeystones, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01013490, bool, CanInteract, (app::SeinInteraction * this_ptr, app::CharacterInteractableType__Enum interactable_type))
    IL2CPP_REGISTER_METHODINFO(0x0477ACD0, SeinInteraction_CanInteract__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01013780, void, PlayAnimation, (app::SeinInteraction * this_ptr, app::MoonAnimation * animation, app::Func_1_Boolean_ * should_keep_playing, app::Action * on_stoped_playing, int32_t priority))
    IL2CPP_REGISTER_METHOD(0x01013820, void, StopAnimation, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010138E0, void, OnModifyHorizontalPlatformMovementSettings, (app::SeinInteraction * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHODINFO(0x047903A8, SeinInteraction_OnModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010139E0, void, PlayListenAnim, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01013B70, void, PlayReceiveMapAnim, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F640, bool, IsNpcInteractionPerforming, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01013CF0, void, ctor, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _UpdateInteractionWithNPC_b__74_0, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718CE0, SeinInteraction__UpdateInteractionWithNPC_b__74_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _PlayListenAnim_b__83_0, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E210, SeinInteraction__PlayListenAnim_b__83_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D2E60, bool, _PlayReceiveMapAnim_b__84_0, (app::SeinInteraction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752E78, SeinInteraction__PlayReceiveMapAnim_b__84_0__MethodInfo)
}
