#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILayoutSelfController {
        inline app::ILayoutSelfController__Class** type_info = (app::ILayoutSelfController__Class**)(modloader::win::memory::resolve_rva(0x0474CF80));
        inline app::ILayoutSelfController__Class* get_class() {
            return il2cpp::get_class<app::ILayoutSelfController__Class>(type_info, "UnityEngine.UI", "ILayoutSelfController");
        }
    } // namespace ILayoutSelfController
} // namespace app::classes::types
