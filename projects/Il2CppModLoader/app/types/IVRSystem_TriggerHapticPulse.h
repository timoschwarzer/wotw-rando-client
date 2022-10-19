#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_TriggerHapticPulse {
        inline app::IVRSystem_TriggerHapticPulse__Class** type_info = (app::IVRSystem_TriggerHapticPulse__Class**)(modloader::win::memory::resolve_rva(0x04773F58));
        inline app::IVRSystem_TriggerHapticPulse__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_TriggerHapticPulse__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_TriggerHapticPulse");
        }
        inline app::IVRSystem_TriggerHapticPulse* create() {
            return il2cpp::create_object<app::IVRSystem_TriggerHapticPulse>(get_class());
        }
    } // namespace IVRSystem_TriggerHapticPulse
} // namespace app::classes::types
