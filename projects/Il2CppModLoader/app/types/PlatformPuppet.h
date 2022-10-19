#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformPuppet {
        namespace {
            inline app::PlatformPuppet__Class* type_info_ref = nullptr;
        }
        inline app::PlatformPuppet__Class** type_info = &type_info_ref;
        inline app::PlatformPuppet__Class* get_class() {
            return il2cpp::get_class<app::PlatformPuppet__Class>(type_info, "", "PlatformPuppet");
        }
        inline app::PlatformPuppet* create() {
            return il2cpp::create_object<app::PlatformPuppet>(get_class());
        }
    } // namespace PlatformPuppet
} // namespace app::classes::types
