#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HUDManager_Rehide_d_12 {
        inline app::HUDManager_Rehide_d_12__Class** type_info = (app::HUDManager_Rehide_d_12__Class**)(modloader::win::memory::resolve_rva(0x0475D4C8));
        inline app::HUDManager_Rehide_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_Rehide_d_12__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<Rehide>d__12");
        }
        inline app::HUDManager_Rehide_d_12* create() {
            return il2cpp::create_object<app::HUDManager_Rehide_d_12>(get_class());
        }
    } // namespace HUDManager_Rehide_d_12
} // namespace app::classes::types
