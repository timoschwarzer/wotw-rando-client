#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AkCommonCommSettings {
    IL2CPP_REGISTER_METHOD(0x026D9790, void, CopyTo, (app::AkCommonCommSettings * this_ptr, app::AkCommunicationSettings * settings))
    IL2CPP_REGISTER_METHOD(0x026D9D20, void, ctor, (app::AkCommonCommSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D9DE0, void, cctor, ())
}
