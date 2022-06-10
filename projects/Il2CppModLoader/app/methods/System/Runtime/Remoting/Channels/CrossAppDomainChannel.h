#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Channels::CrossAppDomainChannel {
    IL2CPP_REGISTER_METHOD(0x01A9E3F0, void, RegisterCrossAppDomainChannel, ())
    IL2CPP_REGISTER_METHOD(0x01A9E640, app::String *, get_ChannelName, (app::CrossAppDomainChannel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_ChannelPriority, (app::CrossAppDomainChannel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A9E6C0, app::Object *, get_ChannelData, (app::CrossAppDomainChannel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartListening, (app::CrossAppDomainChannel * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x01A9E830, app::IMessageSink *, CreateMessageSink, (app::CrossAppDomainChannel * this_ptr, app::String * url, app::Object * data, app::String * * uri))
    IL2CPP_REGISTER_METHODINFO(0x0470BD48, CrossAppDomainChannel_CreateMessageSink__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CrossAppDomainChannel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A9E9E0, void, cctor, ())
}
