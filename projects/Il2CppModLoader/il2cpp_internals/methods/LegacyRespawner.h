#include <interception_macros.h>

namespace app::methods::LegacyRespawner {
IL2CPP_REGISTER_METHOD(0x00A32B00, void, UpdateRespawners, ());
IL2CPP_REGISTER_METHOD(0x00A32C70, void, ProvideComponents, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (app::LegacyRespawner * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A32D00, void, set_Mask, (app::LegacyRespawner * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A32DC0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00A32EA0, void, Awake, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33130, void, OnDestroy, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33370, void, OnSceneStartLateBeforeSerialize, (app::LegacyRespawner * this_ptr, app::SceneRoot * scene_root));
IL2CPP_REGISTER_METHODINFO(0x04775EF8, LegacyRespawner_OnSceneStartLateBeforeSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A334F0, void, Start, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33860, void, OnEnable, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33A00, void, OnDisable, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33BA0, void, OnRestoreCheckpoint, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04720090, LegacyRespawner_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A33BB0, void, PerformRespawnOffscreen, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33CE0, void, Prepare, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A33DC0, void, OnTargetDestroyed_1, (app::LegacyRespawner * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A33DC0, void, OnTargetDestroyed_2, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04769620, LegacyRespawner_OnTargetDestroyed_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A33E90, void, UpdateRespawner, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A34110, bool, get_IsOnScreen, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A34340, void, PerformTimedRespawn, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A34630, void, PerformRespawn, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A34660, void, Serialize, (app::LegacyRespawner * this_ptr, app::Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A34750, void, __ctor, (app::LegacyRespawner * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A34770, void, __cctor, ());
}
