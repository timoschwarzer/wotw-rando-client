#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents_c {
        inline app::SeinEvents_KuAbilityEvents_c__Class** type_info = (app::SeinEvents_KuAbilityEvents_c__Class**)(modloader::win::memory::resolve_rva(0x0473B568));
        inline app::SeinEvents_KuAbilityEvents_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents_c__Class>(type_info, "Game", "SeinEvents+KuAbilityEvents", "<>c");
        }
        inline app::SeinEvents_KuAbilityEvents_c* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents_c>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents_c
} // namespace app::classes::types
