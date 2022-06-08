#include <interception_macros.h>

namespace app::methods::SystemIntegration::XalSignInProvider {
IL2CPP_REGISTER_METHOD(0x00CDC050, void, __ctor, (XalSignInProvider * __this, INetworkConnectivityChecker * netConnectivityChecker));
IL2CPP_REGISTER_METHODINFO(0x04774C68, XalSignInProvider__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsSignedIn, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsSignedIn, (XalSignInProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A64060, bool, get_IsSigningIn, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00A64070, void, set_IsSigningIn, (XalSignInProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB990, IPlatformUser *, get_User, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_User, (XalSignInProvider * __this, IPlatformUser * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasSignInError, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowSignInUi, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShowAchievementUi, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_LinkToken, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_LinkToken, (XalSignInProvider * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SignInOnPressAnyButton, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CDC8E0, void, SignInSilently, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CDCA70, void, SignIn, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CDCC00, void, CleanUpBrowserIfNeeded, (XalSignInProvider * __this, Task * t));
IL2CPP_REGISTER_METHODINFO(0x04766520, XalSignInProvider_CleanUpBrowserIfNeeded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDCD60, Task *, GetGamerPicture, (XalSignInProvider * __this, Task_1_Microsoft_Xbox_Services_Xal_XalUser_ * t));
IL2CPP_REGISTER_METHODINFO(0x0474C0B8, XalSignInProvider_GetGamerPicture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDD190, int32_t, GetErrorCode, (Task * task));
IL2CPP_REGISTER_METHOD(0x00CDD400, void, DebugLog, (String * areaName, XalTraceLevel__Enum level, uint64_t threadId, uint64_t timestamp, String * message));
IL2CPP_REGISTER_METHOD(0x00CDD630, void, Update, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CDD770, void, CancelLogin, ());
IL2CPP_REGISTER_METHOD(0x00CDD8C0, void, TokenUpdate, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CDDC70, void, OnSignOut, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04775E30, XalSignInProvider_OnSignOut__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDDDC0, Task *, _SignInSilently_b__30_0, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04731AF8, XalSignInProvider__SignInSilently_b__30_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDDEC0, Task *, _SignIn_b__31_0, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F2E8, XalSignInProvider__SignIn_b__31_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDDFC0, void, _CleanUpBrowserIfNeeded_b__32_0, (XalSignInProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FC18, XalSignInProvider__CleanUpBrowserIfNeeded_b__32_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDDFE0, void, _GetGamerPicture_b__33_0, (XalSignInProvider * __this, Task * o));
IL2CPP_REGISTER_METHODINFO(0x04762928, XalSignInProvider__GetGamerPicture_b__33_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDDFF0, void, _TokenUpdate_b__38_0, (XalSignInProvider * __this, XalUserGetTokenAndSignatureData result));
IL2CPP_REGISTER_METHODINFO(0x047924E8, XalSignInProvider__TokenUpdate_b__38_0__MethodInfo);
}
