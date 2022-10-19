#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleanupCaptureAgent {
        inline app::CleanupCaptureAgent__Class** type_info = (app::CleanupCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04714458));
        inline app::CleanupCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CleanupCaptureAgent__Class>(type_info, "", "CleanupCaptureAgent");
        }
        inline app::CleanupCaptureAgent* create() {
            return il2cpp::create_object<app::CleanupCaptureAgent>(get_class());
        }
    } // namespace CleanupCaptureAgent
} // namespace app::classes::types
