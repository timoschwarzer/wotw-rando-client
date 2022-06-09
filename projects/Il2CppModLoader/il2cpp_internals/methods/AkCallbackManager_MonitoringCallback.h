#include <interception_macros.h>

namespace app::methods::AkCallbackManager_MonitoringCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x026D4CF0, void, Invoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::AkMonitorErrorCode__Enum in_error_code, app::AkMonitorErrorLevel__Enum in_error_level, uint32_t in_playing_i_d, uint64_t in_game_obj_i_d, app::String * in_msg));
IL2CPP_REGISTER_METHOD(0x026D5190, IAsyncResult *, BeginInvoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::AkMonitorErrorCode__Enum in_error_code, app::AkMonitorErrorLevel__Enum in_error_level, uint32_t in_playing_i_d, uint64_t in_game_obj_i_d, app::String * in_msg, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::IAsyncResult * result));
}
