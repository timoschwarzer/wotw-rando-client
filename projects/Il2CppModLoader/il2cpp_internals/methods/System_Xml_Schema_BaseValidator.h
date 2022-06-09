#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::BaseValidator {
IL2CPP_REGISTER_METHOD(0x019A5BB0, void, __ctor_1, (app::BaseValidator * this_ptr, app::BaseValidator * other));
IL2CPP_REGISTER_METHOD(0x019A5C10, void, __ctor_2, (app::BaseValidator * this_ptr, app::XmlValidatingReaderImpl * reader, app::XmlSchemaCollection * schema_collection, app::IValidationEventHandling * event_handling));
IL2CPP_REGISTER_METHOD(0x002FBB40, XmlValidatingReaderImpl *, get_Reader, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaCollection *, get_SchemaCollection, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlNameTable *, get_NameTable, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019A5DA0, SchemaNames *, get_SchemaNames, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, PositionInfo *, get_PositionInfo, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlResolver *, get_XmlResolver, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_XmlResolver, (app::BaseValidator * this_ptr, app::XmlResolver * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Uri *, get_BaseUri, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BaseUri, (app::BaseValidator * this_ptr, app::Uri * value));
IL2CPP_REGISTER_METHOD(0x019A5F30, ValidationEventHandler *, get_EventHandler, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, SchemaInfo *, get_SchemaInfo, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019A5FF0, void, set_DtdInfo, (app::BaseValidator * this_ptr, app::IDtdInfo * value));
IL2CPP_REGISTER_METHODINFO(0x0472D1A0, BaseValidator_set_DtdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_PreserveWhitespace, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Validate, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteValidation, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, FindId, (app::BaseValidator * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x019A6110, void, ValidateText, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019A6440, void, ValidateWhitespace, (app::BaseValidator * this_ptr));
IL2CPP_REGISTER_METHOD(0x019A65F0, void, SaveTextValue, (app::BaseValidator * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x019A6670, void, SendValidationEvent_1, (app::BaseValidator * this_ptr, app::String * code));
IL2CPP_REGISTER_METHOD(0x019A6710, void, SendValidationEvent_2, (app::BaseValidator * this_ptr, app::String * code, app::String__Array * args));
IL2CPP_REGISTER_METHOD(0x019A6910, void, SendValidationEvent_3, (app::BaseValidator * this_ptr, app::String * code, app::String * arg));
IL2CPP_REGISTER_METHOD(0x019A6B10, void, SendValidationEvent_4, (app::BaseValidator * this_ptr, app::XmlSchemaException * e));
IL2CPP_REGISTER_METHOD(0x019A6B20, void, SendValidationEvent_5, (app::BaseValidator * this_ptr, app::String * code, app::String * msg, app::XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A6D30, void, SendValidationEvent_6, (app::BaseValidator * this_ptr, app::String * code, app::String__Array * args, app::XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x019A6F40, void, SendValidationEvent_7, (app::BaseValidator * this_ptr, app::XmlSchemaException * e, app::XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHODINFO(0x04749C68, BaseValidator_SendValidationEvent_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7000, void, ProcessEntity_1, (app::SchemaInfo * sinfo, app::String * name, app::Object * sender, app::ValidationEventHandler * eventhandler, app::String * base_uri, int32_t line_number, int32_t line_position));
IL2CPP_REGISTER_METHODINFO(0x0472A110, BaseValidator_ProcessEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7510, void, ProcessEntity_2, (app::SchemaInfo * sinfo, app::String * name, app::IValidationEventHandling * event_handling, app::String * base_uri_str, int32_t line_number, int32_t line_position));
IL2CPP_REGISTER_METHODINFO(0x04784468, BaseValidator_ProcessEntity_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A7890, BaseValidator *, CreateInstance, (app::ValidationType__Enum val_type, app::XmlValidatingReaderImpl * reader, app::XmlSchemaCollection * schema_collection, app::IValidationEventHandling * event_handling, bool process_identity_constraints));
}
