#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_Surname {
        inline app::X520_Surname__Class** type_info = (app::X520_Surname__Class**)(modloader::win::memory::resolve_rva(0x047143B8));
        inline app::X520_Surname__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Surname__Class>(type_info, "Mono.Security.X509", "X520", "Surname");
        }
        inline app::X520_Surname* create() {
            return il2cpp::create_object<app::X520_Surname>(get_class());
        }
    } // namespace X520_Surname
} // namespace app::classes::types
