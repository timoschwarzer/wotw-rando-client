#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WandererStateSelector {
    IL2CPP_REGISTER_METHOD(0x008D24E0, app::WandererNPC_State__Enum, GetEnumValue, (app::WandererStateSelector * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008D2730, void, ctor, (app::WandererStateSelector * this_ptr))
}
