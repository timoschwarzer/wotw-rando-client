#include <interception_macros.h>

namespace app::methods::Moon_ArtOptimization::SceneOptimizationResultsWriter {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::SceneOptimizationResultsWriter * this_ptr, app::Dictionary_2_System_String_Moon_ArtOptimization_SceneOptimizationResults_ * scene_results));
IL2CPP_REGISTER_METHOD(0x00CB0310, void, WriteReport, (app::SceneOptimizationResultsWriter * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CB1630, String *, PrintSceneResult, (app::SceneOptimizationResultsWriter * this_ptr, app::SceneOptimizationResults * scene_result));
}
