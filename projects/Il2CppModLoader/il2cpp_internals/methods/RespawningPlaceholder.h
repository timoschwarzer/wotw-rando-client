#include <interception_macros.h>

namespace app::methods::RespawningPlaceholder {
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetCurrentEntity, (app::RespawningPlaceholder * this_ptr, app::LegacyEntity * entity));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CheckForOverlap, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanSpawn, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00908CA0, void, DestroyCurrentInstance, (app::RespawningPlaceholder * this_ptr, bool destroy));
    IL2CPP_REGISTER_METHOD(0x00908DB0, void, Spawn, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009090E0, void, Awake, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00909510, void, OnEnable, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009097A0, void, OnDisable, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00909990, void, OnRestoreCheckpoint, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04732C28, RespawningPlaceholder_OnRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x009099A0, void, OnDestroy, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00909C80, void, OnGameSerializeLoad, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04710B90, RespawningPlaceholder_OnGameSerializeLoad__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00909C90, void, OnSceneRootDisabled, (app::RespawningPlaceholder * this_ptr, app::SceneRoot * scene_root));
    IL2CPP_REGISTER_METHODINFO(0x047647F8, RespawningPlaceholder_OnSceneRootDisabled__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00909E10, void, OnDeath, (app::RespawningPlaceholder * this_ptr, app::Damage * damage));
    IL2CPP_REGISTER_METHODINFO(0x0474DF98, RespawningPlaceholder_OnDeath__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x004E57D0, bool, get_EntityIsDead, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008009A0, void, FixedUpdate, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_NeedsToRespawn, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00909F30, void, UpdateSpawnState, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A280, bool, get_IsOnScreen, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A460, void, PerformRespawn, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A470, void, PerformTimedRespawn, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::LegacyEntity *, get_CurrentEntity, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::RespawningPlaceholder * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x003FF7D0, app::SuspendableMask__Enum, get_Mask, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A480, void, set_Mask, (app::RespawningPlaceholder * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A530, void, __ctor, (app::RespawningPlaceholder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090A720, void, __cctor, ());
}
