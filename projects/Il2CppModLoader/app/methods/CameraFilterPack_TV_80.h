#include <interception_macros.h>

namespace app::methods::CameraFilterPack_TV_80 {
    IL2CPP_REGISTER_METHOD(0x020E3540, app::Material *, get_material, (app::CameraFilterPack_TV_80 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3720, void, Start, (app::CameraFilterPack_TV_80 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3870, void, OnRenderImage, (app::CameraFilterPack_TV_80 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_80 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E3B60, void, OnDisable, (app::CameraFilterPack_TV_80 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_TV_80 * this_ptr))
}
