#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IHitStopReceiver {
        inline app::IHitStopReceiver__Class** type_info = (app::IHitStopReceiver__Class**)(modloader::win::memory::resolve_rva(0x0477EBF8));
        inline app::IHitStopReceiver__Class* get_class() {
            return il2cpp::get_class<app::IHitStopReceiver__Class>(type_info, "Moon", "IHitStopReceiver");
        }
    } // namespace IHitStopReceiver
} // namespace app::classes::types
