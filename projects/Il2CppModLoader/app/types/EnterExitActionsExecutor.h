#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterExitActionsExecutor {
        namespace {
            inline app::EnterExitActionsExecutor__Class* type_info_ref = nullptr;
        }
        inline app::EnterExitActionsExecutor__Class** type_info = &type_info_ref;
        inline app::EnterExitActionsExecutor__Class* get_class() {
            return il2cpp::get_class<app::EnterExitActionsExecutor__Class>(type_info, "", "EnterExitActionsExecutor");
        }
        inline app::EnterExitActionsExecutor* create() {
            return il2cpp::create_object<app::EnterExitActionsExecutor>(get_class());
        }
    } // namespace EnterExitActionsExecutor
} // namespace app::classes::types
