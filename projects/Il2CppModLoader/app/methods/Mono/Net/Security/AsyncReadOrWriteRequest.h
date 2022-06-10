#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Net::Security::AsyncReadOrWriteRequest {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::BufferOffsetSize *, get_UserBuffer, (app::AsyncReadOrWriteRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CurrentSize, (app::AsyncReadOrWriteRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_CurrentSize, (app::AsyncReadOrWriteRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0217C290, void, ctor, (app::AsyncReadOrWriteRequest * this_ptr, app::MobileAuthenticatedStream * parent, bool sync, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0217C420, app::String *, ToString, (app::AsyncReadOrWriteRequest * this_ptr))
}
