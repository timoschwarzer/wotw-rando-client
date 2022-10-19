#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_changeLoading {
        namespace {
            inline app::BrowserNative_Calltype_zfb_changeLoading__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_changeLoading__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_changeLoading__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_changeLoading__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_changeLoading");
        }
        inline app::BrowserNative_Calltype_zfb_changeLoading* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_changeLoading>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_changeLoading
} // namespace app::classes::types
