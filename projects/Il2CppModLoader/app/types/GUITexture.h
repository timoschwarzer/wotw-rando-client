#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUITexture {
        inline app::GUITexture__Class** type_info = (app::GUITexture__Class**)(modloader::win::memory::resolve_rva(0x0471C480));
        inline app::GUITexture__Class* get_class() {
            return il2cpp::get_class<app::GUITexture__Class>(type_info, "UnityEngine", "GUITexture");
        }
        inline app::GUITexture* create() {
            return il2cpp::create_object<app::GUITexture>(get_class());
        }
    } // namespace GUITexture
} // namespace app::classes::types
