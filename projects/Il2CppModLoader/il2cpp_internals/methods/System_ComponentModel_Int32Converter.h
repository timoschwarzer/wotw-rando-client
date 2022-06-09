#include <interception_macros.h>

namespace app::methods::System_ComponentModel::Int32Converter {
IL2CPP_REGISTER_METHOD(0x01FEF4D0, Type *, get_TargetType, (app::Int32Converter * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FEF570, Object *, FromString_1, (app::Int32Converter * this_ptr, app::String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FEF630, Object *, FromString_2, (app::Int32Converter * this_ptr, app::String * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FEF6F0, Object *, FromString_3, (app::Int32Converter * this_ptr, app::String * value, app::CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FEF7A0, String *, ToString, (app::Int32Converter * this_ptr, app::Object * value, app::NumberFormatInfo * format_info));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (app::Int32Converter * this_ptr));
}
