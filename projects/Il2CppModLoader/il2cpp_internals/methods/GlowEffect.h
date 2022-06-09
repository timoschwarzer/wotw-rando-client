#include <interception_macros.h>

namespace app::methods::GlowEffect {
    IL2CPP_REGISTER_METHOD(0x024FA640, Material*, get_compositeMaterial, (app::GlowEffect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024FA820, Material*, get_blurMaterial, (app::GlowEffect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024FAA00, Material*, get_downsampleMaterial, (app::GlowEffect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024FABE0, void, OnDisable, (app::GlowEffect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024FAD70, void, Start, (app::GlowEffect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024FB160, void, FourTapCone, (app::GlowEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* dest, int32_t iteration));
    IL2CPP_REGISTER_METHOD(0x024FB320, void, DownSample4x, (app::GlowEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* dest));
    IL2CPP_REGISTER_METHOD(0x024FB440, void, OnRenderImage, (app::GlowEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* destination));
    IL2CPP_REGISTER_METHOD(0x024FB990, void, BlitGlow, (app::GlowEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* dest));
    IL2CPP_REGISTER_METHOD(0x024FBB00, void, __ctor, (app::GlowEffect * this_ptr));
} // namespace app::methods::GlowEffect
