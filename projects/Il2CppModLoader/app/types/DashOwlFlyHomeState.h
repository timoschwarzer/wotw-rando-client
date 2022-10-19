#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlFlyHomeState {
        inline app::DashOwlFlyHomeState__Class** type_info = (app::DashOwlFlyHomeState__Class**)(modloader::win::memory::resolve_rva(0x047979A8));
        inline app::DashOwlFlyHomeState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlFlyHomeState__Class>(type_info, "", "DashOwlFlyHomeState");
        }
        inline app::DashOwlFlyHomeState* create() {
            return il2cpp::create_object<app::DashOwlFlyHomeState>(get_class());
        }
    } // namespace DashOwlFlyHomeState
} // namespace app::classes::types
