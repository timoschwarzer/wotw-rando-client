#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CircleGameplayZone {
        namespace {
            inline app::CircleGameplayZone__Class* type_info_ref = nullptr;
        }
        inline app::CircleGameplayZone__Class** type_info = &type_info_ref;
        inline app::CircleGameplayZone__Class* get_class() {
            return il2cpp::get_class<app::CircleGameplayZone__Class>(type_info, "", "CircleGameplayZone");
        }
        inline app::CircleGameplayZone* create() {
            return il2cpp::create_object<app::CircleGameplayZone>(get_class());
        }
    } // namespace CircleGameplayZone
} // namespace app::classes::types
