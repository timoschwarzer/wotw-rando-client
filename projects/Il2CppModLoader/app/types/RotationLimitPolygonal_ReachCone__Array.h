#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_ReachCone__Array {
        inline app::RotationLimitPolygonal_ReachCone__Array__Class** type_info = (app::RotationLimitPolygonal_ReachCone__Array__Class**)(modloader::win::memory::resolve_rva(0x0477C940));
        inline app::RotationLimitPolygonal_ReachCone__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal_ReachCone__Array__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal+ReachCone[]");
        }
        inline app::RotationLimitPolygonal_ReachCone__Array* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_ReachCone__Array>(get_class());
        }
    } // namespace RotationLimitPolygonal_ReachCone__Array
} // namespace app::classes::types
