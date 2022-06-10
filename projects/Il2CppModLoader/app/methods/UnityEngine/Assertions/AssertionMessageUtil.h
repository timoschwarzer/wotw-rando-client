#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Assertions::AssertionMessageUtil {
    IL2CPP_REGISTER_METHOD(0x0241DB90, app::String *, GetMessage_1, (app::String * failure_message))
    IL2CPP_REGISTER_METHOD(0x0241DCE0, app::String *, GetMessage_2, (app::String * failure_message, app::String * expected))
    IL2CPP_REGISTER_METHOD(0x0241E030, app::String *, GetEqualityMessage, (app::Object * actual, app::Object * expected, bool expect_equal))
}
