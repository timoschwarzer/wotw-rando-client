#include <interception_macros.h>

namespace app::methods::System_Runtime_CompilerServices::FormattableStringFactory_ConcreteFormattableString {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr, app::String * format, app::Object__Array * arguments));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Format, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Object__Array *, GetArguments, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_ArgumentCount, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A92420, Object *, GetArgument, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A92460, String *, ToString, (app::FormattableStringFactory_ConcreteFormattableString * this_ptr, app::IFormatProvider * format_provider));
}
