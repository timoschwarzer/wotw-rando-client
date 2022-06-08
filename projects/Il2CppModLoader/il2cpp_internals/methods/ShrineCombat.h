#include <interception_macros.h>

namespace app::methods::ShrineCombat {
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739A90, void, set_IsSuspended, (ShrineCombat * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739BC0, void, set_Mask, (ShrineCombat * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00739C80, bool, get_IsShowingHint, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739D30, void, HidePressToStartHint, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739E10, void, ShowPressToStartHint, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739F30, Input_InputButtonProcessor *, get_Button, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739FD0, bool, get_HasShrineBeenBeatOnce, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739FD0, bool, get_HasPickedUpShrineReward, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00739FF0, bool, get_IsInInteractionRadius, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A020, float, get_DistanceToSein, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A220, Vector3, get_SeinPosition, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A290, SeinCharacter *, get_Sein, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A320, bool, get_IsRewardCollected, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A420, bool, IsInAllowedArea, (ShrineCombat * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0073A610, bool, get_IsOnGround, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A660, bool, get_CanTriggerShrine, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A790, bool, get_IsRunning, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073A7C0, bool, IsAnyShrineRunning, ());
IL2CPP_REGISTER_METHOD(0x0073A990, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0073AA70, void, Awake, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073ACF0, void, OnEnable, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073AF90, void, OnDisable, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B1D0, void, OnDestroy, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B270, void, OnRestoreCheckpoint, (ShrineCombat * __this));
IL2CPP_REGISTER_METHODINFO(0x04722B98, ShrineCombat_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0073B3D0, void, FixedUpdate, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B440, void, RefillHealthAndEnergy, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B610, void, InitializeToCorrectState, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B670, void, HandleEnemiesOutOfBounds, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073B810, void, SetAllVisualsToState, (ShrineCombat * __this, PassiveSetupInfo_State__Enum desiredState, bool doTransition, Func_2_ShrineCombat_WaveProgressMarker_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x0073B9E0, void, UpdateMarkersForWaves, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073BC20, bool, ShouldTurnOffWhenReplayTriggered, (ShrineCombat * __this, ShrineCombat_WaveProgressMarker * marker));
IL2CPP_REGISTER_METHODINFO(0x0472B3E0, ShrineCombat_ShouldTurnOffWhenReplayTriggered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0073BC30, void, RestrictInteractionButtonSlot, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073BCE0, void, OnPostTimeSlicedEnable, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073BDC0, void, Apply, (ShrineCombat * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0073BFA0, IUberState__Array *, get_AffectingUberStates, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C040, List_1_UnityEngine_GameObject_ *, get_AllTargets, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C200, String__Array *, GetAllConditionNames, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C2B0, void, EnsureMapExists, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C460, Int32__Array *, GetAllConditionGuids, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C510, String *, GetConditionNameFromGuid, (ShrineCombat * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x0073C600, bool, IsConditionGuidValid, (ShrineCombat * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x0073C610, bool, Validate, (ShrineCombat * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x0073C650, void, __ctor, (ShrineCombat * __this));
IL2CPP_REGISTER_METHOD(0x0073C960, void, __cctor, ());
}
