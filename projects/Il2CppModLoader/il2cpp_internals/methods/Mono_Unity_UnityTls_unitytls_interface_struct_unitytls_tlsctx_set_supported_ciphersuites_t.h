#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t * this_ptr, app::UnityTls_unitytls_tlsctx * ctx, app::UnityTls_unitytls_ciphersuite__Enum * supported_ciphersuites, app::void * supported_ciphersuites_len, app::UnityTls_unitytls_errorstate * error_state));
IL2CPP_REGISTER_METHOD(0x02189860, IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t * this_ptr, app::UnityTls_unitytls_tlsctx * ctx, app::UnityTls_unitytls_ciphersuite__Enum * supported_ciphersuites, app::void * supported_ciphersuites_len, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t * this_ptr, app::IAsyncResult * result));
}
