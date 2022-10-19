#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6 {
        inline app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class** type_info = (app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class**)(modloader::win::memory::resolve_rva(0x04795818));
        inline app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6__Class>(type_info, "System.Dynamic", "ExpandoObject+MetaExpando", "<GetDynamicMemberNames>d__6");
        }
        inline app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6* create() {
            return il2cpp::create_object<app::ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6>(get_class());
        }
    } // namespace ExpandoObject_MetaExpando_GetDynamicMemberNames_d_6
} // namespace app::classes::types
