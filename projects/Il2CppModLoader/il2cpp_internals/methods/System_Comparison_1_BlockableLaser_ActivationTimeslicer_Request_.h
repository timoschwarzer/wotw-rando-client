#include <interception_macros.h>

namespace app::methods::System::Comparison_1_BlockableLaser_ActivationTimeslicer_Request_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::BlockableLaser_ActivationTimeslicer_Request x, app::BlockableLaser_ActivationTimeslicer_Request y));
IL2CPP_REGISTER_METHOD(0x02B84F40, IAsyncResult *, BeginInvoke, (app::Comparison_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::BlockableLaser_ActivationTimeslicer_Request x, app::BlockableLaser_ActivationTimeslicer_Request y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::IAsyncResult * result));
}
