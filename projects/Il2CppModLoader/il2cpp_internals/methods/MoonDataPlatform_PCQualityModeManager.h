#include <interception_macros.h>

namespace app::methods::MoonDataPlatform::PCQualityModeManager {
IL2CPP_REGISTER_METHOD(0x00F485D0, PCQualityModeManager_QualityMode__Enum, get_CurrentMode, ());
IL2CPP_REGISTER_METHOD(0x00F48670, void, set_CurrentMode, (PCQualityModeManager_QualityMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00F48740, void, ApplyMode, (PCQualityModeManager_QualityMode__Enum mode));
IL2CPP_REGISTER_METHODINFO(0x0476CF68, PCQualityModeManager_ApplyMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PCQualityModeManager * __this));
IL2CPP_REGISTER_METHOD(0x00F48B70, void, __cctor, ());
}
