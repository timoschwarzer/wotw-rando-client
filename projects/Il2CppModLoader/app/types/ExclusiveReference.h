#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveReference {
        inline app::ExclusiveReference__Class** type_info = (app::ExclusiveReference__Class**)(modloader::win::memory::resolve_rva(0x04712BE0));
        inline app::ExclusiveReference__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveReference__Class>(type_info, "System.Text.RegularExpressions", "ExclusiveReference");
        }
        inline app::ExclusiveReference* create() {
            return il2cpp::create_object<app::ExclusiveReference>(get_class());
        }
    } // namespace ExclusiveReference
} // namespace app::classes::types
