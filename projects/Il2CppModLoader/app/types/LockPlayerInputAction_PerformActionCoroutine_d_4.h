#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LockPlayerInputAction_PerformActionCoroutine_d_4 {
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class** type_info = (app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class**)(modloader::win::memory::resolve_rva(0x04782588));
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class>(type_info, "", "LockPlayerInputAction", "<PerformActionCoroutine>d__4");
        }
        inline app::LockPlayerInputAction_PerformActionCoroutine_d_4* create() {
            return il2cpp::create_object<app::LockPlayerInputAction_PerformActionCoroutine_d_4>(get_class());
        }
    } // namespace LockPlayerInputAction_PerformActionCoroutine_d_4
} // namespace app::classes::types
