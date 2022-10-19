#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicVitalsHealthProvider {
        namespace {
            inline app::DynamicVitalsHealthProvider__Class* type_info_ref = nullptr;
        }
        inline app::DynamicVitalsHealthProvider__Class** type_info = &type_info_ref;
        inline app::DynamicVitalsHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicVitalsHealthProvider__Class>(type_info, "", "DynamicVitalsHealthProvider");
        }
        inline app::DynamicVitalsHealthProvider* create() {
            return il2cpp::create_object<app::DynamicVitalsHealthProvider>(get_class());
        }
    } // namespace DynamicVitalsHealthProvider
} // namespace app::classes::types
