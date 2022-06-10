#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraFilterPack_Edge_Edge_filter {
    IL2CPP_REGISTER_METHOD(0x024643F0, app::Material *, get_material, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024645D0, void, Start, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02464740, void, OnRenderImage, (app::CameraFilterPack_Edge_Edge_filter * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02464B50, void, OnValidate, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02464BE0, void, Update, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02464C70, void, OnDisable, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02464D50, void, ctor, (app::CameraFilterPack_Edge_Edge_filter * this_ptr))
}
