#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortingLayerID {
        inline app::SortingLayerID__Class** type_info = (app::SortingLayerID__Class**)(modloader::win::memory::resolve_rva(0x0473A0C8));
        inline app::SortingLayerID__Class* get_class() {
            return il2cpp::get_class<app::SortingLayerID__Class>(type_info, "", "SortingLayerID");
        }
        inline app::SortingLayerID* create() {
            return il2cpp::create_object<app::SortingLayerID>(get_class());
        }
    } // namespace SortingLayerID
} // namespace app::classes::types
