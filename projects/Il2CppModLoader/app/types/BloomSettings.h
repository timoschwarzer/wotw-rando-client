#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BloomSettings {
        inline app::BloomSettings__Class** type_info = (app::BloomSettings__Class**)(modloader::win::memory::resolve_rva(0x04724DC0));
        inline app::BloomSettings__Class* get_class() {
            return il2cpp::get_class<app::BloomSettings__Class>(type_info, "", "BloomSettings");
        }
        inline app::BloomSettings* create() {
            return il2cpp::create_object<app::BloomSettings>(get_class());
        }
    } // namespace BloomSettings
} // namespace app::classes::types
