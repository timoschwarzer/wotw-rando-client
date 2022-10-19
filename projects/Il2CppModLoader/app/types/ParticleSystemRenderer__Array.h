#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemRenderer__Array {
        namespace {
            inline app::ParticleSystemRenderer__Array__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemRenderer__Array__Class** type_info = &type_info_ref;
        inline app::ParticleSystemRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemRenderer__Array__Class>(type_info, "UnityEngine", "ParticleSystemRenderer[]");
        }
        inline app::ParticleSystemRenderer__Array* create() {
            return il2cpp::create_object<app::ParticleSystemRenderer__Array>(get_class());
        }
    } // namespace ParticleSystemRenderer__Array
} // namespace app::classes::types
