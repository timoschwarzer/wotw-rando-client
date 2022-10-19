#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionTransition_SoundFadeInformation__Array {
        namespace {
            inline app::SoundCompositionTransition_SoundFadeInformation__Array__Class* type_info_ref = nullptr;
        }
        inline app::SoundCompositionTransition_SoundFadeInformation__Array__Class** type_info = &type_info_ref;
        inline app::SoundCompositionTransition_SoundFadeInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransition_SoundFadeInformation__Array__Class>(type_info, "", "SoundCompositionTransition+SoundFadeInformation[]");
        }
        inline app::SoundCompositionTransition_SoundFadeInformation__Array* create() {
            return il2cpp::create_object<app::SoundCompositionTransition_SoundFadeInformation__Array>(get_class());
        }
    } // namespace SoundCompositionTransition_SoundFadeInformation__Array
} // namespace app::classes::types
