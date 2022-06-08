#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RNGCryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x028E3DB0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x028E3E20, void, __ctor, (RNGCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028E3ED0, void, __ctor, (RNGCryptoServiceProvider * __this, Byte__Array * rgb));
IL2CPP_REGISTER_METHOD(0x028E3F90, void, __ctor, (RNGCryptoServiceProvider * __this, CspParameters * cspParams));
IL2CPP_REGISTER_METHOD(0x028E4040, void, __ctor, (RNGCryptoServiceProvider * __this, String * str));
IL2CPP_REGISTER_METHOD(0x028E4150, void, Check, (RNGCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04735FD8, RNGCryptoServiceProvider_Check__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, RngOpen, ());
IL2CPP_REGISTER_METHOD(0x028E4210, void *, RngInitialize, (Byte__Array * seed));
IL2CPP_REGISTER_METHOD(0x028E4220, void *, RngGetBytes, (void * handle, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x028E42A0, void, RngClose, (void * handle));
IL2CPP_REGISTER_METHOD(0x028E42B0, void, GetBytes, (RNGCryptoServiceProvider * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04732F78, RNGCryptoServiceProvider_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E45A0, void, GetNonZeroBytes, (RNGCryptoServiceProvider * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04743750, RNGCryptoServiceProvider_GetNonZeroBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E47A0, void, Finalize, (RNGCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (RNGCryptoServiceProvider * __this, bool disposing));
}
