#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingLocomotion {
        namespace {
            inline app::SpiderlingLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingLocomotion__Class** type_info = &type_info_ref;
        inline app::SpiderlingLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingLocomotion__Class>(type_info, "", "SpiderlingLocomotion");
        }
        inline app::SpiderlingLocomotion* create() {
            return il2cpp::create_object<app::SpiderlingLocomotion>(get_class());
        }
    } // namespace SpiderlingLocomotion
} // namespace app::classes::types
