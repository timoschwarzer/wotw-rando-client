#include <interception_macros.h>

namespace app::methods::CleverMenuItem {
IL2CPP_REGISTER_METHOD(0x012AD8C0, Transform *, get_Transform, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AD980, void, add_HighlightCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x012ADA70, void, remove_HighlightCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x012ADB60, void, add_HighlightBCallback, (CleverMenuItem * __this, Action_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x012ADC50, void, remove_HighlightBCallback, (CleverMenuItem * __this, Action_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x012ADD40, void, add_UnhighlightCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x012ADE30, void, remove_UnhighlightCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x012ADF20, void, add_PressedCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x012AE010, void, remove_PressedCallback, (CleverMenuItem * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, UsingNewTimeline, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE100, bool, get_IsDisabled, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE110, void, set_IsDisabled, (CleverMenuItem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012AE190, bool, get_IsVisible, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE270, bool, get_IsActivated, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE3C0, void, set_IsActivated, (CleverMenuItem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012AE3D0, bool, IsPerforming, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE4F0, void, Awake, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x011C4B90, void, Start, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE560, void, OnEnable, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE5A0, void, OnHighlight, (CleverMenuItem * __this, bool runActions));
IL2CPP_REGISTER_METHOD(0x012AE7C0, bool, get_IsHighlighted, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE7D0, void, OnUnhighlight, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AE9E0, void, OnPressed, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AEB20, void, TweenColor, (CleverMenuItem * __this, Color color));
IL2CPP_REGISTER_METHOD(0x012AEB50, void, FixedUpdate, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AEC40, void, ApplyStateImmediate, (CleverMenuItem * __this, bool on));
IL2CPP_REGISTER_METHOD(0x012AECC0, void, RunActiveAnimatorAccordingToState, (CleverMenuItem * __this, bool state));
IL2CPP_REGISTER_METHOD(0x012AEDF0, void, ApplyColors, (CleverMenuItem * __this, bool includeInactiveRenderers));
IL2CPP_REGISTER_METHOD(0x012AEF80, void, SetParentOpacity, (CleverMenuItem * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x012AEFA0, void, SetOpacity, (CleverMenuItem * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x012AEFC0, void, set_MaterialColor, (CleverMenuItem * __this, Color value));
IL2CPP_REGISTER_METHOD(0x012AF240, Vector3, get_Position, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AF2E0, void, RefreshVisible, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AF440, Rect, get_Bounds, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AF810, void, SetBounds, (CleverMenuItem * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x012AF8C0, bool, ExtraNavigationPressed, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AFBC0, bool, ExtraNavigationButtonPressed, (CleverMenuItem * __this, CleverMenuItem_ExtraNavigationButton__Enum button));
IL2CPP_REGISTER_METHOD(0x00A43000, void, SetSelectionManager, (CleverMenuItem * __this, CleverMenuItemSelectionManager * manager));
IL2CPP_REGISTER_METHOD(0x012AFD80, void, SelectIfNeeded, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012AFF90, bool, IsSelectedInManager, (CleverMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x012B0170, void, __ctor, (CleverMenuItem * __this));
}
