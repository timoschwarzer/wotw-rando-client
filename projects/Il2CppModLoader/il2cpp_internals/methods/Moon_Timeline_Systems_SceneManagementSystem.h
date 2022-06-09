#include <interception_macros.h>

namespace app::methods::Moon_Timeline_Systems::SceneManagementSystem {
    IL2CPP_REGISTER_METHOD(0x00D094B0, void, IncreaseSceneEntityPlayCount, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D09510, void, SceneEntityPlaybackStarted, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * master_scene, app::FixedDurationSceneEntity * fixed_duration_scene_entity));
    IL2CPP_REGISTER_METHOD(0x004C4CE0, void, ResetSceneEntutyPlayCount, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D09520, void, SetSceneManagementMode, (app::SceneManagementSystem * this_ptr, app::ScenesManager_SceneManagementMode__Enum mode));
    IL2CPP_REGISTER_METHOD(0x00D095D0, bool, get_IsPlayingMasterTimeline, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_IncreasedSceneEntityPlayCountTime, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_IncreasedSceneEntityPlayCountTime, (app::SceneManagementSystem * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D09630, void, OnInit, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D097C0, void, IncreaseReferenceCount, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHOD(0x00D09A30, void, OnUpdate, (app::SceneManagementSystem * this_ptr, float delta));
    IL2CPP_REGISTER_METHOD(0x00D0A230, void, Enable, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data, app::Action * enabled_callback));
    IL2CPP_REGISTER_METHODINFO(0x04710788, SceneManagementSystem_Enable__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00D0A520, void, Unsuspend, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHOD(0x00D0A640, bool, IsLoaded, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHODINFO(0x04756CD8, SceneManagementSystem_IsLoaded__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00D0A760, bool, IsEnabled, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHODINFO(0x0476AAF8, SceneManagementSystem_IsEnabled__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00D0A880, bool, IsSceneSuspended, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHODINFO(0x04743428, SceneManagementSystem_IsSceneSuspended__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00D0A9A0, void, FlagEnabled, (app::SceneManagementSystem * this_ptr, app::RuntimeSceneMetaData * meta_data));
    IL2CPP_REGISTER_METHOD(0x00417920, app::SuspendableMask__Enum, get_Mask, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Mask, (app::SceneManagementSystem * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::SceneManagementSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::SceneManagementSystem * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00D0AA90, void, __ctor, (app::SceneManagementSystem * this_ptr));
}
