#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementTitleAssociation_1 {
        inline app::XblAchievementTitleAssociation_1__Class** type_info = (app::XblAchievementTitleAssociation_1__Class**)(modloader::win::memory::resolve_rva(0x04774CF0));
        inline app::XblAchievementTitleAssociation_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTitleAssociation_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementTitleAssociation");
        }
        inline app::XblAchievementTitleAssociation_1* create() {
            return il2cpp::create_object<app::XblAchievementTitleAssociation_1>(get_class());
        }
        inline app::XblAchievementTitleAssociation_1__Boxed* box(app::XblAchievementTitleAssociation_1 value) {
            return il2cpp::box_value<app::XblAchievementTitleAssociation_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementTitleAssociation_1
} // namespace app::classes::types
