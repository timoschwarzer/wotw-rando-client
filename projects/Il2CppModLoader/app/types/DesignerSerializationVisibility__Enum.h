#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesignerSerializationVisibility__Enum {
        namespace {
            inline app::DesignerSerializationVisibility__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DesignerSerializationVisibility__Enum__Class** type_info = &type_info_ref;
        inline app::DesignerSerializationVisibility__Enum__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializationVisibility__Enum__Class>(type_info, "System.ComponentModel", "DesignerSerializationVisibility");
        }
        inline app::DesignerSerializationVisibility__Enum* create() {
            return il2cpp::create_object<app::DesignerSerializationVisibility__Enum>(get_class());
        }
    } // namespace DesignerSerializationVisibility__Enum
} // namespace app::classes::types
