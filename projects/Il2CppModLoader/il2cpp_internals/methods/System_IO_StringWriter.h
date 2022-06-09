#include <interception_macros.h>

namespace app::methods::System_IO::StringWriter {
IL2CPP_REGISTER_METHOD(0x02384120, void, __ctor_1, (app::StringWriter * this_ptr));
IL2CPP_REGISTER_METHOD(0x023842C0, void, __ctor_2, (app::StringWriter * this_ptr, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x02384420, void, __ctor_3, (app::StringWriter * this_ptr, app::StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x023844F0, void, __ctor_4, (app::StringWriter * this_ptr, app::StringBuilder * sb, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHODINFO(0x0478A848, StringWriter__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02384600, void, Close, (app::StringWriter * this_ptr));
IL2CPP_REGISTER_METHOD(0x0089F980, void, Dispose, (app::StringWriter * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x02384620, Encoding *, get_Encoding, (app::StringWriter * this_ptr));
IL2CPP_REGISTER_METHOD(0x02384820, void, Write_1, (app::StringWriter * this_ptr, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02384850, void, Write_2, (app::StringWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047543F0, StringWriter_Write_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02384A60, void, Write_3, (app::StringWriter * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x02384AA0, String *, ToString, (app::StringWriter * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
