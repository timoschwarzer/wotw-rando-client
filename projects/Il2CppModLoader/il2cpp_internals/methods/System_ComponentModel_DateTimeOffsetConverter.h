#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DateTimeOffsetConverter {
IL2CPP_REGISTER_METHOD(0x01FDFD00, bool, CanConvertFrom, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type));
IL2CPP_REGISTER_METHOD(0x01FDFDE0, bool, CanConvertTo, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type));
IL2CPP_REGISTER_METHOD(0x01FDFEC0, Object *, ConvertFrom, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04788338, DateTimeOffsetConverter_ConvertFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FE0200, Object *, ConvertTo, (app::DateTimeOffsetConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type));
IL2CPP_REGISTER_METHOD(0x01FE1160, void, __ctor, (app::DateTimeOffsetConverter * this_ptr));
}
