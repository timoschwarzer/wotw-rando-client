#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBubbleKiller {
        inline app::IBubbleKiller__Class** type_info = (app::IBubbleKiller__Class**)(modloader::win::memory::resolve_rva(0x047383E8));
        inline app::IBubbleKiller__Class* get_class() {
            return il2cpp::get_class<app::IBubbleKiller__Class>(type_info, "", "IBubbleKiller");
        }
    } // namespace IBubbleKiller
} // namespace app::classes::types
