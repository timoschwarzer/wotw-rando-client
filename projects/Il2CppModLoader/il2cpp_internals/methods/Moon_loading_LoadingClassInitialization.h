#include <interception_macros.h>

namespace app::methods::Moon_loading::LoadingClassInitialization {
IL2CPP_REGISTER_METHOD(0x00F2CE80, void, __ctor, (app::LoadingClassInitialization * this_ptr, bool prewarm_all_types, bool should_gc));
IL2CPP_REGISTER_METHOD(0x00F2D0E0, void, InitThread, (app::LoadingClassInitialization * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471AAB8, LoadingClassInitialization_InitThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2D840, bool, TryGetProgress, (app::int32_t * progress));
IL2CPP_REGISTER_METHOD(0x00F2D8F0, void, Run, (bool prewarm_all_types, bool should_gc));
}
