#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBody_Point {
        inline app::VerletBody_Point__Class** type_info = (app::VerletBody_Point__Class**)(modloader::win::memory::resolve_rva(0x0474FBE8));
        inline app::VerletBody_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_Point__Class>(type_info, "Moon", "VerletBody", "Point");
        }
        inline app::VerletBody_Point* create() {
            return il2cpp::create_object<app::VerletBody_Point>(get_class());
        }
        inline app::VerletBody_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBody_Point__Array>(get_class(), size);
        }
        inline app::VerletBody_Point__Array* create_array(const std::vector<app::VerletBody_Point*>& items) {
            return il2cpp::array_new<app::VerletBody_Point__Array>(get_class(), items);
        }
    } // namespace VerletBody_Point
} // namespace app::classes::types
