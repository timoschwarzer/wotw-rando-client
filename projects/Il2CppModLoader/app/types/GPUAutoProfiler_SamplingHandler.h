#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_SamplingHandler {
        inline app::GPUAutoProfiler_SamplingHandler__Class** type_info = (app::GPUAutoProfiler_SamplingHandler__Class**)(modloader::win::memory::resolve_rva(0x0474C398));
        inline app::GPUAutoProfiler_SamplingHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_SamplingHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "SamplingHandler");
        }
        inline app::GPUAutoProfiler_SamplingHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_SamplingHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_SamplingHandler
} // namespace app::classes::types
