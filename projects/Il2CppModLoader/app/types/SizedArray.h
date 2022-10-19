#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SizedArray {
        inline app::SizedArray__Class** type_info = (app::SizedArray__Class**)(modloader::win::memory::resolve_rva(0x0472E2A8));
        inline app::SizedArray__Class* get_class() {
            return il2cpp::get_class<app::SizedArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
        }
        inline app::SizedArray* create() {
            return il2cpp::create_object<app::SizedArray>(get_class());
        }
    } // namespace SizedArray
} // namespace app::classes::types
