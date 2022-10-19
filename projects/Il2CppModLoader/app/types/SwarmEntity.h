#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmEntity {
        namespace {
            inline app::SwarmEntity__Class* type_info_ref = nullptr;
        }
        inline app::SwarmEntity__Class** type_info = &type_info_ref;
        inline app::SwarmEntity__Class* get_class() {
            return il2cpp::get_class<app::SwarmEntity__Class>(type_info, "", "SwarmEntity");
        }
        inline app::SwarmEntity* create() {
            return il2cpp::create_object<app::SwarmEntity>(get_class());
        }
    } // namespace SwarmEntity
} // namespace app::classes::types
