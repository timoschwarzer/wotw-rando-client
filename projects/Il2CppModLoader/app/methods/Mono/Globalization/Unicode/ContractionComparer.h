#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Globalization::Unicode::ContractionComparer {
    IL2CPP_REGISTER_METHOD(0x023BA070, int32_t, Compare, (app::ContractionComparer * this_ptr, app::Contraction * c1, app::Contraction * c2))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ContractionComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023BA170, void, cctor, ())
}
