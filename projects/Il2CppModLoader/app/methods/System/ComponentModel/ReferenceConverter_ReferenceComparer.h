#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::ReferenceConverter_ReferenceComparer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ReferenceConverter_ReferenceComparer * this_ptr, app::ReferenceConverter * converter))
    IL2CPP_REGISTER_METHOD(0x0299A000, int32_t, Compare, (app::ReferenceConverter_ReferenceComparer * this_ptr, app::Object * item1, app::Object * item2))
}
