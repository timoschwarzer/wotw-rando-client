#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLocationBrainController {
        namespace {
            inline app::SpiderBossLocationBrainController__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationBrainController__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationBrainController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationBrainController__Class>(type_info, "", "SpiderBossLocationBrainController");
        }
        inline app::SpiderBossLocationBrainController* create() {
            return il2cpp::create_object<app::SpiderBossLocationBrainController>(get_class());
        }
    } // namespace SpiderBossLocationBrainController
} // namespace app::classes::types
