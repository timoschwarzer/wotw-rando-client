#include <interception_macros.h>

namespace app::methods::Game::Attacking_DamageEffect {
IL2CPP_REGISTER_METHOD(0x01521EA0, GameObject *, Create, (app::Damage * damage, app::Transform * target, app::DamageBasedPrefabProvider * effect_provider));
IL2CPP_REGISTER_METHOD(0x01522100, GameObject *, CreateRotated, (app::Damage * damage, app::Transform * target, app::DamageBasedPrefabProvider * effect_provider));
}
