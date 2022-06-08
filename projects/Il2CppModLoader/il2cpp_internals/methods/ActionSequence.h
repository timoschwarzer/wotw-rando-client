#include <interception_macros.h>

namespace app::methods::ActionSequence {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsRunning, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsRunning, (ActionSequence * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_Index, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Index, (ActionSequence * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5140, void, OnPoolSpawned, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5160, void, Awake, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5430, void, OnEnable, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C54D0, void, OnDisable, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5570, void, OnDestroy, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5840, void, OnGameReset, (ActionSequence * __this));
IL2CPP_REGISTER_METHODINFO(0x04703640, ActionSequence_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C5860, void, OnRestoreCheckpoint, (ActionSequence * __this));
IL2CPP_REGISTER_METHODINFO(0x04737D18, ActionSequence_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C5930, void, FindActions, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5D30, void, Perform, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C5D50, void, Perform, (ActionSequence * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x0471FCF0, ActionSequence_Perform_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C5F00, void, RunAction, (ActionSequence * __this, ActionMethod * action));
IL2CPP_REGISTER_METHOD(0x004C5FD0, void, OnUpdate, (ActionSequence * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x004C5FE0, void, UpdateActions, (ActionSequence * __this));
IL2CPP_REGISTER_METHODINFO(0x0475AF10, ActionSequence_UpdateActions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C6200, void, Rename, (List_1_ActionMethod_ * actions));
IL2CPP_REGISTER_METHOD(0x004C6480, String *, FormatName, (int32_t number, String * name));
IL2CPP_REGISTER_METHOD(0x004C6580, String *, UnformatName, (String * name));
IL2CPP_REGISTER_METHOD(0x004C65B0, void, RefreshNames, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C65D0, String *, GetNiceName, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (ActionSequence * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004C6660, SuspendableMask__Enum, get_Mask, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C6670, void, set_Mask, (ActionSequence * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004C6720, void, Stop, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsPerforming, (ActionSequence * __this));
IL2CPP_REGISTER_METHOD(0x004C6730, void, Serialize, (ActionSequence * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004C6820, void, __ctor, (ActionSequence * __this));
}
