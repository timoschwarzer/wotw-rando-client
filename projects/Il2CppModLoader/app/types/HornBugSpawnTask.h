#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugSpawnTask {
        namespace {
            inline app::HornBugSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::HornBugSpawnTask__Class** type_info = &type_info_ref;
        inline app::HornBugSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::HornBugSpawnTask__Class>(type_info, "", "HornBugSpawnTask");
        }
        inline app::HornBugSpawnTask* create() {
            return il2cpp::create_object<app::HornBugSpawnTask>(get_class());
        }
    } // namespace HornBugSpawnTask
} // namespace app::classes::types
