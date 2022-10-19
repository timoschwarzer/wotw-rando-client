#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializableUberShaderWrapperComparer {
        inline app::SerializableUberShaderWrapperComparer__Class** type_info = (app::SerializableUberShaderWrapperComparer__Class**)(modloader::win::memory::resolve_rva(0x04791290));
        inline app::SerializableUberShaderWrapperComparer__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberShaderWrapperComparer__Class>(type_info, "Moon.ArtOptimization", "SerializableUberShaderWrapperComparer");
        }
        inline app::SerializableUberShaderWrapperComparer* create() {
            return il2cpp::create_object<app::SerializableUberShaderWrapperComparer>(get_class());
        }
    } // namespace SerializableUberShaderWrapperComparer
} // namespace app::classes::types
