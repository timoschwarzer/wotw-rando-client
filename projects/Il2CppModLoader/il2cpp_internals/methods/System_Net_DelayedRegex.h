#include <interception_macros.h>

namespace app::methods::System_Net::DelayedRegex {
IL2CPP_REGISTER_METHOD(0x01EAC710, void, __ctor_1, (app::DelayedRegex * this_ptr, app::String * regex_string));
IL2CPP_REGISTER_METHODINFO(0x04764D00, DelayedRegex__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAC7D0, void, __ctor_2, (app::DelayedRegex * this_ptr, app::Regex * regex));
IL2CPP_REGISTER_METHODINFO(0x047313D8, DelayedRegex__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAC890, Regex *, get_AsRegex, (app::DelayedRegex * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EACA10, String *, ToString, (app::DelayedRegex * this_ptr));
}
