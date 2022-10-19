#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailParticle {
        namespace {
            inline app::MeshTrail_MeshTrailParticle__Class* type_info_ref = nullptr;
        }
        inline app::MeshTrail_MeshTrailParticle__Class** type_info = &type_info_ref;
        inline app::MeshTrail_MeshTrailParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailParticle__Class>(type_info, "", "MeshTrail", "MeshTrailParticle");
        }
        inline app::MeshTrail_MeshTrailParticle* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailParticle>(get_class());
        }
        inline app::MeshTrail_MeshTrailParticle__Boxed* box(app::MeshTrail_MeshTrailParticle value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailParticle__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailParticle
} // namespace app::classes::types
