#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManager {
        inline app::ScenesManager__Class** type_info = (app::ScenesManager__Class**)(modloader::win::memory::resolve_rva(0x0478D1B8));
        inline app::ScenesManager__Class* get_class() {
            return il2cpp::get_class<app::ScenesManager__Class>(type_info, "", "ScenesManager");
        }
        inline app::ScenesManager* create() {
            return il2cpp::create_object<app::ScenesManager>(get_class());
        }
    } // namespace ScenesManager
} // namespace app::classes::types
