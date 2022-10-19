#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISurrogateSelector {
        inline app::ISurrogateSelector__Class** type_info = (app::ISurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0472E058));
        inline app::ISurrogateSelector__Class* get_class() {
            return il2cpp::get_class<app::ISurrogateSelector__Class>(type_info, "System.Runtime.Serialization", "ISurrogateSelector");
        }
    } // namespace ISurrogateSelector
} // namespace app::classes::types
