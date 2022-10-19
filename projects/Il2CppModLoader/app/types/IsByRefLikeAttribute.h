#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsByRefLikeAttribute {
        namespace {
            inline app::IsByRefLikeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IsByRefLikeAttribute__Class** type_info = &type_info_ref;
        inline app::IsByRefLikeAttribute__Class* get_class() {
            return il2cpp::get_class<app::IsByRefLikeAttribute__Class>(type_info, "System.Runtime.CompilerServices", "IsByRefLikeAttribute");
        }
        inline app::IsByRefLikeAttribute* create() {
            return il2cpp::create_object<app::IsByRefLikeAttribute>(get_class());
        }
    } // namespace IsByRefLikeAttribute
} // namespace app::classes::types
