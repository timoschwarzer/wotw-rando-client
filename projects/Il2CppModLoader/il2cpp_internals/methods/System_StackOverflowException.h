#include <interception_macros.h>

namespace app::methods::System::StackOverflowException {
    IL2CPP_REGISTER_METHOD(0x01E26AB0, void, __ctor_1, (app::StackOverflowException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E26B40, void, __ctor_2, (app::StackOverflowException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_3, (app::StackOverflowException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
