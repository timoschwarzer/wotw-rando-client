#include <interception_macros.h>

namespace app::methods::SpitterEnemyRunBackState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (app::SpitterEnemyRunBackState * this_ptr, app::SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x009A0130, void, UpdateState, (app::SpitterEnemyRunBackState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A0260, void, OnEnter, (app::SpitterEnemyRunBackState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A0320, void, OnExit, (app::SpitterEnemyRunBackState * this_ptr));
}
