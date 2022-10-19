#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EControllerSourceMode__Enum {
        namespace {
            inline app::EControllerSourceMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EControllerSourceMode__Enum__Class** type_info = &type_info_ref;
        inline app::EControllerSourceMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerSourceMode__Enum__Class>(type_info, "Steamworks", "EControllerSourceMode");
        }
        inline app::EControllerSourceMode__Enum* create() {
            return il2cpp::create_object<app::EControllerSourceMode__Enum>(get_class());
        }
    } // namespace EControllerSourceMode__Enum
} // namespace app::classes::types
