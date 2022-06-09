#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::ClientActivatedIdentity {
IL2CPP_REGISTER_METHOD(0x01A9FF60, void, __ctor, (app::ClientActivatedIdentity * this_ptr, app::String * object_uri, app::Type * object_type));
IL2CPP_REGISTER_METHOD(0x002FBB40, MarshalByRefObject *, GetServerObject, (app::ClientActivatedIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetClientProxy, (app::ClientActivatedIdentity * this_ptr, app::MarshalByRefObject * obj));
IL2CPP_REGISTER_METHOD(0x01A9FF80, void, OnLifetimeExpired, (app::ClientActivatedIdentity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01AA0030, IMessage *, SyncObjectProcessMessage, (app::ClientActivatedIdentity * this_ptr, app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01AA0110, IMessageCtrl *, AsyncObjectProcessMessage, (app::ClientActivatedIdentity * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
}
