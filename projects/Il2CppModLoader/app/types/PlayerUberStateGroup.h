#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateGroup {
        inline app::PlayerUberStateGroup__Class** type_info = (app::PlayerUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0475D8E0));
        inline app::PlayerUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGroup__Class>(type_info, "", "PlayerUberStateGroup");
        }
        inline app::PlayerUberStateGroup* create() {
            return il2cpp::create_object<app::PlayerUberStateGroup>(get_class());
        }
    } // namespace PlayerUberStateGroup
} // namespace app::classes::types
