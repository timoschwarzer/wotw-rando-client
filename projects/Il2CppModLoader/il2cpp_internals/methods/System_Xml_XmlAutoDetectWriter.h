#include <interception_macros.h>

namespace app::methods::System::Xml::XmlAutoDetectWriter {
IL2CPP_REGISTER_METHOD(0x0195DDC0, void, __ctor, (XmlAutoDetectWriter * __this, XmlWriterSettings * writerSettings));
IL2CPP_REGISTER_METHOD(0x0195DF50, void, __ctor, (XmlAutoDetectWriter * __this, TextWriter * textWriter, XmlWriterSettings * writerSettings));
IL2CPP_REGISTER_METHOD(0x0195DF80, void, __ctor, (XmlAutoDetectWriter * __this, Stream * strm, XmlWriterSettings * writerSettings));
IL2CPP_REGISTER_METHOD(0x0195DFB0, void, WriteDocType, (XmlAutoDetectWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x0195E030, void, WriteStartElement, (XmlAutoDetectWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E1A0, void, WriteStartAttribute, (XmlAutoDetectWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E220, void, WriteEndAttribute, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195E250, void, WriteCData, (XmlAutoDetectWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0195E2B0, void, WriteComment, (XmlAutoDetectWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0195E300, void, WriteProcessingInstruction, (XmlAutoDetectWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x0195E350, void, WriteWhitespace, (XmlAutoDetectWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x0195E3A0, void, WriteString, (XmlAutoDetectWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01701610, void, WriteChars, (XmlAutoDetectWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195E400, void, WriteRaw, (XmlAutoDetectWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195E440, void, WriteRaw, (XmlAutoDetectWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x0195E4A0, void, WriteEntityRef, (XmlAutoDetectWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0195E500, void, WriteCharEntity, (XmlAutoDetectWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0195E560, void, WriteSurrogateCharEntity, (XmlAutoDetectWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x0195E5D0, void, WriteBase64, (XmlAutoDetectWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195E650, void, WriteBinHex, (XmlAutoDetectWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0195E6D0, void, Close, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195E720, void, Flush, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195E770, void, WriteValue, (XmlAutoDetectWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195E7D0, void, set_NamespaceResolver, (XmlAutoDetectWriter * __this, IXmlNamespaceResolver * value));
IL2CPP_REGISTER_METHOD(0x0195E820, void, WriteXmlDeclaration, (XmlAutoDetectWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x0195E880, void, WriteXmlDeclaration, (XmlAutoDetectWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x0195E8E0, void, StartElementContent, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195E910, void, WriteEndElement, (XmlAutoDetectWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E940, void, WriteFullEndElement, (XmlAutoDetectWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E970, void, WriteNamespaceDeclaration, (XmlAutoDetectWriter * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x0195E9E0, bool, get_SupportsNamespaceDeclarationInChunks, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195EA10, void, WriteStartNamespaceDeclaration, (XmlAutoDetectWriter * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x0195EA70, void, WriteEndNamespaceDeclaration, (XmlAutoDetectWriter * __this));
IL2CPP_REGISTER_METHOD(0x0195EAA0, bool, IsHtmlTag, (String * tagName));
IL2CPP_REGISTER_METHOD(0x0195EB80, void, EnsureWrappedWriter, (XmlAutoDetectWriter * __this, XmlOutputMethod__Enum outMethod));
IL2CPP_REGISTER_METHOD(0x0195EB90, bool, TextBlockCreatesWriter, (XmlAutoDetectWriter * __this, String * textBlock));
IL2CPP_REGISTER_METHOD(0x0195EC40, void, CreateWrappedWriter, (XmlAutoDetectWriter * __this, XmlOutputMethod__Enum outMethod));
}
