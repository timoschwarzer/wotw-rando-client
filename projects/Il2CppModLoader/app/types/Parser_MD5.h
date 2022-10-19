#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Parser_MD5 {
        inline app::Parser_MD5__Class** type_info = (app::Parser_MD5__Class**)(modloader::win::memory::resolve_rva(0x0473A000));
        inline app::Parser_MD5__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_MD5__Class>(type_info, "System.Net.Http.Headers", "Parser", "MD5");
        }
        inline app::Parser_MD5* create() {
            return il2cpp::create_object<app::Parser_MD5>(get_class());
        }
    } // namespace Parser_MD5
} // namespace app::classes::types
