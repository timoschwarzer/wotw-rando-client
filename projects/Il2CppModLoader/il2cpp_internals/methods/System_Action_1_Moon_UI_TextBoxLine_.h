#include <interception_macros.h>

namespace app::methods::System::Action_1_Moon_UI_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_Moon_UI_TextBoxLine_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x029FC220, void, Invoke, (app::Action_1_Moon_UI_TextBoxLine_ * this_ptr, app::TextBoxLine_1 obj));
    IL2CPP_REGISTER_METHOD(0x02A021A0, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_UI_TextBoxLine_ * this_ptr, app::TextBoxLine_1 obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_UI_TextBoxLine_ * this_ptr, app::IAsyncResult * result));
}
