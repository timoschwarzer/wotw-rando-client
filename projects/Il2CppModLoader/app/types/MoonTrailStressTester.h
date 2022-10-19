#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrailStressTester {
        namespace {
            inline app::MoonTrailStressTester__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrailStressTester__Class** type_info = &type_info_ref;
        inline app::MoonTrailStressTester__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailStressTester__Class>(type_info, "", "MoonTrailStressTester");
        }
        inline app::MoonTrailStressTester* create() {
            return il2cpp::create_object<app::MoonTrailStressTester>(get_class());
        }
    } // namespace MoonTrailStressTester
} // namespace app::classes::types
