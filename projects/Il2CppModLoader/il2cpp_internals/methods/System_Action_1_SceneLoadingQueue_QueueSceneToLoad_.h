#include <interception_macros.h>

namespace app::methods::System::Action_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01D24D50, void, Invoke, (app::Action_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad obj));
    IL2CPP_REGISTER_METHOD(0x02A03770, app::IAsyncResult *, BeginInvoke, (app::Action_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::IAsyncResult * result));
}
