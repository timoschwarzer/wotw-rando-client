#include <interception_macros.h>

namespace app::methods::Moon::SkeetoPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E2CF70, void, OnEntityInitialized, (app::SkeetoPatrolBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E2D0D0, bool, IsPatrolPointValid, (app::SkeetoPatrolBehaviour * this_ptr, app::Vector3 target_position));
    IL2CPP_REGISTER_METHODINFO(0x04758D48, SkeetoPatrolBehaviour_IsPatrolPointValid__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00E2D470, void, __ctor, (app::SkeetoPatrolBehaviour * this_ptr));
}
