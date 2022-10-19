#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardUpgradeScreen {
        inline app::ShardUpgradeScreen__Class** type_info = (app::ShardUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x0472E650));
        inline app::ShardUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::ShardUpgradeScreen__Class>(type_info, "", "ShardUpgradeScreen");
        }
        inline app::ShardUpgradeScreen* create() {
            return il2cpp::create_object<app::ShardUpgradeScreen>(get_class());
        }
    } // namespace ShardUpgradeScreen
} // namespace app::classes::types
