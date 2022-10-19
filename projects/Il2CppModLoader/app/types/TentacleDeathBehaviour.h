#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleDeathBehaviour {
        namespace {
            inline app::TentacleDeathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TentacleDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleDeathBehaviour__Class>(type_info, "", "TentacleDeathBehaviour");
        }
        inline app::TentacleDeathBehaviour* create() {
            return il2cpp::create_object<app::TentacleDeathBehaviour>(get_class());
        }
    } // namespace TentacleDeathBehaviour
} // namespace app::classes::types
