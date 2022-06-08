#include <interception_macros.h>

namespace app::methods::System::Net::CookieContainer {
IL2CPP_REGISTER_METHOD(0x01EA24B0, void, __ctor, (CookieContainer * __this));
IL2CPP_REGISTER_METHOD(0x01EA2680, void, __ctor, (CookieContainer * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x0477D440, CookieContainer__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA2760, void, __ctor, (CookieContainer * __this, int32_t capacity, int32_t perDomainCapacity, int32_t maxCookieSize));
IL2CPP_REGISTER_METHODINFO(0x04784210, CookieContainer__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Capacity, (CookieContainer * __this));
IL2CPP_REGISTER_METHOD(0x01EA2A00, void, set_Capacity, (CookieContainer * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04746D20, CookieContainer_set_Capacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Count, (CookieContainer * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_MaxCookieSize, (CookieContainer * __this));
IL2CPP_REGISTER_METHOD(0x01EA2BC0, void, set_MaxCookieSize, (CookieContainer * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04770298, CookieContainer_set_MaxCookieSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PerDomainCapacity, (CookieContainer * __this));
IL2CPP_REGISTER_METHOD(0x01EA2C80, void, set_PerDomainCapacity, (CookieContainer * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047930B8, CookieContainer_set_PerDomainCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA2D60, void, Add, (CookieContainer * __this, Cookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x0477FA10, CookieContainer_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA3280, void, AddRemoveDomain, (CookieContainer * __this, String * key, PathList * value));
IL2CPP_REGISTER_METHOD(0x01EA33E0, void, Add, (CookieContainer * __this, Cookie * cookie, bool throwOnError));
IL2CPP_REGISTER_METHODINFO(0x04799780, CookieContainer_Add_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA3D20, bool, AgeCookies, (CookieContainer * __this, String * domain));
IL2CPP_REGISTER_METHOD(0x01EA4C40, int32_t, ExpireCollection, (CookieContainer * __this, CookieCollection * cc));
IL2CPP_REGISTER_METHOD(0x01EA4DD0, void, Add, (CookieContainer * __this, CookieCollection * cookies));
IL2CPP_REGISTER_METHODINFO(0x0474FF68, CookieContainer_Add_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA5000, bool, IsLocalDomain, (CookieContainer * __this, String * host));
IL2CPP_REGISTER_METHOD(0x01EA5420, void, Add, (CookieContainer * __this, Uri * uri, Cookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x04712BA8, CookieContainer_Add_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA55C0, void, Add, (CookieContainer * __this, Uri * uri, CookieCollection * cookies));
IL2CPP_REGISTER_METHODINFO(0x04706F08, CookieContainer_Add_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA58E0, CookieCollection *, CookieCutter, (CookieContainer * __this, Uri * uri, String * headerName, String * setCookieHeader, bool isThrow));
IL2CPP_REGISTER_METHODINFO(0x0473E120, CookieContainer_CookieCutter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA6240, CookieCollection *, GetCookies, (CookieContainer * __this, Uri * uri));
IL2CPP_REGISTER_METHODINFO(0x0474DD30, CookieContainer_GetCookies__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA6320, CookieCollection *, InternalGetCookies, (CookieContainer * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x01EA68D0, void, BuildCookieCollectionFromDomainMatches, (CookieContainer * __this, Uri * uri, bool isSecure, int32_t port, CookieCollection * cookies, List_1_System_String_ * domainAttribute, bool matchOnlyPlainCookie));
IL2CPP_REGISTER_METHOD(0x01EA6FB0, void, MergeUpdateCollections, (CookieContainer * __this, CookieCollection * destination, CookieCollection * source, int32_t port, bool isSecure, bool isPlainOnly));
IL2CPP_REGISTER_METHOD(0x01EA71F0, String *, GetCookieHeader, (CookieContainer * __this, Uri * uri));
IL2CPP_REGISTER_METHODINFO(0x0474A278, CookieContainer_GetCookieHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA72E0, String *, GetCookieHeader, (CookieContainer * __this, Uri * uri, String * * optCookie2));
IL2CPP_REGISTER_METHOD(0x01EA75F0, void, SetCookies, (CookieContainer * __this, Uri * uri, String * cookieHeader));
IL2CPP_REGISTER_METHODINFO(0x047932A0, CookieContainer_SetCookies__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA7730, void, __cctor, ());
}
