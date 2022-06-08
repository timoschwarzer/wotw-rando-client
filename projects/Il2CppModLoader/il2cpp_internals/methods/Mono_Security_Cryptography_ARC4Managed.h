#include <interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::ARC4Managed {
IL2CPP_REGISTER_METHOD(0x025C4640, void, __ctor, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C47C0, void, Finalize, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C4840, void, Dispose, (ARC4Managed * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x025C4930, Byte__Array *, get_Key, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C4A90, void, set_Key, (ARC4Managed * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04708588, ARC4Managed_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C4C20, ICryptoTransform *, CreateEncryptor, (ARC4Managed * __this, Byte__Array * rgbKey, Byte__Array * rgvIV));
IL2CPP_REGISTER_METHOD(0x025C4C50, ICryptoTransform *, CreateDecryptor, (ARC4Managed * __this, Byte__Array * rgbKey, Byte__Array * rgvIV));
IL2CPP_REGISTER_METHOD(0x025C4C90, void, GenerateIV, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C4D30, void, GenerateKey, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize, (ARC4Managed * __this));
IL2CPP_REGISTER_METHOD(0x025C4D50, void, KeySetup, (ARC4Managed * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x025C4EC0, void, CheckInput, (ARC4Managed * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x04791BC8, ARC4Managed_CheckInput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C5050, int32_t, TransformBlock, (ARC4Managed * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x0477C860, ARC4Managed_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C5200, int32_t, InternalTransformBlock, (ARC4Managed * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHOD(0x025C5460, Byte__Array *, TransformFinalBlock, (ARC4Managed * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x02A3A260, void, __ctor, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3A3E0, void, Finalize, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3A460, void, Dispose, (ARC4Managed_1 * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02A3A550, Byte__Array *, get_Key, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3A6B0, void, set_Key, (ARC4Managed_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04789800, ARC4Managed_1_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x025C4C20, ICryptoTransform *, CreateEncryptor, (ARC4Managed_1 * __this, Byte__Array * rgbKey, Byte__Array * rgvIV));
IL2CPP_REGISTER_METHOD(0x025C4C50, ICryptoTransform *, CreateDecryptor, (ARC4Managed_1 * __this, Byte__Array * rgbKey, Byte__Array * rgvIV));
IL2CPP_REGISTER_METHOD(0x02A3A840, void, GenerateIV, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3A8E0, void, GenerateKey, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize, (ARC4Managed_1 * __this));
IL2CPP_REGISTER_METHOD(0x025C4D50, void, KeySetup, (ARC4Managed_1 * __this, Byte__Array * key));
IL2CPP_REGISTER_METHOD(0x02A3AA30, void, CheckInput, (ARC4Managed_1 * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHODINFO(0x0473CB78, ARC4Managed_1_CheckInput__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A3ABC0, int32_t, TransformBlock, (ARC4Managed_1 * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHODINFO(0x0476A9D0, ARC4Managed_1_TransformBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025C5200, int32_t, InternalTransformBlock, (ARC4Managed_1 * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount, Byte__Array * outputBuffer, int32_t outputOffset));
IL2CPP_REGISTER_METHOD(0x02A3AD70, Byte__Array *, TransformFinalBlock, (ARC4Managed_1 * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
}
