#include <interception_macros.h>

namespace app::methods::Mono_Net_Security::AsyncReadRequest {
IL2CPP_REGISTER_METHOD(0x0217C520, void, __ctor, (app::AsyncReadRequest * this_ptr, app::MobileAuthenticatedStream * parent, bool sync, app::Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x0217C530, AsyncOperationStatus__Enum, Run, (app::AsyncReadRequest * this_ptr, app::AsyncOperationStatus__Enum status));
}
