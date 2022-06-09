#include <interception_macros.h>

namespace app::methods::Moon_Timeline::TransparencyAnimatorSystemStrategy_RendererState {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_HandoverAlpha, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D10AD0, void, set_HandoverAlpha, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_LastAlphaApplied, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_LastAlphaApplied, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_ProcessedFrame, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_ProcessedFrame, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, ContainsHandoverValue, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D10AF0, void, InvalidateHandoverForNextFrame, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D10B00, void, KillInvalidHandover, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00D10B20, void, __ctor, (app::TransparencyAnimatorSystemStrategy_RendererState * this_ptr));
}
