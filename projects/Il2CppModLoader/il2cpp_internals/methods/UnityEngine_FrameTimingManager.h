#include <interception_macros.h>

namespace app::methods::UnityEngine::FrameTimingManager {
IL2CPP_REGISTER_METHOD(0x025260C0, void, CaptureFrameTimings, ());
IL2CPP_REGISTER_METHOD(0x02526110, uint32_t, GetLatestTimings, (uint32_t numFrames, FrameTiming__Array * timings));
}
