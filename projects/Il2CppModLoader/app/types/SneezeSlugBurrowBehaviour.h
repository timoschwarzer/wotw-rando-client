#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugBurrowBehaviour {
        namespace {
            inline app::SneezeSlugBurrowBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugBurrowBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugBurrowBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBurrowBehaviour__Class>(type_info, "", "SneezeSlugBurrowBehaviour");
        }
        inline app::SneezeSlugBurrowBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugBurrowBehaviour>(get_class());
        }
    } // namespace SneezeSlugBurrowBehaviour
} // namespace app::classes::types
