#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CSteamAPIContext {
        inline app::CSteamAPIContext__Class** type_info = (app::CSteamAPIContext__Class**)(modloader::win::memory::resolve_rva(0x0476BC40));
        inline app::CSteamAPIContext__Class* get_class() {
            return il2cpp::get_class<app::CSteamAPIContext__Class>(type_info, "Steamworks", "CSteamAPIContext");
        }
        inline app::CSteamAPIContext* create() {
            return il2cpp::create_object<app::CSteamAPIContext>(get_class());
        }
    } // namespace CSteamAPIContext
} // namespace app::classes::types
