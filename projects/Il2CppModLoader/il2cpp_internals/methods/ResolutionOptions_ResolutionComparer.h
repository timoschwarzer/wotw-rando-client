#include <interception_macros.h>

namespace app::methods::ResolutionOptions_ResolutionComparer {
    IL2CPP_REGISTER_METHOD(0x009079F0, bool, Equals, (app::ResolutionOptions_ResolutionComparer * this_ptr, app::ResolutionOptions_ResolutionEntry * x, app::ResolutionOptions_ResolutionEntry * y));
    IL2CPP_REGISTER_METHOD(0x00907A30, int32_t, GetHashCode, (app::ResolutionOptions_ResolutionComparer * this_ptr, app::ResolutionOptions_ResolutionEntry * resolution));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ResolutionOptions_ResolutionComparer * this_ptr));
}
