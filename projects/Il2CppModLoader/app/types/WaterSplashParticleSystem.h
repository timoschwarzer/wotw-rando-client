#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterSplashParticleSystem {
        namespace {
            inline app::WaterSplashParticleSystem__Class* type_info_ref = nullptr;
        }
        inline app::WaterSplashParticleSystem__Class** type_info = &type_info_ref;
        inline app::WaterSplashParticleSystem__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashParticleSystem__Class>(type_info, "", "WaterSplashParticleSystem");
        }
        inline app::WaterSplashParticleSystem* create() {
            return il2cpp::create_object<app::WaterSplashParticleSystem>(get_class());
        }
    } // namespace WaterSplashParticleSystem
} // namespace app::classes::types
