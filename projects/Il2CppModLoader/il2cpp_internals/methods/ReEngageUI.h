#include <interception_macros.h>

namespace app::methods::ReEngageUI {
    IL2CPP_REGISTER_METHOD(0x007306C0, ReEngageUI*, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x007307C0, bool, get_Ready, ());
    IL2CPP_REGISTER_METHOD(0x00730870, bool, get_Active, ());
    IL2CPP_REGISTER_METHOD(0x007308F0, void, set_Active, (bool value));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::ReEngageUI * this_ptr));
} // namespace app::methods::ReEngageUI
