#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Entity_c {
        inline app::Entity_c__Class** type_info = (app::Entity_c__Class**)(modloader::win::memory::resolve_rva(0x04789F30));
        inline app::Entity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_c__Class>(type_info, "Moon", "Entity", "<>c");
        }
        inline app::Entity_c* create() {
            return il2cpp::create_object<app::Entity_c>(get_class());
        }
    } // namespace Entity_c
} // namespace app::classes::types
