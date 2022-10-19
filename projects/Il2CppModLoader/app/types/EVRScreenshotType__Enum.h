#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRScreenshotType__Enum {
        inline app::EVRScreenshotType__Enum__Class** type_info = (app::EVRScreenshotType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04733570));
        inline app::EVRScreenshotType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotType");
        }
        inline app::EVRScreenshotType__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotType__Enum>(get_class());
        }
        inline app::EVRScreenshotType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EVRScreenshotType__Enum__Array>(get_class(), size);
        }
        inline app::EVRScreenshotType__Enum__Array* create_array(const std::vector<app::EVRScreenshotType__Enum*>& items) {
            return il2cpp::array_new<app::EVRScreenshotType__Enum__Array>(get_class(), items);
        }
    } // namespace EVRScreenshotType__Enum
} // namespace app::classes::types
