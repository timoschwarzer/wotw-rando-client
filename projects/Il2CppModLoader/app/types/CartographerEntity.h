#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerEntity {
        inline app::CartographerEntity__Class** type_info = (app::CartographerEntity__Class**)(modloader::win::memory::resolve_rva(0x0472D770));
        inline app::CartographerEntity__Class* get_class() {
            return il2cpp::get_class<app::CartographerEntity__Class>(type_info, "", "CartographerEntity");
        }
        inline app::CartographerEntity* create() {
            return il2cpp::create_object<app::CartographerEntity>(get_class());
        }
    } // namespace CartographerEntity
} // namespace app::classes::types
