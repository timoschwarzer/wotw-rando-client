#include <interception_macros.h>

namespace app::methods::System_Xml::XmlWriterSettings {
IL2CPP_REGISTER_METHOD(0x01FD6340, void, __ctor, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Async, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Encoding *, get_Encoding, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_OmitXmlDeclaration, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD6580, void, set_OmitXmlDeclaration, (app::XmlWriterSettings * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00529E80, NewLineHandling__Enum, get_NewLineHandling, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_NewLineChars, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AEDE20, bool, get_Indent, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD6620, void, set_Indent, (app::XmlWriterSettings * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_IndentChars, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_NewLineOnAttributes, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CloseOutput, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x006410F0, ConformanceLevel__Enum, get_ConformanceLevel, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD66D0, void, set_ConformanceLevel, (app::XmlWriterSettings * this_ptr, app::ConformanceLevel__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0470D7A8, XmlWriterSettings_set_ConformanceLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_CheckCharacters, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0057AAC0, NamespaceHandling__Enum, get_NamespaceHandling, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD67A0, void, set_NamespaceHandling, (app::XmlWriterSettings * this_ptr, app::NamespaceHandling__Enum value));
IL2CPP_REGISTER_METHODINFO(0x047141A8, XmlWriterSettings_set_NamespaceHandling__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_WriteEndDocumentOnClose, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD490, XmlOutputMethod__Enum, get_OutputMethod, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_OutputMethod, (app::XmlWriterSettings * this_ptr, app::XmlOutputMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x01FD6870, XmlWriterSettings *, Clone, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_System_Xml_XmlQualifiedName_ *, get_CDataSectionElements, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_DoNotEscapeUriAttributes, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_MergeCDataSections, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_MediaType, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_DocTypeSystem, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_DocTypePublic, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C03C70, XmlStandalone__Enum, get_Standalone, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_AutoXmlDeclaration, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, TriState__Enum, get_IndentInternal, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD6A80, bool, get_IsQuerySpecific, (app::XmlWriterSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FD6B30, XmlWriter *, CreateWriter_1, (app::XmlWriterSettings * this_ptr, app::Stream * output));
IL2CPP_REGISTER_METHODINFO(0x04728D88, XmlWriterSettings_CreateWriter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD7820, XmlWriter *, CreateWriter_2, (app::XmlWriterSettings * this_ptr, app::TextWriter * output));
IL2CPP_REGISTER_METHODINFO(0x04707068, XmlWriterSettings_CreateWriter_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01356A90, void, set_ReadOnly, (app::XmlWriterSettings * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x01FD8080, void, CheckReadOnly, (app::XmlWriterSettings * this_ptr, app::String * property_name));
IL2CPP_REGISTER_METHODINFO(0x0470F6C0, XmlWriterSettings_CheckReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD8180, void, Initialize, (app::XmlWriterSettings * this_ptr));
}
