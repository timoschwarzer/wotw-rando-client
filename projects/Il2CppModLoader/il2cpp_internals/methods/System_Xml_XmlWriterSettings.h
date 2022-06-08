#include <interception_macros.h>

namespace app::methods::System::Xml::XmlWriterSettings {
IL2CPP_REGISTER_METHOD(0x01FD6340, void, __ctor, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Async, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Encoding *, get_Encoding, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_OmitXmlDeclaration, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD6580, void, set_OmitXmlDeclaration, (XmlWriterSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00529E80, NewLineHandling__Enum, get_NewLineHandling, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_NewLineChars, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE20, bool, get_Indent, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD6620, void, set_Indent, (XmlWriterSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_IndentChars, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_NewLineOnAttributes, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_CloseOutput, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x006410F0, ConformanceLevel__Enum, get_ConformanceLevel, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD66D0, void, set_ConformanceLevel, (XmlWriterSettings * __this, ConformanceLevel__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0470D7A8, XmlWriterSettings_set_ConformanceLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_CheckCharacters, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x0057AAC0, NamespaceHandling__Enum, get_NamespaceHandling, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD67A0, void, set_NamespaceHandling, (XmlWriterSettings * __this, NamespaceHandling__Enum value));
IL2CPP_REGISTER_METHODINFO(0x047141A8, XmlWriterSettings_set_NamespaceHandling__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_WriteEndDocumentOnClose, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, XmlOutputMethod__Enum, get_OutputMethod, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_OutputMethod, (XmlWriterSettings * __this, XmlOutputMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x01FD6870, XmlWriterSettings *, Clone, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_System_Xml_XmlQualifiedName_ *, get_CDataSectionElements, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_DoNotEscapeUriAttributes, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_MergeCDataSections, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_MediaType, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_DocTypeSystem, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_DocTypePublic, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00C03C70, XmlStandalone__Enum, get_Standalone, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_AutoXmlDeclaration, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x00654950, TriState__Enum, get_IndentInternal, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD6A80, bool, get_IsQuerySpecific, (XmlWriterSettings * __this));
IL2CPP_REGISTER_METHOD(0x01FD6B30, XmlWriter *, CreateWriter, (XmlWriterSettings * __this, Stream * output));
IL2CPP_REGISTER_METHODINFO(0x04728D88, XmlWriterSettings_CreateWriter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD7820, XmlWriter *, CreateWriter, (XmlWriterSettings * __this, TextWriter * output));
IL2CPP_REGISTER_METHODINFO(0x04707068, XmlWriterSettings_CreateWriter_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01356A90, void, set_ReadOnly, (XmlWriterSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01FD8080, void, CheckReadOnly, (XmlWriterSettings * __this, String * propertyName));
IL2CPP_REGISTER_METHODINFO(0x0470F6C0, XmlWriterSettings_CheckReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD8180, void, Initialize, (XmlWriterSettings * __this));
}
