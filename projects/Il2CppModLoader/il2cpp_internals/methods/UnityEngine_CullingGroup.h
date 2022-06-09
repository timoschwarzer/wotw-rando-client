#include <interception_macros.h>

namespace app::methods::UnityEngine::CullingGroup {
IL2CPP_REGISTER_METHOD(0x0242B7C0, void, Finalize, (app::CullingGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242B8E0, void, DisposeInternal, (app::CullingGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242B930, void, Dispose, (app::CullingGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x0242B9F0, void, SendEvents, (app::CullingGroup * culling_group, app::void * events_ptr, int32_t count));
IL2CPP_REGISTER_METHOD(0x0242BA60, void, FinalizerFailure, (app::CullingGroup * this_ptr));
}
