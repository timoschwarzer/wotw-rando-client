#include <interception_macros.h>

namespace app::methods::StressTestRunHelper {
    IL2CPP_REGISTER_METHOD(0x0065F340, bool, get_CanStart, ());
    IL2CPP_REGISTER_METHOD(0x0065F410, void, Start, ());
    IL2CPP_REGISTER_METHOD(0x0065F4D0, void, SetStartScenes, (app::String * scene_names));
    IL2CPP_REGISTER_METHOD(0x0065F700, void, OnPathFinished, (app::String * scene_name));
    IL2CPP_REGISTER_METHOD(0x0065F7A0, app::String *, GetNextStartScene, ());
}
