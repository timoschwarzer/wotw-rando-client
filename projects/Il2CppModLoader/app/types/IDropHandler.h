#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDropHandler {
        inline app::IDropHandler__Class** type_info = (app::IDropHandler__Class**)(modloader::win::memory::resolve_rva(0x0477D420));
        inline app::IDropHandler__Class* get_class() {
            return il2cpp::get_class<app::IDropHandler__Class>(type_info, "UnityEngine.EventSystems", "IDropHandler");
        }
    } // namespace IDropHandler
} // namespace app::classes::types
