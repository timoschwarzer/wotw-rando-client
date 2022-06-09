#include <interception_macros.h>

namespace app::methods::SpawnOnKill {
    IL2CPP_REGISTER_METHOD(0x00EF5370, GameObject*, GetSpawnOnKillObjectsParent, ());
    IL2CPP_REGISTER_METHOD(0x00EF54F0, void, OnKill, (app::SpawnOnKill * this_ptr, app::Vector2 direction));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (app::SpawnOnKill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::SpawnOnKill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, GetPrewarmAmount, (app::SpawnOnKill * this_ptr, app::GameObject* entry));
    IL2CPP_REGISTER_METHOD(0x00EF5C80, void, __ctor, (app::SpawnOnKill * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
} // namespace app::methods::SpawnOnKill
