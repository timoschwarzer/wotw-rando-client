#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_LaunchInternalProcess {
        inline app::IVRApplications_LaunchInternalProcess__Class** type_info = (app::IVRApplications_LaunchInternalProcess__Class**)(modloader::win::memory::resolve_rva(0x04712F50));
        inline app::IVRApplications_LaunchInternalProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_LaunchInternalProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_LaunchInternalProcess");
        }
        inline app::IVRApplications_LaunchInternalProcess* create() {
            return il2cpp::create_object<app::IVRApplications_LaunchInternalProcess>(get_class());
        }
    } // namespace IVRApplications_LaunchInternalProcess
} // namespace app::classes::types
