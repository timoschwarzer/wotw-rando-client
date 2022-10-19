#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyValuePairs__Array {
        inline app::KeyValuePairs__Array__Class** type_info = (app::KeyValuePairs__Array__Class**)(modloader::win::memory::resolve_rva(0x047165A8));
        inline app::KeyValuePairs__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePairs__Array__Class>(type_info, "System.Collections", "KeyValuePairs[]");
        }
        inline app::KeyValuePairs__Array* create() {
            return il2cpp::create_object<app::KeyValuePairs__Array>(get_class());
        }
    } // namespace KeyValuePairs__Array
} // namespace app::classes::types
