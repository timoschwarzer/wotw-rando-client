#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityControllerSM {
        inline app::EntityControllerSM__Class** type_info = (app::EntityControllerSM__Class**)(modloader::win::memory::resolve_rva(0x0470ED20));
        inline app::EntityControllerSM__Class* get_class() {
            return il2cpp::get_class<app::EntityControllerSM__Class>(type_info, "", "EntityControllerSM");
        }
        inline app::EntityControllerSM* create() {
            return il2cpp::create_object<app::EntityControllerSM>(get_class());
        }
    } // namespace EntityControllerSM
} // namespace app::classes::types
