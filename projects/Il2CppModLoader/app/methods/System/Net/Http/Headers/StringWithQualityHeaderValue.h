#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::StringWithQualityHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StringWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01349560, app::Nullable_1_Double_, get_Quality, (app::StringWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_Quality, (app::StringWithQualityHeaderValue * this_ptr, app::Nullable_1_Double_ value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Value, (app::StringWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Value, (app::StringWithQualityHeaderValue * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object *, ICloneable_Clone, (app::StringWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D17810, bool, Equals, (app::StringWithQualityHeaderValue * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02D17A10, int32_t, GetHashCode, (app::StringWithQualityHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D17B00, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_StringWithQualityHeaderValue_ * * result))
    IL2CPP_REGISTER_METHODINFO(0x0470F640, StringWithQualityHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D17C80, bool, TryParseElement, (app::Lexer * lexer, app::StringWithQualityHeaderValue * * parsed_value, app::Token * t))
    IL2CPP_REGISTER_METHODINFO(0x047079E8, StringWithQualityHeaderValue_TryParseElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D18150, app::String *, ToString, (app::StringWithQualityHeaderValue * this_ptr))
}
