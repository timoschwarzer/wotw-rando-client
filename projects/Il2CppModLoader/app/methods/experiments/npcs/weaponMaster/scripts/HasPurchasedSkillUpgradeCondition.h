#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::experiments::npcs::weaponMaster::scripts::HasPurchasedSkillUpgradeCondition {
    IL2CPP_REGISTER_METHOD(0x00F59B50, bool, Validate, (app::HasPurchasedSkillUpgradeCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasPurchasedSkillUpgradeCondition * this_ptr))
}
