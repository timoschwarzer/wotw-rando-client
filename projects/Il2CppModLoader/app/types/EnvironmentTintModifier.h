#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvironmentTintModifier {
        namespace {
            inline app::EnvironmentTintModifier__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentTintModifier__Class** type_info = &type_info_ref;
        inline app::EnvironmentTintModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentTintModifier__Class>(type_info, "", "EnvironmentTintModifier");
        }
        inline app::EnvironmentTintModifier* create() {
            return il2cpp::create_object<app::EnvironmentTintModifier>(get_class());
        }
    } // namespace EnvironmentTintModifier
} // namespace app::classes::types
