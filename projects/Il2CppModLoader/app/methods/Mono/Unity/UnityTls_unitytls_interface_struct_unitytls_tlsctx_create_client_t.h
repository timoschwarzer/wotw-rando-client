#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188290, app::UnityTls_unitytls_tlsctx *, Invoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t * cn, void * cn_len, app::UnityTls_unitytls_errorstate * error_state))
    IL2CPP_REGISTER_METHOD(0x02188910, app::IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * this_ptr, app::UnityTls_unitytls_tlsctx_protocolrange supported_protocols, app::UnityTls_unitytls_tlsctx_callbacks callbacks, uint8_t * cn, void * cn_len, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::UnityTls_unitytls_tlsctx *, EndInvoke, (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t * this_ptr, app::IAsyncResult * result))
}
