#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner {
        namespace {
            inline app::WindImpactEffectSpawner__Class* type_info_ref = nullptr;
        }
        inline app::WindImpactEffectSpawner__Class** type_info = &type_info_ref;
        inline app::WindImpactEffectSpawner__Class* get_class() {
            return il2cpp::get_class<app::WindImpactEffectSpawner__Class>(type_info, "", "WindImpactEffectSpawner");
        }
        inline app::WindImpactEffectSpawner* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner>(get_class());
        }
    } // namespace WindImpactEffectSpawner
} // namespace app::classes::types
