#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingFallReactionBehaviour {
        namespace {
            inline app::SpiderlingFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderlingFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingFallReactionBehaviour__Class>(type_info, "", "SpiderlingFallReactionBehaviour");
        }
        inline app::SpiderlingFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingFallReactionBehaviour>(get_class());
        }
    } // namespace SpiderlingFallReactionBehaviour
} // namespace app::classes::types
