#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02AC7C60, void, Invoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ * this_ptr, app::Scene arg0, app::Int32Enum__Enum arg1))
    IL2CPP_REGISTER_METHOD(0x02AC7FC0, app::IAsyncResult *, BeginInvoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ * this_ptr, app::Scene arg0, app::Int32Enum__Enum arg1, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ * this_ptr, app::IAsyncResult * result))
}
