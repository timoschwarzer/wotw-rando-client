#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::NameValueHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D101C0, void, ctor_1, (app::NameValueHeaderValue * this_ptr, app::NameValueHeaderValue * source))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::NameValueHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Name, (app::NameValueHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Name, (app::NameValueHeaderValue * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x02D101F0, app::NameValueHeaderValue *, Create, (app::String * name, app::String * value))
    IL2CPP_REGISTER_METHOD(0x02D10350, app::Object *, ICloneable_Clone, (app::NameValueHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D02520, int32_t, GetHashCode, (app::NameValueHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D104B0, bool, Equals, (app::NameValueHeaderValue * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02D107C0, bool, TryParsePragma, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * * result))
    IL2CPP_REGISTER_METHODINFO(0x0475B5E8, NameValueHeaderValue_TryParsePragma__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D10940, bool, TryParseParameters, (app::Lexer * lexer, app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * * result, app::Token * t))
    IL2CPP_REGISTER_METHOD(0x02D10E30, app::String *, ToString, (app::NameValueHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D10ED0, bool, TryParseElement, (app::Lexer * lexer, app::NameValueHeaderValue * * parsed_value, app::Token * t))
    IL2CPP_REGISTER_METHODINFO(0x04797C28, NameValueHeaderValue_TryParseElement__MethodInfo)
}
