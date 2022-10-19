#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProjectilesStickToThisPlatform {
        namespace {
            inline app::ProjectilesStickToThisPlatform__Class* type_info_ref = nullptr;
        }
        inline app::ProjectilesStickToThisPlatform__Class** type_info = &type_info_ref;
        inline app::ProjectilesStickToThisPlatform__Class* get_class() {
            return il2cpp::get_class<app::ProjectilesStickToThisPlatform__Class>(type_info, "", "ProjectilesStickToThisPlatform");
        }
        inline app::ProjectilesStickToThisPlatform* create() {
            return il2cpp::create_object<app::ProjectilesStickToThisPlatform>(get_class());
        }
    } // namespace ProjectilesStickToThisPlatform
} // namespace app::classes::types
