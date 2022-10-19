#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightPriority_Layer__Enum__Array {
        inline app::LightPriority_Layer__Enum__Array__Class** type_info = (app::LightPriority_Layer__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0474D818));
        inline app::LightPriority_Layer__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::LightPriority_Layer__Enum__Array__Class>(type_info, "", "LightPriority+Layer[]");
        }
        inline app::LightPriority_Layer__Enum__Array* create() {
            return il2cpp::create_object<app::LightPriority_Layer__Enum__Array>(get_class());
        }
    } // namespace LightPriority_Layer__Enum__Array
} // namespace app::classes::types
