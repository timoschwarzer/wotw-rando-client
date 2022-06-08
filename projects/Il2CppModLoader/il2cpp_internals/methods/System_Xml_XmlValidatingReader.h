#include <interception_macros.h>

namespace app::methods::System::Xml::XmlValidatingReader {
IL2CPP_REGISTER_METHOD(0x016D9400, XmlNodeType__Enum, get_NodeType, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717030, String *, get_Name, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717060, String *, get_LocalName, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717090, String *, get_NamespaceURI, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x00442880, String *, get_Prefix, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017170C0, String *, get_Value, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_Depth, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717120, String *, get_BaseURI, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717180, bool, get_IsDefault, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017171E0, XmlSpace__Enum, get_XmlSpace, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717210, String *, get_XmlLang, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717240, int32_t, get_AttributeCount, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717270, String *, GetAttribute, (XmlValidatingReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x017172A0, String *, GetAttribute, (XmlValidatingReader * __this, String * localName, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x017172D0, String *, GetAttribute, (XmlValidatingReader * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01717300, bool, MoveToAttribute, (XmlValidatingReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01717330, void, MoveToAttribute, (XmlValidatingReader * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x01717360, bool, MoveToFirstAttribute, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717390, bool, MoveToNextAttribute, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017173C0, bool, MoveToElement, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017173F0, bool, ReadAttributeValue, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717420, bool, Read, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x016FB480, void, Close, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x016FB7D0, ReadState__Enum_1, get_ReadState, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017174B0, XmlNameTable *, get_NameTable, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017174E0, String *, LookupNamespace, (XmlValidatingReader * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanResolveEntity, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717520, void, ResolveEntity, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01FC90E0, String *, ReadString, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01FC9110, int32_t, get_LineNumber, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01FC9200, int32_t, get_LinePosition, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01FC92F0, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (XmlValidatingReader * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x01717620, String *, IXmlNamespaceResolver_LookupNamespace, (XmlValidatingReader * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01FC9310, String *, IXmlNamespaceResolver_LookupPrefix, (XmlValidatingReader * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x01FC9330, bool, get_Namespaces, (XmlValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717A70, IDtdInfo *, get_DtdInfo, (XmlValidatingReader * __this));
}
