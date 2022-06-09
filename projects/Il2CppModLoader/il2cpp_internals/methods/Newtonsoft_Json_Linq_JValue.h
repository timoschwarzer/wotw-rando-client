#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Linq::JValue {
IL2CPP_REGISTER_METHOD(0x0185A290, void, __ctor_1, (app::JValue * this_ptr, app::Object * value, app::JTokenType__Enum type));
IL2CPP_REGISTER_METHOD(0x0185A340, void, __ctor_2, (app::JValue * this_ptr, app::JValue * other));
IL2CPP_REGISTER_METHOD(0x0185A420, void, __ctor_3, (app::JValue * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x0185A4D0, void, __ctor_4, (app::JValue * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0185A4E0, void, __ctor_5, (app::JValue * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasValues, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185A520, int32_t, CompareBigInteger, (app::BigInteger_2 i1, app::Object * i2));
IL2CPP_REGISTER_METHOD(0x0185A9F0, int32_t, Compare, (app::JTokenType__Enum value_type, app::Object * obj_a, app::Object * obj_b));
IL2CPP_REGISTER_METHODINFO(0x04792DD8, JValue_Compare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0185B650, int32_t, CompareFloat, (app::Object * obj_a, app::Object * obj_b));
IL2CPP_REGISTER_METHOD(0x0185B790, JToken *, CloneToken, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185B8E0, JValue *, CreateComment, (app::String * value));
IL2CPP_REGISTER_METHOD(0x0185BA30, JValue *, CreateNull, ());
IL2CPP_REGISTER_METHOD(0x0185BB80, JValue *, CreateUndefined, ());
IL2CPP_REGISTER_METHOD(0x0185BCD0, JTokenType__Enum, GetValueType, (app::Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04756450, JValue_GetValueType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0185C130, JTokenType__Enum, GetStringValueType, (app::Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current));
IL2CPP_REGISTER_METHOD(0x00654950, JTokenType__Enum, get_Type, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Object *, get_Value, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185C1D0, void, WriteTo, (app::JValue * this_ptr, app::JsonWriter * writer, app::JsonConverter__Array * converters));
IL2CPP_REGISTER_METHODINFO(0x04731528, JValue_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0185CC10, bool, ValuesEquals, (app::JValue * v1, app::JValue * v2));
IL2CPP_REGISTER_METHOD(0x0185CC70, bool, Equals_1, (app::JValue * this_ptr, app::JValue * other));
IL2CPP_REGISTER_METHOD(0x0185CCC0, bool, Equals_2, (app::JValue * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0185CDE0, int32_t, GetHashCode, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185CE00, String *, ToString_1, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185CEB0, String *, ToString_2, (app::JValue * this_ptr, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x0185CFA0, String *, ToString_3, (app::JValue * this_ptr, app::String * format, app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x0185D0B0, DynamicMetaObject *, GetMetaObject, (app::JValue * this_ptr, app::Expression * parameter));
IL2CPP_REGISTER_METHOD(0x0185D340, int32_t, IComparable_CompareTo, (app::JValue * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0185D460, int32_t, CompareTo, (app::JValue * this_ptr, app::JValue * obj));
IL2CPP_REGISTER_METHOD(0x0185D490, TypeCode__Enum, IConvertible_GetTypeCode, (app::JValue * this_ptr));
IL2CPP_REGISTER_METHOD(0x0185D540, bool, IConvertible_ToBoolean, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D5E0, uint16_t, IConvertible_ToChar, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D680, int8_t, IConvertible_ToSByte, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D720, uint8_t, IConvertible_ToByte, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D7C0, int16_t, IConvertible_ToInt16, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D860, uint16_t, IConvertible_ToUInt16, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D900, int32_t, IConvertible_ToInt32, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185D9A0, uint32_t, IConvertible_ToUInt32, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DA40, int64_t, IConvertible_ToInt64, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DAE0, uint64_t, IConvertible_ToUInt64, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DB80, float, IConvertible_ToSingle, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DC20, double, IConvertible_ToDouble, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DCC0, Decimal, IConvertible_ToDecimal, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DD80, DateTime, IConvertible_ToDateTime, (app::JValue * this_ptr, app::IFormatProvider * provider));
IL2CPP_REGISTER_METHOD(0x0185DE20, Object *, IConvertible_ToType, (app::JValue * this_ptr, app::Type * conversion_type, app::IFormatProvider * provider));
}
