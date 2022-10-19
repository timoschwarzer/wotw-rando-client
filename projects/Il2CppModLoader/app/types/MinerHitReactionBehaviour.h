#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerHitReactionBehaviour {
        namespace {
            inline app::MinerHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerHitReactionBehaviour__Class>(type_info, "", "MinerHitReactionBehaviour");
        }
        inline app::MinerHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerHitReactionBehaviour>(get_class());
        }
    } // namespace MinerHitReactionBehaviour
} // namespace app::classes::types
