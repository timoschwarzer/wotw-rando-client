#include <interception_macros.h>

namespace app::methods::Moon::Substr {
    IL2CPP_REGISTER_METHOD(0x00245E70, void, __ctor_1, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHOD(0x00115520, void, __ctor_2, (app::Substr__Boxed * this_ptr, int32_t start, int32_t length));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Start, (app::Substr__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Length, (app::Substr__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00245EA0, Substr, Substring_1, (app::Substr__Boxed * this_ptr, int32_t start));
    IL2CPP_REGISTER_METHOD(0x00245EB0, Substr, Substring_2, (app::Substr__Boxed * this_ptr, int32_t start, int32_t length));
    IL2CPP_REGISTER_METHODINFO(0x0470E540, Substr_Substring_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00245EC0, bool, StartsWith, (app::Substr__Boxed * this_ptr, app::String* str, app::String* search_string));
    IL2CPP_REGISTER_METHOD(0x00245ED0, int32_t, IndexOf_1, (app::Substr__Boxed * this_ptr, app::String* str, uint16_t substr, int32_t start_at));
    IL2CPP_REGISTER_METHOD(0x00245F70, int32_t, IndexOf_2, (app::Substr__Boxed * this_ptr, app::String* str, app::String* substr, int32_t start_at));
    IL2CPP_REGISTER_METHOD(0x00245FE0, int32_t, IndexOf_3, (app::Substr__Boxed * this_ptr, app::String* str, uint16_t substr));
    IL2CPP_REGISTER_METHOD(0x00245FF0, int32_t, IndexOf_4, (app::Substr__Boxed * this_ptr, app::String* str, app::String* substr));
    IL2CPP_REGISTER_METHODINFO(0x0476E2B0, Substr_IndexOf_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00246000, uint16_t, get_Item, (app::Substr__Boxed * this_ptr, app::String* str, int32_t idx));
    IL2CPP_REGISTER_METHODINFO(0x04789D98, Substr_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002460E0, List_1_Moon_Substr_*, Split, (app::Substr__Boxed * this_ptr, app::String* str, app::String* split_str, app::StringSplitOptions__Enum opts));
    IL2CPP_REGISTER_METHOD(0x002460F0, String*, ToString, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHOD(0x00246120, bool, TryParseU64, (app::Substr__Boxed * this_ptr, app::String* str, app::uint64_t* value));
    IL2CPP_REGISTER_METHOD(0x00246130, uint64_t, ParseU64, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHODINFO(0x047652F0, Substr_ParseU64__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00246140, bool, TryParseInt, (app::Substr__Boxed * this_ptr, app::String* str, app::int32_t* value));
    IL2CPP_REGISTER_METHOD(0x00246150, int32_t, ParseInt, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHODINFO(0x04766998, Substr_ParseInt__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00246250, bool, TryParseFloat, (app::Substr__Boxed * this_ptr, app::String* str, app::float* value));
    IL2CPP_REGISTER_METHOD(0x00246260, float, ParseFloat, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHODINFO(0x04731468, Substr_ParseFloat__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00246360, bool, TryParseVector2, (app::Substr__Boxed * this_ptr, app::String* str, app::Vector2* value));
    IL2CPP_REGISTER_METHOD(0x00246370, bool, Equals, (app::Substr__Boxed * this_ptr, app::String* str, app::String* other));
    IL2CPP_REGISTER_METHOD(0x002463B0, Substr, Trim, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHOD(0x002463E0, Substr, TrimLeft, (app::Substr__Boxed * this_ptr, app::String* str));
    IL2CPP_REGISTER_METHOD(0x002463F0, Substr, TrimRight, (app::Substr__Boxed * this_ptr, app::String* str));
} // namespace app::methods::Moon::Substr
