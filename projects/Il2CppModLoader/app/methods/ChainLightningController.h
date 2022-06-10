#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ChainLightningController {
    IL2CPP_REGISTER_METHOD(0x0103BB20, void, Initialize, (app::ChainLightningController * this_ptr, app::DamageReceiver * first_damage_receiver, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x0103BF60, void, FindCandidate, (app::ChainLightningController * this_ptr, app::Vector3 origin))
    IL2CPP_REGISTER_METHOD(0x0103C930, void, DealChainLightningDamage, (app::ChainLightningController * this_ptr, app::EnemyEntity * enemy, app::DamageReceiver * damage_receiver, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChainLightningController * this_ptr))
}
