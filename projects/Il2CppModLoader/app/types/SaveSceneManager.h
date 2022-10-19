#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSceneManager {
        namespace {
            inline app::SaveSceneManager__Class* type_info_ref = nullptr;
        }
        inline app::SaveSceneManager__Class** type_info = &type_info_ref;
        inline app::SaveSceneManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSceneManager__Class>(type_info, "", "SaveSceneManager");
        }
        inline app::SaveSceneManager* create() {
            return il2cpp::create_object<app::SaveSceneManager>(get_class());
        }
    } // namespace SaveSceneManager
} // namespace app::classes::types
