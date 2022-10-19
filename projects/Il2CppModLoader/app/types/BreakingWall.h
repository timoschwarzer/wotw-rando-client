#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BreakingWall {
        namespace {
            inline app::BreakingWall__Class* type_info_ref = nullptr;
        }
        inline app::BreakingWall__Class** type_info = &type_info_ref;
        inline app::BreakingWall__Class* get_class() {
            return il2cpp::get_class<app::BreakingWall__Class>(type_info, "", "BreakingWall");
        }
        inline app::BreakingWall* create() {
            return il2cpp::create_object<app::BreakingWall>(get_class());
        }
    } // namespace BreakingWall
} // namespace app::classes::types
