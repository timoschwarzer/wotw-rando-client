#include <interception_macros.h>

namespace app::methods::UberShader::LightDirectionMapCompressor {
IL2CPP_REGISTER_METHOD(0x018F95D0, Texture2D *, GenerateErrorTexture, (app::LightDirectionMapCompressor * this_ptr, app::Texture2D * left_tex, app::Texture2D * right_tex, app::Texture2D * top_tex, app::Texture2D * bottom_tex));
IL2CPP_REGISTER_METHOD(0x018F9F10, Texture2D *, Process, (app::LightDirectionMapCompressor * this_ptr, app::Texture2D * left_tex, app::Texture2D * right_tex, app::Texture2D * top_tex, app::Texture2D * bottom_tex, app::Texture2D * front_tex, app::Texture2D * rim_tex, float downsampling_factor));
IL2CPP_REGISTER_METHOD(0x018FAA30, int32_t, GetTextureWidth, (app::LightDirectionMapCompressor * this_ptr, app::Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x018FAB00, int32_t, GetTextureHeight, (app::LightDirectionMapCompressor * this_ptr, app::Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x018FABD0, void, __ctor, (app::LightDirectionMapCompressor * this_ptr));
}
