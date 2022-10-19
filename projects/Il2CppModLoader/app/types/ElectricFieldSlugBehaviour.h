#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElectricFieldSlugBehaviour {
        namespace {
            inline app::ElectricFieldSlugBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ElectricFieldSlugBehaviour__Class** type_info = &type_info_ref;
        inline app::ElectricFieldSlugBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ElectricFieldSlugBehaviour__Class>(type_info, "", "ElectricFieldSlugBehaviour");
        }
        inline app::ElectricFieldSlugBehaviour* create() {
            return il2cpp::create_object<app::ElectricFieldSlugBehaviour>(get_class());
        }
    } // namespace ElectricFieldSlugBehaviour
} // namespace app::classes::types
