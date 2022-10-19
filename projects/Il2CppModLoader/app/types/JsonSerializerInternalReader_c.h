#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_c {
        inline app::JsonSerializerInternalReader_c__Class** type_info = (app::JsonSerializerInternalReader_c__Class**)(modloader::win::memory::resolve_rva(0x04783768));
        inline app::JsonSerializerInternalReader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_c__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "<>c");
        }
        inline app::JsonSerializerInternalReader_c* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_c>(get_class());
        }
    } // namespace JsonSerializerInternalReader_c
} // namespace app::classes::types
