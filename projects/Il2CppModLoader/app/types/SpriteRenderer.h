#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteRenderer {
        namespace {
            inline app::SpriteRenderer__Class* type_info_ref = nullptr;
        }
        inline app::SpriteRenderer__Class** type_info = &type_info_ref;
        inline app::SpriteRenderer__Class* get_class() {
            return il2cpp::get_class<app::SpriteRenderer__Class>(type_info, "UnityEngine", "SpriteRenderer");
        }
        inline app::SpriteRenderer* create() {
            return il2cpp::create_object<app::SpriteRenderer>(get_class());
        }
    } // namespace SpriteRenderer
} // namespace app::classes::types
