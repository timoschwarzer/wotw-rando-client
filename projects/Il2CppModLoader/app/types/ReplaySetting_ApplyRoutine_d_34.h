#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReplaySetting_ApplyRoutine_d_34 {
        inline app::ReplaySetting_ApplyRoutine_d_34__Class** type_info = (app::ReplaySetting_ApplyRoutine_d_34__Class**)(modloader::win::memory::resolve_rva(0x0474D9B0));
        inline app::ReplaySetting_ApplyRoutine_d_34__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplaySetting_ApplyRoutine_d_34__Class>(type_info, "", "ReplaySetting", "<ApplyRoutine>d__34");
        }
        inline app::ReplaySetting_ApplyRoutine_d_34* create() {
            return il2cpp::create_object<app::ReplaySetting_ApplyRoutine_d_34>(get_class());
        }
    } // namespace ReplaySetting_ApplyRoutine_d_34
} // namespace app::classes::types
