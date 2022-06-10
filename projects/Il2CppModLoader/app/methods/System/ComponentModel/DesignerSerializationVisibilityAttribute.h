#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::DesignerSerializationVisibilityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::DesignerSerializationVisibilityAttribute * this_ptr, app::DesignerSerializationVisibility__Enum visibility))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::DesignerSerializationVisibility__Enum, get_Visibility, (app::DesignerSerializationVisibilityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE6F30, bool, Equals, (app::DesignerSerializationVisibilityAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DesignerSerializationVisibilityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE7000, bool, IsDefaultAttribute, (app::DesignerSerializationVisibilityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE70C0, void, cctor, ())
}
