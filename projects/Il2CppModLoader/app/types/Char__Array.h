#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Char__Array {
        inline app::Char__Array__Class** type_info = (app::Char__Array__Class**)(modloader::win::memory::resolve_rva(0x04745010));
        inline app::Char__Array__Class* get_class() {
            return il2cpp::get_class<app::Char__Array__Class>(type_info, "System", "Char[]");
        }
        inline app::Char__Array* create() {
            return il2cpp::create_object<app::Char__Array>(get_class());
        }
    } // namespace Char__Array
} // namespace app::classes::types
