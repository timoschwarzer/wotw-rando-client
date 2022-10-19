#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionArgument__Enum {
        inline app::ExceptionArgument__Enum__Class** type_info = (app::ExceptionArgument__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749808));
        inline app::ExceptionArgument__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionArgument__Enum__Class>(type_info, "System", "ExceptionArgument");
        }
        inline app::ExceptionArgument__Enum* create() {
            return il2cpp::create_object<app::ExceptionArgument__Enum>(get_class());
        }
    } // namespace ExceptionArgument__Enum
} // namespace app::classes::types
