#include <interception_macros.h>

namespace app::methods::System::Comparison_1_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_UInt64_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02188B40, int32_t, Invoke, (app::Comparison_1_UInt64_ * this_ptr, uint64_t x, uint64_t y));
    IL2CPP_REGISTER_METHOD(0x02C7FDE0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UInt64_ * this_ptr, uint64_t x, uint64_t y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UInt64_ * this_ptr, app::IAsyncResult * result));
}
