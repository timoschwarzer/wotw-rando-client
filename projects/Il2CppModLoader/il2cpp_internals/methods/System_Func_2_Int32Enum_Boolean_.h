#include <interception_macros.h>

namespace app::methods::System::Func_2_Int32Enum_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Func_2_Int32Enum_Boolean_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, (app::Func_2_Int32Enum_Boolean_ * this_ptr, app::Int32Enum__Enum arg));
    IL2CPP_REGISTER_METHOD(0x02F9F030, app::IAsyncResult *, BeginInvoke, (app::Func_2_Int32Enum_Boolean_ * this_ptr, app::Int32Enum__Enum arg, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_Int32Enum_Boolean_ * this_ptr, app::IAsyncResult * result));
}
