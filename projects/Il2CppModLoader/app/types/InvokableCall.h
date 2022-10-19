#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvokableCall {
        inline app::InvokableCall__Class** type_info = (app::InvokableCall__Class**)(modloader::win::memory::resolve_rva(0x0478E7A0));
        inline app::InvokableCall__Class* get_class() {
            return il2cpp::get_class<app::InvokableCall__Class>(type_info, "UnityEngine.Events", "InvokableCall");
        }
        inline app::InvokableCall* create() {
            return il2cpp::create_object<app::InvokableCall>(get_class());
        }
    } // namespace InvokableCall
} // namespace app::classes::types
