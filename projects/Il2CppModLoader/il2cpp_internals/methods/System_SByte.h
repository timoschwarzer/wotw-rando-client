#include <interception_macros.h>

namespace app::methods::System::SByte {
    IL2CPP_REGISTER_METHOD(0x001D8570, int32_t, CompareTo_1, (app::SByte__Boxed * this_ptr, app::Object* obj));
    IL2CPP_REGISTER_METHODINFO(0x04721BA0, SByte_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001D8580, int32_t, CompareTo_2, (app::SByte__Boxed * this_ptr, int8_t value));
    IL2CPP_REGISTER_METHOD(0x001D8590, bool, Equals_1, (app::SByte__Boxed * this_ptr, app::Object* obj));
    IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals_2, (app::SByte__Boxed * this_ptr, int8_t obj));
    IL2CPP_REGISTER_METHOD(0x001D85B0, int32_t, GetHashCode, (app::SByte__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001D85C0, String*, ToString_1, (app::SByte__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001D85F0, String*, ToString_2, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8620, String*, ToString_3, (app::SByte__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8660, String*, ToString_4, (app::SByte__Boxed * this_ptr, app::String* format, app::NumberFormatInfo* info));
    IL2CPP_REGISTER_METHOD(0x01EF0A50, int8_t, Parse_1, (app::String * s, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x01EF0A80, int8_t, Parse_2, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x01EF0AD0, int8_t, Parse_3, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo* info));
    IL2CPP_REGISTER_METHODINFO(0x04758A48, SByte_Parse_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EF0C60, bool, TryParse_1, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider, app::int8_t* result));
    IL2CPP_REGISTER_METHOD(0x01EF0D00, bool, TryParse_2, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, app::int8_t* result));
    IL2CPP_REGISTER_METHOD(0x001D8670, TypeCode__Enum, GetTypeCode, (app::SByte__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001D8680, bool, IConvertible_ToBoolean, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8720, uint16_t, IConvertible_ToChar, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x0010E100, int8_t, IConvertible_ToSByte, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8860, uint8_t, IConvertible_ToByte, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D89A0, int16_t, IConvertible_ToInt16, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8A40, uint16_t, IConvertible_ToUInt16, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8B80, int32_t, IConvertible_ToInt32, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8B90, uint32_t, IConvertible_ToUInt32, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8CD0, int64_t, IConvertible_ToInt64, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8D70, uint64_t, IConvertible_ToUInt64, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8EB0, float, IConvertible_ToSingle, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8F50, double, IConvertible_ToDouble, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D8FF0, Decimal, IConvertible_ToDecimal, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHOD(0x001D9140, DateTime, IConvertible_ToDateTime, (app::SByte__Boxed * this_ptr, app::IFormatProvider* provider));
    IL2CPP_REGISTER_METHODINFO(0x047545B8, SByte_System_IConvertible_ToDateTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001D9150, Object*, IConvertible_ToType, (app::SByte__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider));
} // namespace app::methods::System::SByte
