#include <interception_macros.h>

namespace app::methods::System_Xml::XmlAsyncCheckReader {
IL2CPP_REGISTER_METHOD(0x002FA280, XmlReader *, get_CoreReader, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01957F10, XmlAsyncCheckReader *, CreateAsyncCheckWrapper, (app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x01958530, void, __ctor, (app::XmlAsyncCheckReader * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x01958610, void, CheckAsync, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473E190, XmlAsyncCheckReader_CheckAsync__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019586F0, XmlReaderSettings *, get_Settings, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958900, XmlNodeType__Enum, get_NodeType, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958940, String *, get_Name, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958980, String *, get_LocalName, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019589C0, String *, get_NamespaceURI, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958A00, String *, get_Prefix, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958A40, String *, get_Value, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958A80, int32_t, get_Depth, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958AC0, String *, get_BaseURI, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958B00, bool, get_IsEmptyElement, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958B40, bool, get_IsDefault, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958B80, uint16_t, get_QuoteChar, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958BC0, XmlSpace__Enum, get_XmlSpace, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958C00, String *, get_XmlLang, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958C40, IXmlSchemaInfo *, get_SchemaInfo, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958C80, Type *, get_ValueType, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958CC0, int32_t, get_AttributeCount, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958D00, String *, GetAttribute_1, (app::XmlAsyncCheckReader * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01958D50, String *, GetAttribute_2, (app::XmlAsyncCheckReader * this_ptr, app::String * name, app::String * namespace_u_r_i));
IL2CPP_REGISTER_METHOD(0x01958DB0, String *, GetAttribute_3, (app::XmlAsyncCheckReader * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x01958E00, bool, MoveToAttribute_1, (app::XmlAsyncCheckReader * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01958E50, void, MoveToAttribute_2, (app::XmlAsyncCheckReader * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x01958EA0, bool, MoveToFirstAttribute, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958EE0, bool, MoveToNextAttribute, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958F20, bool, MoveToElement, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958F60, bool, ReadAttributeValue, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958FA0, bool, Read, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01958FE0, bool, get_EOF, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959020, void, Close, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959060, ReadState__Enum_1, get_ReadState, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019590A0, void, Skip, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019590E0, XmlNameTable *, get_NameTable, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959120, String *, LookupNamespace, (app::XmlAsyncCheckReader * this_ptr, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x01959170, bool, get_CanResolveEntity, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019591B0, void, ResolveEntity, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019591F0, bool, get_CanReadValueChunk, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959230, int32_t, ReadValueChunk, (app::XmlAsyncCheckReader * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019592A0, String *, ReadString, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019592E0, XmlNodeType__Enum, MoveToContent, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959320, void, ReadStartElement, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959360, String *, ReadElementString, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019593A0, void, ReadEndElement, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019593E0, bool, IsStartElement, (app::XmlAsyncCheckReader * this_ptr, app::String * localname, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01959440, String *, ReadInnerXml, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959480, bool, get_HasAttributes, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x019594C0, void, Dispose, (app::XmlAsyncCheckReader * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x01959500, XmlNamespaceManager *, get_NamespaceManager, (app::XmlAsyncCheckReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01959540, IDtdInfo *, get_DtdInfo, (app::XmlAsyncCheckReader * this_ptr));
}
