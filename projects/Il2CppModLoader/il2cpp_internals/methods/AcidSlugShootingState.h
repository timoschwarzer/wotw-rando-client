#include <interception_macros.h>

namespace app::methods::AcidSlugShootingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (app::AcidSlugShootingState * this_ptr, app::AcidSlugEnemy * slug));
IL2CPP_REGISTER_METHOD(0x004C4950, void, OnEnter, (app::AcidSlugShootingState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SpawnStarSpikes, (app::AcidSlugShootingState * this_ptr, app::Vector3 up, app::Vector3 right));
}
