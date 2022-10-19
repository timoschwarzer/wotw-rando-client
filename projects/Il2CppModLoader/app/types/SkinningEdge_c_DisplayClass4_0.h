#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinningEdge_c_DisplayClass4_0 {
        inline app::SkinningEdge_c_DisplayClass4_0__Class** type_info = (app::SkinningEdge_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04799F10));
        inline app::SkinningEdge_c_DisplayClass4_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinningEdge_c_DisplayClass4_0__Class>(type_info, "", "SkinningEdge", "<>c__DisplayClass4_0");
        }
        inline app::SkinningEdge_c_DisplayClass4_0* create() {
            return il2cpp::create_object<app::SkinningEdge_c_DisplayClass4_0>(get_class());
        }
    } // namespace SkinningEdge_c_DisplayClass4_0
} // namespace app::classes::types
