#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_BleachBypass {
        inline app::ShaderID_CC_BleachBypass__Class** type_info = (app::ShaderID_CC_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x0473C378));
        inline app::ShaderID_CC_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_BleachBypass__Class>(type_info, "", "ShaderID_CC_BleachBypass");
        }
        inline app::ShaderID_CC_BleachBypass* create() {
            return il2cpp::create_object<app::ShaderID_CC_BleachBypass>(get_class());
        }
    } // namespace ShaderID_CC_BleachBypass
} // namespace app::classes::types
