#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LookupBindingPropertiesAttribute {
        inline app::LookupBindingPropertiesAttribute__Class** type_info = (app::LookupBindingPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x047741B0));
        inline app::LookupBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::LookupBindingPropertiesAttribute__Class>(type_info, "System.ComponentModel", "LookupBindingPropertiesAttribute");
        }
        inline app::LookupBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::LookupBindingPropertiesAttribute>(get_class());
        }
    } // namespace LookupBindingPropertiesAttribute
} // namespace app::classes::types
