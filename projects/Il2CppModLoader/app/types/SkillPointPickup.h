#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillPointPickup {
        inline app::SkillPointPickup__Class** type_info = (app::SkillPointPickup__Class**)(modloader::win::memory::resolve_rva(0x04786F68));
        inline app::SkillPointPickup__Class* get_class() {
            return il2cpp::get_class<app::SkillPointPickup__Class>(type_info, "", "SkillPointPickup");
        }
        inline app::SkillPointPickup* create() {
            return il2cpp::create_object<app::SkillPointPickup>(get_class());
        }
    } // namespace SkillPointPickup
} // namespace app::classes::types
