#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamInventoryDefinitionUpdate_t {
        namespace {
            inline app::SteamInventoryDefinitionUpdate_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamInventoryDefinitionUpdate_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryDefinitionUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryDefinitionUpdate_t__Class>(type_info, "Steamworks", "SteamInventoryDefinitionUpdate_t");
        }
        inline app::SteamInventoryDefinitionUpdate_t* create() {
            return il2cpp::create_object<app::SteamInventoryDefinitionUpdate_t>(get_class());
        }
        inline app::SteamInventoryDefinitionUpdate_t__Boxed* box(app::SteamInventoryDefinitionUpdate_t value) {
            return il2cpp::box_value<app::SteamInventoryDefinitionUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryDefinitionUpdate_t
} // namespace app::classes::types
