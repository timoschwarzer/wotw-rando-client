#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPrefabFactory {
        namespace {
            inline app::SeinPrefabFactory__Class* type_info_ref = nullptr;
        }
        inline app::SeinPrefabFactory__Class** type_info = &type_info_ref;
        inline app::SeinPrefabFactory__Class* get_class() {
            return il2cpp::get_class<app::SeinPrefabFactory__Class>(type_info, "", "SeinPrefabFactory");
        }
        inline app::SeinPrefabFactory* create() {
            return il2cpp::create_object<app::SeinPrefabFactory>(get_class());
        }
    } // namespace SeinPrefabFactory
} // namespace app::classes::types
