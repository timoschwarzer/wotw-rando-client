#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateCooldownRule__Array {
        inline app::ActivateCooldownRule__Array__Class** type_info = (app::ActivateCooldownRule__Array__Class**)(modloader::win::memory::resolve_rva(0x04749370));
        inline app::ActivateCooldownRule__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivateCooldownRule__Array__Class>(type_info, "", "ActivateCooldownRule[]");
        }
        inline app::ActivateCooldownRule__Array* create() {
            return il2cpp::create_object<app::ActivateCooldownRule__Array>(get_class());
        }
    } // namespace ActivateCooldownRule__Array
} // namespace app::classes::types
