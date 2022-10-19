#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleStabBehaviour {
        inline app::TentacleStabBehaviour__Class** type_info = (app::TentacleStabBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472BF68));
        inline app::TentacleStabBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleStabBehaviour__Class>(type_info, "Moon", "TentacleStabBehaviour");
        }
        inline app::TentacleStabBehaviour* create() {
            return il2cpp::create_object<app::TentacleStabBehaviour>(get_class());
        }
    } // namespace TentacleStabBehaviour
} // namespace app::classes::types
