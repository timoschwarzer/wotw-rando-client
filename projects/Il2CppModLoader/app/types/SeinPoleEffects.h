#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPoleEffects {
        inline app::SeinPoleEffects__Class** type_info = (app::SeinPoleEffects__Class**)(modloader::win::memory::resolve_rva(0x0472CE50));
        inline app::SeinPoleEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinPoleEffects__Class>(type_info, "", "SeinPoleEffects");
        }
        inline app::SeinPoleEffects* create() {
            return il2cpp::create_object<app::SeinPoleEffects>(get_class());
        }
    } // namespace SeinPoleEffects
} // namespace app::classes::types
