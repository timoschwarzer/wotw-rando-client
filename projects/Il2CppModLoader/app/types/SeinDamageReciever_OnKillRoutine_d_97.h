#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDamageReciever_OnKillRoutine_d_97 {
        inline app::SeinDamageReciever_OnKillRoutine_d_97__Class** type_info = (app::SeinDamageReciever_OnKillRoutine_d_97__Class**)(modloader::win::memory::resolve_rva(0x0474AA38));
        inline app::SeinDamageReciever_OnKillRoutine_d_97__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_OnKillRoutine_d_97__Class>(type_info, "", "SeinDamageReciever", "<OnKillRoutine>d__97");
        }
        inline app::SeinDamageReciever_OnKillRoutine_d_97* create() {
            return il2cpp::create_object<app::SeinDamageReciever_OnKillRoutine_d_97>(get_class());
        }
    } // namespace SeinDamageReciever_OnKillRoutine_d_97
} // namespace app::classes::types
