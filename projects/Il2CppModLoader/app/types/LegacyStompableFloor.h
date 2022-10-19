#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyStompableFloor {
        namespace {
            inline app::LegacyStompableFloor__Class* type_info_ref = nullptr;
        }
        inline app::LegacyStompableFloor__Class** type_info = &type_info_ref;
        inline app::LegacyStompableFloor__Class* get_class() {
            return il2cpp::get_class<app::LegacyStompableFloor__Class>(type_info, "", "LegacyStompableFloor");
        }
        inline app::LegacyStompableFloor* create() {
            return il2cpp::create_object<app::LegacyStompableFloor>(get_class());
        }
    } // namespace LegacyStompableFloor
} // namespace app::classes::types
