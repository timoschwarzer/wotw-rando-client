#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::RSASignaturePadding {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor_1, (app::RSASignaturePadding * this_ptr, app::RSASignaturePaddingMode__Enum mode));
    IL2CPP_REGISTER_METHOD(0x028EDC00, app::RSASignaturePadding *, get_Pkcs1, ());
    IL2CPP_REGISTER_METHOD(0x028EDCA0, app::RSASignaturePadding *, get_Pss, ());
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RSASignaturePaddingMode__Enum, get_Mode, (app::RSASignaturePadding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::RSASignaturePadding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x028EDD40, bool, Equals_1, (app::RSASignaturePadding * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x028EDDF0, bool, Equals_2, (app::RSASignaturePadding * this_ptr, app::RSASignaturePadding * other));
    IL2CPP_REGISTER_METHOD(0x028EDEC0, bool, operator____1, (app::RSASignaturePadding * left, app::RSASignaturePadding * right));
    IL2CPP_REGISTER_METHOD(0x028EDEE0, bool, operator____2, (app::RSASignaturePadding * left, app::RSASignaturePadding * right));
    IL2CPP_REGISTER_METHOD(0x028EDFB0, app::String *, ToString, (app::RSASignaturePadding * this_ptr));
    IL2CPP_REGISTER_METHOD(0x028EE060, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x028EE280, void, __ctor_2, (app::RSASignaturePadding * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04731320, RSASignaturePadding__ctor_1__MethodInfo);
}
