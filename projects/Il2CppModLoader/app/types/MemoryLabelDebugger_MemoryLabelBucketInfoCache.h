#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache {
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class** type_info = (app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class**)(modloader::win::memory::resolve_rva(0x04704F68));
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Class>(type_info, "UberShader.optimizations.gc", "MemoryLabelDebugger", "MemoryLabelBucketInfoCache");
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache* create() {
            return il2cpp::create_object<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache>(get_class());
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array>(get_class(), size);
        }
        inline app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* create_array(const std::vector<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache*>& items) {
            return il2cpp::array_new<app::MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array>(get_class(), items);
        }
    } // namespace MemoryLabelDebugger_MemoryLabelBucketInfoCache
} // namespace app::classes::types
