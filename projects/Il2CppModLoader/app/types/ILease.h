#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILease {
        inline app::ILease__Class** type_info = (app::ILease__Class**)(modloader::win::memory::resolve_rva(0x0470D670));
        inline app::ILease__Class* get_class() {
            return il2cpp::get_class<app::ILease__Class>(type_info, "System.Runtime.Remoting.Lifetime", "ILease");
        }
    } // namespace ILease
} // namespace app::classes::types
