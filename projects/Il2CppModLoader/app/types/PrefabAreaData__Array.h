#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrefabAreaData__Array {
        inline app::PrefabAreaData__Array__Class** type_info = (app::PrefabAreaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DD60));
        inline app::PrefabAreaData__Array__Class* get_class() {
            return il2cpp::get_class<app::PrefabAreaData__Array__Class>(type_info, "", "PrefabAreaData[]");
        }
        inline app::PrefabAreaData__Array* create() {
            return il2cpp::create_object<app::PrefabAreaData__Array>(get_class());
        }
    } // namespace PrefabAreaData__Array
} // namespace app::classes::types
