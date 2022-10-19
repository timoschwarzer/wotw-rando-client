#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricData__Array {
        inline app::MicroProfilerInspector_MetricData__Array__Class** type_info = (app::MicroProfilerInspector_MetricData__Array__Class**)(modloader::win::memory::resolve_rva(0x0477B0A8));
        inline app::MicroProfilerInspector_MetricData__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector_MetricData__Array__Class>(type_info, "", "MicroProfilerInspector+MetricData[]");
        }
        inline app::MicroProfilerInspector_MetricData__Array* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricData__Array>(get_class());
        }
    } // namespace MicroProfilerInspector_MetricData__Array
} // namespace app::classes::types
