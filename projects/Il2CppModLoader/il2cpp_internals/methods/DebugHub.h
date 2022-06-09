#include <interception_macros.h>

namespace app::methods::DebugHub {
    IL2CPP_REGISTER_METHOD(0x00DE59B0, bool, get_IsActive, ());
    IL2CPP_REGISTER_METHOD(0x00DE5AD0, void, set_IsActive, (bool value));
    IL2CPP_REGISTER_METHOD(0x00DE5F30, void, SuspendGameplay, ());
    IL2CPP_REGISTER_METHOD(0x00DE6070, void, ResumeGameplay, ());
    IL2CPP_REGISTER_METHOD(0x00DE61A0, bool, get_IsModalActive, ());
    IL2CPP_REGISTER_METHOD(0x00DE62C0, float, get_ItemWidth, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE6370, void, Awake, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE64C0, void, OnEnable, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE6690, void, OnDisable, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE6860, void, OnEndOfFrame, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04782980, DebugHub_OnEndOfFrame__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00DE6870, void, Draw, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE6CE0, void, _initializeItems, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE8D50, void, ActivateItemByName, (app::DebugHub * this_ptr, app::String* name));
    IL2CPP_REGISTER_METHOD(0x00DE8ED0, void, _layoutItems, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DE98D0, void, ToggleHub, ());
    IL2CPP_REGISTER_METHOD(0x00DE9C50, void, ActivateItem, (app::DebugHub * this_ptr, int32_t item_index));
    IL2CPP_REGISTER_METHOD(0x00DE9F90, void, FixedUpdate, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEA700, void, HideModal, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEAA00, void, OnGUI, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEAB30, void, Render, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEAF80, Material*, get_BaseMaterial, ());
    IL2CPP_REGISTER_METHOD(0x00DEB1F0, GUIStyle*, get_CenteredLabel, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEB580, GUIStyle*, get_CenteredLabelActive, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEB920, void, __ctor, (app::DebugHub * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DEBC00, void, __cctor, ());
} // namespace app::methods::DebugHub
