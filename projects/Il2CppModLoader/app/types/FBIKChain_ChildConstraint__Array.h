#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBIKChain_ChildConstraint__Array {
        inline app::FBIKChain_ChildConstraint__Array__Class** type_info = (app::FBIKChain_ChildConstraint__Array__Class**)(modloader::win::memory::resolve_rva(0x04799AE8));
        inline app::FBIKChain_ChildConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain_ChildConstraint__Array__Class>(type_info, "RootMotion.FinalIK", "FBIKChain+ChildConstraint[]");
        }
        inline app::FBIKChain_ChildConstraint__Array* create() {
            return il2cpp::create_object<app::FBIKChain_ChildConstraint__Array>(get_class());
        }
    } // namespace FBIKChain_ChildConstraint__Array
} // namespace app::classes::types
