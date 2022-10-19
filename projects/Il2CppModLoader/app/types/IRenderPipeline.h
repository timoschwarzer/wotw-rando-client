#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderPipeline {
        inline app::IRenderPipeline__Class** type_info = (app::IRenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0477A948));
        inline app::IRenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipeline__Class>(type_info, "UnityEngine.Experimental.Rendering", "IRenderPipeline");
        }
        inline app::IRenderPipeline__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderPipeline__Array>(get_class(), size);
        }
        inline app::IRenderPipeline__Array* create_array(const std::vector<app::IRenderPipeline*>& items) {
            return il2cpp::array_new<app::IRenderPipeline__Array>(get_class(), items);
        }
    } // namespace IRenderPipeline
} // namespace app::classes::types
