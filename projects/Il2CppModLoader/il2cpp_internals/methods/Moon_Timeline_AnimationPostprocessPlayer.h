#include <interception_macros.h>

namespace app::methods::Moon_Timeline::AnimationPostprocessPlayer {
IL2CPP_REGISTER_METHOD(0x01BAFD80, void, OnUpdateEntity, (app::AnimationPostprocessPlayer * this_ptr, float delta));
IL2CPP_REGISTER_METHOD(0x01BAFE90, void, OnStartPlayback, (app::AnimationPostprocessPlayer * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01BB00C0, void, OnStopPlayback, (app::AnimationPostprocessPlayer * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BB0100, void, __ctor, (app::AnimationPostprocessPlayer * this_ptr));
}
