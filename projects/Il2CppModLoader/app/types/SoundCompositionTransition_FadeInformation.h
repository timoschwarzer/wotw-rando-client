#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionTransition_FadeInformation {
        inline app::SoundCompositionTransition_FadeInformation__Class** type_info = (app::SoundCompositionTransition_FadeInformation__Class**)(modloader::win::memory::resolve_rva(0x0476EE30));
        inline app::SoundCompositionTransition_FadeInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundCompositionTransition_FadeInformation__Class>(type_info, "", "SoundCompositionTransition", "FadeInformation");
        }
        inline app::SoundCompositionTransition_FadeInformation* create() {
            return il2cpp::create_object<app::SoundCompositionTransition_FadeInformation>(get_class());
        }
    } // namespace SoundCompositionTransition_FadeInformation
} // namespace app::classes::types
