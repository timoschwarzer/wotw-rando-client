#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::XmlComplianceUtil {
    IL2CPP_REGISTER_METHOD(0x01960460, app::String *, NonCDataNormalize, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x019607D0, app::String *, CDataNormalize, (app::String * value))
}
