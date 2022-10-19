#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManualResetEvent {
        inline app::ManualResetEvent__Class** type_info = (app::ManualResetEvent__Class**)(modloader::win::memory::resolve_rva(0x0477A380));
        inline app::ManualResetEvent__Class* get_class() {
            return il2cpp::get_class<app::ManualResetEvent__Class>(type_info, "System.Threading", "ManualResetEvent");
        }
        inline app::ManualResetEvent* create() {
            return il2cpp::create_object<app::ManualResetEvent>(get_class());
        }
    } // namespace ManualResetEvent
} // namespace app::classes::types
