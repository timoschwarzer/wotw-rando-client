#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyRespawner__Array {
        namespace {
            inline app::LegacyRespawner__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyRespawner__Array__Class** type_info = &type_info_ref;
        inline app::LegacyRespawner__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyRespawner__Array__Class>(type_info, "", "LegacyRespawner[]");
        }
        inline app::LegacyRespawner__Array* create() {
            return il2cpp::create_object<app::LegacyRespawner__Array>(get_class());
        }
    } // namespace LegacyRespawner__Array
} // namespace app::classes::types
