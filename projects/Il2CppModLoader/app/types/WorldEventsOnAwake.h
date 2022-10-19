#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake {
        namespace {
            inline app::WorldEventsOnAwake__Class* type_info_ref = nullptr;
        }
        inline app::WorldEventsOnAwake__Class** type_info = &type_info_ref;
        inline app::WorldEventsOnAwake__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsOnAwake__Class>(type_info, "", "WorldEventsOnAwake");
        }
        inline app::WorldEventsOnAwake* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake>(get_class());
        }
    } // namespace WorldEventsOnAwake
} // namespace app::classes::types
