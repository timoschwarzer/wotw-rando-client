#include <interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02C09C00, void, Invoke, (app::Action_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight obj));
    IL2CPP_REGISTER_METHOD(0x02C0A3C0, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::IAsyncResult * result));
}
