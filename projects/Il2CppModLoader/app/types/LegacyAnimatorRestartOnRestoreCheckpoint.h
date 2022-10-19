#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAnimatorRestartOnRestoreCheckpoint {
        namespace {
            inline app::LegacyAnimatorRestartOnRestoreCheckpoint__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint__Class** type_info = &type_info_ref;
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorRestartOnRestoreCheckpoint__Class>(type_info, "", "LegacyAnimatorRestartOnRestoreCheckpoint");
        }
        inline app::LegacyAnimatorRestartOnRestoreCheckpoint* create() {
            return il2cpp::create_object<app::LegacyAnimatorRestartOnRestoreCheckpoint>(get_class());
        }
    } // namespace LegacyAnimatorRestartOnRestoreCheckpoint
} // namespace app::classes::types
