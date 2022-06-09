#include <interception_macros.h>

namespace app::methods::System::Double {
IL2CPP_REGISTER_METHOD(0x01A0FB90, bool, IsInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FBC0, bool, IsPositiveInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FBE0, bool, IsNegativeInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC00, bool, IsNegative, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC20, bool, IsNaN, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC50, bool, IsFinite, (double d));
IL2CPP_REGISTER_METHOD(0x00154D20, int32_t, CompareTo_1, (app::Double__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474A5C0, Double_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00154D30, int32_t, CompareTo_2, (app::Double__Boxed * this_ptr, double value));
IL2CPP_REGISTER_METHOD(0x00154D40, bool, Equals_1, (app::Double__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x00154D50, bool, Equals_2, (app::Double__Boxed * this_ptr, double obj));
IL2CPP_REGISTER_METHOD(0x00154D60, int32_t, GetHashCode, (app::Double__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00154D70, String *, ToString_1, (app::Double__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00154DA0, String *, ToString_2, (app::Double__Boxed * this_ptr, app::String * format));
IL2CPP_REGISTER_METHOD(0x00154DE0, String *, ToString_3, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154E20, String *, ToString_4, (app::Double__Boxed * this_ptr, app::String * format, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A102D0, double, Parse_1, (app::String * s));
IL2CPP_REGISTER_METHOD(0x01A10390, double, Parse_2, (app::String * s, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10450, double, Parse_3, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10520, double, Parse_4, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x01A10530, bool, TryParse_1, (app::String * s, app::double * result));
IL2CPP_REGISTER_METHOD(0x01A10600, bool, TryParse_2, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider, app::double * result));
IL2CPP_REGISTER_METHOD(0x01A106F0, bool, TryParse_3, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::double * result));
IL2CPP_REGISTER_METHOD(0x00154E60, TypeCode__Enum, GetTypeCode, (app::Double__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00154E70, bool, IConvertible_ToBoolean, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154F30, uint16_t, IConvertible_ToChar, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04734C20, Double_System_IConvertible_ToChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00154F40, int8_t, IConvertible_ToSByte, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154FF0, uint8_t, IConvertible_ToByte, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001550A0, int16_t, IConvertible_ToInt16, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155150, uint16_t, IConvertible_ToUInt16, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155200, int32_t, IConvertible_ToInt32, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001552B0, uint32_t, IConvertible_ToUInt32, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155360, int64_t, IConvertible_ToInt64, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155410, uint64_t, IConvertible_ToUInt64, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001554C0, float, IConvertible_ToSingle, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155570, double, IConvertible_ToDouble, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155580, Decimal, IConvertible_ToDecimal, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001556E0, DateTime, IConvertible_ToDateTime, (app::Double__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x0471C108, Double_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001556F0, Object *, IConvertible_ToType, (app::Double__Boxed * this_ptr, app::Type * type, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10980, void, __cctor, ());
}
