#include <interception_macros.h>

namespace app::methods::AkMonitoringCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkMonitoringCallbackInfo * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x018814D0, void *, getCPtr, (app::AkMonitoringCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMonitoringCallbackInfo * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x01881560, void, Finalize, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x018815E0, void, Dispose, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x018817F0, AkMonitorErrorCode__Enum, get_errorCode, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01881910, AkMonitorErrorLevel__Enum, get_errorLevel, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01881A30, uint32_t, get_playingID, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01881B50, uint64_t, get_gameObjID, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01881C70, String *, get_message, (app::AkMonitoringCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01881DC0, void, __ctor_2, (app::AkMonitoringCallbackInfo * this_ptr));
}
