#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute_2 {
        namespace {
            inline app::ReadOnlyAttribute_2__Class* type_info_ref = nullptr;
        }
        inline app::ReadOnlyAttribute_2__Class** type_info = &type_info_ref;
        inline app::ReadOnlyAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute_2__Class>(type_info, "Moon.Attributes", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute_2* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute_2>(get_class());
        }
    } // namespace ReadOnlyAttribute_2
} // namespace app::classes::types
