#include <interception_macros.h>

namespace app::methods::TeleportDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::TeleportDebugMenuPage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Name, (app::TeleportDebugMenuPage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CE7CD0, void, Awake, (app::TeleportDebugMenuPage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CE7D70, void, GetItems, (app::TeleportDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_ * items));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GoToScene_1, (app::TeleportDebugMenuPage * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047166C8, TeleportDebugMenuPage_GoToScene__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00CE8550, bool, GoToScene_2, (app::TeleportDebugMenuPage * this_ptr, app::String * scene_name));
    IL2CPP_REGISTER_METHOD(0x00CE8580, app::IEnumerator *, GoToSceneRoutine, (app::String * scene_name, app::Action * on_complete));
    IL2CPP_REGISTER_METHOD(0x00CE86E0, void, __ctor, (app::TeleportDebugMenuPage * this_ptr));
}
