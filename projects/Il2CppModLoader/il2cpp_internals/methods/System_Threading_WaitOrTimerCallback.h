#include <interception_macros.h>

namespace app::methods::System_Threading::WaitOrTimerCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::WaitOrTimerCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, (app::WaitOrTimerCallback * this_ptr, app::Object * state, bool timed_out));
IL2CPP_REGISTER_METHOD(0x027AB930, IAsyncResult *, BeginInvoke, (app::WaitOrTimerCallback * this_ptr, app::Object * state, bool timed_out, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::WaitOrTimerCallback * this_ptr, app::IAsyncResult * result));
}
