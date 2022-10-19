#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Letterbox_1 {
        inline app::Letterbox_1__Class** type_info = (app::Letterbox_1__Class**)(modloader::win::memory::resolve_rva(0x04718AA8));
        inline app::Letterbox_1__Class* get_class() {
            return il2cpp::get_class<app::Letterbox_1__Class>(type_info, "", "Letterbox");
        }
        inline app::Letterbox_1* create() {
            return il2cpp::create_object<app::Letterbox_1>(get_class());
        }
    } // namespace Letterbox_1
} // namespace app::classes::types
