#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::Datatype_NOTATION {
IL2CPP_REGISTER_METHOD(0x02356E60, XmlValueConverter *, CreateValueConverter, (app::Datatype_NOTATION * this_ptr, app::XmlSchemaType * schema_type));
IL2CPP_REGISTER_METHOD(0x02356E70, FacetsChecker *, get_FacetsChecker, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3EBF0, XmlTypeCode__Enum, get_TypeCode, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9A0, XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40570, RestrictionFlags__Enum, get_ValidRestrictionFlags, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x02356F10, Type *, get_ValueType, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x02356FB0, Type *, get_ListValueType, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x02357050, Exception *, TryParseValue, (app::Datatype_NOTATION * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value));
IL2CPP_REGISTER_METHOD(0x02357320, void, VerifySchemaValid, (app::Datatype_NOTATION * this_ptr, app::XmlSchemaObjectTable * notations, app::XmlSchemaObject * caller));
IL2CPP_REGISTER_METHODINFO(0x0473C240, Datatype_NOTATION_VerifySchemaValid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02357570, void, __ctor, (app::Datatype_NOTATION * this_ptr));
IL2CPP_REGISTER_METHOD(0x02357610, void, __cctor, ());
}
