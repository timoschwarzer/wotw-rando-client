#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RagdollUtility_DisableRagdollSmooth_d_21 {
        inline app::RagdollUtility_DisableRagdollSmooth_d_21__Class** type_info = (app::RagdollUtility_DisableRagdollSmooth_d_21__Class**)(modloader::win::memory::resolve_rva(0x04773078));
        inline app::RagdollUtility_DisableRagdollSmooth_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::RagdollUtility_DisableRagdollSmooth_d_21__Class>(type_info, "RootMotion.FinalIK", "RagdollUtility", "<DisableRagdollSmooth>d__21");
        }
        inline app::RagdollUtility_DisableRagdollSmooth_d_21* create() {
            return il2cpp::create_object<app::RagdollUtility_DisableRagdollSmooth_d_21>(get_class());
        }
    } // namespace RagdollUtility_DisableRagdollSmooth_d_21
} // namespace app::classes::types
