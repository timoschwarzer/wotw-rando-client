#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinMeditateSpell_BalancingData {
    IL2CPP_REGISTER_METHOD(0x008A6C30, bool, get_Upgraded, (app::SeinMeditateSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6D10, float, get_HealthPercentagePerHeal, (app::SeinMeditateSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6D40, float, get_HealthPerHeal, (app::SeinMeditateSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6D70, float, get_EnergyPerHeal, (app::SeinMeditateSpell_BalancingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6DA0, void, ctor, (app::SeinMeditateSpell_BalancingData * this_ptr))
}
