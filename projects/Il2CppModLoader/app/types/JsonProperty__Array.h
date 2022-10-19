#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonProperty__Array {
        namespace {
            inline app::JsonProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::JsonProperty__Array__Class** type_info = &type_info_ref;
        inline app::JsonProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonProperty__Array__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonProperty[]");
        }
        inline app::JsonProperty__Array* create() {
            return il2cpp::create_object<app::JsonProperty__Array>(get_class());
        }
    } // namespace JsonProperty__Array
} // namespace app::classes::types
