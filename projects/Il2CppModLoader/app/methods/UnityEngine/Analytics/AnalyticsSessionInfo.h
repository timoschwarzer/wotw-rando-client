#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Analytics::AnalyticsSessionInfo {
    IL2CPP_REGISTER_METHOD(0x031C1830, void, CallSessionStateChanged, (app::AnalyticsSessionState__Enum session_state, int64_t session_id, int64_t session_elapsed_time, bool session_changed))
}
