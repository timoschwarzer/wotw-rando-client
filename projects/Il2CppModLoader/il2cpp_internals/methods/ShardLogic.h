#include <interception_macros.h>

namespace app::methods::ShardLogic {
    IL2CPP_REGISTER_METHOD(0x005AAD40, float, CalculateCooldown, (float cooldown, app::AbilityType__Enum ability_type));
    IL2CPP_REGISTER_METHOD(0x005AAE70, bool, ShouldPierce, (int32_t count, app::AbilityType__Enum ability_type));
    IL2CPP_REGISTER_METHOD(0x005AAFB0, bool, GetExplosionBlastDamage, (app::GameObject * source, app::IAttackable * target, app::AbilityType__Enum ability_type, app::Damage * * damage));
    IL2CPP_REGISTER_METHOD(0x005AB650, int32_t, GetProjectilesCount, (app::AbilityType__Enum ability_type));
    IL2CPP_REGISTER_METHOD(0x005AB740, float, GetProjectilesDamageMultiplier, (app::AbilityType__Enum ability_type));
    IL2CPP_REGISTER_METHOD(0x005AB830, float, GetCurrentShardPropertyValue, (app::AbilityType__Enum ability_type, app::SpiritShardType__Enum shard_type, app::UpgradablePropertyType__Enum property_type));
    IL2CPP_REGISTER_METHOD(0x005ABA00, bool, GetCurrentBooleanShardPropertyValue, (app::AbilityType__Enum ability_type, app::SpiritShardType__Enum shard_type, app::UpgradablePropertyType__Enum property_type));
    IL2CPP_REGISTER_METHOD(0x005ABB20, bool, HasShardSettingsForPropertyForCurrentLevel, (app::AbilityType__Enum ability_type, app::SpiritShardType__Enum shard_type, app::UpgradablePropertyType__Enum property_type));
    IL2CPP_REGISTER_METHOD(0x005ABCC0, float, GetCurrentlGlobalShardPropertyValue, (app::SpiritShardType__Enum shard_type, app::UpgradablePropertyType__Enum property_type));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ShardLogic * this_ptr));
}
