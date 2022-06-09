#include <interception_macros.h>

namespace app::methods::LegacyFloatShaderPropertyAnimator {
IL2CPP_REGISTER_METHOD(0x00A24880, int32_t, get_PropertyID, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A24900, Renderer *, get_TargetRenderer, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A249D0, Material *, get_TargetMaterial, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A24AA0, Material *, GetMaterial, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A25040, void, AnimateIt, (app::LegacyFloatShaderPropertyAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00A251B0, void, RestoreToOriginalState, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A252F0, void, __ctor, (app::LegacyFloatShaderPropertyAnimator * this_ptr));
}
