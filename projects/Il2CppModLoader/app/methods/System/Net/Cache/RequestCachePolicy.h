#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::Cache::RequestCachePolicy {
    IL2CPP_REGISTER_METHOD(0x020162E0, void, ctor, (app::RequestCachePolicy * this_ptr, app::RequestCacheLevel__Enum level))
    IL2CPP_REGISTER_METHODINFO(0x0473E2C8, RequestCachePolicy__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RequestCacheLevel__Enum, get_Level, (app::RequestCachePolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020163A0, app::String *, ToString, (app::RequestCachePolicy * this_ptr))
}
