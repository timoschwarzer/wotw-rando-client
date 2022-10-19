#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProcessStartInfo {
        inline app::ProcessStartInfo__Class** type_info = (app::ProcessStartInfo__Class**)(modloader::win::memory::resolve_rva(0x04702480));
        inline app::ProcessStartInfo__Class* get_class() {
            return il2cpp::get_class<app::ProcessStartInfo__Class>(type_info, "System.Diagnostics", "ProcessStartInfo");
        }
        inline app::ProcessStartInfo* create() {
            return il2cpp::create_object<app::ProcessStartInfo>(get_class());
        }
    } // namespace ProcessStartInfo
} // namespace app::classes::types
