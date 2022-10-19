#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleHead {
        namespace {
            inline app::TentacleHead__Class* type_info_ref = nullptr;
        }
        inline app::TentacleHead__Class** type_info = &type_info_ref;
        inline app::TentacleHead__Class* get_class() {
            return il2cpp::get_class<app::TentacleHead__Class>(type_info, "", "TentacleHead");
        }
        inline app::TentacleHead* create() {
            return il2cpp::create_object<app::TentacleHead>(get_class());
        }
    } // namespace TentacleHead
} // namespace app::classes::types
