#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::ConfigHandler {
IL2CPP_REGISTER_METHOD(0x01AA0550, void, __ctor, (app::ConfigHandler * this_ptr, bool only_delayed_channels));
IL2CPP_REGISTER_METHOD(0x01AA0780, void, ValidatePath, (app::ConfigHandler * this_ptr, app::String * element, app::String__Array * paths));
IL2CPP_REGISTER_METHODINFO(0x047487F8, ConfigHandler_ValidatePath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA08A0, bool, CheckPath, (app::ConfigHandler * this_ptr, app::String * path));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartParsing, (app::ConfigHandler * this_ptr, app::SmallXmlParser * parser));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessingInstruction, (app::ConfigHandler * this_ptr, app::String * name, app::String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnIgnorableWhitespace, (app::ConfigHandler * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x01AA0A30, void, OnStartElement, (app::ConfigHandler * this_ptr, app::String * name, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04729218, ConfigHandler_OnStartElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA0B80, void, ParseElement, (app::ConfigHandler * this_ptr, app::String * name, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04787B88, ConfigHandler_ParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA1F20, void, OnEndElement, (app::ConfigHandler * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01AA1FC0, void, ReadCustomProviderData, (app::ConfigHandler * this_ptr, app::String * name, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA2480, void, ReadLifetine, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04775918, ConfigHandler_ReadLifetine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA2850, TimeSpan, ParseTime, (app::ConfigHandler * this_ptr, app::String * s));
IL2CPP_REGISTER_METHODINFO(0x04709AB0, ConfigHandler_ParseTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA2CF0, void, ReadChannel, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs, bool is_template));
IL2CPP_REGISTER_METHODINFO(0x04785990, ConfigHandler_ReadChannel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA33E0, ProviderData *, ReadProvider, (app::ConfigHandler * this_ptr, app::String * name, app::SmallXmlParser_IAttrList * attrs, bool is_template));
IL2CPP_REGISTER_METHODINFO(0x0478FF08, ConfigHandler_ReadProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA3B60, void, ReadClientActivated, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x047923C8, ConfigHandler_ReadClientActivated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA3E80, void, ReadServiceActivated, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA4130, void, ReadClientWellKnown, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA4400, void, ReadServiceWellKnown, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x0476AEA8, ConfigHandler_ReadServiceWellKnown__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA47C0, void, ReadInteropXml, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs, bool is_element));
IL2CPP_REGISTER_METHOD(0x01AA4A40, void, ReadPreload, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x0473DE88, ConfigHandler_ReadPreload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA4D10, String *, GetNotNull, (app::ConfigHandler * this_ptr, app::SmallXmlParser_IAttrList * attrs, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04716628, ConfigHandler_GetNotNull__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA4E30, String *, ExtractAssembly, (app::ConfigHandler * this_ptr, app::String * * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnChars, (app::ConfigHandler * this_ptr, app::String * ch));
IL2CPP_REGISTER_METHOD(0x01AA4F80, void, OnEndParsing, (app::ConfigHandler * this_ptr, app::SmallXmlParser * parser));
}
