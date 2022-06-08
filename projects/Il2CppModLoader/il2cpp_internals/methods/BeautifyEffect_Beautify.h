#include <interception_macros.h>

namespace app::methods::BeautifyEffect::Beautify {
IL2CPP_REGISTER_METHOD(0x00654950, BEAUTIFY_PRESET__Enum, get_preset, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031778D0, void, set_preset, (Beautify * __this, BEAUTIFY_PRESET__Enum value));
IL2CPP_REGISTER_METHOD(0x00998570, BEAUTIFY_QUALITY__Enum, get_quality, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031778E0, void, set_quality, (Beautify * __this, BEAUTIFY_QUALITY__Enum value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_compareMode, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031778F0, void, set_compareMode, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_sharpenMinDepth, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177900, void, set_sharpenMinDepth, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_sharpenMaxDepth, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177920, void, set_sharpenMaxDepth, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_sharpen, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177940, void, set_sharpen, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_sharpenDepthThreshold, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177960, void, set_sharpenDepthThreshold, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x03177980, Color, get_tintColor, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177990, void, set_tintColor, (Beautify * __this, Color value));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_sharpenRelaxation, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031779F0, void, set_sharpenRelaxation, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_sharpenClamp, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177A10, void, set_sharpenClamp, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x01050D20, float, get_sharpenMotionSensibility, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177A30, void, set_sharpenMotionSensibility, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_saturate, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177A50, void, set_saturate, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_contrast, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177A70, void, set_contrast, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x008693A0, float, get_brightness, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177A90, void, set_brightness, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_dither, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177AB0, void, set_dither, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ditherDepth, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177AD0, void, set_ditherDepth, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00623240, float, get_daltonize, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177AF0, void, set_daltonize, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_vignetting, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177B10, void, set_vignetting, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03177B30, Color, get_vignettingColor, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177B40, void, set_vignettingColor, (Beautify * __this, Color value));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_frame, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177BA0, void, set_frame, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03177BC0, Color, get_frameColor, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177BD0, void, set_frameColor, (Beautify * __this, Color value));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_sepia, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177C30, void, set_sepia, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005035A0, bool, get_nightVision, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177C60, void, set_nightVision, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03177CB0, Color, get_nightVisionColor, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177CC0, void, set_nightVisionColor, (Beautify * __this, Color value));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_outline, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177D20, void, set_outline, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C4320, Color, get_outlineColor, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177D40, void, set_outlineColor, (Beautify * __this, Color value));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_thermalVision, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177DA0, void, set_thermalVision, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_lensDirt, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177DF0, void, set_lensDirt, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0074B550, float, get_lensDirtThreshold, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177E10, void, set_lensDirtThreshold, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A79490, float, get_lensDirtIntensity, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177E30, void, set_lensDirtIntensity, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00660430, Texture2D *, get_lensDirtTexture, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177E50, void, set_lensDirtTexture, (Beautify * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_bloom, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177F20, void, set_bloom, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03177F40, float, get_bloomIntensity, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03177F50, void, set_bloomIntensity, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_bloomAntiflicker, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178020, void, set_bloomAntiflicker, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006E00E0, float, get_bloomThreshold, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178040, void, set_bloomThreshold, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00875720, bool, get_bloomCustomize, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178060, void, set_bloomCustomize, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00508FE0, bool, get_bloomDebug, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178080, void, set_bloomDebug, (Beautify * __this, bool value));
IL2CPP_REGISTER_METHOD(0x009C5D50, float, get_bloomWeight0, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031780A0, void, set_bloomWeight0, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_bloomWeight1, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031780C0, void, set_bloomWeight1, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x0070BAF0, float, get_bloomWeight2, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031780E0, void, set_bloomWeight2, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x006F45A0, float, get_bloomWeight3, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178100, void, set_bloomWeight3, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x006F45C0, float, get_bloomWeight4, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178120, void, set_bloomWeight4, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x01256740, float, get_bloomWeight5, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178140, void, set_bloomWeight5, (Beautify * __this, float value));
IL2CPP_REGISTER_METHOD(0x03178160, Beautify *, get_instance, ());
IL2CPP_REGISTER_METHOD(0x011354B0, Camera *, get_cameraEffect, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x031783D0, void, OnEnable, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178520, void, OnDisable, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178680, void, Reset, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178690, void, LateUpdate, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x03178AC0, void, OnRenderImage, (Beautify * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03179AC0, void, BlurThis, (Beautify * __this, RenderTexture * rt));
IL2CPP_REGISTER_METHOD(0x03179D60, void, UpdateMaterialProperties, (Beautify * __this));
IL2CPP_REGISTER_METHOD(0x0317AD40, void, UpdateSharpenParams, (Beautify * __this, float sharpen));
IL2CPP_REGISTER_METHOD(0x0317AE90, void, SetBloomWeights, (Beautify * __this, float w0, float w1, float w2, float w3, float w4, float w5));
IL2CPP_REGISTER_METHOD(0x0317AEE0, void, __ctor, (Beautify * __this));
}
