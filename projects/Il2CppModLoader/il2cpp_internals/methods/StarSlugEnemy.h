#include <interception_macros.h>

namespace app::methods::StarSlugEnemy {
    IL2CPP_REGISTER_METHOD(0x009AF690, void, FixedUpdate, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009AF9B0, void, Awake, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009AFB50, void, OnDeath, (app::StarSlugEnemy * this_ptr, app::Damage * damage));
    IL2CPP_REGISTER_METHODINFO(0x0476DDE0, StarSlugEnemy_OnDeath__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x009AFE10, void, Start, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009B08C0, void, OnShoot, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04751940, StarSlugEnemy_OnShoot__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x009B0EB0, void, __ctor, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009B1000, bool, _Start_b__12_0, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470CED0, StarSlugEnemy__Start_b__12_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Start_b__12_2, (app::StarSlugEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047838A8, StarSlugEnemy__Start_b__12_2__MethodInfo);
}
