#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderPipelineAsset {
        inline app::IRenderPipelineAsset__Class** type_info = (app::IRenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0471C2B8));
        inline app::IRenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipelineAsset__Class>(type_info, "UnityEngine.Experimental.Rendering", "IRenderPipelineAsset");
        }
    } // namespace IRenderPipelineAsset
} // namespace app::classes::types
