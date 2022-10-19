#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEnergyBaseMaxValueProvider {
        namespace {
            inline app::SeinEnergyBaseMaxValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyBaseMaxValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyBaseMaxValueProvider__Class>(type_info, "", "SeinEnergyBaseMaxValueProvider");
        }
        inline app::SeinEnergyBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinEnergyBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinEnergyBaseMaxValueProvider
} // namespace app::classes::types
