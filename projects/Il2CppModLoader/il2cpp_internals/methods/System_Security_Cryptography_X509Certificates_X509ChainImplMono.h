#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509ChainImplMono {
IL2CPP_REGISTER_METHOD(0x021CE9B0, void, __ctor, (app::X509ChainImplMono * this_ptr, bool use_machine_context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsValid, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, X509ChainPolicy *, get_ChainPolicy, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ChainPolicy, (app::X509ChainImplMono * this_ptr, app::X509ChainPolicy * value));
IL2CPP_REGISTER_METHOD(0x021CED00, X509ChainStatus__Array *, get_ChainStatus, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CEDB0, bool, Build, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHODINFO(0x0476CAA8, X509ChainImplMono_Build__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CF6C0, void, Reset, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CF7D0, X509Certificate2Collection *, get_Roots, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CF9A0, X509Certificate2Collection *, get_CertificateAuthorities, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CFB70, X509Store *, get_LMRootStore, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CFD00, X509Store *, get_UserRootStore, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CFE90, X509Store *, get_LMCAStore, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D0020, X509Store *, get_UserCAStore, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D01B0, X509Certificate2Collection *, get_CertificateCollection, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D03A0, X509ChainStatusFlags__Enum, BuildChainFrom, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0620, X509Certificate2 *, SelectBestFromCollection, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * child, app::X509Certificate2Collection * c));
IL2CPP_REGISTER_METHOD(0x021D09C0, X509Certificate2 *, FindParent, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0B90, bool, IsChainComplete, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0CF0, bool, IsSelfIssued, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D0DD0, void, ValidateChain, (app::X509ChainImplMono * this_ptr, app::X509ChainStatusFlags__Enum flag));
IL2CPP_REGISTER_METHOD(0x021D1040, void, Process, (app::X509ChainImplMono * this_ptr, int32_t n));
IL2CPP_REGISTER_METHOD(0x021D1A40, void, PrepareForNextCertificate, (app::X509ChainImplMono * this_ptr, int32_t n));
IL2CPP_REGISTER_METHOD(0x021D1E60, void, WrapUp, (app::X509ChainImplMono * this_ptr));
IL2CPP_REGISTER_METHOD(0x021D1F30, void, ProcessCertificateExtensions, (app::X509ChainImplMono * this_ptr, app::X509ChainElement * element));
IL2CPP_REGISTER_METHOD(0x021D2350, bool, IsSignedWith, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * signed_1, app::AsymmetricAlgorithm * pubkey));
IL2CPP_REGISTER_METHOD(0x021D24D0, String *, GetSubjectKeyIdentifier, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D25E0, String *, GetAuthorityKeyIdentifier_1, (app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021D27D0, String *, GetAuthorityKeyIdentifier_2, (app::X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x021D28A0, String *, GetAuthorityKeyIdentifier_3, (app::X509Extension_2 * ext));
IL2CPP_REGISTER_METHOD(0x021D2C90, void, CheckRevocationOnChain, (app::X509ChainImplMono * this_ptr, app::X509ChainStatusFlags__Enum flag));
IL2CPP_REGISTER_METHODINFO(0x0476FF10, X509ChainImplMono_CheckRevocationOnChain__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D2F30, X509ChainStatusFlags__Enum, CheckRevocation_1, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate, int32_t ca, bool online));
IL2CPP_REGISTER_METHOD(0x021D3060, X509ChainStatusFlags__Enum, CheckRevocation_2, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * certificate, app::X509Certificate2 * ca_cert, bool online));
IL2CPP_REGISTER_METHOD(0x021D34C0, X509Crl *, CheckCrls, (app::String * subject, app::String * ski, app::X509Store_1 * store));
IL2CPP_REGISTER_METHOD(0x021D3770, X509Crl *, FindCrl, (app::X509ChainImplMono * this_ptr, app::X509Certificate2 * ca_certificate));
IL2CPP_REGISTER_METHOD(0x021D39C0, bool, ProcessCrlExtensions, (app::X509ChainImplMono * this_ptr, app::X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x021D3C80, bool, ProcessCrlEntryExtensions, (app::X509ChainImplMono * this_ptr, app::X509Crl_X509CrlEntry * entry));
IL2CPP_REGISTER_METHOD(0x021D3F00, void, __cctor, ());
}
