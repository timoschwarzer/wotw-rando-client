#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Timeline::ShowGetWispTextEntity {
    IL2CPP_REGISTER_METHOD(0x00D026D0, void, OnStartPlayback, (app::ShowGetWispTextEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D02290, void, SynchronizeData, (app::ShowGetWispTextEntity * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x00D02830, void, ctor, (app::ShowGetWispTextEntity * this_ptr))
}
