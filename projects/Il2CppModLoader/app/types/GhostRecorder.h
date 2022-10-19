#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostRecorder {
        inline app::GhostRecorder__Class** type_info = (app::GhostRecorder__Class**)(modloader::win::memory::resolve_rva(0x04781760));
        inline app::GhostRecorder__Class* get_class() {
            return il2cpp::get_class<app::GhostRecorder__Class>(type_info, "", "GhostRecorder");
        }
        inline app::GhostRecorder* create() {
            return il2cpp::create_object<app::GhostRecorder>(get_class());
        }
    } // namespace GhostRecorder
} // namespace app::classes::types
