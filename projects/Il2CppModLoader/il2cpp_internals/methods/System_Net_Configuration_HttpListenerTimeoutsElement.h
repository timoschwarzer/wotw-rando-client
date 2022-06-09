#include <interception_macros.h>

namespace app::methods::System_Net_Configuration::HttpListenerTimeoutsElement {
IL2CPP_REGISTER_METHOD(0x02019800, void, __ctor, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047854B0, HttpListenerTimeoutsElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019830, TimeSpan, get_DrainEntityBody, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473CEE0, HttpListenerTimeoutsElement_get_DrainEntityBody__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019860, TimeSpan, get_EntityBody, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04742668, HttpListenerTimeoutsElement_get_EntityBody__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019890, TimeSpan, get_HeaderWait, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04778990, HttpListenerTimeoutsElement_get_HeaderWait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020198C0, TimeSpan, get_IdleConnection, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472CF50, HttpListenerTimeoutsElement_get_IdleConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020198F0, int64_t, get_MinSendBytesPerSecond, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474F338, HttpListenerTimeoutsElement_get_MinSendBytesPerSecond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019920, ConfigurationPropertyCollection *, get_Properties, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04774A48, HttpListenerTimeoutsElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019950, TimeSpan, get_RequestQueue, (app::HttpListenerTimeoutsElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047685A8, HttpListenerTimeoutsElement_get_RequestQueue__MethodInfo);
}
