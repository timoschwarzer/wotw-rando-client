#include <interception_macros.h>

namespace app::methods::System_Net::EmptyWebProxy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EmptyWebProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00502220, Uri *, GetProxy, (app::EmptyWebProxy * this_ptr, app::Uri * uri));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsBypassed, (app::EmptyWebProxy * this_ptr, app::Uri * uri));
IL2CPP_REGISTER_METHOD(0x002FA280, ICredentials *, get_Credentials, (app::EmptyWebProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Credentials, (app::EmptyWebProxy * this_ptr, app::ICredentials * value));
IL2CPP_REGISTER_METHOD(0x01EB40E0, ProxyChain *, IAutoWebProxy_GetProxies, (app::EmptyWebProxy * this_ptr, app::Uri * destination));
}
