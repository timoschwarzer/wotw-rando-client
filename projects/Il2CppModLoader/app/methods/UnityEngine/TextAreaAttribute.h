#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::TextAreaAttribute {
    IL2CPP_REGISTER_METHOD(0x02C65C70, void, ctor_1, (app::TextAreaAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor_2, (app::TextAreaAttribute * this_ptr, int32_t min_lines, int32_t max_lines))
}
