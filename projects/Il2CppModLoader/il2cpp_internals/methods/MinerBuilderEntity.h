#include <interception_macros.h>

namespace app::methods::MinerBuilderEntity {
    IL2CPP_REGISTER_METHOD(0x01447310, void, OnAwake, (app::MinerBuilderEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014473B0, void, OnFixedUpdate, (app::MinerBuilderEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014475E0, void, ResolveDamage, (app::MinerBuilderEntity * this_ptr, app::DamageResult * damage_result));
    IL2CPP_REGISTER_METHOD(0x01447600, void, OnDamageReceived, (app::MinerBuilderEntity * this_ptr, app::DamageResult result));
    IL2CPP_REGISTER_METHOD(0x01447720, void, StartDialog, (app::MinerBuilderEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01447730, void, StopDialog, (app::MinerBuilderEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01447740, void, __ctor, (app::MinerBuilderEntity * this_ptr));
}
