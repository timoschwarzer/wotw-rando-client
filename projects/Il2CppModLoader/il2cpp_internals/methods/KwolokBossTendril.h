#include <interception_macros.h>

namespace app::methods::KwolokBossTendril {
IL2CPP_REGISTER_METHOD(0x00989BF0, KwolokBossTendril_DurationType__Enum, get_Duration, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x0070DEC0, KwolokBossTendril_VariationType__Enum, get_Variation, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EBFA0, void, Awake, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC0B0, void, EnableColliders, (KwolokBossTendril * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x012EC1F0, void, UpdateColliderState, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x003FC380, KwolokBossTendril_State__Enum, get_CurrentState, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC230, void, set_CurrentState, (KwolokBossTendril * __this, KwolokBossTendril_State__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBC60, OrbSpawner *, get_OrbSpawnerComponent, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC400, bool, get_IsAttacking, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC420, void, OnEnable, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC8D0, void, OnDisable, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012ECDE0, void, OnDamageResultReceived, (KwolokBossTendril * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x0478AAB8, KwolokBossTendril_OnDamageResultReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ECF20, void, OnHealthChanged, (KwolokBossTendril * __this, float previous, float current));
IL2CPP_REGISTER_METHODINFO(0x0470E9E8, KwolokBossTendril_OnHealthChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ECF40, void, OnAttackTimelineStopped, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A9F0, KwolokBossTendril_OnAttackTimelineStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012ED0A0, void, FixedUpdate, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012ED250, void, ExecuteAttack, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012ED320, void, Break, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012ED550, void, OnRestoreCheckpoint, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHODINFO(0x047804D8, KwolokBossTendril_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterStateNone, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012ED680, void, OnEnterStateAttacking, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDA60, void, OnEnterStateHolding, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x00B85450, void, OnEnterStateDestroying, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDA90, void, OnEnterStateDestroyed, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitStateNone, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDB50, void, OnExitStateAttacking, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDD10, void, OnExitStateHolding, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDD30, void, OnExitStateDestroying, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitStateDestroyed, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDD50, void, OnUpdateStateNone, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateStateAttacking, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EDF60, void, OnUpdateStateHolding, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EE0A0, void, OnUpdateStateDestroying, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateStateDestroyed, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x012EC1F0, void, OnSceneRootPostEnable, (KwolokBossTendril * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x012EE0D0, void, __ctor, (KwolokBossTendril * __this));
IL2CPP_REGISTER_METHOD(0x015EB800, Object *, GetRandomEnumValue, (KwolokBossTendril * __this));
}
