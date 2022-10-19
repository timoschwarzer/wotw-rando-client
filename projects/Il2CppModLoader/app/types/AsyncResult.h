#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncResult {
        inline app::AsyncResult__Class** type_info = (app::AsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04710B68));
        inline app::AsyncResult__Class* get_class() {
            return il2cpp::get_class<app::AsyncResult__Class>(type_info, "System.Runtime.Remoting.Messaging", "AsyncResult");
        }
        inline app::AsyncResult* create() {
            return il2cpp::create_object<app::AsyncResult>(get_class());
        }
    } // namespace AsyncResult
} // namespace app::classes::types
