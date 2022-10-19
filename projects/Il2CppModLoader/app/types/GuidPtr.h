#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuidPtr {
        namespace {
            inline app::GuidPtr__Class* type_info_ref = nullptr;
        }
        inline app::GuidPtr__Class** type_info = &type_info_ref;
        inline app::GuidPtr__Class* get_class() {
            return il2cpp::get_class<app::GuidPtr__Class>(type_info, "System", "Guid*");
        }
        inline app::GuidPtr* create() {
            return il2cpp::create_object<app::GuidPtr>(get_class());
        }
    } // namespace GuidPtr
} // namespace app::classes::types
