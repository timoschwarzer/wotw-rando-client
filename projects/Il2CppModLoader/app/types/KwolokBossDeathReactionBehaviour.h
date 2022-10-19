#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossDeathReactionBehaviour {
        namespace {
            inline app::KwolokBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossDeathReactionBehaviour__Class>(type_info, "", "KwolokBossDeathReactionBehaviour");
        }
        inline app::KwolokBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossDeathReactionBehaviour>(get_class());
        }
    } // namespace KwolokBossDeathReactionBehaviour
} // namespace app::classes::types
