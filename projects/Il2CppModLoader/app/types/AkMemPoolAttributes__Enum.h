#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMemPoolAttributes__Enum {
        namespace {
            inline app::AkMemPoolAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkMemPoolAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::AkMemPoolAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMemPoolAttributes__Enum__Class>(type_info, "", "AkMemPoolAttributes");
        }
        inline app::AkMemPoolAttributes__Enum* create() {
            return il2cpp::create_object<app::AkMemPoolAttributes__Enum>(get_class());
        }
    } // namespace AkMemPoolAttributes__Enum
} // namespace app::classes::types
