#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenshotHandle {
        inline app::ScreenshotHandle__Class** type_info = (app::ScreenshotHandle__Class**)(modloader::win::memory::resolve_rva(0x04787F58));
        inline app::ScreenshotHandle__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotHandle__Class>(type_info, "Steamworks", "ScreenshotHandle");
        }
        inline app::ScreenshotHandle* create() {
            return il2cpp::create_object<app::ScreenshotHandle>(get_class());
        }
        inline app::ScreenshotHandle__Boxed* box(app::ScreenshotHandle value) {
            return il2cpp::box_value<app::ScreenshotHandle__Boxed>(get_class(), value);
        }
    } // namespace ScreenshotHandle
} // namespace app::classes::types
