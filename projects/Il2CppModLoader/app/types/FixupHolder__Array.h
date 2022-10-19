#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixupHolder__Array {
        inline app::FixupHolder__Array__Class** type_info = (app::FixupHolder__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F2A8));
        inline app::FixupHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Array__Class>(type_info, "System.Runtime.Serialization", "FixupHolder[]");
        }
        inline app::FixupHolder__Array* create() {
            return il2cpp::create_object<app::FixupHolder__Array>(get_class());
        }
    } // namespace FixupHolder__Array
} // namespace app::classes::types
