#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinTurretSpell_BalancingData {
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_TimeBetweenBurstShots, (app::SeinTurretSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AA23D0, float, get_DelayBeforeNextBurst, (app::SeinTurretSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AA24C0, float, get_SpeedUpgradeLevelMultiplier, (app::SeinTurretSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AA25A0, void, ctor, (app::SeinTurretSpell_BalancingData * this_ptr))
}
