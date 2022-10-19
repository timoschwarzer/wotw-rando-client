#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_SetApplicationAutoLaunch {
        inline app::IVRApplications_SetApplicationAutoLaunch__Class** type_info = (app::IVRApplications_SetApplicationAutoLaunch__Class**)(modloader::win::memory::resolve_rva(0x0472F890));
        inline app::IVRApplications_SetApplicationAutoLaunch__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_SetApplicationAutoLaunch__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_SetApplicationAutoLaunch");
        }
        inline app::IVRApplications_SetApplicationAutoLaunch* create() {
            return il2cpp::create_object<app::IVRApplications_SetApplicationAutoLaunch>(get_class());
        }
    } // namespace IVRApplications_SetApplicationAutoLaunch
} // namespace app::classes::types
