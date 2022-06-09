#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_Rendering::SupportedRenderingFeatures {
IL2CPP_REGISTER_METHOD(0x02525330, void, __ctor, (app::SupportedRenderingFeatures * this_ptr));
IL2CPP_REGISTER_METHOD(0x02525360, SupportedRenderingFeatures *, get_active, ());
IL2CPP_REGISTER_METHOD(0x02525570, void, set_active, (app::SupportedRenderingFeatures * value));
IL2CPP_REGISTER_METHOD(0x02525620, SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_defaultMixedLightingMode, (app::SupportedRenderingFeatures * this_ptr));
IL2CPP_REGISTER_METHOD(0x024AD170, SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_supportedMixedLightingModes, (app::SupportedRenderingFeatures * this_ptr));
IL2CPP_REGISTER_METHOD(0x024AD180, LightmapBakeType__Enum, get_supportedLightmapBakeTypes, (app::SupportedRenderingFeatures * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EB1C70, LightmapsMode__Enum, get_supportedLightmapsModes, (app::SupportedRenderingFeatures * this_ptr));
IL2CPP_REGISTER_METHOD(0x02525630, void, FallbackMixedLightingModeByRef, (app::void * fallback_mode_ptr));
IL2CPP_REGISTER_METHOD(0x02525810, bool, IsMixedLightingModeSupported, (app::MixedLightingMode__Enum mixed_mode));
IL2CPP_REGISTER_METHOD(0x025258C0, void, IsMixedLightingModeSupportedByRef, (app::MixedLightingMode__Enum mixed_mode, app::void * is_supported_ptr));
IL2CPP_REGISTER_METHOD(0x02525A90, bool, IsLightmapBakeTypeSupported, (app::LightmapBakeType__Enum bake_type));
IL2CPP_REGISTER_METHOD(0x02525C40, void, IsLightmapBakeTypeSupportedByRef, (app::LightmapBakeType__Enum bake_type, app::void * is_supported_ptr));
IL2CPP_REGISTER_METHOD(0x02525D70, void, IsLightmapsModeSupportedByRef, (app::LightmapsMode__Enum mode, app::void * is_supported_ptr));
IL2CPP_REGISTER_METHOD(0x02525E30, void, __cctor, ());
}
