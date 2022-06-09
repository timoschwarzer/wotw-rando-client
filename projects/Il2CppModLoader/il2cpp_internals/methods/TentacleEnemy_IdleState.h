#include <interception_macros.h>

namespace app::methods::TentacleEnemy_IdleState {
IL2CPP_REGISTER_METHOD(0x00CF7AE0, String *, get_Name, (app::TentacleEnemy_IdleState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (app::TentacleEnemy_IdleState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (app::TentacleEnemy_IdleState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CF7B60, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_IdleState * this_ptr, app::TickData tick));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanEvadeSlash, (app::TentacleEnemy_IdleState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CF7E70, void, ModifyWiggleSettings, (app::TentacleEnemy_IdleState * this_ptr, app::TentacleEnemy_WiggleData * wiggle_settings));
IL2CPP_REGISTER_METHOD(0x00CF7ED0, void, __ctor, (app::TentacleEnemy_IdleState * this_ptr));
}
