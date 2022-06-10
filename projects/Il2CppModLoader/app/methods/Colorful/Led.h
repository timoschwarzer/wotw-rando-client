#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Colorful::Led {
    IL2CPP_REGISTER_METHOD(0x03048010, void, OnRenderImage, (app::Led * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03048250, app::String *, GetShaderName, (app::Led * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030482D0, void, ctor, (app::Led * this_ptr))
}
