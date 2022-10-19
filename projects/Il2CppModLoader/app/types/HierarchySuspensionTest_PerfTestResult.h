#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest_PerfTestResult {
        inline app::HierarchySuspensionTest_PerfTestResult__Class** type_info = (app::HierarchySuspensionTest_PerfTestResult__Class**)(modloader::win::memory::resolve_rva(0x04752428));
        inline app::HierarchySuspensionTest_PerfTestResult__Class* get_class() {
            return il2cpp::get_nested_class<app::HierarchySuspensionTest_PerfTestResult__Class>(type_info, "", "HierarchySuspensionTest", "PerfTestResult");
        }
        inline app::HierarchySuspensionTest_PerfTestResult* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest_PerfTestResult>(get_class());
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create_array(int size) {
            return il2cpp::array_new<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class(), size);
        }
        inline app::HierarchySuspensionTest_PerfTestResult__Array* create_array(const std::vector<app::HierarchySuspensionTest_PerfTestResult*>& items) {
            return il2cpp::array_new<app::HierarchySuspensionTest_PerfTestResult__Array>(get_class(), items);
        }
    } // namespace HierarchySuspensionTest_PerfTestResult
} // namespace app::classes::types
