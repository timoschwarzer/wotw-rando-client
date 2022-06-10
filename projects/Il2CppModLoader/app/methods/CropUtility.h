#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CropUtility {
    IL2CPP_REGISTER_METHOD(0x00DB8610, void, CropMaterial, (app::Material * material))
    IL2CPP_REGISTER_METHOD(0x00DB8820, app::Rect, GetOccupiedRectNormalized, (app::Texture2D * tex))
    IL2CPP_REGISTER_METHOD(0x00DB8950, app::Rect, GetOccupiedRect, (app::Texture2D * tex))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CropUtility * this_ptr))
}
