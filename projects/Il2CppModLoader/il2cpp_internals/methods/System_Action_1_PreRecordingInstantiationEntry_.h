#include <interception_macros.h>

namespace app::methods::System::Action_1_PreRecordingInstantiationEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_PreRecordingInstantiationEntry_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_PreRecordingInstantiationEntry_ * this_ptr, app::PreRecordingInstantiationEntry obj));
    IL2CPP_REGISTER_METHOD(0x02A03500, app::IAsyncResult *, BeginInvoke, (app::Action_1_PreRecordingInstantiationEntry_ * this_ptr, app::PreRecordingInstantiationEntry obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_PreRecordingInstantiationEntry_ * this_ptr, app::IAsyncResult * result));
}
