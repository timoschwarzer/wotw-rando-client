#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SnapTrapPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00ED35D0, void, Initialize, (app::SnapTrapPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED39B0, void, ctor, (app::SnapTrapPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, IDisableOnRecordablePreview_get_gameObject, (app::SnapTrapPlaceholder * this_ptr))
}
