#include <interception_macros.h>

namespace app::methods::System_ComponentModel::ProgressChangedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ProgressChangedEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::ProgressChangedEventHandler * this_ptr, app::Object * sender, app::ProgressChangedEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::ProgressChangedEventHandler * this_ptr, app::Object * sender, app::ProgressChangedEventArgs * e, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ProgressChangedEventHandler * this_ptr, app::IAsyncResult * result));
}
