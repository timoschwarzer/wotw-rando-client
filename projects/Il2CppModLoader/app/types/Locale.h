#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Locale {
        namespace {
            inline app::Locale__Class* type_info_ref = nullptr;
        }
        inline app::Locale__Class** type_info = &type_info_ref;
        inline app::Locale__Class* get_class() {
            return il2cpp::get_class<app::Locale__Class>(type_info, "", "Locale");
        }
        inline app::Locale* create() {
            return il2cpp::create_object<app::Locale>(get_class());
        }
    } // namespace Locale
} // namespace app::classes::types
