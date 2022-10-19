#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCurve {
        inline app::UberShaderCurve__Class** type_info = (app::UberShaderCurve__Class**)(modloader::win::memory::resolve_rva(0x04723990));
        inline app::UberShaderCurve__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurve__Class>(type_info, "", "UberShaderCurve");
        }
        inline app::UberShaderCurve* create() {
            return il2cpp::create_object<app::UberShaderCurve>(get_class());
        }
    } // namespace UberShaderCurve
} // namespace app::classes::types
