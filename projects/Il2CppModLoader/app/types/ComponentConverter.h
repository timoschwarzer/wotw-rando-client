#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComponentConverter {
        namespace {
            inline app::ComponentConverter__Class* type_info_ref = nullptr;
        }
        inline app::ComponentConverter__Class** type_info = &type_info_ref;
        inline app::ComponentConverter__Class* get_class() {
            return il2cpp::get_class<app::ComponentConverter__Class>(type_info, "System.ComponentModel", "ComponentConverter");
        }
        inline app::ComponentConverter* create() {
            return il2cpp::create_object<app::ComponentConverter>(get_class());
        }
    } // namespace ComponentConverter
} // namespace app::classes::types
