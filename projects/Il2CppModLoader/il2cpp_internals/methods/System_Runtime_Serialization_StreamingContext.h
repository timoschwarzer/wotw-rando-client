#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization::StreamingContext {
    IL2CPP_REGISTER_METHOD(0x001D7E30, void, __ctor_1, (app::StreamingContext__Boxed * this_ptr, app::StreamingContextStates__Enum state));
    IL2CPP_REGISTER_METHOD(0x0018ED30, void, __ctor_2, (app::StreamingContext__Boxed * this_ptr, app::StreamingContextStates__Enum state, app::Object * additional));
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object *, get_Context, (app::StreamingContext__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001D7E40, bool, Equals, (app::StreamingContext__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, GetHashCode, (app::StreamingContext__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0010A860, app::StreamingContextStates__Enum, get_State, (app::StreamingContext__Boxed * this_ptr));
}
