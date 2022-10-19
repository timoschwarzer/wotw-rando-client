#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Hashtable_bucket__Array {
        inline app::Hashtable_bucket__Array__Class** type_info = (app::Hashtable_bucket__Array__Class**)(modloader::win::memory::resolve_rva(0x04791CE8));
        inline app::Hashtable_bucket__Array__Class* get_class() {
            return il2cpp::get_class<app::Hashtable_bucket__Array__Class>(type_info, "System.Collections", "Hashtable+bucket[]");
        }
        inline app::Hashtable_bucket__Array* create() {
            return il2cpp::create_object<app::Hashtable_bucket__Array>(get_class());
        }
    } // namespace Hashtable_bucket__Array
} // namespace app::classes::types
