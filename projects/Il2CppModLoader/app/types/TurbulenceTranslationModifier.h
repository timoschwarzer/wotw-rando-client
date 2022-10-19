#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceTranslationModifier {
        inline app::TurbulenceTranslationModifier__Class** type_info = (app::TurbulenceTranslationModifier__Class**)(modloader::win::memory::resolve_rva(0x04702820));
        inline app::TurbulenceTranslationModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTranslationModifier__Class>(type_info, "", "TurbulenceTranslationModifier");
        }
        inline app::TurbulenceTranslationModifier* create() {
            return il2cpp::create_object<app::TurbulenceTranslationModifier>(get_class());
        }
    } // namespace TurbulenceTranslationModifier
} // namespace app::classes::types
