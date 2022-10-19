#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldState__Enum {
        inline app::WorldState__Enum__Class** type_info = (app::WorldState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730FB0));
        inline app::WorldState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldState__Enum__Class>(type_info, "", "WorldState");
        }
        inline app::WorldState__Enum* create() {
            return il2cpp::create_object<app::WorldState__Enum>(get_class());
        }
    } // namespace WorldState__Enum
} // namespace app::classes::types
