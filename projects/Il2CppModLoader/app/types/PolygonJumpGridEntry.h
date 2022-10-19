#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PolygonJumpGridEntry {
        inline app::PolygonJumpGridEntry__Class** type_info = (app::PolygonJumpGridEntry__Class**)(modloader::win::memory::resolve_rva(0x04785FD8));
        inline app::PolygonJumpGridEntry__Class* get_class() {
            return il2cpp::get_class<app::PolygonJumpGridEntry__Class>(type_info, "", "PolygonJumpGridEntry");
        }
        inline app::PolygonJumpGridEntry* create() {
            return il2cpp::create_object<app::PolygonJumpGridEntry>(get_class());
        }
        inline app::PolygonJumpGridEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PolygonJumpGridEntry__Array>(get_class(), size);
        }
        inline app::PolygonJumpGridEntry__Array* create_array(const std::vector<app::PolygonJumpGridEntry*>& items) {
            return il2cpp::array_new<app::PolygonJumpGridEntry__Array>(get_class(), items);
        }
    } // namespace PolygonJumpGridEntry
} // namespace app::classes::types
