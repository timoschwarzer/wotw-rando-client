#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderPrewarmLoad {
        namespace {
            inline app::UberShaderPrewarmLoad__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderPrewarmLoad__Class** type_info = &type_info_ref;
        inline app::UberShaderPrewarmLoad__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmLoad__Class>(type_info, "", "UberShaderPrewarmLoad");
        }
        inline app::UberShaderPrewarmLoad* create() {
            return il2cpp::create_object<app::UberShaderPrewarmLoad>(get_class());
        }
    } // namespace UberShaderPrewarmLoad
} // namespace app::classes::types
