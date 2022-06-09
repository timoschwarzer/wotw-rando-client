#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalService_XalPlatformWebShowUrlEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalService_XalPlatformWebShowUrlEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x0143EC80, void, Invoke, (app::XalService_XalPlatformWebShowUrlEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * start_url, app::String * final_url, bool suppress_ui));
    IL2CPP_REGISTER_METHOD(0x0143F1D0, app::IAsyncResult *, BeginInvoke, (app::XalService_XalPlatformWebShowUrlEventHandler * this_ptr, void * context, void * user_context, void * operation, app::String * start_url, app::String * final_url, bool suppress_ui, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformWebShowUrlEventHandler * this_ptr, app::IAsyncResult * result));
}
