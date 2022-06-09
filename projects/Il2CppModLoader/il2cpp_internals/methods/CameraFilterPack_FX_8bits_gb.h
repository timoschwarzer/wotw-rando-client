#include <interception_macros.h>

namespace app::methods::CameraFilterPack_FX_8bits_gb {
    IL2CPP_REGISTER_METHOD(0x02468640, app::Material *, get_material, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02468820, void, Start, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02468990, void, OnRenderImage, (app::CameraFilterPack_FX_8bits_gb * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture));
    IL2CPP_REGISTER_METHOD(0x02468D30, void, OnValidate, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02468DC0, void, Update, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02468E50, void, OnDisable, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (app::CameraFilterPack_FX_8bits_gb * this_ptr));
}
