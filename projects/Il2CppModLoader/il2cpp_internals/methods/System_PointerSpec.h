#include <interception_macros.h>

namespace app::methods::System::PointerSpec {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::PointerSpec * this_ptr, int32_t pointer_level));
    IL2CPP_REGISTER_METHOD(0x022804B0, app::Type *, Resolve, (app::PointerSpec * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x02280500, app::StringBuilder *, Append, (app::PointerSpec * this_ptr, app::StringBuilder * sb));
    IL2CPP_REGISTER_METHOD(0x02280530, app::String *, ToString, (app::PointerSpec * this_ptr));
}
