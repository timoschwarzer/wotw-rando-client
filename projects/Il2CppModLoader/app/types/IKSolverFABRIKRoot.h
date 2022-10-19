#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSolverFABRIKRoot {
        inline app::IKSolverFABRIKRoot__Class** type_info = (app::IKSolverFABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x047237C0));
        inline app::IKSolverFABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::IKSolverFABRIKRoot__Class>(type_info, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
        }
        inline app::IKSolverFABRIKRoot* create() {
            return il2cpp::create_object<app::IKSolverFABRIKRoot>(get_class());
        }
    } // namespace IKSolverFABRIKRoot
} // namespace app::classes::types
