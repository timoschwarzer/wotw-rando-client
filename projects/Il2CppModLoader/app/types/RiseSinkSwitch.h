#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RiseSinkSwitch {
        namespace {
            inline app::RiseSinkSwitch__Class* type_info_ref = nullptr;
        }
        inline app::RiseSinkSwitch__Class** type_info = &type_info_ref;
        inline app::RiseSinkSwitch__Class* get_class() {
            return il2cpp::get_class<app::RiseSinkSwitch__Class>(type_info, "", "RiseSinkSwitch");
        }
        inline app::RiseSinkSwitch* create() {
            return il2cpp::create_object<app::RiseSinkSwitch>(get_class());
        }
    } // namespace RiseSinkSwitch
} // namespace app::classes::types
