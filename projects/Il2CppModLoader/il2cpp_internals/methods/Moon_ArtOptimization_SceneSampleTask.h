#include <interception_macros.h>

namespace app::methods::Moon_ArtOptimization::SceneSampleTask {
    IL2CPP_REGISTER_METHOD(0x00C1B200, void, __ctor, (app::SceneSampleTask * this_ptr, app::Vector3 sample_position));
    IL2CPP_REGISTER_METHOD(0x00CB1970, void, Update, (app::SceneSampleTask * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CB1B60, void, OnEnterContext, (app::SceneSampleTask * this_ptr, app::IOptimizationTask * antecedent, app::Object * context_data));
}
