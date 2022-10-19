#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JSONDataWriter {
        namespace {
            inline app::JSONDataWriter__Class* type_info_ref = nullptr;
        }
        inline app::JSONDataWriter__Class** type_info = &type_info_ref;
        inline app::JSONDataWriter__Class* get_class() {
            return il2cpp::get_class<app::JSONDataWriter__Class>(type_info, "Moon.Network.Web", "JSONDataWriter");
        }
        inline app::JSONDataWriter* create() {
            return il2cpp::create_object<app::JSONDataWriter>(get_class());
        }
    } // namespace JSONDataWriter
} // namespace app::classes::types
