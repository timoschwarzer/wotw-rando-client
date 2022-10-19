#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPrewarm {
        namespace {
            inline app::UberPoolPrewarm__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrewarm__Class** type_info = &type_info_ref;
        inline app::UberPoolPrewarm__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrewarm__Class>(type_info, "Moon.pooling", "UberPoolPrewarm");
        }
        inline app::UberPoolPrewarm* create() {
            return il2cpp::create_object<app::UberPoolPrewarm>(get_class());
        }
    } // namespace UberPoolPrewarm
} // namespace app::classes::types
