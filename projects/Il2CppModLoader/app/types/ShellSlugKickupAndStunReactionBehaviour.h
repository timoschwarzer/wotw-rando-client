#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShellSlugKickupAndStunReactionBehaviour {
        namespace {
            inline app::ShellSlugKickupAndStunReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShellSlugKickupAndStunReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::ShellSlugKickupAndStunReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugKickupAndStunReactionBehaviour__Class>(type_info, "", "ShellSlugKickupAndStunReactionBehaviour");
        }
        inline app::ShellSlugKickupAndStunReactionBehaviour* create() {
            return il2cpp::create_object<app::ShellSlugKickupAndStunReactionBehaviour>(get_class());
        }
    } // namespace ShellSlugKickupAndStunReactionBehaviour
} // namespace app::classes::types
