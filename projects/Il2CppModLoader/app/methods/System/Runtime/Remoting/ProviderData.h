#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ProviderData {
    IL2CPP_REGISTER_METHOD(0x0231CA50, void, CopyFrom, (app::ProviderData * this_ptr, app::ProviderData * other))
    IL2CPP_REGISTER_METHOD(0x0231D110, void, ctor, (app::ProviderData * this_ptr))
}
