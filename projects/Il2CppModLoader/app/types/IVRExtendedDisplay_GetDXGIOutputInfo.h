#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetDXGIOutputInfo {
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo__Class** type_info = (app::IVRExtendedDisplay_GetDXGIOutputInfo__Class**)(modloader::win::memory::resolve_rva(0x047208F8));
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetDXGIOutputInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetDXGIOutputInfo");
        }
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetDXGIOutputInfo>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetDXGIOutputInfo
} // namespace app::classes::types
