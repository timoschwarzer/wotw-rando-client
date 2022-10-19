#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionLightModifier {
        inline app::InteractionLightModifier__Class** type_info = (app::InteractionLightModifier__Class**)(modloader::win::memory::resolve_rva(0x04719EC0));
        inline app::InteractionLightModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionLightModifier__Class>(type_info, "", "InteractionLightModifier");
        }
        inline app::InteractionLightModifier* create() {
            return il2cpp::create_object<app::InteractionLightModifier>(get_class());
        }
    } // namespace InteractionLightModifier
} // namespace app::classes::types
