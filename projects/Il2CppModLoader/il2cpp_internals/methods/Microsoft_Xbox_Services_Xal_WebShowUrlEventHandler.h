#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::WebShowUrlEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::WebShowUrlEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01435330, void, Invoke, (app::WebShowUrlEventHandler * this_ptr, app::void * operation_id, app::String * start_url, app::String * final_url, bool suppress_ui));
IL2CPP_REGISTER_METHOD(0x01435740, IAsyncResult *, BeginInvoke, (app::WebShowUrlEventHandler * this_ptr, app::void * operation_id, app::String * start_url, app::String * final_url, bool suppress_ui, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::WebShowUrlEventHandler * this_ptr, app::IAsyncResult * result));
}
