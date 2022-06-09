#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509Certificate {
    IL2CPP_REGISTER_METHOD(0x01E15DC0, void, __ctor_1, (app::X509Certificate_1 * this_ptr, app::Byte__Array * data, bool dates));
    IL2CPP_REGISTER_METHOD(0x01E15E10, void, __ctor_2, (app::X509Certificate_1 * this_ptr, app::Byte__Array * data));
    IL2CPP_REGISTER_METHOD(0x01E15E50, void, __ctor_3, (app::X509Certificate_1 * this_ptr, app::X509CertificateImpl * impl));
    IL2CPP_REGISTER_METHODINFO(0x0478C6D0, X509Certificate_1__ctor_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E15F20, void, __ctor_4, (app::X509Certificate_1 * this_ptr, app::X509Certificate_1 * cert));
    IL2CPP_REGISTER_METHODINFO(0x04773EB8, X509Certificate_1__ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E160E0, void, ImportHandle, (app::X509Certificate_1 * this_ptr, app::X509CertificateImpl * impl));
    IL2CPP_REGISTER_METHOD(0x01E16110, app::X509CertificateImpl *, get_Impl, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16130, bool, get_IsValid, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16150, bool, Equals_1, (app::X509Certificate_1 * this_ptr, app::X509Certificate_1 * other));
    IL2CPP_REGISTER_METHODINFO(0x047745B8, X509Certificate_1_Equals__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E16290, app::Byte__Array *, GetCertHash, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E162F0, app::String *, GetCertHashString, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16320, int32_t, GetHashCode, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16380, app::String *, GetIssuerName, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E163C0, app::String *, GetName, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16400, app::Byte__Array *, GetPublicKey, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16440, app::Byte__Array *, GetRawCertData, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16480, app::Byte__Array *, GetSerialNumber, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E164C0, app::String *, GetSerialNumberString, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16610, app::String *, ToString_1, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16650, app::String *, ToString_2, (app::X509Certificate_1 * this_ptr, bool f_verbose));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_5, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E166E0, void, __ctor_6, (app::X509Certificate_1 * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01E16810, app::String *, get_Issuer, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16860, app::String *, get_Subject, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E168B0, bool, Equals_2, (app::X509Certificate_1 * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01E169A0, void, Import_1, (app::X509Certificate_1 * this_ptr, app::Byte__Array * raw_data, app::String * password, app::X509KeyStorageFlags__Enum key_storage_flags));
    IL2CPP_REGISTER_METHOD(0x01E16A00, void, Import_2, (app::X509Certificate_1 * this_ptr, app::String * file_name, app::String * password, app::X509KeyStorageFlags__Enum key_storage_flags));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (app::X509Certificate_1 * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHOD(0x01E16A60, void, ISerializable_GetObjectData, (app::X509Certificate_1 * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04735AF0, X509Certificate_1_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D2CEB0, void, Dispose_1, (app::X509Certificate_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E16B70, void, Dispose_2, (app::X509Certificate_1 * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x01E16B90, void, Reset, (app::X509Certificate_1 * this_ptr));
}
