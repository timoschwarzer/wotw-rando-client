#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BombSlugEntity {
        inline app::BombSlugEntity__Class** type_info = (app::BombSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x0473ACD8));
        inline app::BombSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::BombSlugEntity__Class>(type_info, "", "BombSlugEntity");
        }
        inline app::BombSlugEntity* create() {
            return il2cpp::create_object<app::BombSlugEntity>(get_class());
        }
    } // namespace BombSlugEntity
} // namespace app::classes::types
