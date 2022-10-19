#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyType {
        inline app::IVRScreenshots_GetScreenshotPropertyType__Class** type_info = (app::IVRScreenshots_GetScreenshotPropertyType__Class**)(modloader::win::memory::resolve_rva(0x04765538));
        inline app::IVRScreenshots_GetScreenshotPropertyType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyType");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyType* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyType>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyType
} // namespace app::classes::types
