#include <interception_macros.h>

namespace app::methods::Microsoft_Win32::RegistryKeyComparer {
    IL2CPP_REGISTER_METHOD(0x023B61A0, bool, Equals, (app::RegistryKeyComparer * this_ptr, app::Object * x, app::Object * y));
    IL2CPP_REGISTER_METHOD(0x023B6300, int32_t, GetHashCode, (app::RegistryKeyComparer * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RegistryKeyComparer * this_ptr));
}
