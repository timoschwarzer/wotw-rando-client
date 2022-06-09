#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_anySimpleType {
IL2CPP_REGISTER_METHOD(0x023582F0, XmlValueConverter *, CreateValueConverter, (app::Datatype_anySimpleType * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x02358390, FacetsChecker *, get_FacetsChecker, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x02358430, Type *, get_ValueType, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x008556D0, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x023584D0, Type *, get_ListValueType, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x02358570, int32_t, Compare, (app::Datatype_anySimpleType * this_ptr, app::Object * value1, app::Object * value2));
IL2CPP_REGISTER_METHOD(0x023586A0, Exception *, TryParseValue, (app::Datatype_anySimpleType * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x023586C0, void, __ctor, (app::Datatype_anySimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x02358750, void, __cctor, ());
}
