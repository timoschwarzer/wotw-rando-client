#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderWrapper__Array {
        namespace {
            inline app::UberShaderWrapper__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderWrapper__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWrapper__Array__Class>(type_info, "Moon.ArtOptimization", "UberShaderWrapper[]");
        }
        inline app::UberShaderWrapper__Array* create() {
            return il2cpp::create_object<app::UberShaderWrapper__Array>(get_class());
        }
    } // namespace UberShaderWrapper__Array
} // namespace app::classes::types
