#include <interception_macros.h>

namespace app::methods::System::UnhandledExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x027C5BD0, void, __ctor, (app::UnhandledExceptionEventArgs * this_ptr, app::Object * exception, bool is_terminating));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_ExceptionObject, (app::UnhandledExceptionEventArgs * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsTerminating, (app::UnhandledExceptionEventArgs * this_ptr));
}
