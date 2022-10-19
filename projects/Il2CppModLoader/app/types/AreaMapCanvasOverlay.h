#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapCanvasOverlay {
        namespace {
            inline app::AreaMapCanvasOverlay__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapCanvasOverlay__Class** type_info = &type_info_ref;
        inline app::AreaMapCanvasOverlay__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvasOverlay__Class>(type_info, "", "AreaMapCanvasOverlay");
        }
        inline app::AreaMapCanvasOverlay* create() {
            return il2cpp::create_object<app::AreaMapCanvasOverlay>(get_class());
        }
        inline app::AreaMapCanvasOverlay__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapCanvasOverlay__Array>(get_class(), size);
        }
        inline app::AreaMapCanvasOverlay__Array* create_array(const std::vector<app::AreaMapCanvasOverlay*>& items) {
            return il2cpp::array_new<app::AreaMapCanvasOverlay__Array>(get_class(), items);
        }
    } // namespace AreaMapCanvasOverlay
} // namespace app::classes::types
