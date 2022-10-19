#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommonSpawnTask {
        namespace {
            inline app::CommonSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::CommonSpawnTask__Class** type_info = &type_info_ref;
        inline app::CommonSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::CommonSpawnTask__Class>(type_info, "", "CommonSpawnTask");
        }
        inline app::CommonSpawnTask* create() {
            return il2cpp::create_object<app::CommonSpawnTask>(get_class());
        }
    } // namespace CommonSpawnTask
} // namespace app::classes::types
