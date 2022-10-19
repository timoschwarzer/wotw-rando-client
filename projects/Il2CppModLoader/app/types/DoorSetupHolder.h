#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoorSetupHolder {
        namespace {
            inline app::DoorSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::DoorSetupHolder__Class** type_info = &type_info_ref;
        inline app::DoorSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupHolder__Class>(type_info, "", "DoorSetupHolder");
        }
        inline app::DoorSetupHolder* create() {
            return il2cpp::create_object<app::DoorSetupHolder>(get_class());
        }
    } // namespace DoorSetupHolder
} // namespace app::classes::types
