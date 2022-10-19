#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformBackOutAction_AbandonChallange_d_8 {
        inline app::PerformBackOutAction_AbandonChallange_d_8__Class** type_info = (app::PerformBackOutAction_AbandonChallange_d_8__Class**)(modloader::win::memory::resolve_rva(0x0475CA68));
        inline app::PerformBackOutAction_AbandonChallange_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::PerformBackOutAction_AbandonChallange_d_8__Class>(type_info, "", "PerformBackOutAction", "<AbandonChallange>d__8");
        }
        inline app::PerformBackOutAction_AbandonChallange_d_8* create() {
            return il2cpp::create_object<app::PerformBackOutAction_AbandonChallange_d_8>(get_class());
        }
    } // namespace PerformBackOutAction_AbandonChallange_d_8
} // namespace app::classes::types
