#include <interception_macros.h>

namespace app::methods::System_Numerics::BigInteger {
    IL2CPP_REGISTER_METHOD(0x00246440, void, __ctor_1, (app::BigInteger_2__Boxed * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x00246450, void, __ctor_2, (app::BigInteger_2__Boxed * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x00246460, void, __ctor_3, (app::BigInteger_2__Boxed * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x00246470, void, __ctor_4, (app::BigInteger_2__Boxed * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x00246480, void, __ctor_5, (app::BigInteger_2__Boxed * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00246490, void, __ctor_6, (app::BigInteger_2__Boxed * this_ptr, double value));
    IL2CPP_REGISTER_METHODINFO(0x047813B0, BigInteger_2__ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002464A0, void, __ctor_7, (app::BigInteger_2__Boxed * this_ptr, app::Decimal value));
    IL2CPP_REGISTER_METHOD(0x002464C0, void, __ctor_8, (app::BigInteger_2__Boxed * this_ptr, app::Byte__Array * value));
    IL2CPP_REGISTER_METHODINFO(0x04714DA8, BigInteger_2__ctor_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002464D0, void, __ctor_9, (app::BigInteger_2__Boxed * this_ptr, app::ReadOnlySpan_1_Byte_ value));
    IL2CPP_REGISTER_METHOD(0x0013C010, void, __ctor_10, (app::BigInteger_2__Boxed * this_ptr, int32_t n, app::UInt32__Array * rgu));
    IL2CPP_REGISTER_METHOD(0x00246500, void, __ctor_11, (app::BigInteger_2__Boxed * this_ptr, app::UInt32__Array * value, bool negative));
    IL2CPP_REGISTER_METHODINFO(0x0473E180, BigInteger_2__ctor_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FB600, app::BigInteger_2, get_Zero, ());
    IL2CPP_REGISTER_METHOD(0x00246510, bool, get_IsPowerOfTwo, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0011D620, bool, get_IsZero, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002465A0, bool, get_IsOne, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002465C0, bool, get_IsEven, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00246600, int32_t, get_Sign, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030FB6B0, app::BigInteger_2, Parse_1, (app::String * value, app::IFormatProvider * provider));
    IL2CPP_REGISTER_METHOD(0x030FB7A0, app::BigInteger_2, Parse_2, (app::String * value, app::NumberStyles__Enum style, app::IFormatProvider * provider));
    IL2CPP_REGISTER_METHOD(0x00246610, int32_t, GetHashCode, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00246670, bool, Equals_1, (app::BigInteger_2__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x00246680, bool, Equals_2, (app::BigInteger_2__Boxed * this_ptr, int64_t other));
    IL2CPP_REGISTER_METHOD(0x00246690, bool, Equals_3, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_2 other));
    IL2CPP_REGISTER_METHOD(0x002466B0, int32_t, CompareTo_1, (app::BigInteger_2__Boxed * this_ptr, int64_t other));
    IL2CPP_REGISTER_METHOD(0x002466C0, int32_t, CompareTo_2, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_2 other));
    IL2CPP_REGISTER_METHOD(0x002466E0, int32_t, CompareTo_3, (app::BigInteger_2__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHODINFO(0x04736CB8, BigInteger_2_CompareTo_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00246800, app::Byte__Array *, ToByteArray, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00246850, int32_t, GetByteCount, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002468B0, app::Byte__Array *, TryGetBytes, (app::BigInteger_2__Boxed * this_ptr, app::BigInteger_GetBytesMode__Enum mode, app::Span_1_Byte_ destination, int32_t * bytes_written));
    IL2CPP_REGISTER_METHODINFO(0x0472CD10, BigInteger_2_TryGetBytes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002468E0, app::UInt32__Array *, ToUInt32Array, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002468F0, app::String *, ToString_1, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00246930, app::String *, ToString_2, (app::BigInteger_2__Boxed * this_ptr, app::IFormatProvider * provider));
    IL2CPP_REGISTER_METHOD(0x00246970, app::String *, ToString_3, (app::BigInteger_2__Boxed * this_ptr, app::String * format, app::IFormatProvider * provider));
    IL2CPP_REGISTER_METHOD(0x030FC5D0, app::BigInteger_2, Add, (app::UInt32__Array * left_bits, int32_t left_sign, app::UInt32__Array * right_bits, int32_t right_sign));
    IL2CPP_REGISTER_METHOD(0x030FC7C0, app::BigInteger_2, operator___1, (app::BigInteger_2 left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FC930, app::BigInteger_2, Subtract, (app::UInt32__Array * left_bits, int32_t left_sign, app::UInt32__Array * right_bits, int32_t right_sign));
    IL2CPP_REGISTER_METHOD(0x030FCC00, app::BigInteger_2, operator__1, (uint8_t value));
    IL2CPP_REGISTER_METHOD(0x030FCC30, app::BigInteger_2, operator__2, (int8_t value));
    IL2CPP_REGISTER_METHOD(0x030FCC60, app::BigInteger_2, operator__3, (int16_t value));
    IL2CPP_REGISTER_METHOD(0x030FCC90, app::BigInteger_2, operator__4, (uint16_t value));
    IL2CPP_REGISTER_METHOD(0x030FCCC0, app::BigInteger_2, operator__5, (int32_t value));
    IL2CPP_REGISTER_METHOD(0x030FCCE0, app::BigInteger_2, operator__6, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x030FCD00, app::BigInteger_2, operator__7, (int64_t value));
    IL2CPP_REGISTER_METHOD(0x030FCD20, app::BigInteger_2, operator__8, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x030FCD40, uint8_t, operator__9, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x0475D618, BigInteger_2_op_Explicit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FCE00, int8_t, operator__10, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04733A10, BigInteger_2_op_Explicit_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FCEC0, int16_t, operator__11, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04747130, BigInteger_2_op_Explicit_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FCF80, uint16_t, operator__12, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04735D38, BigInteger_2_op_Explicit_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FD040, int32_t, operator__13, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04783ED0, BigInteger_2_op_Explicit_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FD220, uint32_t, operator__14, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04785240, BigInteger_2_op_Explicit_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FD340, int64_t, operator__15, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04747668, BigInteger_2_op_Explicit_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FD520, uint64_t, operator__16, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x0475CC40, BigInteger_2_op_Explicit_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FD6C0, float, operator__17, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHOD(0x030FD770, double, operator__18, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHOD(0x030FD8C0, app::Decimal, operator__19, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHODINFO(0x04724670, BigInteger_2_op_Explicit_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030FDB60, app::BigInteger_2, operator___2, (app::BigInteger_2 value));
    IL2CPP_REGISTER_METHOD(0x030FDB90, app::BigInteger_2, operator___3, (app::BigInteger_2 left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FDD00, app::BigInteger_2, operator___4, (app::BigInteger_2 left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FE000, bool, operator____1, (app::BigInteger_2 left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FE020, bool, operator____2, (app::BigInteger_2 left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FE040, bool, operator___5, (app::BigInteger_2 left, int64_t right));
    IL2CPP_REGISTER_METHOD(0x030FE060, bool, operator____3, (app::BigInteger_2 left, int64_t right));
    IL2CPP_REGISTER_METHOD(0x030FE080, bool, operator____4, (app::BigInteger_2 left, int64_t right));
    IL2CPP_REGISTER_METHOD(0x030FE090, bool, operator____5, (app::BigInteger_2 left, int64_t right));
    IL2CPP_REGISTER_METHOD(0x030FE0B0, bool, operator___6, (int64_t left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FE0D0, bool, operator____6, (int64_t left, app::BigInteger_2 right));
    IL2CPP_REGISTER_METHOD(0x030FE0F0, int32_t, GetDiffLength, (app::UInt32__Array * rgu1, app::UInt32__Array * rgu2, int32_t cu));
    IL2CPP_REGISTER_METHOD(0x00002890, void, AssertValid, (app::BigInteger_2__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030FE160, void, __cctor, ());
}
