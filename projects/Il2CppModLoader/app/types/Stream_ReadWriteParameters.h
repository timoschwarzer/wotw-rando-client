#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Stream_ReadWriteParameters {
        inline app::Stream_ReadWriteParameters__Class** type_info = (app::Stream_ReadWriteParameters__Class**)(modloader::win::memory::resolve_rva(0x04747290));
        inline app::Stream_ReadWriteParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_ReadWriteParameters__Class>(type_info, "System.IO", "Stream", "ReadWriteParameters");
        }
        inline app::Stream_ReadWriteParameters* create() {
            return il2cpp::create_object<app::Stream_ReadWriteParameters>(get_class());
        }
        inline app::Stream_ReadWriteParameters__Boxed* box(app::Stream_ReadWriteParameters value) {
            return il2cpp::box_value<app::Stream_ReadWriteParameters__Boxed>(get_class(), value);
        }
    } // namespace Stream_ReadWriteParameters
} // namespace app::classes::types
