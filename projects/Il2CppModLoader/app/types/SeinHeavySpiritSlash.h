#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHeavySpiritSlash {
        namespace {
            inline app::SeinHeavySpiritSlash__Class* type_info_ref = nullptr;
        }
        inline app::SeinHeavySpiritSlash__Class** type_info = &type_info_ref;
        inline app::SeinHeavySpiritSlash__Class* get_class() {
            return il2cpp::get_class<app::SeinHeavySpiritSlash__Class>(type_info, "", "SeinHeavySpiritSlash");
        }
        inline app::SeinHeavySpiritSlash* create() {
            return il2cpp::create_object<app::SeinHeavySpiritSlash>(get_class());
        }
    } // namespace SeinHeavySpiritSlash
} // namespace app::classes::types
