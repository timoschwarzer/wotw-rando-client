#include <interception_macros.h>

namespace app::methods::DeathUberStateManager {
    IL2CPP_REGISTER_METHOD(0x00DDEDC0, void, Awake, (app::DeathUberStateManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DDEF50, void, Register, (app::IDeathUberStateSetter * setter));
    IL2CPP_REGISTER_METHOD(0x00DDF010, void, Unregister, (app::IDeathUberStateSetter * setter));
    IL2CPP_REGISTER_METHOD(0x00DDF0D0, void, OnDestroy, (app::DeathUberStateManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DDF260, void, OnDeath, ());
    IL2CPP_REGISTER_METHODINFO(0x04783508, DeathUberStateManager_OnDeath__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::DeathUberStateManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DDF550, void, __cctor, ());
}
