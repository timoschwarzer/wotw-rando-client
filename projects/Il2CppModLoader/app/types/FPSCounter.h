#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSCounter {
        namespace {
            inline app::FPSCounter__Class* type_info_ref = nullptr;
        }
        inline app::FPSCounter__Class** type_info = &type_info_ref;
        inline app::FPSCounter__Class* get_class() {
            return il2cpp::get_class<app::FPSCounter__Class>(type_info, "", "FPSCounter");
        }
        inline app::FPSCounter* create() {
            return il2cpp::create_object<app::FPSCounter>(get_class());
        }
    } // namespace FPSCounter
} // namespace app::classes::types
