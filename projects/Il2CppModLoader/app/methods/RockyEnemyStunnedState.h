#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RockyEnemyStunnedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyStunnedState * this_ptr, app::RockyEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x013644B0, void, UpdateState, (app::RockyEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E870, void, OnEnter, (app::RockyEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemyStunnedState * this_ptr))
}
