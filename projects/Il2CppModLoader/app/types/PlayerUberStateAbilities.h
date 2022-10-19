#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities {
        inline app::PlayerUberStateAbilities__Class** type_info = (app::PlayerUberStateAbilities__Class**)(modloader::win::memory::resolve_rva(0x04718198));
        inline app::PlayerUberStateAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAbilities__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAbilities");
        }
        inline app::PlayerUberStateAbilities* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities>(get_class());
        }
    } // namespace PlayerUberStateAbilities
} // namespace app::classes::types
