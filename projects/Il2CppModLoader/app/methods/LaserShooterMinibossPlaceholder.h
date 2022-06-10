#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LaserShooterMinibossPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject *, get_Prefab, (app::LaserShooterMinibossPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::LaserShooterMinibossPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1C880, void, Spawn, (app::LaserShooterMinibossPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::LaserShooterMinibossPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1CB00, void, OnHealthZero, (app::LaserShooterMinibossPlaceholder * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00F1CB60, void, CreateCheckpoint, (app::LaserShooterMinibossPlaceholder * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00F1CCD0, void, ctor, (app::LaserShooterMinibossPlaceholder * this_ptr))
}
