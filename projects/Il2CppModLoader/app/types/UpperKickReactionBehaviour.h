#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpperKickReactionBehaviour {
        namespace {
            inline app::UpperKickReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::UpperKickReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::UpperKickReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::UpperKickReactionBehaviour__Class>(type_info, "", "UpperKickReactionBehaviour");
        }
        inline app::UpperKickReactionBehaviour* create() {
            return il2cpp::create_object<app::UpperKickReactionBehaviour>(get_class());
        }
    } // namespace UpperKickReactionBehaviour
} // namespace app::classes::types
