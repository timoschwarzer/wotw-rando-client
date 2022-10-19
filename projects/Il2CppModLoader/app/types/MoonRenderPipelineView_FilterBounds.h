#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FilterBounds {
        inline app::MoonRenderPipelineView_FilterBounds__Class** type_info = (app::MoonRenderPipelineView_FilterBounds__Class**)(modloader::win::memory::resolve_rva(0x047983D8));
        inline app::MoonRenderPipelineView_FilterBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FilterBounds__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "FilterBounds");
        }
        inline app::MoonRenderPipelineView_FilterBounds* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_FilterBounds>(get_class());
        }
        inline app::MoonRenderPipelineView_FilterBounds__Boxed* box(app::MoonRenderPipelineView_FilterBounds value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_FilterBounds__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineView_FilterBounds
} // namespace app::classes::types
