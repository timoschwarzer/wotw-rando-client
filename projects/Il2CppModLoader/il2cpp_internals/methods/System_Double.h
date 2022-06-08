#include <interception_macros.h>

namespace app::methods::System::Double {
IL2CPP_REGISTER_METHOD(0x01A0FB90, bool, IsInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FBC0, bool, IsPositiveInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FBE0, bool, IsNegativeInfinity, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC00, bool, IsNegative, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC20, bool, IsNaN, (double d));
IL2CPP_REGISTER_METHOD(0x01A0FC50, bool, IsFinite, (double d));
IL2CPP_REGISTER_METHOD(0x00154D20, int32_t, CompareTo, (Double__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474A5C0, Double_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00154D30, int32_t, CompareTo, (Double__Boxed * __this, double value));
IL2CPP_REGISTER_METHOD(0x00154D40, bool, Equals, (Double__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00154D50, bool, Equals, (Double__Boxed * __this, double obj));
IL2CPP_REGISTER_METHOD(0x00154D60, int32_t, GetHashCode, (Double__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00154D70, String *, ToString, (Double__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00154DA0, String *, ToString, (Double__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x00154DE0, String *, ToString, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154E20, String *, ToString, (Double__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A102D0, double, Parse, (String * s));
IL2CPP_REGISTER_METHOD(0x01A10390, double, Parse, (String * s, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10450, double, Parse, (String * s, NumberStyles__Enum style, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10520, double, Parse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x01A10530, bool, TryParse, (String * s, double * result));
IL2CPP_REGISTER_METHOD(0x01A10600, bool, TryParse, (String * s, NumberStyles__Enum style, IFormatProvider * provider, double * result));
IL2CPP_REGISTER_METHOD(0x01A106F0, bool, TryParse, (String * s, NumberStyles__Enum style, NumberFormatInfo * info, double * result));
IL2CPP_REGISTER_METHOD(0x00154E60, TypeCode__Enum, GetTypeCode, (Double__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00154E70, bool, IConvertible_ToBoolean, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154F30, uint16_t, IConvertible_ToChar, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04734C20, Double_System_IConvertible_ToChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00154F40, int8_t, IConvertible_ToSByte, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00154FF0, uint8_t, IConvertible_ToByte, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001550A0, int16_t, IConvertible_ToInt16, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155150, uint16_t, IConvertible_ToUInt16, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155200, int32_t, IConvertible_ToInt32, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001552B0, uint32_t, IConvertible_ToUInt32, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155360, int64_t, IConvertible_ToInt64, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155410, uint64_t, IConvertible_ToUInt64, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001554C0, float, IConvertible_ToSingle, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155570, double, IConvertible_ToDouble, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00155580, Decimal, IConvertible_ToDecimal, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x001556E0, DateTime, IConvertible_ToDateTime, (Double__Boxed * __this, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x0471C108, Double_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001556F0, Object *, IConvertible_ToType, (Double__Boxed * __this, Type * type, IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x01A10980, void, __cctor, ());
}
