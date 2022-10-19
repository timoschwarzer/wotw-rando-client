#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator {
        inline app::CCDistanceMapGenerator__Class** type_info = (app::CCDistanceMapGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477FD38));
        inline app::CCDistanceMapGenerator__Class* get_class() {
            return il2cpp::get_class<app::CCDistanceMapGenerator__Class>(type_info, "", "CCDistanceMapGenerator");
        }
        inline app::CCDistanceMapGenerator* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator>(get_class());
        }
    } // namespace CCDistanceMapGenerator
} // namespace app::classes::types
