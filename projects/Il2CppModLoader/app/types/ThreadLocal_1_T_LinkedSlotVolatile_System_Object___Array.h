#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array {
        namespace {
            inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class* type_info_ref = nullptr;
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class>(type_info, "System.Threading", "ThreadLocal`1[T]+LinkedSlotVolatile[System.Object][]");
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array* create() {
            return il2cpp::create_object<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array>(get_class());
        }
    } // namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array
} // namespace app::classes::types
