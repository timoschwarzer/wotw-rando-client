#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Timer_1 {
        inline app::Timer_1__Class** type_info = (app::Timer_1__Class**)(modloader::win::memory::resolve_rva(0x04717B50));
        inline app::Timer_1__Class* get_class() {
            return il2cpp::get_class<app::Timer_1__Class>(type_info, "System.Timers", "Timer");
        }
        inline app::Timer_1* create() {
            return il2cpp::create_object<app::Timer_1>(get_class());
        }
    } // namespace Timer_1
} // namespace app::classes::types
