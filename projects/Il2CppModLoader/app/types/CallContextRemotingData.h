#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallContextRemotingData {
        inline app::CallContextRemotingData__Class** type_info = (app::CallContextRemotingData__Class**)(modloader::win::memory::resolve_rva(0x0472F9E0));
        inline app::CallContextRemotingData__Class* get_class() {
            return il2cpp::get_class<app::CallContextRemotingData__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
        }
        inline app::CallContextRemotingData* create() {
            return il2cpp::create_object<app::CallContextRemotingData>(get_class());
        }
    } // namespace CallContextRemotingData
} // namespace app::classes::types
