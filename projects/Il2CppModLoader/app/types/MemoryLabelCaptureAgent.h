#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryLabelCaptureAgent {
        namespace {
            inline app::MemoryLabelCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::MemoryLabelCaptureAgent__Class** type_info = &type_info_ref;
        inline app::MemoryLabelCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelCaptureAgent__Class>(type_info, "", "MemoryLabelCaptureAgent");
        }
        inline app::MemoryLabelCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryLabelCaptureAgent>(get_class());
        }
    } // namespace MemoryLabelCaptureAgent
} // namespace app::classes::types
