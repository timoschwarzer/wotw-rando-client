#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrawAsButtonAttribute {
        namespace {
            inline app::DrawAsButtonAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DrawAsButtonAttribute__Class** type_info = &type_info_ref;
        inline app::DrawAsButtonAttribute__Class* get_class() {
            return il2cpp::get_class<app::DrawAsButtonAttribute__Class>(type_info, "", "DrawAsButtonAttribute");
        }
        inline app::DrawAsButtonAttribute* create() {
            return il2cpp::create_object<app::DrawAsButtonAttribute>(get_class());
        }
    } // namespace DrawAsButtonAttribute
} // namespace app::classes::types
