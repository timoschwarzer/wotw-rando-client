#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::Schema::Datatype_yearMonthDuration {
    IL2CPP_REGISTER_METHOD(0x02363EE0, app::Exception *, TryParseValue, (app::Datatype_yearMonthDuration * this_ptr, app::String * s, app::XmlNameTable * name_table, app::IXmlNamespaceResolver * nsmgr, app::Object * * typed_value))
    IL2CPP_REGISTER_METHOD(0x00E406F0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_yearMonthDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023641D0, void, ctor, (app::Datatype_yearMonthDuration * this_ptr))
}
