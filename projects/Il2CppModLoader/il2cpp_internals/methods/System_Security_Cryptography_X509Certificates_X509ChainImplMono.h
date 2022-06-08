#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainImplMono {
IL2CPP_REGISTER_METHOD(0x021CE9B0, void, __ctor, (X509ChainImplMono * __this, bool useMachineContext));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsValid, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, X509ChainPolicy *, get_ChainPolicy, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ChainPolicy, (X509ChainImplMono * __this, X509ChainPolicy * value));
IL2CPP_REGISTER_METHOD(0x021CED00, X509ChainStatus__Array *, get_ChainStatus, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CEDB0, bool, Build, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHODINFO(0x0476CAA8, X509ChainImplMono_Build__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CF6C0, void, Reset, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CF7D0, X509Certificate2Collection *, get_Roots, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CF9A0, X509Certificate2Collection *, get_CertificateAuthorities, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CFB70, X509Store *, get_LMRootStore, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CFD00, X509Store *, get_UserRootStore, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CFE90, X509Store *, get_LMCAStore, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021D0020, X509Store *, get_UserCAStore, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021D01B0, X509Certificate2Collection *, get_CertificateCollection, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021D03A0, X509ChainStatusFlags__Enum, BuildChainFrom, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0620, X509Certificate2 *, SelectBestFromCollection, (X509ChainImplMono * __this, X509Certificate2 * child, X509Certificate2Collection * c));
IL2CPP_REGISTER_METHOD(0x021D09C0, X509Certificate2 *, FindParent, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0B90, bool, IsChainComplete, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0CF0, bool, IsSelfIssued, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0DD0, void, ValidateChain, (X509ChainImplMono * __this, X509ChainStatusFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x021D1040, void, Process, (X509ChainImplMono * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x021D1A40, void, PrepareForNextCertificate, (X509ChainImplMono * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x021D1E60, void, WrapUp, (X509ChainImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021D1F30, void, ProcessCertificateExtensions, (X509ChainImplMono * __this, X509ChainElement * element));
IL2CPP_REGISTER_METHOD(0x021D2350, bool, IsSignedWith, (X509ChainImplMono * __this, X509Certificate2 * signed_1, AsymmetricAlgorithm * pubkey));
IL2CPP_REGISTER_METHOD(0x021D24D0, String *, GetSubjectKeyIdentifier, (X509ChainImplMono * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D25E0, String *, GetAuthorityKeyIdentifier, (X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D27D0, String *, GetAuthorityKeyIdentifier, (X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x021D28A0, String *, GetAuthorityKeyIdentifier, (X509Extension_2 * ext));
IL2CPP_REGISTER_METHOD(0x021D2C90, void, CheckRevocationOnChain, (X509ChainImplMono * __this, X509ChainStatusFlags__Enum flag));
IL2CPP_REGISTER_METHODINFO(0x0476FF10, X509ChainImplMono_CheckRevocationOnChain__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D2F30, X509ChainStatusFlags__Enum, CheckRevocation, (X509ChainImplMono * __this, X509Certificate2 * certificate, int32_t ca, bool online));
IL2CPP_REGISTER_METHOD(0x021D3060, X509ChainStatusFlags__Enum, CheckRevocation, (X509ChainImplMono * __this, X509Certificate2 * certificate, X509Certificate2 * ca_cert, bool online));
IL2CPP_REGISTER_METHOD(0x021D34C0, X509Crl *, CheckCrls, (String * subject, String * ski, X509Store_1 * store));
IL2CPP_REGISTER_METHOD(0x021D3770, X509Crl *, FindCrl, (X509ChainImplMono * __this, X509Certificate2 * caCertificate));
IL2CPP_REGISTER_METHOD(0x021D39C0, bool, ProcessCrlExtensions, (X509ChainImplMono * __this, X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x021D3C80, bool, ProcessCrlEntryExtensions, (X509ChainImplMono * __this, X509Crl_X509CrlEntry * entry));
IL2CPP_REGISTER_METHOD(0x021D3F00, void, __cctor, ());
}
