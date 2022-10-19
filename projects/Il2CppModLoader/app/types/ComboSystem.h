#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComboSystem {
        namespace {
            inline app::ComboSystem__Class* type_info_ref = nullptr;
        }
        inline app::ComboSystem__Class** type_info = &type_info_ref;
        inline app::ComboSystem__Class* get_class() {
            return il2cpp::get_class<app::ComboSystem__Class>(type_info, "Moon.ComboSystem", "ComboSystem");
        }
        inline app::ComboSystem* create() {
            return il2cpp::create_object<app::ComboSystem>(get_class());
        }
    } // namespace ComboSystem
} // namespace app::classes::types
