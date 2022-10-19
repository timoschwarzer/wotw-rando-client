#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerBreakablePhysicalSetup {
        namespace {
            inline app::ServerBreakablePhysicalSetup__Class* type_info_ref = nullptr;
        }
        inline app::ServerBreakablePhysicalSetup__Class** type_info = &type_info_ref;
        inline app::ServerBreakablePhysicalSetup__Class* get_class() {
            return il2cpp::get_class<app::ServerBreakablePhysicalSetup__Class>(type_info, "", "ServerBreakablePhysicalSetup");
        }
        inline app::ServerBreakablePhysicalSetup* create() {
            return il2cpp::create_object<app::ServerBreakablePhysicalSetup>(get_class());
        }
    } // namespace ServerBreakablePhysicalSetup
} // namespace app::classes::types
