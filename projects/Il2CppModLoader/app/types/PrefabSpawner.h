#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrefabSpawner {
        namespace {
            inline app::PrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::PrefabSpawner__Class** type_info = &type_info_ref;
        inline app::PrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::PrefabSpawner__Class>(type_info, "", "PrefabSpawner");
        }
        inline app::PrefabSpawner* create() {
            return il2cpp::create_object<app::PrefabSpawner>(get_class());
        }
    } // namespace PrefabSpawner
} // namespace app::classes::types
