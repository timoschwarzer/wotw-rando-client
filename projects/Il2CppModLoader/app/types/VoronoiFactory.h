#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VoronoiFactory {
        inline app::VoronoiFactory__Class** type_info = (app::VoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x0478DDA0));
        inline app::VoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::VoronoiFactory__Class>(type_info, "TriangleNet.Smoothing", "VoronoiFactory");
        }
        inline app::VoronoiFactory* create() {
            return il2cpp::create_object<app::VoronoiFactory>(get_class());
        }
    } // namespace VoronoiFactory
} // namespace app::classes::types
