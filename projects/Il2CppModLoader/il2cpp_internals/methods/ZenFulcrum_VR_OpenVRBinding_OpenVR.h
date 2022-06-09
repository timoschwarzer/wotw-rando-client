#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::OpenVR {
IL2CPP_REGISTER_METHOD(0x00F55520, uint32_t, InitInternal, (app::EVRInitError__Enum * pe_error, app::EVRApplicationType__Enum e_application_type));
IL2CPP_REGISTER_METHOD(0x00F555D0, void, ShutdownInternal, ());
IL2CPP_REGISTER_METHOD(0x00F55660, bool, IsHmdPresent, ());
IL2CPP_REGISTER_METHOD(0x00F556F0, bool, IsRuntimeInstalled, ());
IL2CPP_REGISTER_METHOD(0x00F55780, String *, GetStringForHmdError, (app::EVRInitError__Enum error));
IL2CPP_REGISTER_METHOD(0x00F558D0, void *, GetGenericInterface, (app::String * pch_interface_version, app::EVRInitError__Enum * pe_error));
IL2CPP_REGISTER_METHOD(0x00F558E0, bool, IsInterfaceVersionValid, (app::String * pch_interface_version));
IL2CPP_REGISTER_METHOD(0x00F55A60, uint32_t, GetInitToken, ());
IL2CPP_REGISTER_METHOD(0x00F55AF0, uint32_t, get_VRToken, ());
IL2CPP_REGISTER_METHOD(0x00F55B90, void, set_VRToken, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x00F55C40, OpenVR_COpenVRContext *, get_OpenVRInternal_ModuleContext, ());
IL2CPP_REGISTER_METHOD(0x00F55E50, CVRSystem *, get_System, ());
IL2CPP_REGISTER_METHOD(0x00F55F00, CVRChaperone *, get_Chaperone, ());
IL2CPP_REGISTER_METHOD(0x00F55FB0, CVRChaperoneSetup *, get_ChaperoneSetup, ());
IL2CPP_REGISTER_METHOD(0x00F56060, CVRCompositor *, get_Compositor, ());
IL2CPP_REGISTER_METHOD(0x00F56110, CVROverlay *, get_Overlay, ());
IL2CPP_REGISTER_METHOD(0x00F561C0, CVRRenderModels *, get_RenderModels, ());
IL2CPP_REGISTER_METHOD(0x00F56270, CVRExtendedDisplay *, get_ExtendedDisplay, ());
IL2CPP_REGISTER_METHOD(0x00F56320, CVRSettings *, get_Settings, ());
IL2CPP_REGISTER_METHOD(0x00F563D0, CVRApplications *, get_Applications, ());
IL2CPP_REGISTER_METHOD(0x00F56480, CVRScreenshots *, get_Screenshots, ());
IL2CPP_REGISTER_METHOD(0x00F56530, CVRTrackedCamera *, get_TrackedCamera, ());
IL2CPP_REGISTER_METHOD(0x00F565E0, CVRSystem *, Init, (app::EVRInitError__Enum * pe_error, app::EVRApplicationType__Enum e_application_type));
IL2CPP_REGISTER_METHOD(0x00F56A20, void, Shutdown, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::OpenVR * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
