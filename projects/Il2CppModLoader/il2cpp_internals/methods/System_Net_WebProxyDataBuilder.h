#include <interception_macros.h>

namespace app::methods::System_Net::WebProxyDataBuilder {
IL2CPP_REGISTER_METHOD(0x021B1D30, WebProxyData *, Build, (app::WebProxyDataBuilder * this_ptr));
IL2CPP_REGISTER_METHOD(0x021B1E90, void, SetProxyAndBypassList, (app::WebProxyDataBuilder * this_ptr, app::String * address_string, app::String * bypass_list_string));
IL2CPP_REGISTER_METHOD(0x021B2070, void, SetAutoProxyUrl, (app::WebProxyDataBuilder * this_ptr, app::String * auto_config_url));
IL2CPP_REGISTER_METHOD(0x021B2160, void, SetAutoDetectSettings, (app::WebProxyDataBuilder * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x021B2180, Uri *, ParseProxyUri, (app::String * proxy_string));
IL2CPP_REGISTER_METHODINFO(0x04731800, WebProxyDataBuilder_ParseProxyUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B2360, Hashtable *, ParseProtocolProxies, (app::String * proxy_list_string));
IL2CPP_REGISTER_METHODINFO(0x0474D2E8, WebProxyDataBuilder_ParseProtocolProxies__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B2890, FormatException *, CreateInvalidProxyStringException, (app::String * original_proxy_string));
IL2CPP_REGISTER_METHOD(0x021B2A90, String *, BypassStringEscape, (app::String * raw_string));
IL2CPP_REGISTER_METHOD(0x021B2FE0, String *, ConvertRegexReservedChars, (app::String * raw_string));
IL2CPP_REGISTER_METHOD(0x021B3210, ArrayList *, ParseBypassList, (app::String * bypass_list_string, app::bool * bypass_on_local));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::WebProxyDataBuilder * this_ptr));
}
