#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateVisualizable {
        inline app::IUberStateVisualizable__Class** type_info = (app::IUberStateVisualizable__Class**)(modloader::win::memory::resolve_rva(0x0476EB88));
        inline app::IUberStateVisualizable__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizable__Class>(type_info, "Moon", "IUberStateVisualizable");
        }
    } // namespace IUberStateVisualizable
} // namespace app::classes::types
