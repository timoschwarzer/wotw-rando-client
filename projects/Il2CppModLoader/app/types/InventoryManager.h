#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryManager {
        inline app::InventoryManager__Class** type_info = (app::InventoryManager__Class**)(modloader::win::memory::resolve_rva(0x04721EB8));
        inline app::InventoryManager__Class* get_class() {
            return il2cpp::get_class<app::InventoryManager__Class>(type_info, "", "InventoryManager");
        }
        inline app::InventoryManager* create() {
            return il2cpp::create_object<app::InventoryManager>(get_class());
        }
    } // namespace InventoryManager
} // namespace app::classes::types
