#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HorizontalAnchorMode__Enum {
        namespace {
            inline app::HorizontalAnchorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HorizontalAnchorMode__Enum__Class** type_info = &type_info_ref;
        inline app::HorizontalAnchorMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HorizontalAnchorMode__Enum__Class>(type_info, "CatlikeCoding.TextBox", "HorizontalAnchorMode");
        }
        inline app::HorizontalAnchorMode__Enum* create() {
            return il2cpp::create_object<app::HorizontalAnchorMode__Enum>(get_class());
        }
    } // namespace HorizontalAnchorMode__Enum
} // namespace app::classes::types
