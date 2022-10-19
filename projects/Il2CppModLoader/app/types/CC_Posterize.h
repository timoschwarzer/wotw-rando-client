#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_Posterize {
        namespace {
            inline app::CC_Posterize__Class* type_info_ref = nullptr;
        }
        inline app::CC_Posterize__Class** type_info = &type_info_ref;
        inline app::CC_Posterize__Class* get_class() {
            return il2cpp::get_class<app::CC_Posterize__Class>(type_info, "", "CC_Posterize");
        }
        inline app::CC_Posterize* create() {
            return il2cpp::create_object<app::CC_Posterize>(get_class());
        }
    } // namespace CC_Posterize
} // namespace app::classes::types
