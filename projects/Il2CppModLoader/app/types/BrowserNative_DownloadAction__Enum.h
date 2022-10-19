#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_DownloadAction__Enum {
        inline app::BrowserNative_DownloadAction__Enum__Class** type_info = (app::BrowserNative_DownloadAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758A68));
        inline app::BrowserNative_DownloadAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_DownloadAction__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "DownloadAction");
        }
        inline app::BrowserNative_DownloadAction__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_DownloadAction__Enum>(get_class());
        }
    } // namespace BrowserNative_DownloadAction__Enum
} // namespace app::classes::types
