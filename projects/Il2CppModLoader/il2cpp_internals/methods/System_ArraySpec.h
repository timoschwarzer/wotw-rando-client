#include <interception_macros.h>

namespace app::methods::System::ArraySpec {
IL2CPP_REGISTER_METHOD(0x02298B90, void, __ctor, (app::ArraySpec * this_ptr, int32_t dimensions, bool bound));
IL2CPP_REGISTER_METHOD(0x02298BA0, Type *, Resolve, (app::ArraySpec * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x02298C30, StringBuilder *, Append, (app::ArraySpec * this_ptr, app::StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x02298D40, String *, ToString, (app::ArraySpec * this_ptr));
}
