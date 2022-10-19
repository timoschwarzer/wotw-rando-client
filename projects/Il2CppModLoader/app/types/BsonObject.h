#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BsonObject {
        inline app::BsonObject__Class** type_info = (app::BsonObject__Class**)(modloader::win::memory::resolve_rva(0x04749758));
        inline app::BsonObject__Class* get_class() {
            return il2cpp::get_class<app::BsonObject__Class>(type_info, "Newtonsoft.Json.Bson", "BsonObject");
        }
        inline app::BsonObject* create() {
            return il2cpp::create_object<app::BsonObject>(get_class());
        }
    } // namespace BsonObject
} // namespace app::classes::types
