#include <interception_macros.h>

namespace app::methods::AkBasePathGetter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetCustomPlatformName, (app::String * * platform_name));
IL2CPP_REGISTER_METHOD(0x026CE960, String *, GetPlatformName, ());
IL2CPP_REGISTER_METHOD(0x026CEA20, String *, GetPlatformBasePath, ());
IL2CPP_REGISTER_METHOD(0x026CEC70, String *, GetFullSoundBankPath, ());
IL2CPP_REGISTER_METHOD(0x026CEDF0, void, FixSlashes_1, (app::String * * path, uint16_t separator_char, uint16_t bad_char, bool add_trailing_slash));
IL2CPP_REGISTER_METHOD(0x026CEFA0, void, FixSlashes_2, (app::String * * path));
IL2CPP_REGISTER_METHOD(0x026CF0B0, String *, GetSoundbankBasePath, ());
IL2CPP_REGISTER_METHOD(0x026CF210, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AkBasePathGetter * this_ptr));
IL2CPP_REGISTER_METHOD(0x026CF2C0, void, __cctor, ());
}
