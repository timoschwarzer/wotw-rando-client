#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityAction_1_UnityEngine_SceneManagement_Scene_ {
    IL2CPP_REGISTER_METHOD(0x02AC77B0, void, Invoke, (app::UnityAction_1_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Scene arg0))
    IL2CPP_REGISTER_METHODINFO(0x0473AFD0, UnityAction_1_UnityEngine_SceneManagement_Scene__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_1_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02AC7AE0, app::IAsyncResult *, BeginInvoke, (app::UnityAction_1_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Scene arg0, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_1_UnityEngine_SceneManagement_Scene_ * this_ptr, app::IAsyncResult * result))
}
