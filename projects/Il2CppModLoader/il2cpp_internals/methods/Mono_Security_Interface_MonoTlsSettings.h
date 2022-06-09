#include <interception_macros.h>

namespace app::methods::Mono_Security_Interface::MonoTlsSettings {
IL2CPP_REGISTER_METHOD(0x002FA280, MonoRemoteCertificateValidationCallback *, get_RemoteCertificateValidationCallback, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_RemoteCertificateValidationCallback, (app::MonoTlsSettings * this_ptr, app::MonoRemoteCertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x002FB930, MonoLocalCertificateSelectionCallback *, get_ClientCertificateSelectionCallback, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientCertificateSelectionCallback, (app::MonoTlsSettings * this_ptr, app::MonoLocalCertificateSelectionCallback * value));
IL2CPP_REGISTER_METHOD(0x02A467A0, Nullable_1_Boolean_, get_UseServicePointManagerCallback, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A467B0, void, set_UseServicePointManagerCallback, (app::MonoTlsSettings * this_ptr, app::Nullable_1_Boolean_ value));
IL2CPP_REGISTER_METHOD(0x01F3F910, bool, get_CallbackNeedsCertificateChain, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01746A40, Nullable_1_DateTime_, get_CertificateValidationTime, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_CertificateValidationTime, (app::MonoTlsSettings * this_ptr, app::Nullable_1_DateTime_ value));
IL2CPP_REGISTER_METHOD(0x002FB990, X509CertificateCollection_1 *, get_TrustAnchors, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_TrustAnchors, (app::MonoTlsSettings * this_ptr, app::X509CertificateCollection_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Object *, get_UserSettings, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UserSettings, (app::MonoTlsSettings * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String__Array *, get_CertificateSearchPaths, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CertificateSearchPaths, (app::MonoTlsSettings * this_ptr, app::String__Array * value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_SendCloseNotify, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_SendCloseNotify, (app::MonoTlsSettings * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Mono_Security_Interface_TlsProtocols_, get_EnabledProtocols, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_EnabledProtocols, (app::MonoTlsSettings * this_ptr, app::Nullable_1_Mono_Security_Interface_TlsProtocols_ value));
IL2CPP_REGISTER_METHOD(0x002FBB60, CipherSuiteCode__Enum__Array *, get_EnabledCiphers, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_EnabledCiphers, (app::MonoTlsSettings * this_ptr, app::CipherSuiteCode__Enum__Array * value));
IL2CPP_REGISTER_METHOD(0x02A467C0, void, __ctor_1, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A467D0, MonoTlsSettings *, get_DefaultSettings, ());
IL2CPP_REGISTER_METHOD(0x02A46940, MonoTlsSettings *, CopyDefaultSettings, ());
IL2CPP_REGISTER_METHOD(0x002FBBA0, ICertificateValidator *, get_CertificateValidator, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A46970, MonoTlsSettings *, CloneWithValidator, (app::MonoTlsSettings * this_ptr, app::ICertificateValidator * validator));
IL2CPP_REGISTER_METHOD(0x02A46AF0, MonoTlsSettings *, Clone, (app::MonoTlsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A46C40, void, __ctor_2, (app::MonoTlsSettings * this_ptr, app::MonoTlsSettings * other));
}
