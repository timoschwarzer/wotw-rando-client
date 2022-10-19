#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossAppDomainData {
        inline app::CrossAppDomainData__Class** type_info = (app::CrossAppDomainData__Class**)(modloader::win::memory::resolve_rva(0x0476A510));
        inline app::CrossAppDomainData__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainData__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
        }
        inline app::CrossAppDomainData* create() {
            return il2cpp::create_object<app::CrossAppDomainData>(get_class());
        }
    } // namespace CrossAppDomainData
} // namespace app::classes::types
