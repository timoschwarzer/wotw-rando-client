#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PointerUIBase {
IL2CPP_REGISTER_METHOD(0x0165F470, void, add_onHandlePointers, (PointerUIBase * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0165F560, void, remove_onHandlePointers, (PointerUIBase * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0165F650, void, add_onClick, (PointerUIBase * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0165F740, void, remove_onClick, (PointerUIBase * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0165F830, void, Awake, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x0165FD70, void, InputUpdate, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, OnApplicationFocus, (PointerUIBase * __this, bool focused));
IL2CPP_REGISTER_METHOD(0x0165FE70, void, FeedPointerState, (PointerUIBase * __this, PointerUIBase_PointerState state));
IL2CPP_REGISTER_METHOD(0x01660260, void, CalculatePointer, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01660700, void, OnGUI, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01660730, void, MouseIsOver, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01660780, void, MouseIsOff, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CursorUpdated, (PointerUIBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A5F0, PointerUIBase_CursorUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01660890, void, ForceKeyboardHasFocus, (PointerUIBase * __this, bool force));
IL2CPP_REGISTER_METHOD(0x016608D0, void, OnHandlePointers, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x016609C0, void, FeedTouchPointers, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01660B40, void, FeedMousePointer, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01660DF0, void, FeedFPS, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FeedVRPointers, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_MouseHasFocus, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_MouseHasFocus, (PointerUIBase * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01661300, Vector2, get_MousePosition, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x01661320, void, set_MousePosition, (PointerUIBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0062C500, MouseButton__Enum, get_MouseButtons, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x0062C510, void, set_MouseButtons, (PointerUIBase * __this, MouseButton__Enum value));
IL2CPP_REGISTER_METHOD(0x01661350, Vector2, get_MouseScroll, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x00EFE9D0, void, set_MouseScroll, (PointerUIBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_KeyboardHasFocus, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_KeyboardHasFocus, (PointerUIBase * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005E07A0, List_1_UnityEngine_Event_ *, get_KeyEvents, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, BrowserCursor *, get_BrowserCursor, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_BrowserCursor, (PointerUIBase * __this, BrowserCursor * value));
IL2CPP_REGISTER_METHOD(0x002FBD40, BrowserInputSettings *, get_InputSettings, (PointerUIBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_InputSettings, (PointerUIBase * __this, BrowserInputSettings * value));
IL2CPP_REGISTER_METHOD(0x01661370, void, __ctor, (PointerUIBase * __this));
}
