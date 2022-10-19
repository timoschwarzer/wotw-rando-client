#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageBoxLanguageStyles {
        namespace {
            inline app::MessageBoxLanguageStyles__Class* type_info_ref = nullptr;
        }
        inline app::MessageBoxLanguageStyles__Class** type_info = &type_info_ref;
        inline app::MessageBoxLanguageStyles__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxLanguageStyles__Class>(type_info, "", "MessageBoxLanguageStyles");
        }
        inline app::MessageBoxLanguageStyles* create() {
            return il2cpp::create_object<app::MessageBoxLanguageStyles>(get_class());
        }
    } // namespace MessageBoxLanguageStyles
} // namespace app::classes::types
