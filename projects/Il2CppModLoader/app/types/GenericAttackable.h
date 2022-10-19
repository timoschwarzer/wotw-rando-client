#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericAttackable {
        namespace {
            inline app::GenericAttackable__Class* type_info_ref = nullptr;
        }
        inline app::GenericAttackable__Class** type_info = &type_info_ref;
        inline app::GenericAttackable__Class* get_class() {
            return il2cpp::get_class<app::GenericAttackable__Class>(type_info, "", "GenericAttackable");
        }
        inline app::GenericAttackable* create() {
            return il2cpp::create_object<app::GenericAttackable>(get_class());
        }
    } // namespace GenericAttackable
} // namespace app::classes::types
