#include <interception_macros.h>

namespace app::methods::PlayerDisabler {
    IL2CPP_REGISTER_METHOD(0x0140E520, void, OnEnable, (app::PlayerDisabler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0140E5D0, void, OnDisable, (app::PlayerDisabler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::PlayerDisabler * this_ptr));
}
