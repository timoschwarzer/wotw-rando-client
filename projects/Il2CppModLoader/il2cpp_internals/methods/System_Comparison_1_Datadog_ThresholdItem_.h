#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Datadog_ThresholdItem_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y));
IL2CPP_REGISTER_METHOD(0x02B864E0, IAsyncResult *, BeginInvoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::IAsyncResult * result));
}
