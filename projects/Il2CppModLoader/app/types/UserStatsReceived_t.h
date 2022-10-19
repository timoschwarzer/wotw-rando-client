#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserStatsReceived_t {
        inline app::UserStatsReceived_t__Class** type_info = (app::UserStatsReceived_t__Class**)(modloader::win::memory::resolve_rva(0x04708C48));
        inline app::UserStatsReceived_t__Class* get_class() {
            return il2cpp::get_class<app::UserStatsReceived_t__Class>(type_info, "Steamworks", "UserStatsReceived_t");
        }
        inline app::UserStatsReceived_t* create() {
            return il2cpp::create_object<app::UserStatsReceived_t>(get_class());
        }
        inline app::UserStatsReceived_t__Boxed* box(app::UserStatsReceived_t value) {
            return il2cpp::box_value<app::UserStatsReceived_t__Boxed>(get_class(), value);
        }
    } // namespace UserStatsReceived_t
} // namespace app::classes::types
