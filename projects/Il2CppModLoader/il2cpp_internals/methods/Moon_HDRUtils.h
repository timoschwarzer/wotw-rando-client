#include <interception_macros.h>

namespace app::methods::Moon::HDRUtils {
IL2CPP_REGISTER_METHOD(0x01497540, String *, GetPaperwhiteDisplayString, (float value));
IL2CPP_REGISTER_METHOD(0x01497630, float, GetPaperwhiteDisplayValue, (float value));
IL2CPP_REGISTER_METHOD(0x014977E0, String *, GetContrastDisplayString, (float value));
IL2CPP_REGISTER_METHOD(0x01497A00, String *, GetUIBrightnessDisplayString, (float value));
IL2CPP_REGISTER_METHOD(0x01497C20, String *, GetRichnessDisplayString, (float value));
IL2CPP_REGISTER_METHOD(0x01497E40, String *, GetShadowDetailDisplayString, (float value));
IL2CPP_REGISTER_METHOD(0x01498060, void, InitializeDefaults, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsHDRAllowedOnDevice, ());
IL2CPP_REGISTER_METHOD(0x01498240, bool, get_IsHDRCompatible, ());
IL2CPP_REGISTER_METHOD(0x01498310, bool, get_CanHDRBeToggled, ());
IL2CPP_REGISTER_METHOD(0x014983B0, bool, get_HDREnabledUserPreference, ());
IL2CPP_REGISTER_METHOD(0x01498400, void, set_HDREnabledUserPreference, (bool value));
IL2CPP_REGISTER_METHOD(0x01498450, bool, get_IsHDRCompatibleAndEnabled, ());
IL2CPP_REGISTER_METHOD(0x01498580, float, get_ColorGamutExpansion, ());
IL2CPP_REGISTER_METHOD(0x01498620, void, set_ColorGamutExpansion, (float value));
IL2CPP_REGISTER_METHOD(0x01498710, float, get_ReconstructionNitsToPaperwhiteRatio, ());
IL2CPP_REGISTER_METHOD(0x014987B0, void, set_ReconstructionNitsToPaperwhiteRatio, (float value));
IL2CPP_REGISTER_METHOD(0x01498870, float, get_PaperwhiteNitsAndReconstruction, ());
IL2CPP_REGISTER_METHOD(0x01498900, void, set_PaperwhiteNitsAndReconstruction, (float value));
IL2CPP_REGISTER_METHOD(0x014989C0, float, get_PaperwhiteNits, ());
IL2CPP_REGISTER_METHOD(0x01498A60, void, set_PaperwhiteNits, (float value));
IL2CPP_REGISTER_METHOD(0x01498B50, float, get_PaperwhiteNitsUI, ());
IL2CPP_REGISTER_METHOD(0x01498BF0, void, set_PaperwhiteNitsUI, (float value));
IL2CPP_REGISTER_METHOD(0x01498CA0, float, get_SceneMaxNits, ());
IL2CPP_REGISTER_METHOD(0x01498D40, void, set_SceneMaxNits, (float value));
IL2CPP_REGISTER_METHOD(0x01498E30, float, get_SoftShoulderNits, ());
IL2CPP_REGISTER_METHOD(0x01498ED0, void, set_SoftShoulderNits, (float value));
IL2CPP_REGISTER_METHOD(0x01498FC0, float, get_MinBrightnessOfTV, ());
IL2CPP_REGISTER_METHOD(0x01499060, void, set_MinBrightnessOfTV, (float value));
IL2CPP_REGISTER_METHOD(0x01499150, float, get_UIBrightnessBoost, ());
IL2CPP_REGISTER_METHOD(0x01499220, void, set_UIBrightnessBoost, (float value));
IL2CPP_REGISTER_METHOD(0x014992F0, float, get_ShadowDetail, ());
IL2CPP_REGISTER_METHOD(0x014993C0, void, set_ShadowDetail, (float value));
IL2CPP_REGISTER_METHOD(0x01499490, float, get_MaxBrightnessOfTV, ());
IL2CPP_REGISTER_METHOD(0x01499530, void, set_MaxBrightnessOfTV, (float value));
IL2CPP_REGISTER_METHOD(0x01499620, float, get_HDRReconstructionMaxNits, ());
IL2CPP_REGISTER_METHOD(0x014996F0, void, set_HDRReconstructionMaxNits, (float value));
IL2CPP_REGISTER_METHOD(0x014997C0, float, get_HDRReconstructionType, ());
IL2CPP_REGISTER_METHOD(0x01499890, void, set_HDRReconstructionType, (float value));
IL2CPP_REGISTER_METHOD(0x01499960, float, get_VisualizeMaxValue, ());
IL2CPP_REGISTER_METHOD(0x01499A30, void, set_VisualizeMaxValue, (float value));
IL2CPP_REGISTER_METHOD(0x01499B00, bool, get_EnableHDRVisualization, ());
IL2CPP_REGISTER_METHOD(0x01499BC0, void, set_EnableHDRVisualization, (bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (HDRUtils * __this));
IL2CPP_REGISTER_METHOD(0x01499C90, void, __cctor, ());
}
