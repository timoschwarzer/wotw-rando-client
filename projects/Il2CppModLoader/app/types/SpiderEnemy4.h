#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderEnemy4 {
        namespace {
            inline app::SpiderEnemy4__Class* type_info_ref = nullptr;
        }
        inline app::SpiderEnemy4__Class** type_info = &type_info_ref;
        inline app::SpiderEnemy4__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy4__Class>(type_info, "", "SpiderEnemy4");
        }
        inline app::SpiderEnemy4* create() {
            return il2cpp::create_object<app::SpiderEnemy4>(get_class());
        }
    } // namespace SpiderEnemy4
} // namespace app::classes::types
