#include <interception_macros.h>

namespace app::methods::System_Data::DataTableNewRowEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DataTableNewRowEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DataTableNewRowEventHandler * this_ptr, app::Object * sender, app::DataTableNewRowEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::DataTableNewRowEventHandler * this_ptr, app::Object * sender, app::DataTableNewRowEventArgs * e, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DataTableNewRowEventHandler * this_ptr, app::IAsyncResult * result));
}
