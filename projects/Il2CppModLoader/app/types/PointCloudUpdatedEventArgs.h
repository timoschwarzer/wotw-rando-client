#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointCloudUpdatedEventArgs {
        inline app::PointCloudUpdatedEventArgs__Class** type_info = (app::PointCloudUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047045B8));
        inline app::PointCloudUpdatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PointCloudUpdatedEventArgs__Class>(type_info, "UnityEngine.Experimental.XR", "PointCloudUpdatedEventArgs");
        }
        inline app::PointCloudUpdatedEventArgs* create() {
            return il2cpp::create_object<app::PointCloudUpdatedEventArgs>(get_class());
        }
        inline app::PointCloudUpdatedEventArgs__Boxed* box(app::PointCloudUpdatedEventArgs value) {
            return il2cpp::box_value<app::PointCloudUpdatedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PointCloudUpdatedEventArgs
} // namespace app::classes::types
