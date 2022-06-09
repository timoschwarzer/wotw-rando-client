#include <interception_macros.h>

namespace app::methods::System::UInt32 {
IL2CPP_REGISTER_METHOD(0x00204CC0, int32_t, CompareTo_1, (app::UInt32__Boxed * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04706C08, UInt32_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo_2, (app::UInt32__Boxed * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x00204CD0, bool, Equals_1, (app::UInt32__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::UInt32__Boxed * this_ptr, uint32_t obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::UInt32__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString_1, (app::UInt32__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00204CE0, String *, ToString_2, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204D10, String *, ToString_3, (app::UInt32__Boxed * this_ptr, app::String * format, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5290, uint32_t, Parse_1, (app::String * s));
IL2CPP_REGISTER_METHOD(0x027C52C0, uint32_t, Parse_2, (app::String * s, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C52F0, uint32_t, Parse_3, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x027C5340, bool, TryParse, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider, app::uint32_t * result));
IL2CPP_REGISTER_METHOD(0x00204D50, TypeCode__Enum, GetTypeCode, (app::UInt32__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00204D60, bool, IConvertible_ToBoolean, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204E00, uint16_t, IConvertible_ToChar, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00204F40, int8_t, IConvertible_ToSByte, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205080, uint8_t, IConvertible_ToByte, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002051C0, int16_t, IConvertible_ToInt16, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205300, uint16_t, IConvertible_ToUInt16, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205440, int32_t, IConvertible_ToInt32, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0010E170, uint32_t, IConvertible_ToUInt32, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002054E0, int64_t, IConvertible_ToInt64, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205580, uint64_t, IConvertible_ToUInt64, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205620, float, IConvertible_ToSingle, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002056C0, double, IConvertible_ToDouble, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x00205760, Decimal, IConvertible_ToDecimal, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x002058A0, DateTime, IConvertible_ToDateTime, (app::UInt32__Boxed * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04714708, UInt32_System_IConvertible_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002058B0, Object *, IConvertible_ToType, (app::UInt32__Boxed * this_ptr, app::Type * type, app::IFormatProvider * provider));
}
