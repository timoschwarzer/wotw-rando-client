#include <interception_macros.h>

namespace app::methods::System::Comparison_1_TimeSpan_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_TimeSpan_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_TimeSpan_ * this_ptr, app::TimeSpan x, app::TimeSpan y));
IL2CPP_REGISTER_METHOD(0x02C7F7F0, IAsyncResult *, BeginInvoke, (app::Comparison_1_TimeSpan_ * this_ptr, app::TimeSpan x, app::TimeSpan y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_TimeSpan_ * this_ptr, app::IAsyncResult * result));
}
