#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Rendering::GraphicsExt {
    IL2CPP_REGISTER_METHOD(0x0078CAF0, void, BeginSample, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0078CCD0, void, EndSample, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0078CEB0, void, cctor, ())
}
