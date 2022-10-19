#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReferenceConverter_ReferenceComparer {
        inline app::ReferenceConverter_ReferenceComparer__Class** type_info = (app::ReferenceConverter_ReferenceComparer__Class**)(modloader::win::memory::resolve_rva(0x0472C268));
        inline app::ReferenceConverter_ReferenceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ReferenceConverter_ReferenceComparer__Class>(type_info, "System.ComponentModel", "ReferenceConverter", "ReferenceComparer");
        }
        inline app::ReferenceConverter_ReferenceComparer* create() {
            return il2cpp::create_object<app::ReferenceConverter_ReferenceComparer>(get_class());
        }
    } // namespace ReferenceConverter_ReferenceComparer
} // namespace app::classes::types
