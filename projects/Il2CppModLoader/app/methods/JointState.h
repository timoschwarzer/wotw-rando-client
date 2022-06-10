#include <interception_macros.h>

namespace app::methods::JointState {
    IL2CPP_REGISTER_METHOD(0x0064C5D0, void, Break, (app::JointState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064C820, app::Object *, Clone, (app::JointState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064CA60, void, ApplyState, (app::JointState * this_ptr, bool refresh_joint, bool check_for_disabled, bool force_refresh))
    IL2CPP_REGISTER_METHOD(0x0064D3D0, void, SaveJointState, (app::JointState * this_ptr, app::ConfigurableJoint * save_joint))
    IL2CPP_REGISTER_METHOD(0x0064D8A0, void, ctor, (app::JointState * this_ptr))
}
