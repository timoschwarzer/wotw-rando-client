#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport {
        inline app::GPUAutoProfilerReport__Class** type_info = (app::GPUAutoProfilerReport__Class**)(modloader::win::memory::resolve_rva(0x04765E30));
        inline app::GPUAutoProfilerReport__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReport__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport");
        }
        inline app::GPUAutoProfilerReport* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport>(get_class());
        }
    } // namespace GPUAutoProfilerReport
} // namespace app::classes::types
