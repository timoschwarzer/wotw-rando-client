#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IkChainSolver_JointData__Array {
        inline app::IkChainSolver_JointData__Array__Class** type_info = (app::IkChainSolver_JointData__Array__Class**)(modloader::win::memory::resolve_rva(0x04734810));
        inline app::IkChainSolver_JointData__Array__Class* get_class() {
            return il2cpp::get_class<app::IkChainSolver_JointData__Array__Class>(type_info, "Moon", "IkChainSolver+JointData[]");
        }
        inline app::IkChainSolver_JointData__Array* create() {
            return il2cpp::create_object<app::IkChainSolver_JointData__Array>(get_class());
        }
    } // namespace IkChainSolver_JointData__Array
} // namespace app::classes::types
