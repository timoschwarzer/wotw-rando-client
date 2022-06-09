#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::FABRIKChain {
IL2CPP_REGISTER_METHOD(0x02053C10, bool, IsValid, (app::FABRIKChain * this_ptr, app::String * * message));
IL2CPP_REGISTER_METHOD(0x02053D20, void, Initiate, (app::FABRIKChain * this_ptr));
IL2CPP_REGISTER_METHOD(0x02053D80, void, Stage1, (app::FABRIKChain * this_ptr, app::FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x02053F10, void, Stage2, (app::FABRIKChain * this_ptr, app::Vector3 root_position, app::FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x02054230, Vector3, GetCentroid, (app::FABRIKChain * this_ptr, app::FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x020546D0, void, __ctor, (app::FABRIKChain * this_ptr));
}
