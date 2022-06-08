#include <interception_macros.h>

namespace app::methods::Mono::Math::BigInteger_Kernel {
IL2CPP_REGISTER_METHOD(0x023C8C80, BigInteger *, AddSameSign, (BigInteger * bi1, BigInteger * bi2));
IL2CPP_REGISTER_METHOD(0x023C9050, BigInteger *, Subtract, (BigInteger * big, BigInteger * small));
IL2CPP_REGISTER_METHOD(0x023C93F0, void, MinusEq, (BigInteger * big, BigInteger * small));
IL2CPP_REGISTER_METHOD(0x023C9590, void, PlusEq, (BigInteger * bi1, BigInteger * bi2));
IL2CPP_REGISTER_METHOD(0x023C9840, BigInteger_Sign__Enum, Compare, (BigInteger * bi1, BigInteger * bi2));
IL2CPP_REGISTER_METHOD(0x023C9A40, uint32_t, SingleByteDivideInPlace, (BigInteger * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, DwordMod, (BigInteger * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x023C9B40, BigInteger__Array *, DwordDivMod, (BigInteger * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x023C9EA0, BigInteger__Array *, multiByteDivide, (BigInteger * bi1, BigInteger * bi2));
IL2CPP_REGISTER_METHOD(0x023CA9A0, BigInteger *, LeftShift, (BigInteger * bi, int32_t n));
IL2CPP_REGISTER_METHODINFO(0x0474BB40, BigInteger_Kernel_LeftShift__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CAEA0, BigInteger *, RightShift, (BigInteger * bi, int32_t n));
IL2CPP_REGISTER_METHODINFO(0x0473A2F8, BigInteger_Kernel_RightShift__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CB260, BigInteger *, MultiplyByDword, (BigInteger * n, uint32_t f));
IL2CPP_REGISTER_METHOD(0x023CB4F0, void, Multiply, (UInt32__Array * x, uint32_t xOffset, uint32_t xLen, UInt32__Array * y, uint32_t yOffset, uint32_t yLen, UInt32__Array * d, uint32_t dOffset));
IL2CPP_REGISTER_METHOD(0x023CB640, void, MultiplyMod2p32pmod, (UInt32__Array * x, int32_t xOffset, int32_t xLen, UInt32__Array * y, int32_t yOffest, int32_t yLen, UInt32__Array * d, int32_t dOffset, int32_t mod));
IL2CPP_REGISTER_METHOD(0x023CB780, uint32_t, modInverse, (BigInteger * bi, uint32_t modulus));
IL2CPP_REGISTER_METHOD(0x023CB880, BigInteger *, modInverse, (BigInteger * bi, BigInteger * modulus));
IL2CPP_REGISTER_METHODINFO(0x047903A0, BigInteger_Kernel_modInverse_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A31B40, BigInteger_1 *, AddSameSign, (BigInteger_1 * bi1, BigInteger_1 * bi2));
IL2CPP_REGISTER_METHOD(0x02A31F10, BigInteger_1 *, Subtract, (BigInteger_1 * big, BigInteger_1 * small));
IL2CPP_REGISTER_METHOD(0x023C93F0, void, MinusEq, (BigInteger_1 * big, BigInteger_1 * small));
IL2CPP_REGISTER_METHOD(0x023C9590, void, PlusEq, (BigInteger_1 * bi1, BigInteger_1 * bi2));
IL2CPP_REGISTER_METHOD(0x023C9840, BigInteger_Sign__Enum_1, Compare, (BigInteger_1 * bi1, BigInteger_1 * bi2));
IL2CPP_REGISTER_METHOD(0x023C9A40, uint32_t, SingleByteDivideInPlace, (BigInteger_1 * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, DwordMod, (BigInteger_1 * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x02A322B0, BigInteger_1__Array *, DwordDivMod, (BigInteger_1 * n, uint32_t d));
IL2CPP_REGISTER_METHOD(0x02A32610, BigInteger_1__Array *, multiByteDivide, (BigInteger_1 * bi1, BigInteger_1 * bi2));
IL2CPP_REGISTER_METHOD(0x02A33110, BigInteger_1 *, LeftShift, (BigInteger_1 * bi, int32_t n));
IL2CPP_REGISTER_METHODINFO(0x0474A680, BigInteger_Kernel_1_LeftShift__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A33610, BigInteger_1 *, RightShift, (BigInteger_1 * bi, int32_t n));
IL2CPP_REGISTER_METHODINFO(0x0478E1E8, BigInteger_Kernel_1_RightShift__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CB4F0, void, Multiply, (UInt32__Array * x, uint32_t xOffset, uint32_t xLen, UInt32__Array * y, uint32_t yOffset, uint32_t yLen, UInt32__Array * d, uint32_t dOffset));
IL2CPP_REGISTER_METHOD(0x023CB640, void, MultiplyMod2p32pmod, (UInt32__Array * x, int32_t xOffset, int32_t xLen, UInt32__Array * y, int32_t yOffest, int32_t yLen, UInt32__Array * d, int32_t dOffset, int32_t mod));
IL2CPP_REGISTER_METHOD(0x02A339D0, uint32_t, modInverse, (BigInteger_1 * bi, uint32_t modulus));
IL2CPP_REGISTER_METHOD(0x02A33AD0, BigInteger_1 *, modInverse, (BigInteger_1 * bi, BigInteger_1 * modulus));
IL2CPP_REGISTER_METHODINFO(0x047767D0, BigInteger_Kernel_1_modInverse_1__MethodInfo);
}
