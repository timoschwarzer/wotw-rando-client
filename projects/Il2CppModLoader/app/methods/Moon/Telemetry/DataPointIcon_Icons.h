#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Telemetry::DataPointIcon_Icons {
    IL2CPP_REGISTER_METHOD(0x00E32B90, app::Texture2D *, GetIcon, (app::DataPointType__Enum icon_type))
    IL2CPP_REGISTER_METHOD(0x00E32CE0, void, cctor, ())
}
