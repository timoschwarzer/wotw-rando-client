#include <interception_macros.h>

namespace app::methods::System_Security_Principal::WindowsImpersonationContext {
IL2CPP_REGISTER_METHOD(0x01E1D690, void, __ctor, (app::WindowsImpersonationContext * this_ptr, app::void * token));
IL2CPP_REGISTER_METHODINFO(0x04721648, WindowsImpersonationContext__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D6C0, void, Dispose, (app::WindowsImpersonationContext * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1D6E0, void, Undo, (app::WindowsImpersonationContext * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04742D78, WindowsImpersonationContext_Undo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D710, bool, CloseToken, (app::void * token));
IL2CPP_REGISTER_METHOD(0x01E1D720, void *, DuplicateToken, (app::void * token));
IL2CPP_REGISTER_METHOD(0x01E1D730, bool, SetCurrentToken, (app::void * token));
IL2CPP_REGISTER_METHOD(0x01E1D740, bool, RevertToSelf, ());
}
