#include <interception_macros.h>

namespace app::methods::Microsoft_Win32::ExpandString {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::ExpandString * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (app::ExpandString * this_ptr));
IL2CPP_REGISTER_METHOD(0x023AE610, String *, Expand, (app::ExpandString * this_ptr));
}
