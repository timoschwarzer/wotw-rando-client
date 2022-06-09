#include <interception_macros.h>

namespace app::methods::Mono_Security_Cryptography::CryptoConvert {
    IL2CPP_REGISTER_METHOD(0x025C5550, int32_t, ToInt32LE_1, (app::Byte__Array * bytes, int32_t offset));
    IL2CPP_REGISTER_METHOD(0x025C5550, uint32_t, ToUInt32LE_1, (app::Byte__Array * bytes, int32_t offset));
    IL2CPP_REGISTER_METHOD(0x025C5610, app::Byte__Array *, GetBytesLE, (int32_t val));
    IL2CPP_REGISTER_METHOD(0x025C5720, app::Byte__Array *, Trim_1, (app::Byte__Array * array));
    IL2CPP_REGISTER_METHOD(0x025C5830, app::RSA *, FromCapiPrivateKeyBlob_1, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x04756FA8, CryptoConvert_FromCapiPrivateKeyBlob__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C6360, app::DSA *, FromCapiPrivateKeyBlobDSA, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x047784D0, CryptoConvert_FromCapiPrivateKeyBlobDSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C6AE0, app::Byte__Array *, ToCapiPrivateKeyBlob_1, (app::RSA * rsa));
    IL2CPP_REGISTER_METHOD(0x025C7070, app::Byte__Array *, ToCapiPrivateKeyBlob_2, (app::DSA * dsa));
    IL2CPP_REGISTER_METHOD(0x025C7770, app::RSA *, FromCapiPublicKeyBlob, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x04793458, CryptoConvert_FromCapiPublicKeyBlob__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C7C10, app::DSA *, FromCapiPublicKeyBlobDSA, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x04708600, CryptoConvert_FromCapiPublicKeyBlobDSA__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C8390, app::Byte__Array *, ToCapiPublicKeyBlob_1, (app::RSA * rsa));
    IL2CPP_REGISTER_METHOD(0x025C8750, app::Byte__Array *, ToCapiPublicKeyBlob_2, (app::DSA * dsa));
    IL2CPP_REGISTER_METHOD(0x025C8E40, app::RSA *, FromCapiKeyBlob_1, (app::Byte__Array * blob));
    IL2CPP_REGISTER_METHOD(0x025C8E50, app::RSA *, FromCapiKeyBlob_2, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x0472EB00, CryptoConvert_FromCapiKeyBlob_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C9010, app::DSA *, FromCapiKeyBlobDSA_1, (app::Byte__Array * blob));
    IL2CPP_REGISTER_METHOD(0x025C9170, app::DSA *, FromCapiKeyBlobDSA_2, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x04754528, CryptoConvert_FromCapiKeyBlobDSA_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025C5550, int32_t, ToInt32LE_2, (app::Byte__Array * bytes, int32_t offset));
    IL2CPP_REGISTER_METHOD(0x025C5550, uint32_t, ToUInt32LE_2, (app::Byte__Array * bytes, int32_t offset));
    IL2CPP_REGISTER_METHOD(0x02A3AE60, app::Byte__Array *, Trim_2, (app::Byte__Array * array));
    IL2CPP_REGISTER_METHOD(0x02A3AF70, app::RSA *, FromCapiPrivateKeyBlob_2, (app::Byte__Array * blob));
    IL2CPP_REGISTER_METHOD(0x02A3AF80, app::RSA *, FromCapiPrivateKeyBlob_3, (app::Byte__Array * blob, int32_t offset));
    IL2CPP_REGISTER_METHODINFO(0x0472BD18, CryptoConvert_1_FromCapiPrivateKeyBlob_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A3BE00, app::String *, ToHex, (app::Byte__Array * input));
    IL2CPP_REGISTER_METHOD(0x02A3C010, uint8_t, FromHexChar, (uint16_t c));
    IL2CPP_REGISTER_METHODINFO(0x0471A5D8, CryptoConvert_1_FromHexChar__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A3C0F0, app::Byte__Array *, FromHex, (app::String * hex));
    IL2CPP_REGISTER_METHODINFO(0x04759688, CryptoConvert_1_FromHex__MethodInfo);
}
