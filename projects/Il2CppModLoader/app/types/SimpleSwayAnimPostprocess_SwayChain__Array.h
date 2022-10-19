#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_SwayChain__Array {
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array__Class** type_info = (app::SimpleSwayAnimPostprocess_SwayChain__Array__Class**)(modloader::win::memory::resolve_rva(0x04765840));
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess_SwayChain__Array__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess+SwayChain[]");
        }
        inline app::SimpleSwayAnimPostprocess_SwayChain__Array* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_SwayChain__Array>(get_class());
        }
    } // namespace SimpleSwayAnimPostprocess_SwayChain__Array
} // namespace app::classes::types
