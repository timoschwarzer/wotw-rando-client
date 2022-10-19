#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QueueMode__Enum {
        namespace {
            inline app::QueueMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::QueueMode__Enum__Class** type_info = &type_info_ref;
        inline app::QueueMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::QueueMode__Enum__Class>(type_info, "UnityEngine", "QueueMode");
        }
        inline app::QueueMode__Enum* create() {
            return il2cpp::create_object<app::QueueMode__Enum>(get_class());
        }
    } // namespace QueueMode__Enum
} // namespace app::classes::types
