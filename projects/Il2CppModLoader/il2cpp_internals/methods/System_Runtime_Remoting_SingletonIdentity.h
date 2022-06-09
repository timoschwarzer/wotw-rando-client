#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::SingletonIdentity {
    IL2CPP_REGISTER_METHOD(0x01D836D0, void, __ctor, (app::SingletonIdentity * this_ptr, app::String * object_uri, app::Context * context, app::Type * object_type));
    IL2CPP_REGISTER_METHOD(0x01D84E80, app::MarshalByRefObject *, GetServerObject, (app::SingletonIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D85000, app::IMessage *, SyncObjectProcessMessage, (app::SingletonIdentity * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHOD(0x01D850E0, app::IMessageCtrl *, AsyncObjectProcessMessage, (app::SingletonIdentity * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
}
