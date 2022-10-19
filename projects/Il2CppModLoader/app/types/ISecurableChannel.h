#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISecurableChannel {
        inline app::ISecurableChannel__Class** type_info = (app::ISecurableChannel__Class**)(modloader::win::memory::resolve_rva(0x047957B8));
        inline app::ISecurableChannel__Class* get_class() {
            return il2cpp::get_class<app::ISecurableChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "ISecurableChannel");
        }
    } // namespace ISecurableChannel
} // namespace app::classes::types
