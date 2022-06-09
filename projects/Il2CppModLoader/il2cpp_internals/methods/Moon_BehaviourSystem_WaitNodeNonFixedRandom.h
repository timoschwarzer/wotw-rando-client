#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::WaitNodeNonFixedRandom {
IL2CPP_REGISTER_METHOD(0x00CBB5C0, float, get_TimeRemaining, (app::WaitNodeNonFixedRandom * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBB630, float, get_TimeRemainingNormalized, (app::WaitNodeNonFixedRandom * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBB680, void, Awake, (app::WaitNodeNonFixedRandom * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBB6E0, void, OnEnter, (app::WaitNodeNonFixedRandom * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CBB7D0, BehaviourStatus__Enum, OnExecute, (app::WaitNodeNonFixedRandom * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00CBB810, void, __ctor, (app::WaitNodeNonFixedRandom * this_ptr));
}
