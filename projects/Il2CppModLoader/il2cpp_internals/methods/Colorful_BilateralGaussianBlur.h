#include <interception_macros.h>

namespace app::methods::Colorful::BilateralGaussianBlur {
IL2CPP_REGISTER_METHOD(0x0303E420, void, Start, (app::BilateralGaussianBlur * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303E550, void, OnRenderImage, (app::BilateralGaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303E8B0, void, OnePassBlur, (app::BilateralGaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303ECE0, void, MultiPassBlur, (app::BilateralGaussianBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303F420, String *, GetShaderName, (app::BilateralGaussianBlur * this_ptr));
IL2CPP_REGISTER_METHOD(0x0303F4A0, void, __ctor, (app::BilateralGaussianBlur * this_ptr));
}
