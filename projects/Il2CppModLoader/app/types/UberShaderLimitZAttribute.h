#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderLimitZAttribute {
        namespace {
            inline app::UberShaderLimitZAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderLimitZAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderLimitZAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderLimitZAttribute__Class>(type_info, "", "UberShaderLimitZAttribute");
        }
        inline app::UberShaderLimitZAttribute* create() {
            return il2cpp::create_object<app::UberShaderLimitZAttribute>(get_class());
        }
    } // namespace UberShaderLimitZAttribute
} // namespace app::classes::types
