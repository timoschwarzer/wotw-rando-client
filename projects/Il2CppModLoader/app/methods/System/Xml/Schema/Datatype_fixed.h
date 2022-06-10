#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_fixed {
    IL2CPP_REGISTER_METHOD(0x0235CEF0, app::Object *, ParseValue, (app::Datatype_fixed * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr))
    IL2CPP_REGISTER_METHODINFO(0x0478ACA8, Datatype_fixed_ParseValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0235D140, app::Exception *, TryParseValue, (app::Datatype_fixed * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x0235D310, void, ctor, (app::Datatype_fixed * this_ptr))
}
