#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SuspensionManager_SuspendableInfo {
        namespace {
            inline app::SuspensionManager_SuspendableInfo__Class* type_info_ref = nullptr;
        }
        inline app::SuspensionManager_SuspendableInfo__Class** type_info = &type_info_ref;
        inline app::SuspensionManager_SuspendableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SuspensionManager_SuspendableInfo__Class>(type_info, "Moon", "SuspensionManager", "SuspendableInfo");
        }
        inline app::SuspensionManager_SuspendableInfo* create() {
            return il2cpp::create_object<app::SuspensionManager_SuspendableInfo>(get_class());
        }
    } // namespace SuspensionManager_SuspendableInfo
} // namespace app::classes::types
