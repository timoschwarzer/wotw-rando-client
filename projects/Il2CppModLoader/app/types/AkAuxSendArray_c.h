#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAuxSendArray_c {
        inline app::AkAuxSendArray_c__Class** type_info = (app::AkAuxSendArray_c__Class**)(modloader::win::memory::resolve_rva(0x0475B5D8));
        inline app::AkAuxSendArray_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAuxSendArray_c__Class>(type_info, "", "AkAuxSendArray", "<>c");
        }
        inline app::AkAuxSendArray_c* create() {
            return il2cpp::create_object<app::AkAuxSendArray_c>(get_class());
        }
    } // namespace AkAuxSendArray_c
} // namespace app::classes::types
