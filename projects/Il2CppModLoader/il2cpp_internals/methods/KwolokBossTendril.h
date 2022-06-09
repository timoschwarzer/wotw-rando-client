#include <interception_macros.h>

namespace app::methods::KwolokBossTendril {
IL2CPP_REGISTER_METHOD(0x00989BF0, KwolokBossTendril_DurationType__Enum, get_Duration, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x0070DEC0, KwolokBossTendril_VariationType__Enum, get_Variation, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EBFA0, void, Awake, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC0B0, void, EnableColliders, (app::KwolokBossTendril * this_ptr, bool enable));
IL2CPP_REGISTER_METHOD(0x012EC1F0, void, UpdateColliderState, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FC380, KwolokBossTendril_State__Enum, get_CurrentState, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC230, void, set_CurrentState, (app::KwolokBossTendril * this_ptr, app::KwolokBossTendril_State__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBC60, OrbSpawner *, get_OrbSpawnerComponent, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC400, bool, get_IsAttacking, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC420, void, OnEnable, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC8D0, void, OnDisable, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012ECDE0, void, OnDamageResultReceived, (app::KwolokBossTendril * this_ptr, app::DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0478AAB8, KwolokBossTendril_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ECF20, void, OnHealthChanged, (app::KwolokBossTendril * this_ptr, float previous, float current));
IL2CPP_REGISTER_METHODINFO(0x0470E9E8, KwolokBossTendril_OnHealthChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ECF40, void, OnAttackTimelineStopped, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475A9F0, KwolokBossTendril_OnAttackTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ED0A0, void, FixedUpdate, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012ED250, void, ExecuteAttack, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012ED320, void, Break, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012ED550, void, OnRestoreCheckpoint, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047804D8, KwolokBossTendril_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterStateNone, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012ED680, void, OnEnterStateAttacking, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDA60, void, OnEnterStateHolding, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B85450, void, OnEnterStateDestroying, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDA90, void, OnEnterStateDestroyed, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitStateNone, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDB50, void, OnExitStateAttacking, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDD10, void, OnExitStateHolding, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDD30, void, OnExitStateDestroying, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitStateDestroyed, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDD50, void, OnUpdateStateNone, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateStateAttacking, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EDF60, void, OnUpdateStateHolding, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EE0A0, void, OnUpdateStateDestroying, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateStateDestroyed, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x012EC1F0, void, OnSceneRootPostEnable, (app::KwolokBossTendril * this_ptr, app::SceneRoot * scene_root));
IL2CPP_REGISTER_METHOD(0x012EE0D0, void, __ctor, (app::KwolokBossTendril * this_ptr));
IL2CPP_REGISTER_METHOD(0x015EB800, Object *, GetRandomEnumValue, (app::KwolokBossTendril * this_ptr));
}
