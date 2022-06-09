#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::SchemaAttDef {
IL2CPP_REGISTER_METHOD(0x016E7630, void, __ctor_1, (app::SchemaAttDef * this_ptr, app::XmlQualifiedName * name, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x016E7640, void, __ctor_2, (app::SchemaAttDef * this_ptr, app::XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x016E7650, void, __ctor_3, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E7660, String *, IDtdAttributeInfo_get_Prefix, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, IDtdAttributeInfo_get_LocalName, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, IDtdAttributeInfo_get_LineNumber, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, IDtdAttributeInfo_get_LinePosition, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E7670, bool, IDtdAttributeInfo_get_IsNonCDataType, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IDtdAttributeInfo_get_IsDeclaredInExternal, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E76A0, bool, IDtdAttributeInfo_get_IsXmlAttribute, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E76B0, String *, IDtdDefaultAttributeInfo_get_DefaultValueExpanded, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, IDtdDefaultAttributeInfo_get_DefaultValueTyped, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, IDtdDefaultAttributeInfo_get_ValueLineNumber, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, IDtdDefaultAttributeInfo_get_ValueLinePosition, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_LinePosition, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_LinePosition, (app::SchemaAttDef * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_LineNumber, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_LineNumber, (app::SchemaAttDef * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_ValueLinePosition, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_ValueLinePosition, (app::SchemaAttDef * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_ValueLineNumber, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF7C0, void, set_ValueLineNumber, (app::SchemaAttDef * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x016E76C0, String *, get_DefaultValueExpanded, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_DefaultValueExpanded, (app::SchemaAttDef * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x016E7750, XmlTokenizedType__Enum, get_TokenizedType, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E7780, void, set_TokenizedType, (app::SchemaAttDef * this_ptr, app::XmlTokenizedType__Enum value));
IL2CPP_REGISTER_METHOD(0x003FF8B0, SchemaAttDef_Reserve__Enum, get_Reserved, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_Reserved, (app::SchemaAttDef * this_ptr, app::SchemaAttDef_Reserve__Enum value));
IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_DefaultValueChecked, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, XmlSchemaAttribute *, get_SchemaAttribute, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_SchemaAttribute, (app::SchemaAttDef * this_ptr, app::XmlSchemaAttribute * value));
IL2CPP_REGISTER_METHOD(0x016E77A0, void, CheckXmlSpace, (app::SchemaAttDef * this_ptr, app::IValidationEventHandling * validation_event_handling));
IL2CPP_REGISTER_METHOD(0x016E7B40, SchemaAttDef *, Clone, (app::SchemaAttDef * this_ptr));
IL2CPP_REGISTER_METHOD(0x016E7C70, void, __cctor, ());
}
