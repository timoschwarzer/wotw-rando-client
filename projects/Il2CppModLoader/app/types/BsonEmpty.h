#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonEmpty {
        inline app::BsonEmpty__Class** type_info = (app::BsonEmpty__Class**)(modloader::win::memory::resolve_rva(0x047092F0));
        inline app::BsonEmpty__Class* get_class() {
            return il2cpp::get_class<app::BsonEmpty__Class>(type_info, "Newtonsoft.Json.Bson", "BsonEmpty");
        }
        inline app::BsonEmpty* create() {
            return il2cpp::create_object<app::BsonEmpty>(get_class());
        }
    } // namespace BsonEmpty
} // namespace app::classes::types
