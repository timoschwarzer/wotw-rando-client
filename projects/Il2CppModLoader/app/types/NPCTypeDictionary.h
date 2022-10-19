#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCTypeDictionary {
        namespace {
            inline app::NPCTypeDictionary__Class* type_info_ref = nullptr;
        }
        inline app::NPCTypeDictionary__Class** type_info = &type_info_ref;
        inline app::NPCTypeDictionary__Class* get_class() {
            return il2cpp::get_class<app::NPCTypeDictionary__Class>(type_info, "Moon", "NPCTypeDictionary");
        }
        inline app::NPCTypeDictionary* create() {
            return il2cpp::create_object<app::NPCTypeDictionary>(get_class());
        }
    } // namespace NPCTypeDictionary
} // namespace app::classes::types
