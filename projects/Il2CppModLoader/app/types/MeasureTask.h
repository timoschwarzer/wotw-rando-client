#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeasureTask {
        inline app::MeasureTask__Class** type_info = (app::MeasureTask__Class**)(modloader::win::memory::resolve_rva(0x0472D2F8));
        inline app::MeasureTask__Class* get_class() {
            return il2cpp::get_class<app::MeasureTask__Class>(type_info, "Moon.HierarchyPerformanceTest", "MeasureTask");
        }
        inline app::MeasureTask* create() {
            return il2cpp::create_object<app::MeasureTask>(get_class());
        }
    } // namespace MeasureTask
} // namespace app::classes::types
