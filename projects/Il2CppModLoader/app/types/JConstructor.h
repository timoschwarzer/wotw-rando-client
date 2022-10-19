#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JConstructor {
        inline app::JConstructor__Class** type_info = (app::JConstructor__Class**)(modloader::win::memory::resolve_rva(0x04797450));
        inline app::JConstructor__Class* get_class() {
            return il2cpp::get_class<app::JConstructor__Class>(type_info, "Newtonsoft.Json.Linq", "JConstructor");
        }
        inline app::JConstructor* create() {
            return il2cpp::create_object<app::JConstructor>(get_class());
        }
    } // namespace JConstructor
} // namespace app::classes::types
