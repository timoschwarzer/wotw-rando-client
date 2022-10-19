#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillUpgradeUIUpgradeDetails {
        namespace {
            inline app::SkillUpgradeUIUpgradeDetails__Class* type_info_ref = nullptr;
        }
        inline app::SkillUpgradeUIUpgradeDetails__Class** type_info = &type_info_ref;
        inline app::SkillUpgradeUIUpgradeDetails__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeUIUpgradeDetails__Class>(type_info, "", "SkillUpgradeUIUpgradeDetails");
        }
        inline app::SkillUpgradeUIUpgradeDetails* create() {
            return il2cpp::create_object<app::SkillUpgradeUIUpgradeDetails>(get_class());
        }
    } // namespace SkillUpgradeUIUpgradeDetails
} // namespace app::classes::types
