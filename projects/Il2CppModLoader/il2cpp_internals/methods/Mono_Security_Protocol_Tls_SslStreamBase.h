#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::SslStreamBase {
    IL2CPP_REGISTER_METHOD(0x01F83540, void, __ctor, (app::SslStreamBase * this_ptr, app::Stream * stream, bool owns_stream));
    IL2CPP_REGISTER_METHODINFO(0x04797EA0, SslStreamBase__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F83BB0, void, AsyncHandshakeCallback, (app::SslStreamBase * this_ptr, app::IAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04716408, SslStreamBase_AsyncHandshakeCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F83DD0, bool, get_MightNeedHandshake, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F83F00, void, NegotiateHandshake, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F811B0, app::X509Certificate_1 *, RaiseLocalCertificateSelection, (app::SslStreamBase * this_ptr, app::X509CertificateCollection_1 * certificates, app::X509Certificate_1 * remote_certificate, app::String * target_host, app::X509CertificateCollection_1 * requested_certificates));
    IL2CPP_REGISTER_METHOD(0x01F81170, bool, RaiseRemoteCertificateValidation, (app::SslStreamBase * this_ptr, app::X509Certificate_1 * certificate, app::Int32__Array * errors));
    IL2CPP_REGISTER_METHOD(0x01F81190, app::ValidationResult *, RaiseRemoteCertificateValidation2, (app::SslStreamBase * this_ptr, app::X509CertificateCollection_2 * collection));
    IL2CPP_REGISTER_METHOD(0x01F811F0, app::AsymmetricAlgorithm *, RaiseLocalPrivateKeySelection, (app::SslStreamBase * this_ptr, app::X509Certificate_1 * certificate, app::String * target_host));
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_CheckCertRevocationStatus, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00EEDBC0, void, set_CheckCertRevocationStatus, (app::SslStreamBase * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01F84180, app::CipherAlgorithmType__Enum, get_CipherAlgorithm, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F841E0, int32_t, get_CipherStrength, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F84240, app::HashAlgorithmType__Enum, get_HashAlgorithm, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F842A0, int32_t, get_HashStrength, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F84310, int32_t, get_KeyExchangeStrength, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F843B0, app::ExchangeAlgorithmType__Enum, get_KeyExchangeAlgorithm, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F84410, app::SecurityProtocolType__Enum_1, get_SecurityProtocol, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F84450, app::X509Certificate_1 *, get_ServerCertificate, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F846C0, app::X509CertificateCollection_2 *, get_ServerCertificates, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F846F0, bool, BeginNegotiateHandshake, (app::SslStreamBase * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04773158, SslStreamBase_BeginNegotiateHandshake__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F84A00, void, EndNegotiateHandshake, (app::SslStreamBase * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04715490, SslStreamBase_EndNegotiateHandshake__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F84AF0, app::IAsyncResult *, BeginRead, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x047140D0, SslStreamBase_BeginRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F84E10, void, InternalBeginRead, (app::SslStreamBase * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x0472E4A0, SslStreamBase_InternalBeginRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F85490, void, InternalReadCallback, (app::SslStreamBase * this_ptr, app::IAsyncResult * result));
    IL2CPP_REGISTER_METHODINFO(0x0472B5E0, SslStreamBase_InternalReadCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F85740, void, InternalReadCallback_inner, (app::SslStreamBase * this_ptr, app::SslStreamBase_InternalAsyncResult * internal_result, app::Byte__Array * recbuf, app::Object__Array * state, bool did_read, int32_t n));
    IL2CPP_REGISTER_METHODINFO(0x0471DFE8, SslStreamBase_InternalReadCallback_inner__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F85F50, void, InternalBeginWrite, (app::SslStreamBase * this_ptr, app::SslStreamBase_InternalAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04792988, SslStreamBase_InternalBeginWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F86280, void, InternalWriteCallback, (app::SslStreamBase * this_ptr, app::IAsyncResult * ar));
    IL2CPP_REGISTER_METHODINFO(0x04780558, SslStreamBase_InternalWriteCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F863F0, app::IAsyncResult *, BeginWrite, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x04778618, SslStreamBase_BeginWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F86710, int32_t, EndRead, (app::SslStreamBase * this_ptr, app::IAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04728168, SslStreamBase_EndRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F868D0, void, EndWrite, (app::SslStreamBase * this_ptr, app::IAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x04782758, SslStreamBase_EndWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F86A90, void, Close, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F86B40, void, Flush, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F86B80, int32_t, Read_1, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer));
    IL2CPP_REGISTER_METHOD(0x01F86BC0, int32_t, Read_2, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0477FE98, SslStreamBase_Read_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87580, int64_t, Seek, (app::SslStreamBase * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
    IL2CPP_REGISTER_METHODINFO(0x0473B0C0, SslStreamBase_Seek__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F875D0, void, SetLength, (app::SslStreamBase * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x0478B420, SslStreamBase_SetLength__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87620, void, Write_1, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer));
    IL2CPP_REGISTER_METHOD(0x01F87660, void, Write_2, (app::SslStreamBase * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x047753D8, SslStreamBase_Write_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01706D40, bool, get_CanRead, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F879E0, int64_t, get_Length, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047803E8, SslStreamBase_get_Length__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87A30, int64_t, get_Position, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047355E0, SslStreamBase_get_Position__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87A80, void, set_Position, (app::SslStreamBase * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x04798D48, SslStreamBase_set_Position__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87AD0, void, Finalize, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F87B50, void, Dispose, (app::SslStreamBase * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x01F87C90, void, resetBuffer, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F87CF0, void, checkDisposed, (app::SslStreamBase * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477AB80, SslStreamBase_checkDisposed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F87DA0, void, __cctor, ());
}
