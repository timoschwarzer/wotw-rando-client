#include <interception_macros.h>

namespace app::methods::System_Net::DigestClient {
IL2CPP_REGISTER_METHOD(0x01EADAA0, Hashtable *, get_Cache, ());
IL2CPP_REGISTER_METHOD(0x01EADCB0, void, CheckExpired, (int32_t count));
IL2CPP_REGISTER_METHOD(0x01EAE310, Authorization *, Authenticate, (app::DigestClient * this_ptr, app::String * challenge, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01EAE730, Authorization *, PreAuthenticate, (app::DigestClient * this_ptr, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01EAE8D0, String *, get_AuthenticationType, (app::DigestClient * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (app::DigestClient * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DigestClient * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAE950, void, __cctor, ());
}
