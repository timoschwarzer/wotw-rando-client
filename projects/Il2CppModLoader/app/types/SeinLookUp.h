#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLookUp {
        namespace {
            inline app::SeinLookUp__Class* type_info_ref = nullptr;
        }
        inline app::SeinLookUp__Class** type_info = &type_info_ref;
        inline app::SeinLookUp__Class* get_class() {
            return il2cpp::get_class<app::SeinLookUp__Class>(type_info, "", "SeinLookUp");
        }
        inline app::SeinLookUp* create() {
            return il2cpp::create_object<app::SeinLookUp>(get_class());
        }
    } // namespace SeinLookUp
} // namespace app::classes::types
