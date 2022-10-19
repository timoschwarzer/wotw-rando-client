#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureTilingAdjuster__Array {
        inline app::TextureTilingAdjuster__Array__Class** type_info = (app::TextureTilingAdjuster__Array__Class**)(modloader::win::memory::resolve_rva(0x047285F8));
        inline app::TextureTilingAdjuster__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureTilingAdjuster__Array__Class>(type_info, "", "TextureTilingAdjuster[]");
        }
        inline app::TextureTilingAdjuster__Array* create() {
            return il2cpp::create_object<app::TextureTilingAdjuster__Array>(get_class());
        }
    } // namespace TextureTilingAdjuster__Array
} // namespace app::classes::types
