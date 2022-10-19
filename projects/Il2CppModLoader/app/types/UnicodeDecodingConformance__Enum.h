#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnicodeDecodingConformance__Enum {
        namespace {
            inline app::UnicodeDecodingConformance__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnicodeDecodingConformance__Enum__Class** type_info = &type_info_ref;
        inline app::UnicodeDecodingConformance__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeDecodingConformance__Enum__Class>(type_info, "System.Net.Configuration", "UnicodeDecodingConformance");
        }
        inline app::UnicodeDecodingConformance__Enum* create() {
            return il2cpp::create_object<app::UnicodeDecodingConformance__Enum>(get_class());
        }
    } // namespace UnicodeDecodingConformance__Enum
} // namespace app::classes::types
