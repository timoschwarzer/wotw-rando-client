#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumperEntity {
        namespace {
            inline app::JumperEntity__Class* type_info_ref = nullptr;
        }
        inline app::JumperEntity__Class** type_info = &type_info_ref;
        inline app::JumperEntity__Class* get_class() {
            return il2cpp::get_class<app::JumperEntity__Class>(type_info, "", "JumperEntity");
        }
        inline app::JumperEntity* create() {
            return il2cpp::create_object<app::JumperEntity>(get_class());
        }
    } // namespace JumperEntity
} // namespace app::classes::types
