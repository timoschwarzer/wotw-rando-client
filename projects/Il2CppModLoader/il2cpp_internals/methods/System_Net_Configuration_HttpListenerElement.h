#include <interception_macros.h>

namespace app::methods::System_Net_Configuration::HttpListenerElement {
IL2CPP_REGISTER_METHOD(0x02019740, void, __ctor, (app::HttpListenerElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478D448, HttpListenerElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019770, ConfigurationPropertyCollection *, get_Properties, (app::HttpListenerElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047959E8, HttpListenerElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020197A0, HttpListenerTimeoutsElement *, get_Timeouts, (app::HttpListenerElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472BFE0, HttpListenerElement_get_Timeouts__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020197D0, bool, get_UnescapeRequestUrl, (app::HttpListenerElement * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473B7B0, HttpListenerElement_get_UnescapeRequestUrl__MethodInfo);
}
