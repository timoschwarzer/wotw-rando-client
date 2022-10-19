#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GregorianCalendar {
        inline app::GregorianCalendar__Class** type_info = (app::GregorianCalendar__Class**)(modloader::win::memory::resolve_rva(0x0478F158));
        inline app::GregorianCalendar__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendar__Class>(type_info, "System.Globalization", "GregorianCalendar");
        }
        inline app::GregorianCalendar* create() {
            return il2cpp::create_object<app::GregorianCalendar>(get_class());
        }
    } // namespace GregorianCalendar
} // namespace app::classes::types
