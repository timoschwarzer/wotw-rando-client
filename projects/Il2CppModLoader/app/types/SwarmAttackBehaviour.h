#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmAttackBehaviour {
        namespace {
            inline app::SwarmAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SwarmAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmAttackBehaviour__Class>(type_info, "", "SwarmAttackBehaviour");
        }
        inline app::SwarmAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmAttackBehaviour>(get_class());
        }
    } // namespace SwarmAttackBehaviour
} // namespace app::classes::types
