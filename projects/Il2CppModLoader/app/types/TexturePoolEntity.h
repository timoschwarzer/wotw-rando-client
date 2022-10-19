#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TexturePoolEntity {
        inline app::TexturePoolEntity__Class** type_info = (app::TexturePoolEntity__Class**)(modloader::win::memory::resolve_rva(0x047623A8));
        inline app::TexturePoolEntity__Class* get_class() {
            return il2cpp::get_class<app::TexturePoolEntity__Class>(type_info, "Moon.ArtOptimization", "TexturePoolEntity");
        }
        inline app::TexturePoolEntity* create() {
            return il2cpp::create_object<app::TexturePoolEntity>(get_class());
        }
        inline app::TexturePoolEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::TexturePoolEntity__Array>(get_class(), size);
        }
        inline app::TexturePoolEntity__Array* create_array(const std::vector<app::TexturePoolEntity*>& items) {
            return il2cpp::array_new<app::TexturePoolEntity__Array>(get_class(), items);
        }
    } // namespace TexturePoolEntity
} // namespace app::classes::types
