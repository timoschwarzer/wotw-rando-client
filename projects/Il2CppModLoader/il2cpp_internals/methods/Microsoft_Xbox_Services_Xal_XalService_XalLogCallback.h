#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalService_XalLogCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalService_XalLogCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0143D200, void, Invoke, (app::XalService_XalLogCallback * this_ptr, app::String * area_name, app::XalTraceLevel__Enum level, uint64_t thread_id, uint64_t timestamp, app::String * message));
IL2CPP_REGISTER_METHOD(0x0143D910, IAsyncResult *, BeginInvoke, (app::XalService_XalLogCallback * this_ptr, app::String * area_name, app::XalTraceLevel__Enum level, uint64_t thread_id, uint64_t timestamp, app::String * message, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalLogCallback * this_ptr, app::IAsyncResult * result));
}
