#include <interception_macros.h>

namespace app::methods::System_ComponentModel::NullableConverter {
IL2CPP_REGISTER_METHOD(0x02991010, void, __ctor, (app::NullableConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x0475FB10, NullableConverter__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02991160, bool, CanConvertFrom, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type));
IL2CPP_REGISTER_METHOD(0x02991250, Object *, ConvertFrom, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value));
IL2CPP_REGISTER_METHOD(0x029913A0, bool, CanConvertTo, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * destination_type));
IL2CPP_REGISTER_METHOD(0x029914C0, Object *, ConvertTo, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value, app::Type * destination_type));
IL2CPP_REGISTER_METHODINFO(0x0476C3C8, NullableConverter_ConvertTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029918E0, Object *, CreateInstance, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::IDictionary * property_values));
IL2CPP_REGISTER_METHOD(0x02991900, bool, GetCreateInstanceSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991920, PropertyDescriptorCollection *, GetProperties, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x02991950, bool, GetPropertiesSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991970, TypeConverter_StandardValuesCollection *, GetStandardValues, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991CC0, bool, GetStandardValuesExclusive, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x023A0050, bool, GetStandardValuesSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context));
IL2CPP_REGISTER_METHOD(0x02991CE0, bool, IsValid, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext * context, app::Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_NullableType, (app::NullableConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_UnderlyingType, (app::NullableConverter * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, TypeConverter *, get_UnderlyingTypeConverter, (app::NullableConverter * this_ptr));
}
