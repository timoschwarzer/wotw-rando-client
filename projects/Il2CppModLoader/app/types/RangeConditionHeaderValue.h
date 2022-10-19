#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RangeConditionHeaderValue {
        inline app::RangeConditionHeaderValue__Class** type_info = (app::RangeConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04737220));
        inline app::RangeConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeConditionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeConditionHeaderValue");
        }
        inline app::RangeConditionHeaderValue* create() {
            return il2cpp::create_object<app::RangeConditionHeaderValue>(get_class());
        }
    } // namespace RangeConditionHeaderValue
} // namespace app::classes::types
