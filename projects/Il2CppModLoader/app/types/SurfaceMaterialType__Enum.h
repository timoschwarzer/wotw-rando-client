#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceMaterialType__Enum {
        inline app::SurfaceMaterialType__Enum__Class** type_info = (app::SurfaceMaterialType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047221D8));
        inline app::SurfaceMaterialType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialType__Enum__Class>(type_info, "", "SurfaceMaterialType");
        }
        inline app::SurfaceMaterialType__Enum* create() {
            return il2cpp::create_object<app::SurfaceMaterialType__Enum>(get_class());
        }
        inline app::SurfaceMaterialType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SurfaceMaterialType__Enum__Array>(get_class(), size);
        }
        inline app::SurfaceMaterialType__Enum__Array* create_array(const std::vector<app::SurfaceMaterialType__Enum*>& items) {
            return il2cpp::array_new<app::SurfaceMaterialType__Enum__Array>(get_class(), items);
        }
    } // namespace SurfaceMaterialType__Enum
} // namespace app::classes::types
