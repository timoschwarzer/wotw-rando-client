#include <interception_macros.h>

namespace app::methods::FaderB {
IL2CPP_REGISTER_METHOD(0x00738690, float, get_EditorDebugValue, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_EditorDebugValue, (FaderB * __this, float value));
IL2CPP_REGISTER_METHOD(0x00623240, float, get_Opacity, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00990ED0, void, Awake, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00990FF0, void, OnEnable, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00991100, void, ChangeState, (FaderB * __this, FaderB_State__Enum state));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, SetTimelineCallerType, (FaderB * __this, FaderAnimatorEntity_FaderType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00991170, void, UpdateState, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009914C0, void, Start, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00991500, void, OnFadeInFinished, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009915F0, void, OnFadeOutFinished, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00991620, void, FixedUpdate, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009916D0, void, HandlePanicReset, (FaderB * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x009919E0, void, SetOpacity, (FaderB * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x00991C90, float, OpacityCurveAdjustment, (FaderB * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x00991D50, void, DoBlackScreenCleanup, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00991F50, void, ScheduleGC, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00991FC0, void, ExecuteGCIfNeeded, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009921F0, UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum, GetTriggerType, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009922B0, bool, get_IsSuspended, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009922C0, void, set_IsSuspended, (FaderB * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009922D0, void, Fade, (FaderB * __this, float fadeInDuration, float fadeStayDuration, float fadeOutDuration, Action * fadeInComplete, Action * fadeOutComplete, bool skipCameraMoveToTarget));
IL2CPP_REGISTER_METHOD(0x009924E0, void, FadeIn, (FaderB * __this, float duration, Action * fadeInComplete));
IL2CPP_REGISTER_METHOD(0x00992600, void, FadeOut, (FaderB * __this, float duration, Action * fadeOutComplete));
IL2CPP_REGISTER_METHOD(0x00992720, void, DoFade, (FaderB * __this, FaderB_State__Enum state, float fadeInDuration, float fadeStayDuration, float fadeOutDuration));
IL2CPP_REGISTER_METHOD(0x009927B0, void, FadeIn, (FaderB * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00992820, void, FadeIn, (FaderB * __this, float duration, float stayDuration));
IL2CPP_REGISTER_METHOD(0x00992890, void, FadeOut, (FaderB * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00992900, void, TimelineSample, (FaderB * __this, float value));
IL2CPP_REGISTER_METHOD(0x009929F0, bool, IsFadingIn, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A00, bool, IsFadingOut, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A10, bool, IsFadingInOrStay, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A30, bool, IsFadingOutOrStay, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A50, bool, IsTimelineFading, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A60, bool, IsTimelineFadingAndActive, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A80, bool, IsActive, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992A90, bool, IsVisible, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x005065E0, void, BlockFader, (FaderB * __this, bool block));
IL2CPP_REGISTER_METHOD(0x00992AA0, void, DoCleanUpIsPossible, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x00992AB0, void, OnGUI, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x009935C0, void, __ctor, (FaderB * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
