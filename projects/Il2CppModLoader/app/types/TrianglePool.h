#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrianglePool {
        inline app::TrianglePool__Class** type_info = (app::TrianglePool__Class**)(modloader::win::memory::resolve_rva(0x04758108));
        inline app::TrianglePool__Class* get_class() {
            return il2cpp::get_class<app::TrianglePool__Class>(type_info, "TriangleNet", "TrianglePool");
        }
        inline app::TrianglePool* create() {
            return il2cpp::create_object<app::TrianglePool>(get_class());
        }
    } // namespace TrianglePool
} // namespace app::classes::types
