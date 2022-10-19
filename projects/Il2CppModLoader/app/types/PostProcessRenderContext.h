#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostProcessRenderContext {
        inline app::PostProcessRenderContext__Class** type_info = (app::PostProcessRenderContext__Class**)(modloader::win::memory::resolve_rva(0x04708F38));
        inline app::PostProcessRenderContext__Class* get_class() {
            return il2cpp::get_class<app::PostProcessRenderContext__Class>(type_info, "", "PostProcessRenderContext");
        }
        inline app::PostProcessRenderContext* create() {
            return il2cpp::create_object<app::PostProcessRenderContext>(get_class());
        }
    } // namespace PostProcessRenderContext
} // namespace app::classes::types
