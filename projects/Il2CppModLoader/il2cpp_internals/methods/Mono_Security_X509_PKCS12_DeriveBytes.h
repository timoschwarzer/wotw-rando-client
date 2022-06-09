#include <interception_macros.h>

namespace app::methods::Mono_Security_X509::PKCS12_DeriveBytes {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::PKCS12_DeriveBytes * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HashName_1, (app::PKCS12_DeriveBytes * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_IterationCount_1, (app::PKCS12_DeriveBytes * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x025E4300, void, set_Password_1, (app::PKCS12_DeriveBytes * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E4460, void, set_Salt_1, (app::PKCS12_DeriveBytes * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E45B0, void, Adjust_1, (app::PKCS12_DeriveBytes * this_ptr, app::Byte__Array * a, int32_t a_off, app::Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x025E46B0, Byte__Array *, Derive_1, (app::PKCS12_DeriveBytes * this_ptr, app::Byte__Array * diversifier, int32_t n));
IL2CPP_REGISTER_METHOD(0x025E4BE0, Byte__Array *, DeriveKey_1, (app::PKCS12_DeriveBytes * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4CA0, Byte__Array *, DeriveIV_1, (app::PKCS12_DeriveBytes * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4D60, Byte__Array *, DeriveMAC_1, (app::PKCS12_DeriveBytes * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x025E4E20, void, __cctor_1, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_2, (app::PKCS12_DeriveBytes_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_HashName, (app::PKCS12_DeriveBytes_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_HashName_2, (app::PKCS12_DeriveBytes_1 * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_IterationCount, (app::PKCS12_DeriveBytes_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_IterationCount_2, (app::PKCS12_DeriveBytes_1 * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x02934950, Byte__Array *, get_Password, (app::PKCS12_DeriveBytes_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02934A90, void, set_Password_2, (app::PKCS12_DeriveBytes_1 * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02934BF0, Byte__Array *, get_Salt, (app::PKCS12_DeriveBytes_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02934D30, void, set_Salt_2, (app::PKCS12_DeriveBytes_1 * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x025E45B0, void, Adjust_2, (app::PKCS12_DeriveBytes_1 * this_ptr, app::Byte__Array * a, int32_t a_off, app::Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x02934E80, Byte__Array *, Derive_2, (app::PKCS12_DeriveBytes_1 * this_ptr, app::Byte__Array * diversifier, int32_t n));
IL2CPP_REGISTER_METHOD(0x029353B0, Byte__Array *, DeriveKey_2, (app::PKCS12_DeriveBytes_1 * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x02935470, Byte__Array *, DeriveIV_2, (app::PKCS12_DeriveBytes_1 * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x02935530, Byte__Array *, DeriveMAC_2, (app::PKCS12_DeriveBytes_1 * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x029355F0, void, __cctor_2, ());
}
