#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerStateWithPose {
        inline app::IVRSystem_GetControllerStateWithPose__Class** type_info = (app::IVRSystem_GetControllerStateWithPose__Class**)(modloader::win::memory::resolve_rva(0x0473DC78));
        inline app::IVRSystem_GetControllerStateWithPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerStateWithPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerStateWithPose");
        }
        inline app::IVRSystem_GetControllerStateWithPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerStateWithPose>(get_class());
        }
    } // namespace IVRSystem_GetControllerStateWithPose
} // namespace app::classes::types
