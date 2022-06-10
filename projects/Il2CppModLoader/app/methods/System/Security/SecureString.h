#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Security::SecureString {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01E1D750, void, ctor_1, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1D7E0, void, ctor_2, (app::SecureString * this_ptr, uint16_t * value, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x04745068, SecureString__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1D9A0, int32_t, get_Length, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477ED68, SecureString_get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1DA50, app::SecureString *, Copy, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1DC80, void, Dispose, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Encrypt, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Decrypt, (app::SecureString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1DCC0, void, Alloc, (app::SecureString * this_ptr, int32_t length, bool realloc))
    IL2CPP_REGISTER_METHODINFO(0x0473E488, SecureString_Alloc__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1DE70, app::Byte__Array *, GetBuffer, (app::SecureString * this_ptr))
}
