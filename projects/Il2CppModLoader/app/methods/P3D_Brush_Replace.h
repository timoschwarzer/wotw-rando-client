#include <interception_macros.h>

namespace app::methods::P3D_Brush_Replace {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x0308F1F0, app::Color, Blend, (app::Color old, app::Color add))
}
