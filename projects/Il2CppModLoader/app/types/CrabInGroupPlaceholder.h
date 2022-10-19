#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabInGroupPlaceholder {
        inline app::CrabInGroupPlaceholder__Class** type_info = (app::CrabInGroupPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0470C218));
        inline app::CrabInGroupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabInGroupPlaceholder__Class>(type_info, "", "CrabInGroupPlaceholder");
        }
        inline app::CrabInGroupPlaceholder* create() {
            return il2cpp::create_object<app::CrabInGroupPlaceholder>(get_class());
        }
    } // namespace CrabInGroupPlaceholder
} // namespace app::classes::types
