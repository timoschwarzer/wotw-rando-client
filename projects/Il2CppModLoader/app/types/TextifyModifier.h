#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextifyModifier {
        namespace {
            inline app::TextifyModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextifyModifier__Class** type_info = &type_info_ref;
        inline app::TextifyModifier__Class* get_class() {
            return il2cpp::get_class<app::TextifyModifier__Class>(type_info, "", "TextifyModifier");
        }
        inline app::TextifyModifier* create() {
            return il2cpp::create_object<app::TextifyModifier>(get_class());
        }
    } // namespace TextifyModifier
} // namespace app::classes::types
