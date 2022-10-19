#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Quaternion__Array {
        inline app::Quaternion__Array__Class** type_info = (app::Quaternion__Array__Class**)(modloader::win::memory::resolve_rva(0x04735AC0));
        inline app::Quaternion__Array__Class* get_class() {
            return il2cpp::get_class<app::Quaternion__Array__Class>(type_info, "UnityEngine", "Quaternion[]");
        }
        inline app::Quaternion__Array* create() {
            return il2cpp::create_object<app::Quaternion__Array>(get_class());
        }
    } // namespace Quaternion__Array
} // namespace app::classes::types
