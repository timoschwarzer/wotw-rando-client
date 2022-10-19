#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureProvider {
        namespace {
            inline app::TextureProvider__Class* type_info_ref = nullptr;
        }
        inline app::TextureProvider__Class** type_info = &type_info_ref;
        inline app::TextureProvider__Class* get_class() {
            return il2cpp::get_class<app::TextureProvider__Class>(type_info, "", "TextureProvider");
        }
        inline app::TextureProvider* create() {
            return il2cpp::create_object<app::TextureProvider>(get_class());
        }
    } // namespace TextureProvider
} // namespace app::classes::types
