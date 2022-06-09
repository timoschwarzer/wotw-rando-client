#include <interception_macros.h>

namespace app::methods::UnityEngine_SceneManagement::SceneManager {
IL2CPP_REGISTER_METHOD(0x02979560, int32_t, get_sceneCount, ());
IL2CPP_REGISTER_METHOD(0x029795B0, int32_t, get_sceneCountInBuildSettings, ());
IL2CPP_REGISTER_METHOD(0x02979600, Scene, GetActiveScene, ());
IL2CPP_REGISTER_METHOD(0x02979660, bool, SetActiveScene, (app::Scene scene));
IL2CPP_REGISTER_METHOD(0x029796B0, Scene, GetSceneByPath, (app::String * scene_path));
IL2CPP_REGISTER_METHOD(0x02979720, Scene, GetSceneByName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x02979790, Scene, GetSceneAt, (int32_t index));
IL2CPP_REGISTER_METHOD(0x029797F0, Scene, CreateScene_1, (app::String * scene_name, app::CreateSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x02979860, AsyncOperation_1 *, UnloadSceneAsyncInternal, (app::Scene scene, app::UnloadSceneOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x029798C0, AsyncOperation_1 *, LoadSceneAsyncNameIndexInternal, (app::String * scene_name, int32_t scene_build_index, app::LoadSceneParameters parameters, bool must_complete_next_frame));
IL2CPP_REGISTER_METHOD(0x02979940, AsyncOperation_1 *, UnloadSceneNameIndexInternal, (app::String * scene_name, int32_t scene_build_index, bool immediately, app::UnloadSceneOptions__Enum options, app::bool * out_success));
IL2CPP_REGISTER_METHOD(0x029799D0, void, MoveGameObjectToScene, (app::GameObject * go, app::Scene scene));
IL2CPP_REGISTER_METHOD(0x02979A30, void, add_sceneLoaded, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ * value));
IL2CPP_REGISTER_METHOD(0x02979B30, void, remove_sceneLoaded, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ * value));
IL2CPP_REGISTER_METHOD(0x02979C30, void, add_activeSceneChanged, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * value));
IL2CPP_REGISTER_METHOD(0x02979D30, void, remove_activeSceneChanged, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * value));
IL2CPP_REGISTER_METHOD(0x02979E30, Scene, CreateScene_2, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x02979EA0, void, LoadScene_1, (app::String * scene_name, app::LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0241CD50, void, LoadScene_2, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x02979EC0, Scene, LoadScene_3, (app::String * scene_name, app::LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x02979FC0, void, LoadScene_4, (int32_t scene_build_index, app::LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A0C0, Scene, LoadScene_5, (int32_t scene_build_index, app::LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A1B0, AsyncOperation_1 *, LoadSceneAsync_1, (int32_t scene_build_index, app::LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A220, AsyncOperation_1 *, LoadSceneAsync_2, (int32_t scene_build_index, app::LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A280, AsyncOperation_1 *, LoadSceneAsync_3, (app::String * scene_name, app::LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A300, AsyncOperation_1 *, LoadSceneAsync_4, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x0297A370, AsyncOperation_1 *, LoadSceneAsync_5, (app::String * scene_name, app::LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A3E0, AsyncOperation_1 *, UnloadSceneAsync_1, (int32_t scene_build_index));
IL2CPP_REGISTER_METHOD(0x0297A4C0, AsyncOperation_1 *, UnloadSceneAsync_2, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x0297A530, AsyncOperation_1 *, UnloadSceneAsync_3, (app::Scene scene));
IL2CPP_REGISTER_METHOD(0x0297A590, void, Internal_SceneLoaded, (app::Scene scene, app::LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A640, void, Internal_SceneUnloaded, (app::Scene scene));
IL2CPP_REGISTER_METHOD(0x0297A6E0, void, Internal_ActiveSceneChanged, (app::Scene previous_active_scene, app::Scene new_active_scene));
IL2CPP_REGISTER_METHOD(0x0297A790, void, GetActiveScene_Injected, (app::Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A7E0, bool, SetActiveScene_Injected, (app::Scene * scene));
IL2CPP_REGISTER_METHOD(0x0297A830, void, GetSceneByPath_Injected, (app::String * scene_path, app::Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A890, void, GetSceneByName_Injected, (app::String * name, app::Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A8F0, void, GetSceneAt_Injected, (int32_t index, app::Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A950, void, CreateScene_Injected, (app::String * scene_name, app::CreateSceneParameters * parameters, app::Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A9C0, AsyncOperation_1 *, UnloadSceneAsyncInternal_Injected, (app::Scene * scene, app::UnloadSceneOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x0297AA20, AsyncOperation_1 *, LoadSceneAsyncNameIndexInternal_Injected, (app::String * scene_name, int32_t scene_build_index, app::LoadSceneParameters * parameters, bool must_complete_next_frame));
IL2CPP_REGISTER_METHOD(0x0297AAA0, void, MoveGameObjectToScene_Injected, (app::GameObject * go, app::Scene * scene));
}
