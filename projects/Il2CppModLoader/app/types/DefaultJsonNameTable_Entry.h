#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultJsonNameTable_Entry {
        inline app::DefaultJsonNameTable_Entry__Class** type_info = (app::DefaultJsonNameTable_Entry__Class**)(modloader::win::memory::resolve_rva(0x04797B10));
        inline app::DefaultJsonNameTable_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultJsonNameTable_Entry__Class>(type_info, "Newtonsoft.Json", "DefaultJsonNameTable", "Entry");
        }
        inline app::DefaultJsonNameTable_Entry* create() {
            return il2cpp::create_object<app::DefaultJsonNameTable_Entry>(get_class());
        }
        inline app::DefaultJsonNameTable_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::DefaultJsonNameTable_Entry__Array>(get_class(), size);
        }
        inline app::DefaultJsonNameTable_Entry__Array* create_array(const std::vector<app::DefaultJsonNameTable_Entry*>& items) {
            return il2cpp::array_new<app::DefaultJsonNameTable_Entry__Array>(get_class(), items);
        }
    } // namespace DefaultJsonNameTable_Entry
} // namespace app::classes::types
