#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509Helper {
IL2CPP_REGISTER_METHOD(0x01E178B0, void, InstallNativeHelper, (app::INativeCertificateHelper * helper));
IL2CPP_REGISTER_METHOD(0x01E17940, X509CertificateImpl *, Import_1, (app::Byte__Array * raw_data));
IL2CPP_REGISTER_METHOD(0x01E17950, X509CertificateImpl *, InitFromCertificate_1, (app::X509Certificate_1 * cert));
IL2CPP_REGISTER_METHOD(0x01E17A80, X509CertificateImpl *, InitFromCertificate_2, (app::X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x01E17CF0, bool, IsValid, (app::X509CertificateImpl * impl));
IL2CPP_REGISTER_METHOD(0x01E17D10, void, ThrowIfContextInvalid, (app::X509CertificateImpl * impl));
IL2CPP_REGISTER_METHODINFO(0x04726110, X509Helper_ThrowIfContextInvalid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E17DC0, Exception *, GetInvalidContextException, ());
IL2CPP_REGISTER_METHOD(0x01E17F20, X509Certificate *, ImportPkcs12, (app::Byte__Array * raw_data, app::String * password));
IL2CPP_REGISTER_METHOD(0x01E18530, Byte__Array *, PEM, (app::String * type, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E18730, Byte__Array *, ConvertData, (app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01E18810, X509CertificateImpl *, ImportCore, (app::Byte__Array * raw_data));
IL2CPP_REGISTER_METHODINFO(0x04733708, X509Helper_ImportCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E18A80, X509CertificateImpl *, Import_2, (app::Byte__Array * raw_data, app::String * password, app::X509KeyStorageFlags__Enum key_storage_flags));
IL2CPP_REGISTER_METHOD(0x01E18CD0, String *, ToHexString, (app::Byte__Array * data));
}
