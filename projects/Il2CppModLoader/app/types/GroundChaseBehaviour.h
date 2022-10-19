#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundChaseBehaviour {
        namespace {
            inline app::GroundChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GroundChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundChaseBehaviour__Class>(type_info, "", "GroundChaseBehaviour");
        }
        inline app::GroundChaseBehaviour* create() {
            return il2cpp::create_object<app::GroundChaseBehaviour>(get_class());
        }
    } // namespace GroundChaseBehaviour
} // namespace app::classes::types
