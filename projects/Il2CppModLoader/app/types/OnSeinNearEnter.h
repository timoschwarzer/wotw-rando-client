#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnSeinNearEnter {
        namespace {
            inline app::OnSeinNearEnter__Class* type_info_ref = nullptr;
        }
        inline app::OnSeinNearEnter__Class** type_info = &type_info_ref;
        inline app::OnSeinNearEnter__Class* get_class() {
            return il2cpp::get_class<app::OnSeinNearEnter__Class>(type_info, "fsm.triggers", "OnSeinNearEnter");
        }
        inline app::OnSeinNearEnter* create() {
            return il2cpp::create_object<app::OnSeinNearEnter>(get_class());
        }
    } // namespace OnSeinNearEnter
} // namespace app::classes::types
