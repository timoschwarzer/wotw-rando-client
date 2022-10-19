#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatClimbBehaviour {
        namespace {
            inline app::SpiderBatClimbBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatClimbBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatClimbBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatClimbBehaviour__Class>(type_info, "", "SpiderBatClimbBehaviour");
        }
        inline app::SpiderBatClimbBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatClimbBehaviour>(get_class());
        }
    } // namespace SpiderBatClimbBehaviour
} // namespace app::classes::types
