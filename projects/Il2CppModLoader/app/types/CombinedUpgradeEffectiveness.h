#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness {
        namespace {
            inline app::CombinedUpgradeEffectiveness__Class* type_info_ref = nullptr;
        }
        inline app::CombinedUpgradeEffectiveness__Class** type_info = &type_info_ref;
        inline app::CombinedUpgradeEffectiveness__Class* get_class() {
            return il2cpp::get_class<app::CombinedUpgradeEffectiveness__Class>(type_info, "", "CombinedUpgradeEffectiveness");
        }
        inline app::CombinedUpgradeEffectiveness* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness
} // namespace app::classes::types
