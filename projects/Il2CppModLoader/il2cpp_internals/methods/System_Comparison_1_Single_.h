#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Single_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02C7F3A0, int32_t, Invoke, (app::Comparison_1_Single_ * this_ptr, float x, float y));
    IL2CPP_REGISTER_METHOD(0x02C7F710, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Single_ * this_ptr, float x, float y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Single_ * this_ptr, app::IAsyncResult * result));
}
