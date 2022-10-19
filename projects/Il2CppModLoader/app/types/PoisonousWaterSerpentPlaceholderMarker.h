#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoisonousWaterSerpentPlaceholderMarker {
        namespace {
            inline app::PoisonousWaterSerpentPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::PoisonousWaterSerpentPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterSerpentPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterSerpentPlaceholderMarker__Class>(type_info, "", "PoisonousWaterSerpentPlaceholderMarker");
        }
        inline app::PoisonousWaterSerpentPlaceholderMarker* create() {
            return il2cpp::create_object<app::PoisonousWaterSerpentPlaceholderMarker>(get_class());
        }
    } // namespace PoisonousWaterSerpentPlaceholderMarker
} // namespace app::classes::types
