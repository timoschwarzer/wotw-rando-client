#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMethodCallMessage {
        inline app::IMethodCallMessage__Class** type_info = (app::IMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04755720));
        inline app::IMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodCallMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
        }
    } // namespace IMethodCallMessage
} // namespace app::classes::types
