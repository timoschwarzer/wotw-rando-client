#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails__14 {
        namespace {
            inline app::_PrivateImplementationDetails__14__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails__14__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails__14__Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails__14__Class>(type_info, "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails__14* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails__14>(get_class());
        }
    } // namespace _PrivateImplementationDetails__14
} // namespace app::classes::types
