#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerIdleBehaviour_c {
        inline app::CartographerIdleBehaviour_c__Class** type_info = (app::CartographerIdleBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04773398));
        inline app::CartographerIdleBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerIdleBehaviour_c__Class>(type_info, "", "CartographerIdleBehaviour", "<>c");
        }
        inline app::CartographerIdleBehaviour_c* create() {
            return il2cpp::create_object<app::CartographerIdleBehaviour_c>(get_class());
        }
    } // namespace CartographerIdleBehaviour_c
} // namespace app::classes::types
