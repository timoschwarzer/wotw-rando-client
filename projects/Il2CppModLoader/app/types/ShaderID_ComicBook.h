#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ComicBook {
        inline app::ShaderID_ComicBook__Class** type_info = (app::ShaderID_ComicBook__Class**)(modloader::win::memory::resolve_rva(0x04778AD8));
        inline app::ShaderID_ComicBook__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ComicBook__Class>(type_info, "Colorful", "ShaderID_ComicBook");
        }
        inline app::ShaderID_ComicBook* create() {
            return il2cpp::create_object<app::ShaderID_ComicBook>(get_class());
        }
    } // namespace ShaderID_ComicBook
} // namespace app::classes::types
