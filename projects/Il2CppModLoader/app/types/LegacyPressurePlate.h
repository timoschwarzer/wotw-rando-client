#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyPressurePlate {
        namespace {
            inline app::LegacyPressurePlate__Class* type_info_ref = nullptr;
        }
        inline app::LegacyPressurePlate__Class** type_info = &type_info_ref;
        inline app::LegacyPressurePlate__Class* get_class() {
            return il2cpp::get_class<app::LegacyPressurePlate__Class>(type_info, "", "LegacyPressurePlate");
        }
        inline app::LegacyPressurePlate* create() {
            return il2cpp::create_object<app::LegacyPressurePlate>(get_class());
        }
    } // namespace LegacyPressurePlate
} // namespace app::classes::types
