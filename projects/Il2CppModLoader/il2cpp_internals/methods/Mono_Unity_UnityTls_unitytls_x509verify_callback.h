#include <interception_macros.h>

namespace app::methods::Mono_Unity::UnityTls_unitytls_x509verify_callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::UnityTls_unitytls_x509verify_callback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0248D200, UnityTls_unitytls_x509verify_result__Enum, Invoke, (app::UnityTls_unitytls_x509verify_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_x509_ref cert, app::UnityTls_unitytls_x509verify_result__Enum result, app::UnityTls_unitytls_errorstate * error_state));
IL2CPP_REGISTER_METHOD(0x0248D620, IAsyncResult *, BeginInvoke, (app::UnityTls_unitytls_x509verify_callback * this_ptr, app::Void * user_data, app::UnityTls_unitytls_x509_ref cert, app::UnityTls_unitytls_x509verify_result__Enum result, app::UnityTls_unitytls_errorstate * error_state, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, UnityTls_unitytls_x509verify_result__Enum, EndInvoke, (app::UnityTls_unitytls_x509verify_callback * this_ptr, app::IAsyncResult * result));
}
