#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MediaTypeWithQualityHeaderValue {
        inline app::MediaTypeWithQualityHeaderValue__Class** type_info = (app::MediaTypeWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04707658));
        inline app::MediaTypeWithQualityHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::MediaTypeWithQualityHeaderValue__Class>(type_info, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
        }
        inline app::MediaTypeWithQualityHeaderValue* create() {
            return il2cpp::create_object<app::MediaTypeWithQualityHeaderValue>(get_class());
        }
        inline app::MediaTypeWithQualityHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::MediaTypeWithQualityHeaderValue__Array>(get_class(), size);
        }
        inline app::MediaTypeWithQualityHeaderValue__Array* create_array(const std::vector<app::MediaTypeWithQualityHeaderValue*>& items) {
            return il2cpp::array_new<app::MediaTypeWithQualityHeaderValue__Array>(get_class(), items);
        }
    } // namespace MediaTypeWithQualityHeaderValue
} // namespace app::classes::types
