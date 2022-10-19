#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskDissolveModifier_GetKeywordsForShader_d_11 {
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class** type_info = (app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class**)(modloader::win::memory::resolve_rva(0x0472A820));
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class>(type_info, "", "MaskDissolveModifier", "<GetKeywordsForShader>d__11");
        }
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11* create() {
            return il2cpp::create_object<app::MaskDissolveModifier_GetKeywordsForShader_d_11>(get_class());
        }
    } // namespace MaskDissolveModifier_GetKeywordsForShader_d_11
} // namespace app::classes::types
