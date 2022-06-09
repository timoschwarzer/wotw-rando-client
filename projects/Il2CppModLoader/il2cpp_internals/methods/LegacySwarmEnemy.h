#include <interception_macros.h>

namespace app::methods::LegacySwarmEnemy {
IL2CPP_REGISTER_METHOD(0x00A37EA0, bool, CanBeOptimized, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A37EE0, void, Awake, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A381B0, void, OnPreProcessDamage, (app::LegacySwarmEnemy * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04765D30, LegacySwarmEnemy_OnPreProcessDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A38350, void, Start, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A39320, bool, ShouldRun, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047790C8, LegacySwarmEnemy_ShouldRun__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39740, void, SetModeToSpawned, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A39750, void, FixedUpdate, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A39950, void, UpdateRotation, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A39C70, void, OnEnterIdle, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470E888, LegacySwarmEnemy_OnEnterIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39D40, void, OnEnterRun, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477F770, LegacySwarmEnemy_OnEnterRun__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39E10, void, OnExitIdle, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472FAE8, LegacySwarmEnemy_OnExitIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39EE0, void, OnExitRun, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04737228, LegacySwarmEnemy_OnExitRun__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39FB0, void, OnEnterSpawned, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477A540, LegacySwarmEnemy_OnEnterSpawned__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A39FE0, void, UpdateIdle, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047329E0, LegacySwarmEnemy_UpdateIdle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A3A0F0, void, UpdateRun, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04780028, LegacySwarmEnemy_UpdateRun__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSpawned, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04757E40, LegacySwarmEnemy_UpdateSpawned__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A3A490, void, OnDeath, (app::LegacySwarmEnemy * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x047012E0, LegacySwarmEnemy_OnDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A3A7C0, void, OnDestroy, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A3A8C0, void, __ctor, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A3AA10, bool, _Start_b__13_0, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04765BE8, LegacySwarmEnemy__Start_b__13_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Start_b__13_1, (app::LegacySwarmEnemy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04728260, LegacySwarmEnemy__Start_b__13_1__MethodInfo);
}
