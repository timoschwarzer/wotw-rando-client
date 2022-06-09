#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::PasswordDeriveBytes {
IL2CPP_REGISTER_METHOD(0x020DFA80, void, __ctor_1, (app::PasswordDeriveBytes * this_ptr, app::String * str_password, app::Byte__Array * rgb_salt));
IL2CPP_REGISTER_METHOD(0x020DFC70, void, __ctor_2, (app::PasswordDeriveBytes * this_ptr, app::Byte__Array * password, app::Byte__Array * salt));
IL2CPP_REGISTER_METHOD(0x020DFE60, void, __ctor_3, (app::PasswordDeriveBytes * this_ptr, app::String * str_password, app::Byte__Array * rgb_salt, app::String * str_hash_name, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x020E0010, void, __ctor_4, (app::PasswordDeriveBytes * this_ptr, app::Byte__Array * password, app::Byte__Array * salt, app::String * hash_name, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x020E01C0, void, __ctor_5, (app::PasswordDeriveBytes * this_ptr, app::String * str_password, app::Byte__Array * rgb_salt, app::CspParameters * csp_params));
IL2CPP_REGISTER_METHOD(0x020E0290, void, __ctor_6, (app::PasswordDeriveBytes * this_ptr, app::Byte__Array * password, app::Byte__Array * salt, app::CspParameters * csp_params));
IL2CPP_REGISTER_METHOD(0x020E0360, void, __ctor_7, (app::PasswordDeriveBytes * this_ptr, app::String * str_password, app::Byte__Array * rgb_salt, app::String * str_hash_name, int32_t iterations, app::CspParameters * csp_params));
IL2CPP_REGISTER_METHOD(0x020E0500, void, __ctor_8, (app::PasswordDeriveBytes * this_ptr, app::Byte__Array * password, app::Byte__Array * salt, app::String * hash_name, int32_t iterations, app::CspParameters * csp_params));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_HashName, (app::PasswordDeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x020E07D0, void, set_HashName, (app::PasswordDeriveBytes * this_ptr, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04791A40, PasswordDeriveBytes_set_HashName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_IterationCount, (app::PasswordDeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x020E0940, void, set_IterationCount, (app::PasswordDeriveBytes * this_ptr, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04744938, PasswordDeriveBytes_set_IterationCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0AA0, Byte__Array *, get_Salt, (app::PasswordDeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x020E0BF0, void, set_Salt, (app::PasswordDeriveBytes * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0475B698, PasswordDeriveBytes_set_Salt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0DC0, Byte__Array *, GetBytes, (app::PasswordDeriveBytes * this_ptr, int32_t cb));
IL2CPP_REGISTER_METHODINFO(0x0474C488, PasswordDeriveBytes_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0F60, void, Reset, (app::PasswordDeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x020E0F70, void, Dispose, (app::PasswordDeriveBytes * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x020E10A0, Byte__Array *, CryptDeriveKey, (app::PasswordDeriveBytes * this_ptr, app::String * algname, app::String * alghashname, int32_t key_size, app::Byte__Array * rgb_i_v));
IL2CPP_REGISTER_METHODINFO(0x04731EA0, PasswordDeriveBytes_CryptDeriveKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E1190, Byte__Array *, ComputeBaseValue, (app::PasswordDeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x020E13B0, Byte__Array *, ComputeBytes, (app::PasswordDeriveBytes * this_ptr, int32_t cb));
IL2CPP_REGISTER_METHOD(0x020E19A0, void, HashPrefix, (app::PasswordDeriveBytes * this_ptr, app::CryptoStream * cs));
IL2CPP_REGISTER_METHODINFO(0x04774568, PasswordDeriveBytes_HashPrefix__MethodInfo);
}
