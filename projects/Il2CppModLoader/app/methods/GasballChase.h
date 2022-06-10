#include <interception_macros.h>

namespace app::methods::GasballChase {
    IL2CPP_REGISTER_METHOD(0x0041B780, app::Vector3, get_TargetPos, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041C640, void, OnEntityInitialized, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041C730, void, OnEnter, (app::GasballChase * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0041C9A0, app::BehaviourStatus__Enum, OnExecute, (app::GasballChase * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0041D310, void, OnExit, (app::GasballChase * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0041D420, void, OnFailChaseBehaviour, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041D520, void, OnDrawGizmos, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041D8F0, void, ctor, (app::GasballChase * this_ptr))
}
