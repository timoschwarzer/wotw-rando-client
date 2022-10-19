#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostProxyPuppetMaster {
        namespace {
            inline app::GhostProxyPuppetMaster__Class* type_info_ref = nullptr;
        }
        inline app::GhostProxyPuppetMaster__Class** type_info = &type_info_ref;
        inline app::GhostProxyPuppetMaster__Class* get_class() {
            return il2cpp::get_class<app::GhostProxyPuppetMaster__Class>(type_info, "", "GhostProxyPuppetMaster");
        }
        inline app::GhostProxyPuppetMaster* create() {
            return il2cpp::create_object<app::GhostProxyPuppetMaster>(get_class());
        }
    } // namespace GhostProxyPuppetMaster
} // namespace app::classes::types
