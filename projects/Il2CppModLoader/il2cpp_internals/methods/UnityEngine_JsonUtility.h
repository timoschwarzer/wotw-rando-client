#include <interception_macros.h>

namespace app::methods::UnityEngine::JsonUtility {
    IL2CPP_REGISTER_METHOD(0x031C2D00, app::String *, ToJsonInternal, (app::Object * obj, bool pretty_print));
    IL2CPP_REGISTER_METHOD(0x031C2D60, app::Object *, FromJsonInternal, (app::String * json, app::Object * object_to_overwrite, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x00C4CBF0, app::String *, ToJson_1, (app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x031C2DD0, app::String *, ToJson_2, (app::Object * obj, bool pretty_print));
    IL2CPP_REGISTER_METHODINFO(0x047716E8, JsonUtility_ToJson_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x031C2FA0, app::Object *, FromJson_1, (app::String * json, app::Type * type));
    IL2CPP_REGISTER_METHODINFO(0x0473F880, JsonUtility_FromJson__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x031C3150, void, FromJsonOverwrite, (app::String * json, app::Object * object_to_overwrite));
    IL2CPP_REGISTER_METHODINFO(0x04765AB8, JsonUtility_FromJsonOverwrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::Object *, FromJson_2, (app::String * json));
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::AkWwiseInitializationSettings_WwiseOverrideSettings *, FromJson_3, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04770880, JsonUtility_FromJson_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings *, FromJson_4, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04764800, JsonUtility_FromJson_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::GameParameters *, FromJson_5, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04714330, JsonUtility_FromJson_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::ReplayValidatorData *, FromJson_6, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x0475FE58, JsonUtility_FromJson_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::NameOptions_NameDatabase *, FromJson_7, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x0476C020, JsonUtility_FromJson_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::RuntimeBuildInformation *, FromJson_8, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x0475A510, JsonUtility_FromJson_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::XAchievements *, FromJson_9, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04745710, JsonUtility_FromJson_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::UberPoolPerfTest_Settings *, FromJson_10, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x0473C618, JsonUtility_FromJson_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157CEF0, app::SwitchController_VibrationData *, FromJson_11, (app::String * json));
    IL2CPP_REGISTER_METHODINFO(0x04791B88, JsonUtility_FromJson_10__MethodInfo);
}
