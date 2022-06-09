#include <interception_macros.h>

namespace app::methods::System_Net_Http_Headers::ViaHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Comment, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Comment, (app::ViaHeaderValue * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_ProtocolName, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ProtocolName, (app::ViaHeaderValue * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ProtocolVersion, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ProtocolVersion, (app::ViaHeaderValue * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ReceivedBy, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_ReceivedBy, (app::ViaHeaderValue * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D19700, bool, Equals, (app::ViaHeaderValue * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x02D19B90, int32_t, GetHashCode, (app::ViaHeaderValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D19CB0, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_ViaHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0471DA08, ViaHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D19E30, bool, TryParseElement, (app::Lexer * lexer, app::ViaHeaderValue * * parsed_value, app::Token * t));
IL2CPP_REGISTER_METHODINFO(0x0476CF50, ViaHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1A290, String *, ToString, (app::ViaHeaderValue * this_ptr));
}
