#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugDeathReaction {
        namespace {
            inline app::HornBugDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::HornBugDeathReaction__Class** type_info = &type_info_ref;
        inline app::HornBugDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::HornBugDeathReaction__Class>(type_info, "", "HornBugDeathReaction");
        }
        inline app::HornBugDeathReaction* create() {
            return il2cpp::create_object<app::HornBugDeathReaction>(get_class());
        }
    } // namespace HornBugDeathReaction
} // namespace app::classes::types
