#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::CallContext {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CallContext * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, SetCurrentCallContext, (app::LogicalCallContext * ctx));
IL2CPP_REGISTER_METHOD(0x0230E250, LogicalCallContext *, SetLogicalCallContext, (app::LogicalCallContext * call_ctx));
}
