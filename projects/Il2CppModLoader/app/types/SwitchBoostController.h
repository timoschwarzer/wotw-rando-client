#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchBoostController {
        inline app::SwitchBoostController__Class** type_info = (app::SwitchBoostController__Class**)(modloader::win::memory::resolve_rva(0x04749590));
        inline app::SwitchBoostController__Class* get_class() {
            return il2cpp::get_class<app::SwitchBoostController__Class>(type_info, "frameworks.Switch", "SwitchBoostController");
        }
        inline app::SwitchBoostController* create() {
            return il2cpp::create_object<app::SwitchBoostController>(get_class());
        }
    } // namespace SwitchBoostController
} // namespace app::classes::types
