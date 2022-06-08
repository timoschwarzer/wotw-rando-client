#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI {
IL2CPP_REGISTER_METHOD(0x01DCE780, ClickMeshBrowserUI *, Create, (MeshCollider * meshCollider));
IL2CPP_REGISTER_METHOD(0x01DCE880, void, Awake, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCEB90, Ray, get_LookRay, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCEC90, void, InputUpdate, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCF4C0, void, OnGUI, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCF6E0, void, LookOn, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCF720, void, LookOff, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCF760, void, CursorUpdated, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHODINFO(0x04749F48, ClickMeshBrowserUI_CursorUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DCF780, void, SetCursor, (ClickMeshBrowserUI * __this, BrowserCursor * newCursor));
IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_MouseHasFocus, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_MouseHasFocus, (ClickMeshBrowserUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01464270, Vector2, get_MousePosition, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01464290, void, set_MousePosition, (ClickMeshBrowserUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, MouseButton__Enum, get_MouseButtons, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_MouseButtons, (ClickMeshBrowserUI * __this, MouseButton__Enum value));
IL2CPP_REGISTER_METHOD(0x01056D40, Vector2, get_MouseScroll, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01056D60, void, set_MouseScroll, (ClickMeshBrowserUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_KeyboardHasFocus, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_KeyboardHasFocus, (ClickMeshBrowserUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_UnityEngine_Event_ *, get_KeyEvents, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, BrowserCursor *, get_BrowserCursor, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_BrowserCursor, (ClickMeshBrowserUI * __this, BrowserCursor * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, BrowserInputSettings *, get_InputSettings, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_InputSettings, (ClickMeshBrowserUI * __this, BrowserInputSettings * value));
IL2CPP_REGISTER_METHOD(0x01DCFA20, void, __ctor, (ClickMeshBrowserUI * __this));
IL2CPP_REGISTER_METHOD(0x01DCFC50, void, __cctor, ());
}
