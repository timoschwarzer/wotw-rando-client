#include <interception_macros.h>

namespace app::methods::UberPostProcessingAnimation {
IL2CPP_REGISTER_METHOD(0x018F3EC0, void, CopyCameraSettings, (app::CameraSettings * * settings, app::CameraSettings * from_settings));
IL2CPP_REGISTER_METHOD(0x018F3F90, void, StartAnimateCameraSettingsJob, (app::CameraSettings * * settings, app::CameraSettings * from_settings, app::CameraSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F46B0, void, AnimateOtherCameraSettings, (app::CameraSettings * * settings, app::CameraSettings * from_settings, app::CameraSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F50B0, void, FinishAnimateCameraSettingsJob, (app::CameraSettings * * settings));
IL2CPP_REGISTER_METHOD(0x018F5330, void, AnimateCameraSettings, (app::CameraSettings * * settings, app::CameraSettings * from_settings, app::CameraSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F5450, void, AnimateVignettingSettings, (app::VignettingSettings * * vignetting_settings, app::VignettingSettings * from_settings, app::VignettingSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F55A0, void, AnimateNoiseSettings, (app::NoiseSettings * * noise_settings, app::NoiseSettings * from_settings, app::NoiseSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F5730, void, AnimateContrastSettings, (app::ContrastSettings * * contrast_settings, app::ContrastSettings * from_settings, app::ContrastSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F5880, void, AnimateDesaturationSettings, (app::DesaturationSettings * * desaturation_settings, app::DesaturationSettings * from_settings, app::DesaturationSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F5990, void, AnimateColorCorrectionSettings, (app::ColorCorrectionSettings * * color_correction_settings, app::ColorCorrectionSettings * from_settings, app::ColorCorrectionSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F5B10, void, AnimateCurveKeyframe, (app::AnimationCurve * * curve, int32_t keyframe_index, app::AnimationCurve * from_curve, app::AnimationCurve * to_curve, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F6000, void, AnimateBloomSettings, (app::BloomSettings * * bloom_settings, app::BloomSettings * from_settings, app::BloomSettings * to_settings, float curve_value));
IL2CPP_REGISTER_METHOD(0x018F6180, void, AnimateEmissiveSettings, (app::EmissiveSettings * * emissive_settings, app::EmissiveSettings * from_settings, app::EmissiveSettings * to_settings, float curve_value));
}
