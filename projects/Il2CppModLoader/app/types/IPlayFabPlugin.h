#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayFabPlugin {
        inline app::IPlayFabPlugin__Class** type_info = (app::IPlayFabPlugin__Class**)(modloader::win::memory::resolve_rva(0x047257C0));
        inline app::IPlayFabPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabPlugin__Class>(type_info, "PlayFab", "IPlayFabPlugin");
        }
        inline app::IPlayFabPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), size);
        }
        inline app::IPlayFabPlugin__Array* create_array(const std::vector<app::IPlayFabPlugin*>& items) {
            return il2cpp::array_new<app::IPlayFabPlugin__Array>(get_class(), items);
        }
    } // namespace IPlayFabPlugin
} // namespace app::classes::types
