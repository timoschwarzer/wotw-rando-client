#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMenuTab {
        inline app::IMenuTab__Class** type_info = (app::IMenuTab__Class**)(modloader::win::memory::resolve_rva(0x04755B08));
        inline app::IMenuTab__Class* get_class() {
            return il2cpp::get_class<app::IMenuTab__Class>(type_info, "", "IMenuTab");
        }
    } // namespace IMenuTab
} // namespace app::classes::types
