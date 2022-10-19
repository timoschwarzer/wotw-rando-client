#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_sendRequestData {
        namespace {
            inline app::BrowserNative_Calltype_zfb_sendRequestData__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_sendRequestData__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_sendRequestData__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_sendRequestData__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_sendRequestData");
        }
        inline app::BrowserNative_Calltype_zfb_sendRequestData* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_sendRequestData>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_sendRequestData
} // namespace app::classes::types
