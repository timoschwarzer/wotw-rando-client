#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaapiJsonSetDefaultListenersArgs {
        namespace {
            inline app::WaapiJsonSetDefaultListenersArgs__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonSetDefaultListenersArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonSetDefaultListenersArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonSetDefaultListenersArgs__Class>(type_info, "", "WaapiJsonSetDefaultListenersArgs");
        }
        inline app::WaapiJsonSetDefaultListenersArgs* create() {
            return il2cpp::create_object<app::WaapiJsonSetDefaultListenersArgs>(get_class());
        }
    } // namespace WaapiJsonSetDefaultListenersArgs
} // namespace app::classes::types
