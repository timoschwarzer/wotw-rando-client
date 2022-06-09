#include <interception_macros.h>

namespace app::methods::AutoDamageColliderResolver {
IL2CPP_REGISTER_METHOD(0x0085C410, void, Awake, (app::AutoDamageColliderResolver * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085C560, float, ResolveDamageFor, (app::AutoDamageColliderResolver * this_ptr, app::GameObject * game_object, app::GameWorldAreaID__Enum area_override));
IL2CPP_REGISTER_METHOD(0x0085C410, void, OnInstantiate, (app::AutoDamageColliderResolver * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::AutoDamageColliderResolver * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
