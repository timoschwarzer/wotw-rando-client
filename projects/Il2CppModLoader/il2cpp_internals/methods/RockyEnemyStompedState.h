#include <interception_macros.h>

namespace app::methods::RockyEnemyStompedState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (app::RockyEnemyStompedState * this_ptr, app::RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RockyEnemyStompedState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::RockyEnemyStompedState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemyStompedState * this_ptr));
IL2CPP_REGISTER_METHOD(0x013642A0, void, OnStomped, (app::RockyEnemyStompedState * this_ptr));
}
