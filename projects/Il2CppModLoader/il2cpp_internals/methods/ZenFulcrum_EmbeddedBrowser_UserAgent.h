#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::UserAgent {
    IL2CPP_REGISTER_METHOD(0x0166FAF0, app::String *, GetUserAgent, ());
    IL2CPP_REGISTER_METHOD(0x01670000, void, SetUserAgent, (app::String * user_agent));
    IL2CPP_REGISTER_METHODINFO(0x04773418, UserAgent_SetUserAgent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::UserAgent * this_ptr));
}
