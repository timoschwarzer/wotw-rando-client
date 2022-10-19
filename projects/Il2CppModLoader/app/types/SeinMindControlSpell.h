#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMindControlSpell {
        namespace {
            inline app::SeinMindControlSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinMindControlSpell__Class** type_info = &type_info_ref;
        inline app::SeinMindControlSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMindControlSpell__Class>(type_info, "", "SeinMindControlSpell");
        }
        inline app::SeinMindControlSpell* create() {
            return il2cpp::create_object<app::SeinMindControlSpell>(get_class());
        }
    } // namespace SeinMindControlSpell
} // namespace app::classes::types
