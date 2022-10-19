#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonISerializableContract {
        inline app::JsonISerializableContract__Class** type_info = (app::JsonISerializableContract__Class**)(modloader::win::memory::resolve_rva(0x04740880));
        inline app::JsonISerializableContract__Class* get_class() {
            return il2cpp::get_class<app::JsonISerializableContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonISerializableContract");
        }
        inline app::JsonISerializableContract* create() {
            return il2cpp::create_object<app::JsonISerializableContract>(get_class());
        }
    } // namespace JsonISerializableContract
} // namespace app::classes::types
