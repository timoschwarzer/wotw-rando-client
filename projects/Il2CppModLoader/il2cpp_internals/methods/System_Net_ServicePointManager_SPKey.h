#include <interception_macros.h>

namespace app::methods::System_Net::ServicePointManager_SPKey {
IL2CPP_REGISTER_METHOD(0x010415E0, void, __ctor, (app::ServicePointManager_SPKey * this_ptr, app::Uri * uri, app::Uri * proxy, bool use_connect));
IL2CPP_REGISTER_METHOD(0x002FA280, Uri *, get_Uri, (app::ServicePointManager_SPKey * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_UseConnect, (app::ServicePointManager_SPKey * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BD9FC0, bool, get_UsesProxy, (app::ServicePointManager_SPKey * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BDA060, int32_t, GetHashCode, (app::ServicePointManager_SPKey * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BDA180, bool, Equals, (app::ServicePointManager_SPKey * this_ptr, app::Object * obj));
}
