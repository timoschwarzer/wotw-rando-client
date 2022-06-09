#include <interception_macros.h>

namespace app::methods::AkInitializationSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkInitializationSettings * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x026EB400, void *, getCPtr, (app::AkInitializationSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkInitializationSettings * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x026EB490, void, Finalize, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EB510, void, Dispose, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EB720, void, __ctor_2, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EB840, void, set_memSettings, (app::AkInitializationSettings * this_ptr, app::AkMemSettings * value));
IL2CPP_REGISTER_METHOD(0x026EB9D0, AkMemSettings *, get_memSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EBBE0, void, set_streamMgrSettings, (app::AkInitializationSettings * this_ptr, app::AkStreamMgrSettings * value));
IL2CPP_REGISTER_METHOD(0x026EBD20, AkStreamMgrSettings *, get_streamMgrSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EBF30, void, set_deviceSettings, (app::AkInitializationSettings * this_ptr, app::AkDeviceSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC070, AkDeviceSettings *, get_deviceSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EC280, void, set_initSettings, (app::AkInitializationSettings * this_ptr, app::AkInitSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC3C0, AkInitSettings *, get_initSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EC5D0, void, set_platformSettings, (app::AkInitializationSettings * this_ptr, app::AkPlatformInitSettings * value));
IL2CPP_REGISTER_METHOD(0x026EC710, AkPlatformInitSettings *, get_platformSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026EC920, void, set_musicSettings, (app::AkInitializationSettings * this_ptr, app::AkMusicSettings * value));
IL2CPP_REGISTER_METHOD(0x026ECA60, AkMusicSettings *, get_musicSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026ECC70, void, set_preparePoolSize, (app::AkInitializationSettings * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026ECDA0, uint32_t, get_preparePoolSize, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026ECEC0, void, set_unityPlatformSpecificSettings, (app::AkInitializationSettings * this_ptr, app::AkUnityPlatformSpecificSettings * value));
IL2CPP_REGISTER_METHOD(0x026ED050, AkUnityPlatformSpecificSettings *, get_unityPlatformSpecificSettings, (app::AkInitializationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026ED260, void, set_useAsyncOpen, (app::AkInitializationSettings * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x026ED390, bool, get_useAsyncOpen, (app::AkInitializationSettings * this_ptr));
}
