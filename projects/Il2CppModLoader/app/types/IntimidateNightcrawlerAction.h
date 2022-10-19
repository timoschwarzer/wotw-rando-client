#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntimidateNightcrawlerAction {
        namespace {
            inline app::IntimidateNightcrawlerAction__Class* type_info_ref = nullptr;
        }
        inline app::IntimidateNightcrawlerAction__Class** type_info = &type_info_ref;
        inline app::IntimidateNightcrawlerAction__Class* get_class() {
            return il2cpp::get_class<app::IntimidateNightcrawlerAction__Class>(type_info, "", "IntimidateNightcrawlerAction");
        }
        inline app::IntimidateNightcrawlerAction* create() {
            return il2cpp::create_object<app::IntimidateNightcrawlerAction>(get_class());
        }
    } // namespace IntimidateNightcrawlerAction
} // namespace app::classes::types
