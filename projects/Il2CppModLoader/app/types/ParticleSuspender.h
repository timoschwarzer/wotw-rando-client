#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSuspender {
        namespace {
            inline app::ParticleSuspender__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSuspender__Class** type_info = &type_info_ref;
        inline app::ParticleSuspender__Class* get_class() {
            return il2cpp::get_class<app::ParticleSuspender__Class>(type_info, "", "ParticleSuspender");
        }
        inline app::ParticleSuspender* create() {
            return il2cpp::create_object<app::ParticleSuspender>(get_class());
        }
    } // namespace ParticleSuspender
} // namespace app::classes::types
