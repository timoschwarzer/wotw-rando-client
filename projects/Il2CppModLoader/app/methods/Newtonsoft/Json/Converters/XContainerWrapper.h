#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::XContainerWrapper {
    IL2CPP_REGISTER_METHOD(0x01A56230, app::XContainer *, get_Container, (app::XContainerWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XContainerWrapper * this_ptr, app::XContainer * container))
    IL2CPP_REGISTER_METHOD(0x01A56300, app::List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (app::XContainerWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A56660, bool, get_HasChildNodes, (app::XContainerWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A56690, app::IXmlNode *, get_ParentNode, (app::XContainerWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A566F0, app::IXmlNode *, WrapNode, (app::XObject * node))
    IL2CPP_REGISTER_METHOD(0x01A56DB0, app::IXmlNode *, AppendChild, (app::XContainerWrapper * this_ptr, app::IXmlNode * new_child))
}
