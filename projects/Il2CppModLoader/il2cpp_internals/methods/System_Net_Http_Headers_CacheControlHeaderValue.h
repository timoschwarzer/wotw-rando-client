#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::CacheControlHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D02C30, ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Extensions, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CB0, Nullable_1_TimeSpan_, get_MaxAge, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_MaxAge, (CacheControlHeaderValue * __this, Nullable_1_TimeSpan_ value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_MaxStale, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_MaxStale, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01999450, Nullable_1_TimeSpan_, get_MaxStaleLimit, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D02D90, void, set_MaxStaleLimit, (CacheControlHeaderValue * __this, Nullable_1_TimeSpan_ value));
IL2CPP_REGISTER_METHOD(0x01CB97B0, Nullable_1_TimeSpan_, get_MinFresh, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D02DA0, void, set_MinFresh, (CacheControlHeaderValue * __this, Nullable_1_TimeSpan_ value));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_MustRevalidate, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_MustRevalidate, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_NoCache, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00575460, void, set_NoCache, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02D02DB0, ICollection_1_System_String_ *, get_NoCacheHeaders, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00575470, bool, get_NoStore, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00575480, void, set_NoStore, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00448FF0, bool, get_NoTransform, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00449000, void, set_NoTransform, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_OnlyIfCached, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_OnlyIfCached, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F3F9E0, bool, get_Private, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D02F10, void, set_Private, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02D02F20, ICollection_1_System_String_ *, get_PrivateHeaders, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x01F3F910, bool, get_ProxyRevalidate, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D03080, void, set_ProxyRevalidate, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F3F900, bool, get_Public, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D03090, void, set_Public, (CacheControlHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02D030A0, Nullable_1_TimeSpan_, get_SharedMaxAge, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D030B0, void, set_SharedMaxAge, (CacheControlHeaderValue * __this, Nullable_1_TimeSpan_ value));
IL2CPP_REGISTER_METHOD(0x02D030C0, Object *, ICloneable_Clone, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D037C0, bool, Equals, (CacheControlHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D03BC0, int32_t, GetHashCode, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D03E20, bool, TryParse, (String * input, CacheControlHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x0475CFF8, CacheControlHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D04DD0, String *, ToString, (CacheControlHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CacheControlHeaderValue * __this));
}
