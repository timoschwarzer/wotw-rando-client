#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageLayerMask__Enum {
        inline app::DamageLayerMask__Enum__Class** type_info = (app::DamageLayerMask__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710EF0));
        inline app::DamageLayerMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageLayerMask__Enum__Class>(type_info, "Moon", "DamageLayerMask");
        }
        inline app::DamageLayerMask__Enum* create() {
            return il2cpp::create_object<app::DamageLayerMask__Enum>(get_class());
        }
    } // namespace DamageLayerMask__Enum
} // namespace app::classes::types
