#include <interception_macros.h>

namespace app::methods::System::Comparison_1_UberShaderCustomShaderBlockResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_UberShaderCustomShaderBlockResult_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_UberShaderCustomShaderBlockResult_ * this_ptr, app::UberShaderCustomShaderBlockResult x, app::UberShaderCustomShaderBlockResult y));
    IL2CPP_REGISTER_METHOD(0x02C80CC0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UberShaderCustomShaderBlockResult_ * this_ptr, app::UberShaderCustomShaderBlockResult x, app::UberShaderCustomShaderBlockResult y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UberShaderCustomShaderBlockResult_ * this_ptr, app::IAsyncResult * result));
}
