#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XsdValidator {
IL2CPP_REGISTER_METHOD(0x01C83140, void, __ctor_1, (app::XsdValidator * this_ptr, app::BaseValidator * validator));
IL2CPP_REGISTER_METHOD(0x01C831B0, void, __ctor_2, (app::XsdValidator * this_ptr, app::XmlValidatingReaderImpl * reader, app::XmlSchemaCollection * schema_collection, app::IValidationEventHandling * event_handling));
IL2CPP_REGISTER_METHOD(0x01C831E0, void, Init, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C83880, void, Validate, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C83960, void, CompleteValidation, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsInlineSchemaStarted, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C83970, void, ProcessInlineSchema, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C83CE0, void, ValidateElement, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C83F80, Object *, ValidateChildElement, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C84240, void, ProcessElement, (app::XsdValidator * this_ptr, app::Object * particle));
IL2CPP_REGISTER_METHOD(0x01C84680, void, ProcessXsiAttributes, (app::XsdValidator * this_ptr, app::XmlQualifiedName * * xsi_type, app::String * * xsi_nil));
IL2CPP_REGISTER_METHOD(0x01C84E10, void, ValidateEndElement, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C85100, SchemaElementDecl *, FastGetElementDecl, (app::XsdValidator * this_ptr, app::Object * particle));
IL2CPP_REGISTER_METHOD(0x01C85220, SchemaElementDecl *, ThoroughGetElementDecl, (app::XsdValidator * this_ptr, app::SchemaElementDecl * element_decl, app::XmlQualifiedName * xsi_type, app::String * xsi_nil));
IL2CPP_REGISTER_METHOD(0x01C857C0, void, ValidateStartElement, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C86200, void, ValidateEndStartElement, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C86690, void, LoadSchemaFromLocation, (app::XsdValidator * this_ptr, app::String * uri, app::String * url));
IL2CPP_REGISTER_METHOD(0x01C86E60, void, LoadSchema, (app::XsdValidator * this_ptr, app::String * uri, app::String * url));
IL2CPP_REGISTER_METHODINFO(0x047925A8, XsdValidator_LoadSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C87090, bool, get_HasSchema, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C87110, void, ProcessTokenizedType, (app::XsdValidator * this_ptr, app::XmlTokenizedType__Enum ttype, app::String * name));
IL2CPP_REGISTER_METHOD(0x01C87420, void, CheckValue, (app::XsdValidator * this_ptr, app::String * value, app::SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01C878A0, void, AddID, (app::XsdValidator * this_ptr, app::String * name, app::Object * node));
IL2CPP_REGISTER_METHOD(0x01C87A40, Object *, FindId, (app::XsdValidator * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01C87A60, bool, IsXSDRoot, (app::XsdValidator * this_ptr, app::String * local_name, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01C87A80, void, Push, (app::XsdValidator * this_ptr, app::XmlQualifiedName * element_name));
IL2CPP_REGISTER_METHOD(0x01C87D00, void, Pop, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C87E80, void, CheckForwardRefs, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C88090, void, ValidateStartElementIdentityConstraints, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C880F0, bool, get_HasIdentityConstraints, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C88100, void, AddIdentityConstraints, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C889A0, void, ElementIdentityConstraints, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C88E50, void, AttributeIdentityConstraints, (app::XsdValidator * this_ptr, app::String * name, app::String * ns, app::Object * obj, app::String * sobj, app::SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01C89290, Object *, UnWrapUnion, (app::XsdValidator * this_ptr, app::Object * typed_value));
IL2CPP_REGISTER_METHOD(0x01C89360, void, EndElementIdentityConstraints, (app::XsdValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C8A720, void, __cctor, ());
}
