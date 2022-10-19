#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLaunch {
        namespace {
            inline app::SeinLaunch__Class* type_info_ref = nullptr;
        }
        inline app::SeinLaunch__Class** type_info = &type_info_ref;
        inline app::SeinLaunch__Class* get_class() {
            return il2cpp::get_class<app::SeinLaunch__Class>(type_info, "", "SeinLaunch");
        }
        inline app::SeinLaunch* create() {
            return il2cpp::create_object<app::SeinLaunch>(get_class());
        }
    } // namespace SeinLaunch
} // namespace app::classes::types
