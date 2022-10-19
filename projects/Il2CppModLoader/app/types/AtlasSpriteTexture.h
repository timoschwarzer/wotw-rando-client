#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AtlasSpriteTexture {
        inline app::AtlasSpriteTexture__Class** type_info = (app::AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04794250));
        inline app::AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTexture__Class>(type_info, "", "AtlasSpriteTexture");
        }
        inline app::AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::AtlasSpriteTexture>(get_class());
        }
        inline app::AtlasSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::AtlasSpriteTexture__Array>(get_class(), size);
        }
        inline app::AtlasSpriteTexture__Array* create_array(const std::vector<app::AtlasSpriteTexture*>& items) {
            return il2cpp::array_new<app::AtlasSpriteTexture__Array>(get_class(), items);
        }
    } // namespace AtlasSpriteTexture
} // namespace app::classes::types
