#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldMapIconType__Enum {
        inline app::WorldMapIconType__Enum__Class** type_info = (app::WorldMapIconType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474C930));
        inline app::WorldMapIconType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldMapIconType__Enum__Class>(type_info, "", "WorldMapIconType");
        }
        inline app::WorldMapIconType__Enum* create() {
            return il2cpp::create_object<app::WorldMapIconType__Enum>(get_class());
        }
    } // namespace WorldMapIconType__Enum
} // namespace app::classes::types
