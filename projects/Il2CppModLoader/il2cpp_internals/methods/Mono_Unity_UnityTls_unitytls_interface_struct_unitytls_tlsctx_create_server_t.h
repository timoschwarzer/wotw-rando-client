#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02188290, UnityTls_unitytls_tlsctx *, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint64_t cert_chain, uint64_t leaf_certificate_key, app::UnityTls_unitytls_errorstate * error_state));
IL2CPP_REGISTER_METHOD(0x02188A20, IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint64_t cert_chain, uint64_t leaf_certificate_key, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, UnityTls_unitytls_tlsctx *, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t * this_ptr, app::IAsyncResult * result));
}
