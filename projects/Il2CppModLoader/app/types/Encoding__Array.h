#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Encoding__Array {
        inline app::Encoding__Array__Class** type_info = (app::Encoding__Array__Class**)(modloader::win::memory::resolve_rva(0x04768948));
        inline app::Encoding__Array__Class* get_class() {
            return il2cpp::get_class<app::Encoding__Array__Class>(type_info, "System.Text", "Encoding[]");
        }
        inline app::Encoding__Array* create() {
            return il2cpp::create_object<app::Encoding__Array>(get_class());
        }
    } // namespace Encoding__Array
} // namespace app::classes::types
