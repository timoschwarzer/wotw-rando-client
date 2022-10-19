#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TermInfoStrings__Enum__Array {
        inline app::TermInfoStrings__Enum__Array__Class** type_info = (app::TermInfoStrings__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04762DE0));
        inline app::TermInfoStrings__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::TermInfoStrings__Enum__Array__Class>(type_info, "System", "TermInfoStrings[]");
        }
        inline app::TermInfoStrings__Enum__Array* create() {
            return il2cpp::create_object<app::TermInfoStrings__Enum__Array>(get_class());
        }
    } // namespace TermInfoStrings__Enum__Array
} // namespace app::classes::types
