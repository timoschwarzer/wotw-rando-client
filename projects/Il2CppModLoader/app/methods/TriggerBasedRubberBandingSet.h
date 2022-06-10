#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TriggerBasedRubberBandingSet {
    IL2CPP_REGISTER_METHOD(0x00B127A0, bool, IsEnabled, (app::TriggerBasedRubberBandingSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B12930, float, GetValue, (app::TriggerBasedRubberBandingSet * this_ptr, app::Vector3 origin, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TriggerBasedRubberBandingSet * this_ptr))
}
