#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl {
        inline app::XmlTextReaderImpl__Class** type_info = (app::XmlTextReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x04759D28));
        inline app::XmlTextReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl__Class>(type_info, "System.Xml", "XmlTextReaderImpl");
        }
        inline app::XmlTextReaderImpl* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl>(get_class());
        }
    } // namespace XmlTextReaderImpl
} // namespace app::classes::types
