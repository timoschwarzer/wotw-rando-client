#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformRotator_SwitchRotation_d_14 {
        inline app::PlatformRotator_SwitchRotation_d_14__Class** type_info = (app::PlatformRotator_SwitchRotation_d_14__Class**)(modloader::win::memory::resolve_rva(0x04709028));
        inline app::PlatformRotator_SwitchRotation_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformRotator_SwitchRotation_d_14__Class>(type_info, "RootMotion.Demos", "PlatformRotator", "<SwitchRotation>d__14");
        }
        inline app::PlatformRotator_SwitchRotation_d_14* create() {
            return il2cpp::create_object<app::PlatformRotator_SwitchRotation_d_14>(get_class());
        }
    } // namespace PlatformRotator_SwitchRotation_d_14
} // namespace app::classes::types
