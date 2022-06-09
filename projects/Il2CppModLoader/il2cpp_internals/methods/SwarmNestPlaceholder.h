#include <interception_macros.h>

namespace app::methods::SwarmNestPlaceholder {
IL2CPP_REGISTER_METHOD(0x01824830, void, OnStart, (app::SwarmNestPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x018248A0, void, Spawn, (app::SwarmNestPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x018248F0, void, SpawnSwarm, (app::SwarmNestPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x01824B50, void, BindSwarm, (app::SwarmNestPlaceholder * this_ptr, app::SwarmEntity * swarm_entity));
IL2CPP_REGISTER_METHOD(0x01824CA0, void, OnRestoreCheckpoint, (app::SwarmNestPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x01824DA0, void, __ctor, (app::SwarmNestPlaceholder * this_ptr));
}
