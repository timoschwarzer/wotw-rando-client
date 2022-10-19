#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovieTexture {
        inline app::MovieTexture__Class** type_info = (app::MovieTexture__Class**)(modloader::win::memory::resolve_rva(0x0475F3D0));
        inline app::MovieTexture__Class* get_class() {
            return il2cpp::get_class<app::MovieTexture__Class>(type_info, "UnityEngine", "MovieTexture");
        }
        inline app::MovieTexture* create() {
            return il2cpp::create_object<app::MovieTexture>(get_class());
        }
    } // namespace MovieTexture
} // namespace app::classes::types
