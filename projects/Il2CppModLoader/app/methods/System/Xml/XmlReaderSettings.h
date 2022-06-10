#include <interception_macros.h>

namespace app::methods::System::Xml::XmlReaderSettings {
    IL2CPP_REGISTER_METHOD(0x01704870, void, ctor, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Async, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704880, void, set_Async, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlNameTable *, get_NameTable, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704920, void, set_NameTable, (app::XmlReaderSettings * this_ptr, app::XmlNameTable * value))
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_IsXmlResolverSet, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_IsXmlResolverSet, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x017049C0, void, set_XmlResolver, (app::XmlReaderSettings * this_ptr, app::XmlResolver * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlResolver *, GetXmlResolver, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704A60, app::XmlResolver *, GetXmlResolver_CheckConfig, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_LineNumberOffset, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704A70, void, set_LineNumberOffset, (app::XmlReaderSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_LinePositionOffset, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704B10, void, set_LinePositionOffset, (app::XmlReaderSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00654950, app::ConformanceLevel__Enum, get_ConformanceLevel, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704BB0, void, set_ConformanceLevel, (app::XmlReaderSettings * this_ptr, app::ConformanceLevel__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0473E660, XmlReaderSettings_set_ConformanceLevel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_CheckCharacters, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704C80, void, set_CheckCharacters, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_MaxCharactersInDocument, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704D20, void, set_MaxCharactersInDocument, (app::XmlReaderSettings * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x0473E140, XmlReaderSettings_set_MaxCharactersInDocument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, int64_t, get_MaxCharactersFromEntities, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704DF0, void, set_MaxCharactersFromEntities, (app::XmlReaderSettings * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04731C38, XmlReaderSettings_set_MaxCharactersFromEntities__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IgnoreWhitespace, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704EC0, void, set_IgnoreWhitespace, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_IgnoreProcessingInstructions, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01704F60, void, set_IgnoreProcessingInstructions, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_IgnoreComments, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01705000, void, set_IgnoreComments, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::DtdProcessing__Enum, get_DtdProcessing, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017050A0, void, set_DtdProcessing, (app::XmlReaderSettings * this_ptr, app::DtdProcessing__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0478BC28, XmlReaderSettings_set_DtdProcessing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_CloseInput, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01705170, void, set_CloseInput, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD490, app::ValidationType__Enum, get_ValidationType, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01705210, void, set_ValidationType, (app::XmlReaderSettings * this_ptr, app::ValidationType__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x047422F8, XmlReaderSettings_set_ValidationType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::XmlSchemaValidationFlags__Enum, get_ValidationFlags, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017052E0, void, set_ValidationFlags, (app::XmlReaderSettings * this_ptr, app::XmlSchemaValidationFlags__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0477A888, XmlReaderSettings_set_ValidationFlags__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017053B0, app::XmlSchemaSet *, get_Schemas, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01705510, void, set_Schemas, (app::XmlReaderSettings * this_ptr, app::XmlSchemaSet * value))
    IL2CPP_REGISTER_METHOD(0x017055B0, app::XmlReaderSettings *, Clone, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::ValidationEventHandler *, GetEventHandler, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017056E0, app::XmlReader *, CreateReader_1, (app::XmlReaderSettings * this_ptr, app::Stream * input, app::Uri * base_uri, app::String * base_uri_string, app::XmlParserContext * input_context))
    IL2CPP_REGISTER_METHODINFO(0x0471F9D8, XmlReaderSettings_CreateReader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01705940, app::XmlReader *, CreateReader_2, (app::XmlReaderSettings * this_ptr, app::TextReader * input, app::String * base_uri_string, app::XmlParserContext * input_context))
    IL2CPP_REGISTER_METHODINFO(0x04746708, XmlReaderSettings_CreateReader_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_ReadOnly, (app::XmlReaderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01705B30, void, CheckReadOnly, (app::XmlReaderSettings * this_ptr, app::String * property_name))
    IL2CPP_REGISTER_METHODINFO(0x0472F598, XmlReaderSettings_CheckReadOnly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01704870, void, Initialize_1, (app::XmlReaderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01705C30, void, Initialize_2, (app::XmlReaderSettings * this_ptr, app::XmlResolver * resolver))
    IL2CPP_REGISTER_METHOD(0x01705E30, app::XmlResolver *, CreateDefaultResolver, ())
    IL2CPP_REGISTER_METHOD(0x01705F70, app::XmlReader *, AddValidation, (app::XmlReaderSettings * this_ptr, app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x01706340, app::XmlValidatingReaderImpl *, CreateDtdValidatingReader, (app::XmlReaderSettings * this_ptr, app::XmlReader * base_reader))
    IL2CPP_REGISTER_METHOD(0x017064B0, bool, EnableLegacyXmlSettings, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
