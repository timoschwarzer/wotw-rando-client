#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDisposable {
        inline app::IDisposable__Class** type_info = (app::IDisposable__Class**)(modloader::win::memory::resolve_rva(0x04768480));
        inline app::IDisposable__Class* get_class() {
            return il2cpp::get_class<app::IDisposable__Class>(type_info, "System", "IDisposable");
        }
    } // namespace IDisposable
} // namespace app::classes::types
