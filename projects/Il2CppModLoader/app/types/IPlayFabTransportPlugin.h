#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlayFabTransportPlugin {
        inline app::IPlayFabTransportPlugin__Class** type_info = (app::IPlayFabTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04727898));
        inline app::IPlayFabTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabTransportPlugin__Class>(type_info, "PlayFab", "IPlayFabTransportPlugin");
        }
    } // namespace IPlayFabTransportPlugin
} // namespace app::classes::types
