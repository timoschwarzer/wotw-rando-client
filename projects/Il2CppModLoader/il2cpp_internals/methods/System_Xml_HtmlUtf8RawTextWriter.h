#include <interception_macros.h>

namespace app::methods::System_Xml::HtmlUtf8RawTextWriter {
    IL2CPP_REGISTER_METHOD(0x0199B690, void, __ctor, (app::HtmlUtf8RawTextWriter * this_ptr, app::Stream * stream, app::XmlWriterSettings * settings));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_1, (app::HtmlUtf8RawTextWriter * this_ptr, app::XmlStandalone__Enum standalone));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration_2, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * xmldecl));
    IL2CPP_REGISTER_METHOD(0x0199B6C0, void, WriteDocType, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * name, app::String * pubid, app::String * sysid, app::String * subset));
    IL2CPP_REGISTER_METHOD(0x0199BA90, void, WriteStartElement, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns));
    IL2CPP_REGISTER_METHOD(0x0199BC30, void, StartElementContent, (app::HtmlUtf8RawTextWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0199BC90, void, WriteEndElement, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns));
    IL2CPP_REGISTER_METHOD(0x0199BE20, void, WriteFullEndElement, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns));
    IL2CPP_REGISTER_METHOD(0x0199BFB0, void, WriteStartAttribute, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * prefix, app::String * local_name, app::String * ns));
    IL2CPP_REGISTER_METHOD(0x0199C1C0, void, WriteEndAttribute, (app::HtmlUtf8RawTextWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0199C240, void, WriteProcessingInstruction, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * target, app::String * text));
    IL2CPP_REGISTER_METHOD(0x0199C3B0, void, WriteString, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHOD(0x0199C450, void, WriteEntityRef, (app::HtmlUtf8RawTextWriter * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x0473A360, HtmlUtf8RawTextWriter_WriteEntityRef__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0199C4C0, void, WriteCharEntity, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHODINFO(0x0473E5F8, HtmlUtf8RawTextWriter_WriteCharEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0199C530, void, WriteSurrogateCharEntity, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t low_char, uint16_t high_char));
    IL2CPP_REGISTER_METHODINFO(0x047415F8, HtmlUtf8RawTextWriter_WriteSurrogateCharEntity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0199C5A0, void, WriteChars, (app::HtmlUtf8RawTextWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x0199C600, void, Init, (app::HtmlUtf8RawTextWriter * this_ptr, app::XmlWriterSettings * settings));
    IL2CPP_REGISTER_METHOD(0x0199C9B0, void, WriteMetaElement, (app::HtmlUtf8RawTextWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0199CB70, void, WriteHtmlElementTextBlock, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t * p_src, uint16_t * p_src_end));
    IL2CPP_REGISTER_METHOD(0x0199CB90, void, WriteHtmlAttributeTextBlock, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t * p_src, uint16_t * p_src_end));
    IL2CPP_REGISTER_METHOD(0x0199CBD0, void, WriteHtmlAttributeText, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t * p_src, uint16_t * p_src_end));
    IL2CPP_REGISTER_METHOD(0x0199CED0, void, WriteUriAttributeText, (app::HtmlUtf8RawTextWriter * this_ptr, uint16_t * p_src, uint16_t * p_src_end));
    IL2CPP_REGISTER_METHOD(0x0199D2F0, void, OutputRestAmps, (app::HtmlUtf8RawTextWriter * this_ptr));
}
