#include <interception_macros.h>

namespace app::methods::System_ComponentModel::StringConverter {
    IL2CPP_REGISTER_METHOD(0x029AD260, bool, CanConvertFrom, (app::StringConverter * this_ptr, app::ITypeDescriptorContext * context, app::Type * source_type));
    IL2CPP_REGISTER_METHOD(0x029AD340, app::Object *, ConvertFrom, (app::StringConverter * this_ptr, app::ITypeDescriptorContext * context, app::CultureInfo * culture, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x029AD440, void, __ctor, (app::StringConverter * this_ptr));
}
