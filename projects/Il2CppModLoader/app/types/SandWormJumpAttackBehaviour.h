#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormJumpAttackBehaviour {
        namespace {
            inline app::SandWormJumpAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormJumpAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormJumpAttackBehaviour__Class>(type_info, "", "SandWormJumpAttackBehaviour");
        }
        inline app::SandWormJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::SandWormJumpAttackBehaviour>(get_class());
        }
    } // namespace SandWormJumpAttackBehaviour
} // namespace app::classes::types
