#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlScreenUIItem {
        namespace {
            inline app::ControlScreenUIItem__Class* type_info_ref = nullptr;
        }
        inline app::ControlScreenUIItem__Class** type_info = &type_info_ref;
        inline app::ControlScreenUIItem__Class* get_class() {
            return il2cpp::get_class<app::ControlScreenUIItem__Class>(type_info, "", "ControlScreenUIItem");
        }
        inline app::ControlScreenUIItem* create() {
            return il2cpp::create_object<app::ControlScreenUIItem>(get_class());
        }
    } // namespace ControlScreenUIItem
} // namespace app::classes::types
