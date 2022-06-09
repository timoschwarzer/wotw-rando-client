#include <interception_macros.h>

namespace app::methods::System_Runtime_CompilerServices::FixedBufferAttribute {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, __ctor, (app::FixedBufferAttribute * this_ptr, app::Type * element_type, int32_t length));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_ElementType, (app::FixedBufferAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Length, (app::FixedBufferAttribute * this_ptr));
}
