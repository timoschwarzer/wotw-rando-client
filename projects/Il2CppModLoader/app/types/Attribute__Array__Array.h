#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Attribute__Array__Array {
        inline app::Attribute__Array__Array__Class** type_info = (app::Attribute__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04706918));
        inline app::Attribute__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Attribute__Array__Array__Class>(type_info, "System", "Attribute[][]");
        }
        inline app::Attribute__Array__Array* create() {
            return il2cpp::create_object<app::Attribute__Array__Array>(get_class());
        }
    } // namespace Attribute__Array__Array
} // namespace app::classes::types
