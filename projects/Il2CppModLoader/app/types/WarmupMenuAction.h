#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WarmupMenuAction {
        namespace {
            inline app::WarmupMenuAction__Class* type_info_ref = nullptr;
        }
        inline app::WarmupMenuAction__Class** type_info = &type_info_ref;
        inline app::WarmupMenuAction__Class* get_class() {
            return il2cpp::get_class<app::WarmupMenuAction__Class>(type_info, "", "WarmupMenuAction");
        }
        inline app::WarmupMenuAction* create() {
            return il2cpp::create_object<app::WarmupMenuAction>(get_class());
        }
    } // namespace WarmupMenuAction
} // namespace app::classes::types
