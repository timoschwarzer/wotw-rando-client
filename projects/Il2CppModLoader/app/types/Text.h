#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Text {
        inline app::Text__Class** type_info = (app::Text__Class**)(modloader::win::memory::resolve_rva(0x04798E98));
        inline app::Text__Class* get_class() {
            return il2cpp::get_class<app::Text__Class>(type_info, "UnityEngine.UI", "Text");
        }
        inline app::Text* create() {
            return il2cpp::create_object<app::Text>(get_class());
        }
        inline app::Text__Array* create_array(int size) {
            return il2cpp::array_new<app::Text__Array>(get_class(), size);
        }
        inline app::Text__Array* create_array(const std::vector<app::Text*>& items) {
            return il2cpp::array_new<app::Text__Array>(get_class(), items);
        }
    } // namespace Text
} // namespace app::classes::types
