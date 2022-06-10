#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Colorful::Strokes {
    IL2CPP_REGISTER_METHOD(0x03053D80, void, OnRenderImage, (app::Strokes * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03054110, app::String *, GetShaderName, (app::Strokes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03054190, void, ctor, (app::Strokes * this_ptr))
}
