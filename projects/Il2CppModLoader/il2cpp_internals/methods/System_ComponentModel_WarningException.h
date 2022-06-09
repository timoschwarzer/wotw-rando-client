#include <interception_macros.h>

namespace app::methods::System_ComponentModel::WarningException {
    IL2CPP_REGISTER_METHOD(0x0295DC00, void, __ctor_1, (app::WarningException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0295DC30, void, __ctor_2, (app::WarningException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x0295DC60, void, __ctor_3, (app::WarningException * this_ptr, app::String * message, app::String * help_url));
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, __ctor_4, (app::WarningException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x0295DCA0, void, __ctor_5, (app::WarningException * this_ptr, app::String * message, app::String * help_url, app::String * help_topic));
    IL2CPP_REGISTER_METHOD(0x0295DCE0, void, __ctor_6, (app::WarningException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_HelpUrl, (app::WarningException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String *, get_HelpTopic, (app::WarningException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0295DE60, void, GetObjectData, (app::WarningException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04730A00, WarningException_GetObjectData__MethodInfo);
}
