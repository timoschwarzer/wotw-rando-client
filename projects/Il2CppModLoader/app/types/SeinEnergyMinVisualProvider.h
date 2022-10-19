#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEnergyMinVisualProvider {
        namespace {
            inline app::SeinEnergyMinVisualProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyMinVisualProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMinVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMinVisualProvider__Class>(type_info, "", "SeinEnergyMinVisualProvider");
        }
        inline app::SeinEnergyMinVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMinVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMinVisualProvider
} // namespace app::classes::types
