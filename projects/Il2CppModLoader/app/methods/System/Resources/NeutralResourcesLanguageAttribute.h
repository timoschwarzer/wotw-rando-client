#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Resources::NeutralResourcesLanguageAttribute {
    IL2CPP_REGISTER_METHOD(0x01A84120, void, ctor, (app::NeutralResourcesLanguageAttribute * this_ptr, app::String * culture_name))
    IL2CPP_REGISTER_METHODINFO(0x04787B98, NeutralResourcesLanguageAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_CultureName, (app::NeutralResourcesLanguageAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::UltimateResourceFallbackLocation__Enum, get_Location, (app::NeutralResourcesLanguageAttribute * this_ptr))
}
