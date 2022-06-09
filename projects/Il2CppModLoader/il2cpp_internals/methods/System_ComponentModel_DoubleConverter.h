#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DoubleConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (app::DoubleConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE78C0, Type *, get_TargetType, (app::DoubleConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE7960, Object *, FromString_1, (app::DoubleConverter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FE7A60, Object *, FromString_2, (app::DoubleConverter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE7B30, Object *, FromString_3, (app::DoubleConverter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FE7C00, String *, ToString, (app::DoubleConverter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::DoubleConverter * this_ptr));
}
