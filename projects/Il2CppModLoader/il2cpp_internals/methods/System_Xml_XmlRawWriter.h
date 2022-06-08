#include <interception_macros.h>

namespace app::methods::System::Xml::XmlRawWriter {
IL2CPP_REGISTER_METHOD(0x01700F60, void, WriteStartDocument, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04794FC0, XmlRawWriter_WriteStartDocument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01700FD0, void, WriteStartDocument, (XmlRawWriter * __this, bool standalone));
IL2CPP_REGISTER_METHODINFO(0x04766730, XmlRawWriter_WriteStartDocument_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01701040, void, WriteEndDocument, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04783EF8, XmlRawWriter_WriteEndDocument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteDocType, (XmlRawWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x017010B0, void, WriteEndElement, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04708B80, XmlRawWriter_WriteEndElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01701120, void, WriteFullEndElement, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04730CA8, XmlRawWriter_WriteFullEndElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01701190, void, WriteBase64, (XmlRawWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01701330, String *, LookupPrefix, (XmlRawWriter * __this, String * ns));
IL2CPP_REGISTER_METHODINFO(0x0477A1D8, XmlRawWriter_LookupPrefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017013A0, WriteState__Enum, get_WriteState, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04747E70, XmlRawWriter_get_WriteState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01701410, void, WriteCData, (XmlRawWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01701430, void, WriteCharEntity, (XmlRawWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01701510, void, WriteSurrogateCharEntity, (XmlRawWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01701410, void, WriteWhitespace, (XmlRawWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, (XmlRawWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01701610, void, WriteRaw, (XmlRawWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01701410, void, WriteRaw, (XmlRawWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01701410, void, WriteValue, (XmlRawWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01701650, void, WriteAttributes, (XmlRawWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHODINFO(0x0476C7C8, XmlRawWriter_WriteAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017016C0, void, WriteNode, (XmlRawWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHODINFO(0x0476DB20, XmlRawWriter_WriteNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_NamespaceResolver, (XmlRawWriter * __this, IXmlNamespaceResolver * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (XmlRawWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (XmlRawWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRootElement, (XmlRawWriter * __this, ConformanceLevel__Enum conformanceLevel));
IL2CPP_REGISTER_METHOD(0x01701730, void, WriteFullEndElement, (XmlRawWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsNamespaceDeclarationInChunks, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHOD(0x01701750, void, WriteStartNamespaceDeclaration, (XmlRawWriter * __this, String * prefix));
IL2CPP_REGISTER_METHODINFO(0x0476B7F8, XmlRawWriter_WriteStartNamespaceDeclaration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017017A0, void, WriteEndNamespaceDeclaration, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x04755800, XmlRawWriter_WriteEndNamespaceDeclaration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017017F0, void, WriteEndBase64, (XmlRawWriter * __this));
IL2CPP_REGISTER_METHOD(0x01701810, void, Close, (XmlRawWriter * __this, WriteState__Enum currentState));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlRawWriter * __this));
}
