#include <interception_macros.h>

namespace app::methods::System_Net_Http_Headers::TryParseDelegate_1_System_DateTimeOffset_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::TryParseDelegate_1_System_DateTimeOffset_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHODINFO(0x04734DD8, TryParseDelegate_1_System_DateTimeOffset___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::TryParseDelegate_1_System_DateTimeOffset_ * this_ptr, app::String * value, app::DateTimeOffset * result));
IL2CPP_REGISTER_METHOD(0x0254DA50, IAsyncResult *, BeginInvoke, (app::TryParseDelegate_1_System_DateTimeOffset_ * this_ptr, app::String * value, app::DateTimeOffset * result, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::TryParseDelegate_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset * result, app::IAsyncResult * __result));
}
