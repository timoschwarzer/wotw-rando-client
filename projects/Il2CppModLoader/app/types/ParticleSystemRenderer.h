#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemRenderer {
        inline app::ParticleSystemRenderer__Class** type_info = (app::ParticleSystemRenderer__Class**)(modloader::win::memory::resolve_rva(0x04794718));
        inline app::ParticleSystemRenderer__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemRenderer__Class>(type_info, "UnityEngine", "ParticleSystemRenderer");
        }
        inline app::ParticleSystemRenderer* create() {
            return il2cpp::create_object<app::ParticleSystemRenderer>(get_class());
        }
        inline app::ParticleSystemRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystemRenderer__Array>(get_class(), size);
        }
        inline app::ParticleSystemRenderer__Array* create_array(const std::vector<app::ParticleSystemRenderer*>& items) {
            return il2cpp::array_new<app::ParticleSystemRenderer__Array>(get_class(), items);
        }
    } // namespace ParticleSystemRenderer
} // namespace app::classes::types
