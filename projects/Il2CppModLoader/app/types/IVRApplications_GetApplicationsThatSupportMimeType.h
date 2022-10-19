#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationsThatSupportMimeType {
        inline app::IVRApplications_GetApplicationsThatSupportMimeType__Class** type_info = (app::IVRApplications_GetApplicationsThatSupportMimeType__Class**)(modloader::win::memory::resolve_rva(0x04706908));
        inline app::IVRApplications_GetApplicationsThatSupportMimeType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationsThatSupportMimeType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationsThatSupportMimeType");
        }
        inline app::IVRApplications_GetApplicationsThatSupportMimeType* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationsThatSupportMimeType>(get_class());
        }
    } // namespace IVRApplications_GetApplicationsThatSupportMimeType
} // namespace app::classes::types
