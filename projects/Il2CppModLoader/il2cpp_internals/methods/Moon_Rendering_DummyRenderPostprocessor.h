#include <interception_macros.h>

namespace app::methods::Moon_Rendering::DummyRenderPostprocessor {
    IL2CPP_REGISTER_METHOD(0x007890D0, void, IRenderPostprocessor_OnRenderImage, (app::DummyRenderPostprocessor * this_ptr, app::PostProcessRenderContext * context));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::DummyRenderPostprocessor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, (app::DummyRenderPostprocessor * this_ptr));
}
