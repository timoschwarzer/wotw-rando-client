#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverTrigonometric {
        inline app::IKSolverTrigonometric__Class** type_info = (app::IKSolverTrigonometric__Class**)(modloader::win::memory::resolve_rva(0x04791DA0));
        inline app::IKSolverTrigonometric__Class* get_class() {
            return il2cpp::get_class<app::IKSolverTrigonometric__Class>(type_info, "RootMotion.FinalIK", "IKSolverTrigonometric");
        }
        inline app::IKSolverTrigonometric* create() {
            return il2cpp::create_object<app::IKSolverTrigonometric>(get_class());
        }
    } // namespace IKSolverTrigonometric
} // namespace app::classes::types
