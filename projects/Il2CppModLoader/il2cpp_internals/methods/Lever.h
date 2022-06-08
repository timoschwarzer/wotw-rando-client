#include <interception_macros.h>

namespace app::methods::Lever {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InRange, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InRange, (Lever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_IsGrabbed, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0052A080, void, set_IsGrabbed, (Lever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_Radius, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x002FBD00, Transform *, get_Transform, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x003FF8B0, LeverDirections__Enum, get_Direction, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x005065F0, LeverDirections__Enum, get_OriginalDirection, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00506600, void, set_OriginalDirection, (Lever * __this, LeverDirections__Enum value));
IL2CPP_REGISTER_METHOD(0x01133810, bool, get_NeedsToBeOnGround, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00855600, LeverMode__Enum, get_LeverType, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01133820, void, OnEnable, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x011338E0, void, OnDisable, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x011339A0, void, Awake, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01133CB0, void, OnDestroy, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01133EB0, void, Apply, (Lever * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x011340F0, IUberState__Array *, get_AffectingUberStates, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134230, List_1_UnityEngine_GameObject_ *, get_AllTargets, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134400, void, OnRestoreCheckpoint, (Lever * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F988, Lever_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01134410, void, OnEnterLever, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134440, void, OnExitLever, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134470, void, OnGrabLever, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134560, void, OnReleaseLever, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134660, void, OnPushLeverLeft, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x011348E0, void, OnPushLeverRight, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134B70, void, OnPushLeverMiddle, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134C60, void, FixedUpdate, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134CF0, float, GetGroundLevelOffset, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134D10, bool, get_CanTurn, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01134D30, void, HackyRotatingHandle, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01135370, void, ResetLever, (Lever * __this, LeverDirections__Enum direction));
IL2CPP_REGISTER_METHOD(0x01135420, void, SetHandleAngle, (Lever * __this, float angle));
IL2CPP_REGISTER_METHOD(0x01135470, bool, PlayLeverAnimation, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00736690, void, set_Position, (Lever * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00A2A430, float, get_SeinPositionOffset, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01135480, void, SetLeverDirection, (Lever * __this, LeverDirections__Enum leverDirection));
IL2CPP_REGISTER_METHOD(0x005B0220, Action *, get_GrabLeverEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_GrabLeverEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00418200, Action *, get_ReleaseLeverEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x008760C0, void, set_ReleaseLeverEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0049F2B0, Action *, get_LeverLeftEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x006A6390, void, set_LeverLeftEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x006A63A0, Action *, get_LeverRightEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_LeverRightEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065FBA0, Action *, get_LeverLeftFailedEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_LeverLeftFailedEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065FBC0, Action *, get_LeverRightFailedEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_LeverRightFailedEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065FBE0, Action *, get_LeverMiddleEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_LeverMiddleEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00A64220, Action *, get_LeverEnterEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00510100, void, set_LeverEnterEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x005FDE00, Action *, get_LeverExitEvent, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_LeverExitEvent, (Lever * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x011354B0, Func_1_Boolean_ *, get_CanLeverLeft, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00D77860, void, set_CanLeverLeft, (Lever * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0071EAB0, Func_1_Boolean_ *, get_CanLeverRight, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00A43000, void, set_CanLeverRight, (Lever * __this, Func_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsSuspended, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x0101D2F0, void, set_IsSuspended, (Lever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0074F800, SuspendableMask__Enum, get_Mask, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x011354C0, void, set_Mask, (Lever * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01135580, bool, get_CanBeGrabbed, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01135670, void, AdjustLeverOnGround, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ());
IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnFrustumEnter, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00AB0300, void, OnFrustumExit, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_InsideFrustum, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01135A30, Bounds, get_Bounds, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_InvalidateParentTimelineCache, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_InvalidateParentTimelineCache, (Lever * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01135A50, void, OnDrawGizmos, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01135B10, IDesiredUberState *, GetRequirementsForTimeline, (Lever * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01135BB0, void, OnSceneRootPostEnable, (Lever * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x01135BC0, void, __ctor, (Lever * __this));
IL2CPP_REGISTER_METHOD(0x01136AB0, void, __cctor, ());
}
