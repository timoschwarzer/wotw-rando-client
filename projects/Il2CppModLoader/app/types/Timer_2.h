#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Timer_2 {
        inline app::Timer_2__Class** type_info = (app::Timer_2__Class**)(modloader::win::memory::resolve_rva(0x04760070));
        inline app::Timer_2__Class* get_class() {
            return il2cpp::get_class<app::Timer_2__Class>(type_info, "", "Timer");
        }
        inline app::Timer_2* create() {
            return il2cpp::create_object<app::Timer_2>(get_class());
        }
    } // namespace Timer_2
} // namespace app::classes::types
