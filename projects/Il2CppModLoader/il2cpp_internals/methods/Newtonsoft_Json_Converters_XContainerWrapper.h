#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Converters::XContainerWrapper {
IL2CPP_REGISTER_METHOD(0x01A56230, XContainer *, get_Container, (app::XContainerWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XContainerWrapper * this_ptr, app::XContainer * container));
IL2CPP_REGISTER_METHOD(0x01A56300, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (app::XContainerWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A56660, bool, get_HasChildNodes, (app::XContainerWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A56690, IXmlNode *, get_ParentNode, (app::XContainerWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A566F0, IXmlNode *, WrapNode, (app::XObject * node));
IL2CPP_REGISTER_METHOD(0x01A56DB0, IXmlNode *, AppendChild, (app::XContainerWrapper * this_ptr, app::IXmlNode * new_child));
}
