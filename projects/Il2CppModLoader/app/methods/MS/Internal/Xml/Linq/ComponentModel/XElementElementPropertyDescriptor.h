#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::Linq::ComponentModel::XElementElementPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x0302A0F0, void, ctor, (app::XElementElementPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0302A180, app::Object *, GetValue, (app::XElementElementPropertyDescriptor * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x0302A480, void, OnChanged, (app::XElementElementPropertyDescriptor * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
    IL2CPP_REGISTER_METHOD(0x0302A6D0, void, OnChanging, (app::XElementElementPropertyDescriptor * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
}
