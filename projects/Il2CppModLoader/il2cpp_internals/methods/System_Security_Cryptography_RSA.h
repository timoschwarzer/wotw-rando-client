#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSA {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSA * __this));
IL2CPP_REGISTER_METHOD(0x028E48A0, RSA *, Create, ());
IL2CPP_REGISTER_METHOD(0x028E49F0, RSA *, Create, (String * algName));
IL2CPP_REGISTER_METHOD(0x028E4AD0, Byte__Array *, Encrypt, (RSA * __this, Byte__Array * data, RSAEncryptionPadding * padding));
IL2CPP_REGISTER_METHODINFO(0x04711AD0, RSA_Encrypt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4B10, Byte__Array *, Decrypt, (RSA * __this, Byte__Array * data, RSAEncryptionPadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0478FE00, RSA_Decrypt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4B50, Byte__Array *, SignHash, (RSA * __this, Byte__Array * hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x047995B8, RSA_SignHash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4B90, bool, VerifyHash, (RSA * __this, Byte__Array * hash, Byte__Array * signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0474C910, RSA_VerifyHash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4BD0, Byte__Array *, HashData, (RSA * __this, Byte__Array * data, int32_t offset, int32_t count, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x04761688, RSA_HashData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4C10, Byte__Array *, HashData, (RSA * __this, Stream * data, HashAlgorithmName hashAlgorithm));
IL2CPP_REGISTER_METHODINFO(0x047483B8, RSA_HashData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4C50, Byte__Array *, SignData, (RSA * __this, Byte__Array * data, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0474F5A0, RSA_SignData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4D50, Byte__Array *, SignData, (RSA * __this, Byte__Array * data, int32_t offset, int32_t count, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0474A088, RSA_SignData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E4FB0, Byte__Array *, SignData, (RSA * __this, Stream * data, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0476F778, RSA_SignData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E5160, bool, VerifyData, (RSA * __this, Byte__Array * data, Byte__Array * signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0474ED60, RSA_VerifyData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E5270, bool, VerifyData, (RSA * __this, Byte__Array * data, int32_t offset, int32_t count, Byte__Array * signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x047989E8, RSA_VerifyData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E5500, bool, VerifyData, (RSA * __this, Stream * data, Byte__Array * signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding * padding));
IL2CPP_REGISTER_METHODINFO(0x0473C2F0, RSA_VerifyData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E56F0, Exception *, DerivedClassMustOverride, ());
IL2CPP_REGISTER_METHOD(0x028E5850, Exception *, HashAlgorithmNameNullOrEmpty, ());
IL2CPP_REGISTER_METHOD(0x028E59C0, Byte__Array *, DecryptValue, (RSA * __this, Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x04776DB0, RSA_DecryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E5A30, Byte__Array *, EncryptValue, (RSA * __this, Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x04788C20, RSA_EncryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E5AA0, String *, get_KeyExchangeAlgorithm, (RSA * __this));
IL2CPP_REGISTER_METHOD(0x028E5B20, String *, get_SignatureAlgorithm, (RSA * __this));
IL2CPP_REGISTER_METHOD(0x028E5BA0, void, FromXmlString, (RSA * __this, String * xmlString));
IL2CPP_REGISTER_METHODINFO(0x047777B8, RSA_FromXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028E62B0, String *, ToXmlString, (RSA * __this, bool includePrivateParameters));
}
