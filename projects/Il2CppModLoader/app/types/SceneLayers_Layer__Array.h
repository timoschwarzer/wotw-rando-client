#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLayers_Layer__Array {
        inline app::SceneLayers_Layer__Array__Class** type_info = (app::SceneLayers_Layer__Array__Class**)(modloader::win::memory::resolve_rva(0x04777E58));
        inline app::SceneLayers_Layer__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneLayers_Layer__Array__Class>(type_info, "", "SceneLayers+Layer[]");
        }
        inline app::SceneLayers_Layer__Array* create() {
            return il2cpp::create_object<app::SceneLayers_Layer__Array>(get_class());
        }
    } // namespace SceneLayers_Layer__Array
} // namespace app::classes::types
