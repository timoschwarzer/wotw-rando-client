#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerNPC {
        inline app::CartographerNPC__Class** type_info = (app::CartographerNPC__Class**)(modloader::win::memory::resolve_rva(0x0472F470));
        inline app::CartographerNPC__Class* get_class() {
            return il2cpp::get_class<app::CartographerNPC__Class>(type_info, "", "CartographerNPC");
        }
        inline app::CartographerNPC* create() {
            return il2cpp::create_object<app::CartographerNPC>(get_class());
        }
    } // namespace CartographerNPC
} // namespace app::classes::types
