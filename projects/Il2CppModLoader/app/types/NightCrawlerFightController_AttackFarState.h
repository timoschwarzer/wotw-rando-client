#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_AttackFarState {
        inline app::NightCrawlerFightController_AttackFarState__Class** type_info = (app::NightCrawlerFightController_AttackFarState__Class**)(modloader::win::memory::resolve_rva(0x0476A6E8));
        inline app::NightCrawlerFightController_AttackFarState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_AttackFarState__Class>(type_info, "", "NightCrawlerFightController", "AttackFarState");
        }
        inline app::NightCrawlerFightController_AttackFarState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_AttackFarState>(get_class());
        }
    } // namespace NightCrawlerFightController_AttackFarState
} // namespace app::classes::types
