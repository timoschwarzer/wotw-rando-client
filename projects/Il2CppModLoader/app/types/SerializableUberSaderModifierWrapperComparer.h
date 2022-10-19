#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapperComparer {
        inline app::SerializableUberSaderModifierWrapperComparer__Class** type_info = (app::SerializableUberSaderModifierWrapperComparer__Class**)(modloader::win::memory::resolve_rva(0x0476FC48));
        inline app::SerializableUberSaderModifierWrapperComparer__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapperComparer__Class>(type_info, "Moon.ArtOptimization", "SerializableUberSaderModifierWrapperComparer");
        }
        inline app::SerializableUberSaderModifierWrapperComparer* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapperComparer>(get_class());
        }
    } // namespace SerializableUberSaderModifierWrapperComparer
} // namespace app::classes::types
